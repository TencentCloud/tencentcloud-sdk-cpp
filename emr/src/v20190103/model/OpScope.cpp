/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/emr/v20190103/model/OpScope.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

OpScope::OpScope() :
    m_serviceInfoListHasBeenSet(false)
{
}

CoreInternalOutcome OpScope::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceInfoList") && !value["ServiceInfoList"].IsNull())
    {
        if (!value["ServiceInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OpScope.ServiceInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceBasicRestartInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceInfoList.push_back(item);
        }
        m_serviceInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpScope::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceInfoList.begin(); itr != m_serviceInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<ServiceBasicRestartInfo> OpScope::GetServiceInfoList() const
{
    return m_serviceInfoList;
}

void OpScope::SetServiceInfoList(const vector<ServiceBasicRestartInfo>& _serviceInfoList)
{
    m_serviceInfoList = _serviceInfoList;
    m_serviceInfoListHasBeenSet = true;
}

bool OpScope::ServiceInfoListHasBeenSet() const
{
    return m_serviceInfoListHasBeenSet;
}

