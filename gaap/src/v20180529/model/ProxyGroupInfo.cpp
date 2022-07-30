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

#include <tencentcloud/gaap/v20180529/model/ProxyGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

ProxyGroupInfo::ProxyGroupInfo() :
    m_groupIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_realServerRegionInfoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_proxyTypeHasBeenSet(false),
    m_http3SupportedHasBeenSet(false),
    m_featureBitmapHasBeenSet(false)
{
}

CoreInternalOutcome ProxyGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("RealServerRegionInfo") && !value["RealServerRegionInfo"].IsNull())
    {
        if (!value["RealServerRegionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.RealServerRegionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_realServerRegionInfo.Deserialize(value["RealServerRegionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_realServerRegionInfoHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ProxyType") && !value["ProxyType"].IsNull())
    {
        if (!value["ProxyType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.ProxyType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_proxyType = value["ProxyType"].GetUint64();
        m_proxyTypeHasBeenSet = true;
    }

    if (value.HasMember("Http3Supported") && !value["Http3Supported"].IsNull())
    {
        if (!value["Http3Supported"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.Http3Supported` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_http3Supported = value["Http3Supported"].GetInt64();
        m_http3SupportedHasBeenSet = true;
    }

    if (value.HasMember("FeatureBitmap") && !value["FeatureBitmap"].IsNull())
    {
        if (!value["FeatureBitmap"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.FeatureBitmap` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_featureBitmap = value["FeatureBitmap"].GetInt64();
        m_featureBitmapHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_realServerRegionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerRegionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_realServerRegionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_proxyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxyType, allocator);
    }

    if (m_http3SupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Http3Supported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_http3Supported, allocator);
    }

    if (m_featureBitmapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeatureBitmap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_featureBitmap, allocator);
    }

}


string ProxyGroupInfo::GetGroupId() const
{
    return m_groupId;
}

void ProxyGroupInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ProxyGroupInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ProxyGroupInfo::GetDomain() const
{
    return m_domain;
}

void ProxyGroupInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ProxyGroupInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ProxyGroupInfo::GetGroupName() const
{
    return m_groupName;
}

void ProxyGroupInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool ProxyGroupInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t ProxyGroupInfo::GetProjectId() const
{
    return m_projectId;
}

void ProxyGroupInfo::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ProxyGroupInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

RegionDetail ProxyGroupInfo::GetRealServerRegionInfo() const
{
    return m_realServerRegionInfo;
}

void ProxyGroupInfo::SetRealServerRegionInfo(const RegionDetail& _realServerRegionInfo)
{
    m_realServerRegionInfo = _realServerRegionInfo;
    m_realServerRegionInfoHasBeenSet = true;
}

bool ProxyGroupInfo::RealServerRegionInfoHasBeenSet() const
{
    return m_realServerRegionInfoHasBeenSet;
}

string ProxyGroupInfo::GetStatus() const
{
    return m_status;
}

void ProxyGroupInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ProxyGroupInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<TagPair> ProxyGroupInfo::GetTagSet() const
{
    return m_tagSet;
}

void ProxyGroupInfo::SetTagSet(const vector<TagPair>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool ProxyGroupInfo::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

string ProxyGroupInfo::GetVersion() const
{
    return m_version;
}

void ProxyGroupInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ProxyGroupInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

uint64_t ProxyGroupInfo::GetCreateTime() const
{
    return m_createTime;
}

void ProxyGroupInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ProxyGroupInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t ProxyGroupInfo::GetProxyType() const
{
    return m_proxyType;
}

void ProxyGroupInfo::SetProxyType(const uint64_t& _proxyType)
{
    m_proxyType = _proxyType;
    m_proxyTypeHasBeenSet = true;
}

bool ProxyGroupInfo::ProxyTypeHasBeenSet() const
{
    return m_proxyTypeHasBeenSet;
}

int64_t ProxyGroupInfo::GetHttp3Supported() const
{
    return m_http3Supported;
}

void ProxyGroupInfo::SetHttp3Supported(const int64_t& _http3Supported)
{
    m_http3Supported = _http3Supported;
    m_http3SupportedHasBeenSet = true;
}

bool ProxyGroupInfo::Http3SupportedHasBeenSet() const
{
    return m_http3SupportedHasBeenSet;
}

int64_t ProxyGroupInfo::GetFeatureBitmap() const
{
    return m_featureBitmap;
}

void ProxyGroupInfo::SetFeatureBitmap(const int64_t& _featureBitmap)
{
    m_featureBitmap = _featureBitmap;
    m_featureBitmapHasBeenSet = true;
}

bool ProxyGroupInfo::FeatureBitmapHasBeenSet() const
{
    return m_featureBitmapHasBeenSet;
}

