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

#include <tencentcloud/ioa/v20220601/model/CreateBusinessResourceData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

CreateBusinessResourceData::CreateBusinessResourceData() :
    m_serviceIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateBusinessResourceData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateBusinessResourceData.ServiceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = value["ServiceId"].GetInt64();
        m_serviceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateBusinessResourceData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceId, allocator);
    }

}


int64_t CreateBusinessResourceData::GetServiceId() const
{
    return m_serviceId;
}

void CreateBusinessResourceData::SetServiceId(const int64_t& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool CreateBusinessResourceData::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

