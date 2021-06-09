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

#include <tencentcloud/aa/v20200224/model/SponsorInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aa::V20200224::Model;
using namespace std;

SponsorInfo::SponsorInfo() :
    m_sponsorOpenIdHasBeenSet(false),
    m_sponsorDeviceIdHasBeenSet(false),
    m_sponsorPhoneHasBeenSet(false),
    m_sponsorIpHasBeenSet(false),
    m_campaignUrlHasBeenSet(false)
{
}

CoreInternalOutcome SponsorInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SponsorOpenId") && !value["SponsorOpenId"].IsNull())
    {
        if (!value["SponsorOpenId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SponsorInfo.SponsorOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sponsorOpenId = string(value["SponsorOpenId"].GetString());
        m_sponsorOpenIdHasBeenSet = true;
    }

    if (value.HasMember("SponsorDeviceId") && !value["SponsorDeviceId"].IsNull())
    {
        if (!value["SponsorDeviceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SponsorInfo.SponsorDeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sponsorDeviceId = string(value["SponsorDeviceId"].GetString());
        m_sponsorDeviceIdHasBeenSet = true;
    }

    if (value.HasMember("SponsorPhone") && !value["SponsorPhone"].IsNull())
    {
        if (!value["SponsorPhone"].IsString())
        {
            return CoreInternalOutcome(Error("response `SponsorInfo.SponsorPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sponsorPhone = string(value["SponsorPhone"].GetString());
        m_sponsorPhoneHasBeenSet = true;
    }

    if (value.HasMember("SponsorIp") && !value["SponsorIp"].IsNull())
    {
        if (!value["SponsorIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `SponsorInfo.SponsorIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sponsorIp = string(value["SponsorIp"].GetString());
        m_sponsorIpHasBeenSet = true;
    }

    if (value.HasMember("CampaignUrl") && !value["CampaignUrl"].IsNull())
    {
        if (!value["CampaignUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `SponsorInfo.CampaignUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_campaignUrl = string(value["CampaignUrl"].GetString());
        m_campaignUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SponsorInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sponsorOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SponsorOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sponsorOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_sponsorDeviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SponsorDeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sponsorDeviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sponsorPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SponsorPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sponsorPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_sponsorIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SponsorIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sponsorIp.c_str(), allocator).Move(), allocator);
    }

    if (m_campaignUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CampaignUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_campaignUrl.c_str(), allocator).Move(), allocator);
    }

}


string SponsorInfo::GetSponsorOpenId() const
{
    return m_sponsorOpenId;
}

void SponsorInfo::SetSponsorOpenId(const string& _sponsorOpenId)
{
    m_sponsorOpenId = _sponsorOpenId;
    m_sponsorOpenIdHasBeenSet = true;
}

bool SponsorInfo::SponsorOpenIdHasBeenSet() const
{
    return m_sponsorOpenIdHasBeenSet;
}

string SponsorInfo::GetSponsorDeviceId() const
{
    return m_sponsorDeviceId;
}

void SponsorInfo::SetSponsorDeviceId(const string& _sponsorDeviceId)
{
    m_sponsorDeviceId = _sponsorDeviceId;
    m_sponsorDeviceIdHasBeenSet = true;
}

bool SponsorInfo::SponsorDeviceIdHasBeenSet() const
{
    return m_sponsorDeviceIdHasBeenSet;
}

string SponsorInfo::GetSponsorPhone() const
{
    return m_sponsorPhone;
}

void SponsorInfo::SetSponsorPhone(const string& _sponsorPhone)
{
    m_sponsorPhone = _sponsorPhone;
    m_sponsorPhoneHasBeenSet = true;
}

bool SponsorInfo::SponsorPhoneHasBeenSet() const
{
    return m_sponsorPhoneHasBeenSet;
}

string SponsorInfo::GetSponsorIp() const
{
    return m_sponsorIp;
}

void SponsorInfo::SetSponsorIp(const string& _sponsorIp)
{
    m_sponsorIp = _sponsorIp;
    m_sponsorIpHasBeenSet = true;
}

bool SponsorInfo::SponsorIpHasBeenSet() const
{
    return m_sponsorIpHasBeenSet;
}

string SponsorInfo::GetCampaignUrl() const
{
    return m_campaignUrl;
}

void SponsorInfo::SetCampaignUrl(const string& _campaignUrl)
{
    m_campaignUrl = _campaignUrl;
    m_campaignUrlHasBeenSet = true;
}

bool SponsorInfo::CampaignUrlHasBeenSet() const
{
    return m_campaignUrlHasBeenSet;
}

