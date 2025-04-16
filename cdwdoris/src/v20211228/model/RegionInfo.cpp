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

#include <tencentcloud/cdwdoris/v20211228/model/RegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

RegionInfo::RegionInfo() :
    m_nameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_countHasBeenSet(false),
    m_isInternationalSiteHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_sSCCountHasBeenSet(false),
    m_enableSSCHasBeenSet(false)
{
}

CoreInternalOutcome RegionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("Zones") && !value["Zones"].IsNull())
    {
        if (!value["Zones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegionInfo.Zones` is not array type"));

        const rapidjson::Value &tmpValue = value["Zones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ZoneInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_zones.push_back(item);
        }
        m_zonesHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("IsInternationalSite") && !value["IsInternationalSite"].IsNull())
    {
        if (!value["IsInternationalSite"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.IsInternationalSite` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isInternationalSite = value["IsInternationalSite"].GetUint64();
        m_isInternationalSiteHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("SSCCount") && !value["SSCCount"].IsNull())
    {
        if (!value["SSCCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.SSCCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sSCCount = value["SSCCount"].GetInt64();
        m_sSCCountHasBeenSet = true;
    }

    if (value.HasMember("EnableSSC") && !value["EnableSSC"].IsNull())
    {
        if (!value["EnableSSC"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.EnableSSC` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableSSC = value["EnableSSC"].GetBool();
        m_enableSSCHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_zonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_isInternationalSiteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInternationalSite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isInternationalSite, allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_sSCCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSCCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sSCCount, allocator);
    }

    if (m_enableSSCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSSC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableSSC, allocator);
    }

}


string RegionInfo::GetName() const
{
    return m_name;
}

void RegionInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RegionInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RegionInfo::GetDesc() const
{
    return m_desc;
}

void RegionInfo::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool RegionInfo::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

int64_t RegionInfo::GetRegionId() const
{
    return m_regionId;
}

void RegionInfo::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool RegionInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

vector<ZoneInfo> RegionInfo::GetZones() const
{
    return m_zones;
}

void RegionInfo::SetZones(const vector<ZoneInfo>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool RegionInfo::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

int64_t RegionInfo::GetCount() const
{
    return m_count;
}

void RegionInfo::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool RegionInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

uint64_t RegionInfo::GetIsInternationalSite() const
{
    return m_isInternationalSite;
}

void RegionInfo::SetIsInternationalSite(const uint64_t& _isInternationalSite)
{
    m_isInternationalSite = _isInternationalSite;
    m_isInternationalSiteHasBeenSet = true;
}

bool RegionInfo::IsInternationalSiteHasBeenSet() const
{
    return m_isInternationalSiteHasBeenSet;
}

string RegionInfo::GetBucket() const
{
    return m_bucket;
}

void RegionInfo::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool RegionInfo::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

int64_t RegionInfo::GetSSCCount() const
{
    return m_sSCCount;
}

void RegionInfo::SetSSCCount(const int64_t& _sSCCount)
{
    m_sSCCount = _sSCCount;
    m_sSCCountHasBeenSet = true;
}

bool RegionInfo::SSCCountHasBeenSet() const
{
    return m_sSCCountHasBeenSet;
}

bool RegionInfo::GetEnableSSC() const
{
    return m_enableSSC;
}

void RegionInfo::SetEnableSSC(const bool& _enableSSC)
{
    m_enableSSC = _enableSSC;
    m_enableSSCHasBeenSet = true;
}

bool RegionInfo::EnableSSCHasBeenSet() const
{
    return m_enableSSCHasBeenSet;
}

