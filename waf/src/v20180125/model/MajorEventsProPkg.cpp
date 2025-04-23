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

#include <tencentcloud/waf/v20180125/model/MajorEventsProPkg.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

MajorEventsProPkg::MajorEventsProPkg() :
    m_resourceIdsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_inquireNumHasBeenSet(false),
    m_usedNumHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_billingItemHasBeenSet(false)
{
}

CoreInternalOutcome MajorEventsProPkg::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceIds") && !value["ResourceIds"].IsNull())
    {
        if (!value["ResourceIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MajorEventsProPkg.ResourceIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceIds = string(value["ResourceIds"].GetString());
        m_resourceIdsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MajorEventsProPkg.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MajorEventsProPkg.Region` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_region = value["Region"].GetInt64();
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MajorEventsProPkg.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MajorEventsProPkg.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("InquireNum") && !value["InquireNum"].IsNull())
    {
        if (!value["InquireNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MajorEventsProPkg.InquireNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inquireNum = value["InquireNum"].GetInt64();
        m_inquireNumHasBeenSet = true;
    }

    if (value.HasMember("UsedNum") && !value["UsedNum"].IsNull())
    {
        if (!value["UsedNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MajorEventsProPkg.UsedNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedNum = value["UsedNum"].GetInt64();
        m_usedNumHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MajorEventsProPkg.RenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetUint64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("BillingItem") && !value["BillingItem"].IsNull())
    {
        if (!value["BillingItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MajorEventsProPkg.BillingItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingItem = string(value["BillingItem"].GetString());
        m_billingItemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MajorEventsProPkg::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_billingItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingItem.c_str(), allocator).Move(), allocator);
    }

}


string MajorEventsProPkg::GetResourceIds() const
{
    return m_resourceIds;
}

void MajorEventsProPkg::SetResourceIds(const string& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool MajorEventsProPkg::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

int64_t MajorEventsProPkg::GetStatus() const
{
    return m_status;
}

void MajorEventsProPkg::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MajorEventsProPkg::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t MajorEventsProPkg::GetRegion() const
{
    return m_region;
}

void MajorEventsProPkg::SetRegion(const int64_t& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool MajorEventsProPkg::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string MajorEventsProPkg::GetBeginTime() const
{
    return m_beginTime;
}

void MajorEventsProPkg::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool MajorEventsProPkg::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string MajorEventsProPkg::GetEndTime() const
{
    return m_endTime;
}

void MajorEventsProPkg::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool MajorEventsProPkg::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t MajorEventsProPkg::GetInquireNum() const
{
    return m_inquireNum;
}

void MajorEventsProPkg::SetInquireNum(const int64_t& _inquireNum)
{
    m_inquireNum = _inquireNum;
    m_inquireNumHasBeenSet = true;
}

bool MajorEventsProPkg::InquireNumHasBeenSet() const
{
    return m_inquireNumHasBeenSet;
}

int64_t MajorEventsProPkg::GetUsedNum() const
{
    return m_usedNum;
}

void MajorEventsProPkg::SetUsedNum(const int64_t& _usedNum)
{
    m_usedNum = _usedNum;
    m_usedNumHasBeenSet = true;
}

bool MajorEventsProPkg::UsedNumHasBeenSet() const
{
    return m_usedNumHasBeenSet;
}

uint64_t MajorEventsProPkg::GetRenewFlag() const
{
    return m_renewFlag;
}

void MajorEventsProPkg::SetRenewFlag(const uint64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool MajorEventsProPkg::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string MajorEventsProPkg::GetBillingItem() const
{
    return m_billingItem;
}

void MajorEventsProPkg::SetBillingItem(const string& _billingItem)
{
    m_billingItem = _billingItem;
    m_billingItemHasBeenSet = true;
}

bool MajorEventsProPkg::BillingItemHasBeenSet() const
{
    return m_billingItemHasBeenSet;
}

