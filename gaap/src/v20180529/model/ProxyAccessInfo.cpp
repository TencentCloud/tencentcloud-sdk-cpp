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

#include <tencentcloud/gaap/v20180529/model/ProxyAccessInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

ProxyAccessInfo::ProxyAccessInfo() :
    m_regionIdHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vipListHasBeenSet(false),
    m_sourceRegionIdcTypeHasBeenSet(false)
{
}

CoreInternalOutcome ProxyAccessInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAccessInfo.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAccessInfo.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("ProxyId") && !value["ProxyId"].IsNull())
    {
        if (!value["ProxyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAccessInfo.ProxyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyId = string(value["ProxyId"].GetString());
        m_proxyIdHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAccessInfo.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("VipList") && !value["VipList"].IsNull())
    {
        if (!value["VipList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyAccessInfo.VipList` is not array type"));

        const rapidjson::Value &tmpValue = value["VipList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IPDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vipList.push_back(item);
        }
        m_vipListHasBeenSet = true;
    }

    if (value.HasMember("SourceRegionIdcType") && !value["SourceRegionIdcType"].IsNull())
    {
        if (!value["SourceRegionIdcType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAccessInfo.SourceRegionIdcType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceRegionIdcType = string(value["SourceRegionIdcType"].GetString());
        m_sourceRegionIdcTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyAccessInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vipList.begin(); itr != m_vipList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sourceRegionIdcTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceRegionIdcType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceRegionIdcType.c_str(), allocator).Move(), allocator);
    }

}


string ProxyAccessInfo::GetRegionId() const
{
    return m_regionId;
}

void ProxyAccessInfo::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool ProxyAccessInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string ProxyAccessInfo::GetRegionName() const
{
    return m_regionName;
}

void ProxyAccessInfo::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool ProxyAccessInfo::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string ProxyAccessInfo::GetProxyId() const
{
    return m_proxyId;
}

void ProxyAccessInfo::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool ProxyAccessInfo::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string ProxyAccessInfo::GetVip() const
{
    return m_vip;
}

void ProxyAccessInfo::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool ProxyAccessInfo::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

vector<IPDetail> ProxyAccessInfo::GetVipList() const
{
    return m_vipList;
}

void ProxyAccessInfo::SetVipList(const vector<IPDetail>& _vipList)
{
    m_vipList = _vipList;
    m_vipListHasBeenSet = true;
}

bool ProxyAccessInfo::VipListHasBeenSet() const
{
    return m_vipListHasBeenSet;
}

string ProxyAccessInfo::GetSourceRegionIdcType() const
{
    return m_sourceRegionIdcType;
}

void ProxyAccessInfo::SetSourceRegionIdcType(const string& _sourceRegionIdcType)
{
    m_sourceRegionIdcType = _sourceRegionIdcType;
    m_sourceRegionIdcTypeHasBeenSet = true;
}

bool ProxyAccessInfo::SourceRegionIdcTypeHasBeenSet() const
{
    return m_sourceRegionIdcTypeHasBeenSet;
}

