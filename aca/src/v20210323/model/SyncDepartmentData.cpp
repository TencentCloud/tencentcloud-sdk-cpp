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

#include <tencentcloud/aca/v20210323/model/SyncDepartmentData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

SyncDepartmentData::SyncDepartmentData() :
    m_cmdHasBeenSet(false),
    m_listHasBeenSet(false)
{
}

CoreInternalOutcome SyncDepartmentData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cmd") && !value["Cmd"].IsNull())
    {
        if (!value["Cmd"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SyncDepartmentData.Cmd` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cmd = value["Cmd"].GetInt64();
        m_cmdHasBeenSet = true;
    }

    if (value.HasMember("List") && !value["List"].IsNull())
    {
        if (!value["List"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SyncDepartmentData.List` is not array type"));

        const rapidjson::Value &tmpValue = value["List"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Department item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_list.push_back(item);
        }
        m_listHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SyncDepartmentData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cmd, allocator);
    }

    if (m_listHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "List";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_list.begin(); itr != m_list.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t SyncDepartmentData::GetCmd() const
{
    return m_cmd;
}

void SyncDepartmentData::SetCmd(const int64_t& _cmd)
{
    m_cmd = _cmd;
    m_cmdHasBeenSet = true;
}

bool SyncDepartmentData::CmdHasBeenSet() const
{
    return m_cmdHasBeenSet;
}

vector<Department> SyncDepartmentData::GetList() const
{
    return m_list;
}

void SyncDepartmentData::SetList(const vector<Department>& _list)
{
    m_list = _list;
    m_listHasBeenSet = true;
}

bool SyncDepartmentData::ListHasBeenSet() const
{
    return m_listHasBeenSet;
}

