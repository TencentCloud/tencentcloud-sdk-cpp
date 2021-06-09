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

#include <tencentcloud/mna/v20210119/model/SrcAddressInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

SrcAddressInfo::SrcAddressInfo() :
    m_srcIpv4HasBeenSet(false),
    m_srcPublicIpv4HasBeenSet(false),
    m_srcIpv6HasBeenSet(false)
{
}

CoreInternalOutcome SrcAddressInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SrcIpv4") && !value["SrcIpv4"].IsNull())
    {
        if (!value["SrcIpv4"].IsString())
        {
            return CoreInternalOutcome(Error("response `SrcAddressInfo.SrcIpv4` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIpv4 = string(value["SrcIpv4"].GetString());
        m_srcIpv4HasBeenSet = true;
    }

    if (value.HasMember("SrcPublicIpv4") && !value["SrcPublicIpv4"].IsNull())
    {
        if (!value["SrcPublicIpv4"].IsString())
        {
            return CoreInternalOutcome(Error("response `SrcAddressInfo.SrcPublicIpv4` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcPublicIpv4 = string(value["SrcPublicIpv4"].GetString());
        m_srcPublicIpv4HasBeenSet = true;
    }

    if (value.HasMember("SrcIpv6") && !value["SrcIpv6"].IsNull())
    {
        if (!value["SrcIpv6"].IsString())
        {
            return CoreInternalOutcome(Error("response `SrcAddressInfo.SrcIpv6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIpv6 = string(value["SrcIpv6"].GetString());
        m_srcIpv6HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SrcAddressInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_srcIpv4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIpv4";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIpv4.c_str(), allocator).Move(), allocator);
    }

    if (m_srcPublicIpv4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcPublicIpv4";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcPublicIpv4.c_str(), allocator).Move(), allocator);
    }

    if (m_srcIpv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIpv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIpv6.c_str(), allocator).Move(), allocator);
    }

}


string SrcAddressInfo::GetSrcIpv4() const
{
    return m_srcIpv4;
}

void SrcAddressInfo::SetSrcIpv4(const string& _srcIpv4)
{
    m_srcIpv4 = _srcIpv4;
    m_srcIpv4HasBeenSet = true;
}

bool SrcAddressInfo::SrcIpv4HasBeenSet() const
{
    return m_srcIpv4HasBeenSet;
}

string SrcAddressInfo::GetSrcPublicIpv4() const
{
    return m_srcPublicIpv4;
}

void SrcAddressInfo::SetSrcPublicIpv4(const string& _srcPublicIpv4)
{
    m_srcPublicIpv4 = _srcPublicIpv4;
    m_srcPublicIpv4HasBeenSet = true;
}

bool SrcAddressInfo::SrcPublicIpv4HasBeenSet() const
{
    return m_srcPublicIpv4HasBeenSet;
}

string SrcAddressInfo::GetSrcIpv6() const
{
    return m_srcIpv6;
}

void SrcAddressInfo::SetSrcIpv6(const string& _srcIpv6)
{
    m_srcIpv6 = _srcIpv6;
    m_srcIpv6HasBeenSet = true;
}

bool SrcAddressInfo::SrcIpv6HasBeenSet() const
{
    return m_srcIpv6HasBeenSet;
}

