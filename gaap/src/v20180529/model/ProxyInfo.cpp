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

#include <tencentcloud/gaap/v20180529/model/ProxyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

ProxyInfo::ProxyInfo() :
    m_instanceIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_proxyNameHasBeenSet(false),
    m_accessRegionHasBeenSet(false),
    m_realServerRegionHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_concurrentHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_iPHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_scalarableHasBeenSet(false),
    m_supportProtocolsHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_accessRegionInfoHasBeenSet(false),
    m_realServerRegionInfoHasBeenSet(false),
    m_forwardIPHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_supportSecurityHasBeenSet(false),
    m_billingTypeHasBeenSet(false),
    m_relatedGlobalDomainsHasBeenSet(false),
    m_modifyConfigTimeHasBeenSet(false),
    m_proxyTypeHasBeenSet(false),
    m_clientIPMethodHasBeenSet(false),
    m_iPAddressVersionHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_banStatusHasBeenSet(false),
    m_iPListHasBeenSet(false),
    m_http3SupportedHasBeenSet(false),
    m_inBanBlacklistHasBeenSet(false),
    m_featureBitmapHasBeenSet(false),
    m_isAutoScaleProxyHasBeenSet(false),
    m_isSupportTLSChoiceHasBeenSet(false)
{
}

CoreInternalOutcome ProxyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProxyName") && !value["ProxyName"].IsNull())
    {
        if (!value["ProxyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.ProxyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyName = string(value["ProxyName"].GetString());
        m_proxyNameHasBeenSet = true;
    }

    if (value.HasMember("AccessRegion") && !value["AccessRegion"].IsNull())
    {
        if (!value["AccessRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.AccessRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessRegion = string(value["AccessRegion"].GetString());
        m_accessRegionHasBeenSet = true;
    }

    if (value.HasMember("RealServerRegion") && !value["RealServerRegion"].IsNull())
    {
        if (!value["RealServerRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.RealServerRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServerRegion = string(value["RealServerRegion"].GetString());
        m_realServerRegionHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.Bandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetInt64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("Concurrent") && !value["Concurrent"].IsNull())
    {
        if (!value["Concurrent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.Concurrent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_concurrent = value["Concurrent"].GetInt64();
        m_concurrentHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("ProxyId") && !value["ProxyId"].IsNull())
    {
        if (!value["ProxyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.ProxyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyId = string(value["ProxyId"].GetString());
        m_proxyIdHasBeenSet = true;
    }

    if (value.HasMember("Scalarable") && !value["Scalarable"].IsNull())
    {
        if (!value["Scalarable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.Scalarable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scalarable = value["Scalarable"].GetInt64();
        m_scalarableHasBeenSet = true;
    }

    if (value.HasMember("SupportProtocols") && !value["SupportProtocols"].IsNull())
    {
        if (!value["SupportProtocols"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.SupportProtocols` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportProtocols"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportProtocols.push_back((*itr).GetString());
        }
        m_supportProtocolsHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(value["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("AccessRegionInfo") && !value["AccessRegionInfo"].IsNull())
    {
        if (!value["AccessRegionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.AccessRegionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_accessRegionInfo.Deserialize(value["AccessRegionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accessRegionInfoHasBeenSet = true;
    }

    if (value.HasMember("RealServerRegionInfo") && !value["RealServerRegionInfo"].IsNull())
    {
        if (!value["RealServerRegionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.RealServerRegionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_realServerRegionInfo.Deserialize(value["RealServerRegionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_realServerRegionInfoHasBeenSet = true;
    }

    if (value.HasMember("ForwardIP") && !value["ForwardIP"].IsNull())
    {
        if (!value["ForwardIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.ForwardIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardIP = string(value["ForwardIP"].GetString());
        m_forwardIPHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.TagSet` is not array type"));

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

    if (value.HasMember("SupportSecurity") && !value["SupportSecurity"].IsNull())
    {
        if (!value["SupportSecurity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.SupportSecurity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_supportSecurity = value["SupportSecurity"].GetInt64();
        m_supportSecurityHasBeenSet = true;
    }

    if (value.HasMember("BillingType") && !value["BillingType"].IsNull())
    {
        if (!value["BillingType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.BillingType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_billingType = value["BillingType"].GetInt64();
        m_billingTypeHasBeenSet = true;
    }

    if (value.HasMember("RelatedGlobalDomains") && !value["RelatedGlobalDomains"].IsNull())
    {
        if (!value["RelatedGlobalDomains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.RelatedGlobalDomains` is not array type"));

        const rapidjson::Value &tmpValue = value["RelatedGlobalDomains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_relatedGlobalDomains.push_back((*itr).GetString());
        }
        m_relatedGlobalDomainsHasBeenSet = true;
    }

    if (value.HasMember("ModifyConfigTime") && !value["ModifyConfigTime"].IsNull())
    {
        if (!value["ModifyConfigTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.ModifyConfigTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_modifyConfigTime = value["ModifyConfigTime"].GetUint64();
        m_modifyConfigTimeHasBeenSet = true;
    }

    if (value.HasMember("ProxyType") && !value["ProxyType"].IsNull())
    {
        if (!value["ProxyType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.ProxyType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_proxyType = value["ProxyType"].GetUint64();
        m_proxyTypeHasBeenSet = true;
    }

    if (value.HasMember("ClientIPMethod") && !value["ClientIPMethod"].IsNull())
    {
        if (!value["ClientIPMethod"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.ClientIPMethod` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.IPAddressVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iPAddressVersion = string(value["IPAddressVersion"].GetString());
        m_iPAddressVersionHasBeenSet = true;
    }

    if (value.HasMember("NetworkType") && !value["NetworkType"].IsNull())
    {
        if (!value["NetworkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.NetworkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkType = string(value["NetworkType"].GetString());
        m_networkTypeHasBeenSet = true;
    }

    if (value.HasMember("PackageType") && !value["PackageType"].IsNull())
    {
        if (!value["PackageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.PackageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageType = string(value["PackageType"].GetString());
        m_packageTypeHasBeenSet = true;
    }

    if (value.HasMember("BanStatus") && !value["BanStatus"].IsNull())
    {
        if (!value["BanStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.BanStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_banStatus = string(value["BanStatus"].GetString());
        m_banStatusHasBeenSet = true;
    }

    if (value.HasMember("IPList") && !value["IPList"].IsNull())
    {
        if (!value["IPList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.IPList` is not array type"));

        const rapidjson::Value &tmpValue = value["IPList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IPDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_iPList.push_back(item);
        }
        m_iPListHasBeenSet = true;
    }

    if (value.HasMember("Http3Supported") && !value["Http3Supported"].IsNull())
    {
        if (!value["Http3Supported"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.Http3Supported` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_http3Supported = value["Http3Supported"].GetInt64();
        m_http3SupportedHasBeenSet = true;
    }

    if (value.HasMember("InBanBlacklist") && !value["InBanBlacklist"].IsNull())
    {
        if (!value["InBanBlacklist"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.InBanBlacklist` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inBanBlacklist = value["InBanBlacklist"].GetInt64();
        m_inBanBlacklistHasBeenSet = true;
    }

    if (value.HasMember("FeatureBitmap") && !value["FeatureBitmap"].IsNull())
    {
        if (!value["FeatureBitmap"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.FeatureBitmap` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_featureBitmap = value["FeatureBitmap"].GetInt64();
        m_featureBitmapHasBeenSet = true;
    }

    if (value.HasMember("IsAutoScaleProxy") && !value["IsAutoScaleProxy"].IsNull())
    {
        if (!value["IsAutoScaleProxy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.IsAutoScaleProxy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isAutoScaleProxy = value["IsAutoScaleProxy"].GetInt64();
        m_isAutoScaleProxyHasBeenSet = true;
    }

    if (value.HasMember("IsSupportTLSChoice") && !value["IsSupportTLSChoice"].IsNull())
    {
        if (!value["IsSupportTLSChoice"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInfo.IsSupportTLSChoice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportTLSChoice = value["IsSupportTLSChoice"].GetInt64();
        m_isSupportTLSChoiceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_proxyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyName.c_str(), allocator).Move(), allocator);
    }

    if (m_accessRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realServerRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_concurrentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Concurrent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_concurrent, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_scalarableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scalarable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scalarable, allocator);
    }

    if (m_supportProtocolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportProtocols";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportProtocols.begin(); itr != m_supportProtocols.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessRegionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessRegionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_accessRegionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_realServerRegionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerRegionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_realServerRegionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_forwardIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardIP.c_str(), allocator).Move(), allocator);
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

    if (m_supportSecurityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportSecurity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportSecurity, allocator);
    }

    if (m_billingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingType, allocator);
    }

    if (m_relatedGlobalDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedGlobalDomains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_relatedGlobalDomains.begin(); itr != m_relatedGlobalDomains.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modifyConfigTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyConfigTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modifyConfigTime, allocator);
    }

    if (m_proxyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxyType, allocator);
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

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
    }

    if (m_banStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_banStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_iPListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_iPList.begin(); itr != m_iPList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_http3SupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Http3Supported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_http3Supported, allocator);
    }

    if (m_inBanBlacklistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InBanBlacklist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inBanBlacklist, allocator);
    }

    if (m_featureBitmapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeatureBitmap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_featureBitmap, allocator);
    }

    if (m_isAutoScaleProxyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAutoScaleProxy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAutoScaleProxy, allocator);
    }

    if (m_isSupportTLSChoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportTLSChoice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportTLSChoice, allocator);
    }

}


string ProxyInfo::GetInstanceId() const
{
    return m_instanceId;
}

void ProxyInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ProxyInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t ProxyInfo::GetCreateTime() const
{
    return m_createTime;
}

void ProxyInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ProxyInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t ProxyInfo::GetProjectId() const
{
    return m_projectId;
}

void ProxyInfo::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ProxyInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ProxyInfo::GetProxyName() const
{
    return m_proxyName;
}

void ProxyInfo::SetProxyName(const string& _proxyName)
{
    m_proxyName = _proxyName;
    m_proxyNameHasBeenSet = true;
}

bool ProxyInfo::ProxyNameHasBeenSet() const
{
    return m_proxyNameHasBeenSet;
}

string ProxyInfo::GetAccessRegion() const
{
    return m_accessRegion;
}

void ProxyInfo::SetAccessRegion(const string& _accessRegion)
{
    m_accessRegion = _accessRegion;
    m_accessRegionHasBeenSet = true;
}

bool ProxyInfo::AccessRegionHasBeenSet() const
{
    return m_accessRegionHasBeenSet;
}

string ProxyInfo::GetRealServerRegion() const
{
    return m_realServerRegion;
}

void ProxyInfo::SetRealServerRegion(const string& _realServerRegion)
{
    m_realServerRegion = _realServerRegion;
    m_realServerRegionHasBeenSet = true;
}

bool ProxyInfo::RealServerRegionHasBeenSet() const
{
    return m_realServerRegionHasBeenSet;
}

int64_t ProxyInfo::GetBandwidth() const
{
    return m_bandwidth;
}

void ProxyInfo::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool ProxyInfo::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

int64_t ProxyInfo::GetConcurrent() const
{
    return m_concurrent;
}

void ProxyInfo::SetConcurrent(const int64_t& _concurrent)
{
    m_concurrent = _concurrent;
    m_concurrentHasBeenSet = true;
}

bool ProxyInfo::ConcurrentHasBeenSet() const
{
    return m_concurrentHasBeenSet;
}

string ProxyInfo::GetStatus() const
{
    return m_status;
}

void ProxyInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ProxyInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ProxyInfo::GetDomain() const
{
    return m_domain;
}

void ProxyInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ProxyInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ProxyInfo::GetIP() const
{
    return m_iP;
}

void ProxyInfo::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool ProxyInfo::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

string ProxyInfo::GetVersion() const
{
    return m_version;
}

void ProxyInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ProxyInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string ProxyInfo::GetProxyId() const
{
    return m_proxyId;
}

void ProxyInfo::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool ProxyInfo::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

int64_t ProxyInfo::GetScalarable() const
{
    return m_scalarable;
}

void ProxyInfo::SetScalarable(const int64_t& _scalarable)
{
    m_scalarable = _scalarable;
    m_scalarableHasBeenSet = true;
}

bool ProxyInfo::ScalarableHasBeenSet() const
{
    return m_scalarableHasBeenSet;
}

vector<string> ProxyInfo::GetSupportProtocols() const
{
    return m_supportProtocols;
}

void ProxyInfo::SetSupportProtocols(const vector<string>& _supportProtocols)
{
    m_supportProtocols = _supportProtocols;
    m_supportProtocolsHasBeenSet = true;
}

bool ProxyInfo::SupportProtocolsHasBeenSet() const
{
    return m_supportProtocolsHasBeenSet;
}

string ProxyInfo::GetGroupId() const
{
    return m_groupId;
}

void ProxyInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ProxyInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ProxyInfo::GetPolicyId() const
{
    return m_policyId;
}

void ProxyInfo::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool ProxyInfo::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

RegionDetail ProxyInfo::GetAccessRegionInfo() const
{
    return m_accessRegionInfo;
}

void ProxyInfo::SetAccessRegionInfo(const RegionDetail& _accessRegionInfo)
{
    m_accessRegionInfo = _accessRegionInfo;
    m_accessRegionInfoHasBeenSet = true;
}

bool ProxyInfo::AccessRegionInfoHasBeenSet() const
{
    return m_accessRegionInfoHasBeenSet;
}

RegionDetail ProxyInfo::GetRealServerRegionInfo() const
{
    return m_realServerRegionInfo;
}

void ProxyInfo::SetRealServerRegionInfo(const RegionDetail& _realServerRegionInfo)
{
    m_realServerRegionInfo = _realServerRegionInfo;
    m_realServerRegionInfoHasBeenSet = true;
}

bool ProxyInfo::RealServerRegionInfoHasBeenSet() const
{
    return m_realServerRegionInfoHasBeenSet;
}

string ProxyInfo::GetForwardIP() const
{
    return m_forwardIP;
}

void ProxyInfo::SetForwardIP(const string& _forwardIP)
{
    m_forwardIP = _forwardIP;
    m_forwardIPHasBeenSet = true;
}

bool ProxyInfo::ForwardIPHasBeenSet() const
{
    return m_forwardIPHasBeenSet;
}

vector<TagPair> ProxyInfo::GetTagSet() const
{
    return m_tagSet;
}

void ProxyInfo::SetTagSet(const vector<TagPair>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool ProxyInfo::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

int64_t ProxyInfo::GetSupportSecurity() const
{
    return m_supportSecurity;
}

void ProxyInfo::SetSupportSecurity(const int64_t& _supportSecurity)
{
    m_supportSecurity = _supportSecurity;
    m_supportSecurityHasBeenSet = true;
}

bool ProxyInfo::SupportSecurityHasBeenSet() const
{
    return m_supportSecurityHasBeenSet;
}

int64_t ProxyInfo::GetBillingType() const
{
    return m_billingType;
}

void ProxyInfo::SetBillingType(const int64_t& _billingType)
{
    m_billingType = _billingType;
    m_billingTypeHasBeenSet = true;
}

bool ProxyInfo::BillingTypeHasBeenSet() const
{
    return m_billingTypeHasBeenSet;
}

vector<string> ProxyInfo::GetRelatedGlobalDomains() const
{
    return m_relatedGlobalDomains;
}

void ProxyInfo::SetRelatedGlobalDomains(const vector<string>& _relatedGlobalDomains)
{
    m_relatedGlobalDomains = _relatedGlobalDomains;
    m_relatedGlobalDomainsHasBeenSet = true;
}

bool ProxyInfo::RelatedGlobalDomainsHasBeenSet() const
{
    return m_relatedGlobalDomainsHasBeenSet;
}

uint64_t ProxyInfo::GetModifyConfigTime() const
{
    return m_modifyConfigTime;
}

void ProxyInfo::SetModifyConfigTime(const uint64_t& _modifyConfigTime)
{
    m_modifyConfigTime = _modifyConfigTime;
    m_modifyConfigTimeHasBeenSet = true;
}

bool ProxyInfo::ModifyConfigTimeHasBeenSet() const
{
    return m_modifyConfigTimeHasBeenSet;
}

uint64_t ProxyInfo::GetProxyType() const
{
    return m_proxyType;
}

void ProxyInfo::SetProxyType(const uint64_t& _proxyType)
{
    m_proxyType = _proxyType;
    m_proxyTypeHasBeenSet = true;
}

bool ProxyInfo::ProxyTypeHasBeenSet() const
{
    return m_proxyTypeHasBeenSet;
}

vector<int64_t> ProxyInfo::GetClientIPMethod() const
{
    return m_clientIPMethod;
}

void ProxyInfo::SetClientIPMethod(const vector<int64_t>& _clientIPMethod)
{
    m_clientIPMethod = _clientIPMethod;
    m_clientIPMethodHasBeenSet = true;
}

bool ProxyInfo::ClientIPMethodHasBeenSet() const
{
    return m_clientIPMethodHasBeenSet;
}

string ProxyInfo::GetIPAddressVersion() const
{
    return m_iPAddressVersion;
}

void ProxyInfo::SetIPAddressVersion(const string& _iPAddressVersion)
{
    m_iPAddressVersion = _iPAddressVersion;
    m_iPAddressVersionHasBeenSet = true;
}

bool ProxyInfo::IPAddressVersionHasBeenSet() const
{
    return m_iPAddressVersionHasBeenSet;
}

string ProxyInfo::GetNetworkType() const
{
    return m_networkType;
}

void ProxyInfo::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool ProxyInfo::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string ProxyInfo::GetPackageType() const
{
    return m_packageType;
}

void ProxyInfo::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool ProxyInfo::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

string ProxyInfo::GetBanStatus() const
{
    return m_banStatus;
}

void ProxyInfo::SetBanStatus(const string& _banStatus)
{
    m_banStatus = _banStatus;
    m_banStatusHasBeenSet = true;
}

bool ProxyInfo::BanStatusHasBeenSet() const
{
    return m_banStatusHasBeenSet;
}

vector<IPDetail> ProxyInfo::GetIPList() const
{
    return m_iPList;
}

void ProxyInfo::SetIPList(const vector<IPDetail>& _iPList)
{
    m_iPList = _iPList;
    m_iPListHasBeenSet = true;
}

bool ProxyInfo::IPListHasBeenSet() const
{
    return m_iPListHasBeenSet;
}

int64_t ProxyInfo::GetHttp3Supported() const
{
    return m_http3Supported;
}

void ProxyInfo::SetHttp3Supported(const int64_t& _http3Supported)
{
    m_http3Supported = _http3Supported;
    m_http3SupportedHasBeenSet = true;
}

bool ProxyInfo::Http3SupportedHasBeenSet() const
{
    return m_http3SupportedHasBeenSet;
}

int64_t ProxyInfo::GetInBanBlacklist() const
{
    return m_inBanBlacklist;
}

void ProxyInfo::SetInBanBlacklist(const int64_t& _inBanBlacklist)
{
    m_inBanBlacklist = _inBanBlacklist;
    m_inBanBlacklistHasBeenSet = true;
}

bool ProxyInfo::InBanBlacklistHasBeenSet() const
{
    return m_inBanBlacklistHasBeenSet;
}

int64_t ProxyInfo::GetFeatureBitmap() const
{
    return m_featureBitmap;
}

void ProxyInfo::SetFeatureBitmap(const int64_t& _featureBitmap)
{
    m_featureBitmap = _featureBitmap;
    m_featureBitmapHasBeenSet = true;
}

bool ProxyInfo::FeatureBitmapHasBeenSet() const
{
    return m_featureBitmapHasBeenSet;
}

int64_t ProxyInfo::GetIsAutoScaleProxy() const
{
    return m_isAutoScaleProxy;
}

void ProxyInfo::SetIsAutoScaleProxy(const int64_t& _isAutoScaleProxy)
{
    m_isAutoScaleProxy = _isAutoScaleProxy;
    m_isAutoScaleProxyHasBeenSet = true;
}

bool ProxyInfo::IsAutoScaleProxyHasBeenSet() const
{
    return m_isAutoScaleProxyHasBeenSet;
}

int64_t ProxyInfo::GetIsSupportTLSChoice() const
{
    return m_isSupportTLSChoice;
}

void ProxyInfo::SetIsSupportTLSChoice(const int64_t& _isSupportTLSChoice)
{
    m_isSupportTLSChoice = _isSupportTLSChoice;
    m_isSupportTLSChoiceHasBeenSet = true;
}

bool ProxyInfo::IsSupportTLSChoiceHasBeenSet() const
{
    return m_isSupportTLSChoiceHasBeenSet;
}

