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
    m_tagSetHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_clientIPMethodHasBeenSet(false),
    m_iPAddressVersionHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_http3SupportedHasBeenSet(false),
    m_featureBitmapHasBeenSet(false),
    m_isSupportTLSChoiceHasBeenSet(false)
{
}

CoreInternalOutcome ProxyGroupDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupDetail.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupDetail.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProxyNum") && !value["ProxyNum"].IsNull())
    {
        if (!value["ProxyNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupDetail.ProxyNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_proxyNum = value["ProxyNum"].GetInt64();
        m_proxyNumHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupDetail.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("CreateUin") && !value["CreateUin"].IsNull())
    {
        if (!value["CreateUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupDetail.CreateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUin = string(value["CreateUin"].GetString());
        m_createUinHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupDetail.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("DnsDefaultIp") && !value["DnsDefaultIp"].IsNull())
    {
        if (!value["DnsDefaultIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupDetail.DnsDefaultIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dnsDefaultIp = string(value["DnsDefaultIp"].GetString());
        m_dnsDefaultIpHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupDetail.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("RealServerRegionInfo") && !value["RealServerRegionInfo"].IsNull())
    {
        if (!value["RealServerRegionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupDetail.RealServerRegionInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ProxyGroupDetail.IsOldGroup` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isOldGroup = value["IsOldGroup"].GetBool();
        m_isOldGroupHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupDetail.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyGroupDetail.TagSet` is not array type"));

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

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupDetail.PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(value["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupDetail.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("ClientIPMethod") && !value["ClientIPMethod"].IsNull())
    {
        if (!value["ClientIPMethod"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyGroupDetail.ClientIPMethod` is not array type"));

        const rapidjson::Value &tmpValue = value["ClientIPMethod"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_clientIPMethod.push_back((*itr).GetInt64());
        }
        m_clientIPMethodHasBeenSet = true;
    }

    if (value.HasMember("IPAddressVersion") && !value["IPAddressVersion"].IsNull())
    {
        if (!value["IPAddressVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupDetail.IPAddressVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iPAddressVersion = string(value["IPAddressVersion"].GetString());
        m_iPAddressVersionHasBeenSet = true;
    }

    if (value.HasMember("PackageType") && !value["PackageType"].IsNull())
    {
        if (!value["PackageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupDetail.PackageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageType = string(value["PackageType"].GetString());
        m_packageTypeHasBeenSet = true;
    }

    if (value.HasMember("Http3Supported") && !value["Http3Supported"].IsNull())
    {
        if (!value["Http3Supported"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupDetail.Http3Supported` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_http3Supported = value["Http3Supported"].GetInt64();
        m_http3SupportedHasBeenSet = true;
    }

    if (value.HasMember("FeatureBitmap") && !value["FeatureBitmap"].IsNull())
    {
        if (!value["FeatureBitmap"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupDetail.FeatureBitmap` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_featureBitmap = value["FeatureBitmap"].GetInt64();
        m_featureBitmapHasBeenSet = true;
    }

    if (value.HasMember("IsSupportTLSChoice") && !value["IsSupportTLSChoice"].IsNull())
    {
        if (!value["IsSupportTLSChoice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupDetail.IsSupportTLSChoice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportTLSChoice = value["IsSupportTLSChoice"].GetUint64();
        m_isSupportTLSChoiceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyGroupDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_proxyNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxyNum, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_createUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUin.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsDefaultIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsDefaultIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dnsDefaultIp.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerRegionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerRegionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_realServerRegionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isOldGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOldGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOldGroup, allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
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

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIPMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIPMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clientIPMethod.begin(); itr != m_clientIPMethod.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_iPAddressVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPAddressVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iPAddressVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
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

    if (m_isSupportTLSChoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportTLSChoice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportTLSChoice, allocator);
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

string ProxyGroupDetail::GetPolicyId() const
{
    return m_policyId;
}

void ProxyGroupDetail::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool ProxyGroupDetail::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string ProxyGroupDetail::GetVersion() const
{
    return m_version;
}

void ProxyGroupDetail::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ProxyGroupDetail::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

vector<int64_t> ProxyGroupDetail::GetClientIPMethod() const
{
    return m_clientIPMethod;
}

void ProxyGroupDetail::SetClientIPMethod(const vector<int64_t>& _clientIPMethod)
{
    m_clientIPMethod = _clientIPMethod;
    m_clientIPMethodHasBeenSet = true;
}

bool ProxyGroupDetail::ClientIPMethodHasBeenSet() const
{
    return m_clientIPMethodHasBeenSet;
}

string ProxyGroupDetail::GetIPAddressVersion() const
{
    return m_iPAddressVersion;
}

void ProxyGroupDetail::SetIPAddressVersion(const string& _iPAddressVersion)
{
    m_iPAddressVersion = _iPAddressVersion;
    m_iPAddressVersionHasBeenSet = true;
}

bool ProxyGroupDetail::IPAddressVersionHasBeenSet() const
{
    return m_iPAddressVersionHasBeenSet;
}

string ProxyGroupDetail::GetPackageType() const
{
    return m_packageType;
}

void ProxyGroupDetail::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool ProxyGroupDetail::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

int64_t ProxyGroupDetail::GetHttp3Supported() const
{
    return m_http3Supported;
}

void ProxyGroupDetail::SetHttp3Supported(const int64_t& _http3Supported)
{
    m_http3Supported = _http3Supported;
    m_http3SupportedHasBeenSet = true;
}

bool ProxyGroupDetail::Http3SupportedHasBeenSet() const
{
    return m_http3SupportedHasBeenSet;
}

int64_t ProxyGroupDetail::GetFeatureBitmap() const
{
    return m_featureBitmap;
}

void ProxyGroupDetail::SetFeatureBitmap(const int64_t& _featureBitmap)
{
    m_featureBitmap = _featureBitmap;
    m_featureBitmapHasBeenSet = true;
}

bool ProxyGroupDetail::FeatureBitmapHasBeenSet() const
{
    return m_featureBitmapHasBeenSet;
}

uint64_t ProxyGroupDetail::GetIsSupportTLSChoice() const
{
    return m_isSupportTLSChoice;
}

void ProxyGroupDetail::SetIsSupportTLSChoice(const uint64_t& _isSupportTLSChoice)
{
    m_isSupportTLSChoice = _isSupportTLSChoice;
    m_isSupportTLSChoiceHasBeenSet = true;
}

bool ProxyGroupDetail::IsSupportTLSChoiceHasBeenSet() const
{
    return m_isSupportTLSChoiceHasBeenSet;
}

