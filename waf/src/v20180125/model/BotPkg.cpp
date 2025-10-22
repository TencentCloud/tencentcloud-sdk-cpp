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

#include <tencentcloud/waf/v20180125/model/BotPkg.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

BotPkg::BotPkg() :
    m_resourceIdsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_inquireNumHasBeenSet(false),
    m_usedNumHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_botCPWafHasBeenSet(false),
    m_botNPWafHasBeenSet(false),
    m_isBotTrialHasBeenSet(false)
{
}

CoreInternalOutcome BotPkg::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceIds") && !value["ResourceIds"].IsNull())
    {
        if (!value["ResourceIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotPkg.ResourceIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceIds = string(value["ResourceIds"].GetString());
        m_resourceIdsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotPkg.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotPkg.Region` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_region = value["Region"].GetInt64();
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotPkg.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotPkg.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("InquireNum") && !value["InquireNum"].IsNull())
    {
        if (!value["InquireNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotPkg.InquireNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inquireNum = value["InquireNum"].GetInt64();
        m_inquireNumHasBeenSet = true;
    }

    if (value.HasMember("UsedNum") && !value["UsedNum"].IsNull())
    {
        if (!value["UsedNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotPkg.UsedNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedNum = value["UsedNum"].GetInt64();
        m_usedNumHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotPkg.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BotPkg.RenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetUint64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("BotCPWaf") && !value["BotCPWaf"].IsNull())
    {
        if (!value["BotCPWaf"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotPkg.BotCPWaf` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_botCPWaf = value["BotCPWaf"].GetInt64();
        m_botCPWafHasBeenSet = true;
    }

    if (value.HasMember("BotNPWaf") && !value["BotNPWaf"].IsNull())
    {
        if (!value["BotNPWaf"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotPkg.BotNPWaf` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_botNPWaf = value["BotNPWaf"].GetInt64();
        m_botNPWafHasBeenSet = true;
    }

    if (value.HasMember("IsBotTrial") && !value["IsBotTrial"].IsNull())
    {
        if (!value["IsBotTrial"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotPkg.IsBotTrial` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isBotTrial = value["IsBotTrial"].GetInt64();
        m_isBotTrialHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotPkg::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceIds.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_region, allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_inquireNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InquireNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inquireNum, allocator);
    }

    if (m_usedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedNum, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_botCPWafHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotCPWaf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_botCPWaf, allocator);
    }

    if (m_botNPWafHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotNPWaf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_botNPWaf, allocator);
    }

    if (m_isBotTrialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBotTrial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isBotTrial, allocator);
    }

}


string BotPkg::GetResourceIds() const
{
    return m_resourceIds;
}

void BotPkg::SetResourceIds(const string& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool BotPkg::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

int64_t BotPkg::GetStatus() const
{
    return m_status;
}

void BotPkg::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BotPkg::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t BotPkg::GetRegion() const
{
    return m_region;
}

void BotPkg::SetRegion(const int64_t& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool BotPkg::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string BotPkg::GetBeginTime() const
{
    return m_beginTime;
}

void BotPkg::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool BotPkg::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string BotPkg::GetEndTime() const
{
    return m_endTime;
}

void BotPkg::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool BotPkg::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t BotPkg::GetInquireNum() const
{
    return m_inquireNum;
}

void BotPkg::SetInquireNum(const int64_t& _inquireNum)
{
    m_inquireNum = _inquireNum;
    m_inquireNumHasBeenSet = true;
}

bool BotPkg::InquireNumHasBeenSet() const
{
    return m_inquireNumHasBeenSet;
}

int64_t BotPkg::GetUsedNum() const
{
    return m_usedNum;
}

void BotPkg::SetUsedNum(const int64_t& _usedNum)
{
    m_usedNum = _usedNum;
    m_usedNumHasBeenSet = true;
}

bool BotPkg::UsedNumHasBeenSet() const
{
    return m_usedNumHasBeenSet;
}

string BotPkg::GetType() const
{
    return m_type;
}

void BotPkg::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool BotPkg::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t BotPkg::GetRenewFlag() const
{
    return m_renewFlag;
}

void BotPkg::SetRenewFlag(const uint64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool BotPkg::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

int64_t BotPkg::GetBotCPWaf() const
{
    return m_botCPWaf;
}

void BotPkg::SetBotCPWaf(const int64_t& _botCPWaf)
{
    m_botCPWaf = _botCPWaf;
    m_botCPWafHasBeenSet = true;
}

bool BotPkg::BotCPWafHasBeenSet() const
{
    return m_botCPWafHasBeenSet;
}

int64_t BotPkg::GetBotNPWaf() const
{
    return m_botNPWaf;
}

void BotPkg::SetBotNPWaf(const int64_t& _botNPWaf)
{
    m_botNPWaf = _botNPWaf;
    m_botNPWafHasBeenSet = true;
}

bool BotPkg::BotNPWafHasBeenSet() const
{
    return m_botNPWafHasBeenSet;
}

int64_t BotPkg::GetIsBotTrial() const
{
    return m_isBotTrial;
}

void BotPkg::SetIsBotTrial(const int64_t& _isBotTrial)
{
    m_isBotTrial = _isBotTrial;
    m_isBotTrialHasBeenSet = true;
}

bool BotPkg::IsBotTrialHasBeenSet() const
{
    return m_isBotTrialHasBeenSet;
}

