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

#include <tencentcloud/tcb/v20180608/model/CloudAppFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudAppFilter::CloudAppFilter() :
    m_serviceNameListHasBeenSet(false)
{
}

CoreInternalOutcome CloudAppFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceNameList") && !value["ServiceNameList"].IsNull())
    {
        if (!value["ServiceNameList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudAppFilter.ServiceNameList` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceNameList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_serviceNameList.push_back((*itr).GetString());
        }
        m_serviceNameListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudAppFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceNameList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_serviceNameList.begin(); itr != m_serviceNameList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> CloudAppFilter::GetServiceNameList() const
{
    return m_serviceNameList;
}

void CloudAppFilter::SetServiceNameList(const vector<string>& _serviceNameList)
{
    m_serviceNameList = _serviceNameList;
    m_serviceNameListHasBeenSet = true;
}

bool CloudAppFilter::ServiceNameListHasBeenSet() const
{
    return m_serviceNameListHasBeenSet;
}

