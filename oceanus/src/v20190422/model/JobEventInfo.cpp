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

#include <tencentcloud/oceanus/v20190422/model/JobEventInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

JobEventInfo::JobEventInfo() :
    m_errorEventTotalHasBeenSet(false)
{
}

CoreInternalOutcome JobEventInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ErrorEventTotal") && !value["ErrorEventTotal"].IsNull())
    {
        if (!value["ErrorEventTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobEventInfo.ErrorEventTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorEventTotal = value["ErrorEventTotal"].GetInt64();
        m_errorEventTotalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobEventInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_errorEventTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorEventTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorEventTotal, allocator);
    }

}


int64_t JobEventInfo::GetErrorEventTotal() const
{
    return m_errorEventTotal;
}

void JobEventInfo::SetErrorEventTotal(const int64_t& _errorEventTotal)
{
    m_errorEventTotal = _errorEventTotal;
    m_errorEventTotalHasBeenSet = true;
}

bool JobEventInfo::ErrorEventTotalHasBeenSet() const
{
    return m_errorEventTotalHasBeenSet;
}

