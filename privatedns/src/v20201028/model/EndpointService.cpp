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

#include <tencentcloud/privatedns/v20201028/model/EndpointService.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

EndpointService::EndpointService() :
    m_subnetLessIpHasBeenSet(false)
{
}

CoreInternalOutcome EndpointService::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubnetLessIp") && !value["SubnetLessIp"].IsNull())
    {
        if (!value["SubnetLessIp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointService.SubnetLessIp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subnetLessIp = value["SubnetLessIp"].GetUint64();
        m_subnetLessIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EndpointService::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subnetLessIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetLessIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subnetLessIp, allocator);
    }

}


uint64_t EndpointService::GetSubnetLessIp() const
{
    return m_subnetLessIp;
}

void EndpointService::SetSubnetLessIp(const uint64_t& _subnetLessIp)
{
    m_subnetLessIp = _subnetLessIp;
    m_subnetLessIpHasBeenSet = true;
}

bool EndpointService::SubnetLessIpHasBeenSet() const
{
    return m_subnetLessIpHasBeenSet;
}

