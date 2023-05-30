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

#include <tencentcloud/waf/v20180125/model/QPSPackageNew.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

QPSPackageNew::QPSPackageNew() :
    m_resourceIdsHasBeenSet(false),
    m_validTimeHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_countHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_billingItemHasBeenSet(false)
{
}

CoreInternalOutcome QPSPackageNew::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceIds") && !value["ResourceIds"].IsNull())
    {
        if (!value["ResourceIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QPSPackageNew.ResourceIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceIds = string(value["ResourceIds"].GetString());
        m_resourceIdsHasBeenSet = true;
    }

    if (value.HasMember("ValidTime") && !value["ValidTime"].IsNull())
    {
        if (!value["ValidTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QPSPackageNew.ValidTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validTime = string(value["ValidTime"].GetString());
        m_validTimeHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QPSPackageNew.RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QPSPackageNew.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QPSPackageNew.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("BillingItem") && !value["BillingItem"].IsNull())
    {
        if (!value["BillingItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QPSPackageNew.BillingItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingItem = string(value["BillingItem"].GetString());
        m_billingItemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QPSPackageNew::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceIds.c_str(), allocator).Move(), allocator);
    }

    if (m_validTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validTime.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_billingItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingItem.c_str(), allocator).Move(), allocator);
    }

}


string QPSPackageNew::GetResourceIds() const
{
    return m_resourceIds;
}

void QPSPackageNew::SetResourceIds(const string& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool QPSPackageNew::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

string QPSPackageNew::GetValidTime() const
{
    return m_validTime;
}

void QPSPackageNew::SetValidTime(const string& _validTime)
{
    m_validTime = _validTime;
    m_validTimeHasBeenSet = true;
}

bool QPSPackageNew::ValidTimeHasBeenSet() const
{
    return m_validTimeHasBeenSet;
}

int64_t QPSPackageNew::GetRenewFlag() const
{
    return m_renewFlag;
}

void QPSPackageNew::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool QPSPackageNew::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

int64_t QPSPackageNew::GetCount() const
{
    return m_count;
}

void QPSPackageNew::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool QPSPackageNew::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string QPSPackageNew::GetRegion() const
{
    return m_region;
}

void QPSPackageNew::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool QPSPackageNew::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string QPSPackageNew::GetBillingItem() const
{
    return m_billingItem;
}

void QPSPackageNew::SetBillingItem(const string& _billingItem)
{
    m_billingItem = _billingItem;
    m_billingItemHasBeenSet = true;
}

bool QPSPackageNew::BillingItemHasBeenSet() const
{
    return m_billingItemHasBeenSet;
}

