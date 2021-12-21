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

#include <tencentcloud/antiddos/v20200309/model/IpSegment.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

IpSegment::IpSegment() :
    m_ipHasBeenSet(false),
    m_maskHasBeenSet(false)
{
}

CoreInternalOutcome IpSegment::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpSegment.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Mask") && !value["Mask"].IsNull())
    {
        if (!value["Mask"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpSegment.Mask` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mask = value["Mask"].GetUint64();
        m_maskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpSegment::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_maskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mask, allocator);
    }

}


string IpSegment::GetIp() const
{
    return m_ip;
}

void IpSegment::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool IpSegment::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

uint64_t IpSegment::GetMask() const
{
    return m_mask;
}

void IpSegment::SetMask(const uint64_t& _mask)
{
    m_mask = _mask;
    m_maskHasBeenSet = true;
}

bool IpSegment::MaskHasBeenSet() const
{
    return m_maskHasBeenSet;
}

