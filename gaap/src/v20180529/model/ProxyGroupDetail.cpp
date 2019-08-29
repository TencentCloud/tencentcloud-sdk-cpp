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

#include <tencentcloud/gaap/v20180529/model/ProxyGroupDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

ProxyGroupDetail::ProxyGroupDetail() :
    m_createTimeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_proxyNumHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_createUinHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_dnsDefaultIpHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_realServerRegionInfoHasBeenSet(false),
    m_isOldGroupHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_tagSetHasBeenSet(false)
{
}

CoreInternalOutcome ProxyGroupDetail::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ProxyGroupDetail.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ProxyGroupDetail.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProxyNum") && !value["ProxyNum"].IsNull())
    {
        if (!value["ProxyNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ProxyGroupDetail.ProxyNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_proxyNum = value["ProxyNum"].GetInt64();
        m_proxyNumHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ProxyGroupDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProxyGroupDetail.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("CreateUin") && !value["CreateUin"].IsNull())
    {
        if (!value["CreateUin"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProxyGroupDetail.CreateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUin = string(value["CreateUin"].GetString());
        m_createUinHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProxyGroupDetail.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("DnsDefaultIp") && !value["DnsDefaultIp"].IsNull())
    {
        if (!value["DnsDefaultIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProxyGroupDetail.DnsDefaultIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dnsDefaultIp = string(value["DnsDefaultIp"].GetString());
        m_dnsDefaultIpHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProxyGroupDetail.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("RealServerRegionInfo") && !value["RealServerRegionInfo"].IsNull())
    {
        if (!value["RealServerRegionInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ProxyGroupDetail.RealServerRegionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_realServerRegionInfo.Deserialize(value["RealServerRegionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_realServerRegionInfoHasBeenSet = true;
    }

    if (value.HasMember("IsOldGroup") && !value["IsOldGroup"].IsNull())
    {
        if (!value["IsOldGroup"].IsBool())
        {
            return CoreInternalOutcome(Error("response `ProxyGroupDetail.IsOldGroup` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isOldGroup = value["IsOldGroup"].GetBool();
        m_isOldGroupHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProxyGroupDetail.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Error("response `ProxyGroupDetail.TagSet` is not array type"));

        const Value &tmpValue = value["TagSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyGroupDetail::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_proxyNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProxyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxyNum, allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_createUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createUin.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsDefaultIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DnsDefaultIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dnsDefaultIp.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerRegionInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealServerRegionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_realServerRegionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isOldGroupHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsOldGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOldGroup, allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t ProxyGroupDetail::GetCreateTime() const
{
    return m_createTime;
}

void ProxyGroupDetail::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ProxyGroupDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t ProxyGroupDetail::GetProjectId() const
{
    return m_projectId;
}

void ProxyGroupDetail::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ProxyGroupDetail::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t ProxyGroupDetail::GetProxyNum() const
{
    return m_proxyNum;
}

void ProxyGroupDetail::SetProxyNum(const int64_t& _proxyNum)
{
    m_proxyNum = _proxyNum;
    m_proxyNumHasBeenSet = true;
}

bool ProxyGroupDetail::ProxyNumHasBeenSet() const
{
    return m_proxyNumHasBeenSet;
}

int64_t ProxyGroupDetail::GetStatus() const
{
    return m_status;
}

void ProxyGroupDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ProxyGroupDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ProxyGroupDetail::GetOwnerUin() const
{
    return m_ownerUin;
}

void ProxyGroupDetail::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ProxyGroupDetail::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string ProxyGroupDetail::GetCreateUin() const
{
    return m_createUin;
}

void ProxyGroupDetail::SetCreateUin(const string& _createUin)
{
    m_createUin = _createUin;
    m_createUinHasBeenSet = true;
}

bool ProxyGroupDetail::CreateUinHasBeenSet() const
{
    return m_createUinHasBeenSet;
}

string ProxyGroupDetail::GetGroupName() const
{
    return m_groupName;
}

void ProxyGroupDetail::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool ProxyGroupDetail::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string ProxyGroupDetail::GetDnsDefaultIp() const
{
    return m_dnsDefaultIp;
}

void ProxyGroupDetail::SetDnsDefaultIp(const string& _dnsDefaultIp)
{
    m_dnsDefaultIp = _dnsDefaultIp;
    m_dnsDefaultIpHasBeenSet = true;
}

bool ProxyGroupDetail::DnsDefaultIpHasBeenSet() const
{
    return m_dnsDefaultIpHasBeenSet;
}

string ProxyGroupDetail::GetDomain() const
{
    return m_domain;
}

void ProxyGroupDetail::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ProxyGroupDetail::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

RegionDetail ProxyGroupDetail::GetRealServerRegionInfo() const
{
    return m_realServerRegionInfo;
}

void ProxyGroupDetail::SetRealServerRegionInfo(const RegionDetail& _realServerRegionInfo)
{
    m_realServerRegionInfo = _realServerRegionInfo;
    m_realServerRegionInfoHasBeenSet = true;
}

bool ProxyGroupDetail::RealServerRegionInfoHasBeenSet() const
{
    return m_realServerRegionInfoHasBeenSet;
}

bool ProxyGroupDetail::GetIsOldGroup() const
{
    return m_isOldGroup;
}

void ProxyGroupDetail::SetIsOldGroup(const bool& _isOldGroup)
{
    m_isOldGroup = _isOldGroup;
    m_isOldGroupHasBeenSet = true;
}

bool ProxyGroupDetail::IsOldGroupHasBeenSet() const
{
    return m_isOldGroupHasBeenSet;
}

string ProxyGroupDetail::GetGroupId() const
{
    return m_groupId;
}

void ProxyGroupDetail::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ProxyGroupDetail::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

vector<TagPair> ProxyGroupDetail::GetTagSet() const
{
    return m_tagSet;
}

void ProxyGroupDetail::SetTagSet(const vector<TagPair>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool ProxyGroupDetail::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

