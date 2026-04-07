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

#include <tencentcloud/tke/v20180525/model/ExtenderClientConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ExtenderClientConfig::ExtenderClientConfig() :
    m_serviceHasBeenSet(false)
{
}

CoreInternalOutcome ExtenderClientConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExtenderClientConfig.Service` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_service.Deserialize(value["Service"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtenderClientConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_service.ToJsonObject(value[key.c_str()], allocator);
    }

}


ServiceReference ExtenderClientConfig::GetService() const
{
    return m_service;
}

void ExtenderClientConfig::SetService(const ServiceReference& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool ExtenderClientConfig::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

