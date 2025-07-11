/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/weilingwith/v20230427/model/DescribeCityWorkspaceListRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DescribeCityWorkspaceListRes::DescribeCityWorkspaceListRes() :
    m_workspaceSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCityWorkspaceListRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkspaceSet") && !value["WorkspaceSet"].IsNull())
    {
        if (!value["WorkspaceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeCityWorkspaceListRes.WorkspaceSet` is not array type"));

        const rapidjson::Value &tmpValue = value["WorkspaceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WorkspaceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_workspaceSet.push_back(item);
        }
        m_workspaceSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeCityWorkspaceListRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workspaceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_workspaceSet.begin(); itr != m_workspaceSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<WorkspaceInfo> DescribeCityWorkspaceListRes::GetWorkspaceSet() const
{
    return m_workspaceSet;
}

void DescribeCityWorkspaceListRes::SetWorkspaceSet(const vector<WorkspaceInfo>& _workspaceSet)
{
    m_workspaceSet = _workspaceSet;
    m_workspaceSetHasBeenSet = true;
}

bool DescribeCityWorkspaceListRes::WorkspaceSetHasBeenSet() const
{
    return m_workspaceSetHasBeenSet;
}

