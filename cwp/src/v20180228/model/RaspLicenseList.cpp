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

#include <tencentcloud/cwp/v20180228/model/RaspLicenseList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RaspLicenseList::RaspLicenseList() :
    m_qUUIDHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_publicIPHasBeenSet(false),
    m_privateIPHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_protectionVersionHasBeenSet(false),
    m_configurationSettingHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_vulDefEnableHasBeenSet(false),
    m_vulDefModeHasBeenSet(false),
    m_vulDefActionHasBeenSet(false),
    m_memShellDefEnableHasBeenSet(false),
    m_safeInjectHasBeenSet(false),
    m_performanceLimitHasBeenSet(false),
    m_performanceLimitCpuHasBeenSet(false),
    m_performanceLimitMemHasBeenSet(false),
    m_performanceLimitMemAmountHasBeenSet(false),
    m_raspExceptionHasBeenSet(false),
    m_latestUpdateTimeHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_orderDetailHasBeenSet(false),
    m_isUnBindHasBeenSet(false),
    m_uUIDHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome RaspLicenseList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QUUID") && !value["QUUID"].IsNull())
    {
        if (!value["QUUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.QUUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qUUID = string(value["QUUID"].GetString());
        m_qUUIDHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("PublicIP") && !value["PublicIP"].IsNull())
    {
        if (!value["PublicIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.PublicIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIP = string(value["PublicIP"].GetString());
        m_publicIPHasBeenSet = true;
    }

    if (value.HasMember("PrivateIP") && !value["PrivateIP"].IsNull())
    {
        if (!value["PrivateIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.PrivateIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIP = string(value["PrivateIP"].GetString());
        m_privateIPHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tags item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("ProtectionVersion") && !value["ProtectionVersion"].IsNull())
    {
        if (!value["ProtectionVersion"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.ProtectionVersion` is not array type"));

        const rapidjson::Value &tmpValue = value["ProtectionVersion"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_protectionVersion.push_back((*itr).GetString());
        }
        m_protectionVersionHasBeenSet = true;
    }

    if (value.HasMember("ConfigurationSetting") && !value["ConfigurationSetting"].IsNull())
    {
        if (!value["ConfigurationSetting"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.ConfigurationSetting` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_configurationSetting = value["ConfigurationSetting"].GetUint64();
        m_configurationSettingHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.Enable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetUint64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("VulDefEnable") && !value["VulDefEnable"].IsNull())
    {
        if (!value["VulDefEnable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.VulDefEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulDefEnable = value["VulDefEnable"].GetUint64();
        m_vulDefEnableHasBeenSet = true;
    }

    if (value.HasMember("VulDefMode") && !value["VulDefMode"].IsNull())
    {
        if (!value["VulDefMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.VulDefMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulDefMode = value["VulDefMode"].GetUint64();
        m_vulDefModeHasBeenSet = true;
    }

    if (value.HasMember("VulDefAction") && !value["VulDefAction"].IsNull())
    {
        if (!value["VulDefAction"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.VulDefAction` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulDefAction = value["VulDefAction"].GetUint64();
        m_vulDefActionHasBeenSet = true;
    }

    if (value.HasMember("MemShellDefEnable") && !value["MemShellDefEnable"].IsNull())
    {
        if (!value["MemShellDefEnable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.MemShellDefEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memShellDefEnable = value["MemShellDefEnable"].GetUint64();
        m_memShellDefEnableHasBeenSet = true;
    }

    if (value.HasMember("SafeInject") && !value["SafeInject"].IsNull())
    {
        if (!value["SafeInject"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.SafeInject` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_safeInject = value["SafeInject"].GetUint64();
        m_safeInjectHasBeenSet = true;
    }

    if (value.HasMember("PerformanceLimit") && !value["PerformanceLimit"].IsNull())
    {
        if (!value["PerformanceLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.PerformanceLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_performanceLimit = value["PerformanceLimit"].GetUint64();
        m_performanceLimitHasBeenSet = true;
    }

    if (value.HasMember("PerformanceLimitCpu") && !value["PerformanceLimitCpu"].IsNull())
    {
        if (!value["PerformanceLimitCpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.PerformanceLimitCpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_performanceLimitCpu = value["PerformanceLimitCpu"].GetUint64();
        m_performanceLimitCpuHasBeenSet = true;
    }

    if (value.HasMember("PerformanceLimitMem") && !value["PerformanceLimitMem"].IsNull())
    {
        if (!value["PerformanceLimitMem"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.PerformanceLimitMem` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_performanceLimitMem = value["PerformanceLimitMem"].GetUint64();
        m_performanceLimitMemHasBeenSet = true;
    }

    if (value.HasMember("PerformanceLimitMemAmount") && !value["PerformanceLimitMemAmount"].IsNull())
    {
        if (!value["PerformanceLimitMemAmount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.PerformanceLimitMemAmount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_performanceLimitMemAmount = value["PerformanceLimitMemAmount"].GetUint64();
        m_performanceLimitMemAmountHasBeenSet = true;
    }

    if (value.HasMember("RaspException") && !value["RaspException"].IsNull())
    {
        if (!value["RaspException"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.RaspException` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_raspException = value["RaspException"].GetUint64();
        m_raspExceptionHasBeenSet = true;
    }

    if (value.HasMember("LatestUpdateTime") && !value["LatestUpdateTime"].IsNull())
    {
        if (!value["LatestUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.LatestUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestUpdateTime = string(value["LatestUpdateTime"].GetString());
        m_latestUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("OrderDetail") && !value["OrderDetail"].IsNull())
    {
        if (!value["OrderDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.OrderDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_orderDetail.Deserialize(value["OrderDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_orderDetailHasBeenSet = true;
    }

    if (value.HasMember("IsUnBind") && !value["IsUnBind"].IsNull())
    {
        if (!value["IsUnBind"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.IsUnBind` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUnBind = value["IsUnBind"].GetBool();
        m_isUnBindHasBeenSet = true;
    }

    if (value.HasMember("UUID") && !value["UUID"].IsNull())
    {
        if (!value["UUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.UUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uUID = string(value["UUID"].GetString());
        m_uUIDHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspLicenseList.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RaspLicenseList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_qUUIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QUUID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qUUID.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIP.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIP.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_protectionVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectionVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_protectionVersion.begin(); itr != m_protectionVersion.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_configurationSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigurationSetting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configurationSetting, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_vulDefEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulDefEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulDefEnable, allocator);
    }

    if (m_vulDefModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulDefMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulDefMode, allocator);
    }

    if (m_vulDefActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulDefAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulDefAction, allocator);
    }

    if (m_memShellDefEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemShellDefEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memShellDefEnable, allocator);
    }

    if (m_safeInjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SafeInject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_safeInject, allocator);
    }

    if (m_performanceLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PerformanceLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_performanceLimit, allocator);
    }

    if (m_performanceLimitCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PerformanceLimitCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_performanceLimitCpu, allocator);
    }

    if (m_performanceLimitMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PerformanceLimitMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_performanceLimitMem, allocator);
    }

    if (m_performanceLimitMemAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PerformanceLimitMemAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_performanceLimitMemAmount, allocator);
    }

    if (m_raspExceptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RaspException";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_raspException, allocator);
    }

    if (m_latestUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_orderDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isUnBindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUnBind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUnBind, allocator);
    }

    if (m_uUIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uUID.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

}


string RaspLicenseList::GetQUUID() const
{
    return m_qUUID;
}

void RaspLicenseList::SetQUUID(const string& _qUUID)
{
    m_qUUID = _qUUID;
    m_qUUIDHasBeenSet = true;
}

bool RaspLicenseList::QUUIDHasBeenSet() const
{
    return m_qUUIDHasBeenSet;
}

string RaspLicenseList::GetInstanceName() const
{
    return m_instanceName;
}

void RaspLicenseList::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool RaspLicenseList::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string RaspLicenseList::GetInstanceId() const
{
    return m_instanceId;
}

void RaspLicenseList::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RaspLicenseList::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RaspLicenseList::GetPublicIP() const
{
    return m_publicIP;
}

void RaspLicenseList::SetPublicIP(const string& _publicIP)
{
    m_publicIP = _publicIP;
    m_publicIPHasBeenSet = true;
}

bool RaspLicenseList::PublicIPHasBeenSet() const
{
    return m_publicIPHasBeenSet;
}

string RaspLicenseList::GetPrivateIP() const
{
    return m_privateIP;
}

void RaspLicenseList::SetPrivateIP(const string& _privateIP)
{
    m_privateIP = _privateIP;
    m_privateIPHasBeenSet = true;
}

bool RaspLicenseList::PrivateIPHasBeenSet() const
{
    return m_privateIPHasBeenSet;
}

vector<Tags> RaspLicenseList::GetTags() const
{
    return m_tags;
}

void RaspLicenseList::SetTags(const vector<Tags>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool RaspLicenseList::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> RaspLicenseList::GetProtectionVersion() const
{
    return m_protectionVersion;
}

void RaspLicenseList::SetProtectionVersion(const vector<string>& _protectionVersion)
{
    m_protectionVersion = _protectionVersion;
    m_protectionVersionHasBeenSet = true;
}

bool RaspLicenseList::ProtectionVersionHasBeenSet() const
{
    return m_protectionVersionHasBeenSet;
}

uint64_t RaspLicenseList::GetConfigurationSetting() const
{
    return m_configurationSetting;
}

void RaspLicenseList::SetConfigurationSetting(const uint64_t& _configurationSetting)
{
    m_configurationSetting = _configurationSetting;
    m_configurationSettingHasBeenSet = true;
}

bool RaspLicenseList::ConfigurationSettingHasBeenSet() const
{
    return m_configurationSettingHasBeenSet;
}

uint64_t RaspLicenseList::GetEnable() const
{
    return m_enable;
}

void RaspLicenseList::SetEnable(const uint64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool RaspLicenseList::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t RaspLicenseList::GetVulDefEnable() const
{
    return m_vulDefEnable;
}

void RaspLicenseList::SetVulDefEnable(const uint64_t& _vulDefEnable)
{
    m_vulDefEnable = _vulDefEnable;
    m_vulDefEnableHasBeenSet = true;
}

bool RaspLicenseList::VulDefEnableHasBeenSet() const
{
    return m_vulDefEnableHasBeenSet;
}

uint64_t RaspLicenseList::GetVulDefMode() const
{
    return m_vulDefMode;
}

void RaspLicenseList::SetVulDefMode(const uint64_t& _vulDefMode)
{
    m_vulDefMode = _vulDefMode;
    m_vulDefModeHasBeenSet = true;
}

bool RaspLicenseList::VulDefModeHasBeenSet() const
{
    return m_vulDefModeHasBeenSet;
}

uint64_t RaspLicenseList::GetVulDefAction() const
{
    return m_vulDefAction;
}

void RaspLicenseList::SetVulDefAction(const uint64_t& _vulDefAction)
{
    m_vulDefAction = _vulDefAction;
    m_vulDefActionHasBeenSet = true;
}

bool RaspLicenseList::VulDefActionHasBeenSet() const
{
    return m_vulDefActionHasBeenSet;
}

uint64_t RaspLicenseList::GetMemShellDefEnable() const
{
    return m_memShellDefEnable;
}

void RaspLicenseList::SetMemShellDefEnable(const uint64_t& _memShellDefEnable)
{
    m_memShellDefEnable = _memShellDefEnable;
    m_memShellDefEnableHasBeenSet = true;
}

bool RaspLicenseList::MemShellDefEnableHasBeenSet() const
{
    return m_memShellDefEnableHasBeenSet;
}

uint64_t RaspLicenseList::GetSafeInject() const
{
    return m_safeInject;
}

void RaspLicenseList::SetSafeInject(const uint64_t& _safeInject)
{
    m_safeInject = _safeInject;
    m_safeInjectHasBeenSet = true;
}

bool RaspLicenseList::SafeInjectHasBeenSet() const
{
    return m_safeInjectHasBeenSet;
}

uint64_t RaspLicenseList::GetPerformanceLimit() const
{
    return m_performanceLimit;
}

void RaspLicenseList::SetPerformanceLimit(const uint64_t& _performanceLimit)
{
    m_performanceLimit = _performanceLimit;
    m_performanceLimitHasBeenSet = true;
}

bool RaspLicenseList::PerformanceLimitHasBeenSet() const
{
    return m_performanceLimitHasBeenSet;
}

uint64_t RaspLicenseList::GetPerformanceLimitCpu() const
{
    return m_performanceLimitCpu;
}

void RaspLicenseList::SetPerformanceLimitCpu(const uint64_t& _performanceLimitCpu)
{
    m_performanceLimitCpu = _performanceLimitCpu;
    m_performanceLimitCpuHasBeenSet = true;
}

bool RaspLicenseList::PerformanceLimitCpuHasBeenSet() const
{
    return m_performanceLimitCpuHasBeenSet;
}

uint64_t RaspLicenseList::GetPerformanceLimitMem() const
{
    return m_performanceLimitMem;
}

void RaspLicenseList::SetPerformanceLimitMem(const uint64_t& _performanceLimitMem)
{
    m_performanceLimitMem = _performanceLimitMem;
    m_performanceLimitMemHasBeenSet = true;
}

bool RaspLicenseList::PerformanceLimitMemHasBeenSet() const
{
    return m_performanceLimitMemHasBeenSet;
}

uint64_t RaspLicenseList::GetPerformanceLimitMemAmount() const
{
    return m_performanceLimitMemAmount;
}

void RaspLicenseList::SetPerformanceLimitMemAmount(const uint64_t& _performanceLimitMemAmount)
{
    m_performanceLimitMemAmount = _performanceLimitMemAmount;
    m_performanceLimitMemAmountHasBeenSet = true;
}

bool RaspLicenseList::PerformanceLimitMemAmountHasBeenSet() const
{
    return m_performanceLimitMemAmountHasBeenSet;
}

uint64_t RaspLicenseList::GetRaspException() const
{
    return m_raspException;
}

void RaspLicenseList::SetRaspException(const uint64_t& _raspException)
{
    m_raspException = _raspException;
    m_raspExceptionHasBeenSet = true;
}

bool RaspLicenseList::RaspExceptionHasBeenSet() const
{
    return m_raspExceptionHasBeenSet;
}

string RaspLicenseList::GetLatestUpdateTime() const
{
    return m_latestUpdateTime;
}

void RaspLicenseList::SetLatestUpdateTime(const string& _latestUpdateTime)
{
    m_latestUpdateTime = _latestUpdateTime;
    m_latestUpdateTimeHasBeenSet = true;
}

bool RaspLicenseList::LatestUpdateTimeHasBeenSet() const
{
    return m_latestUpdateTimeHasBeenSet;
}

string RaspLicenseList::GetClusterName() const
{
    return m_clusterName;
}

void RaspLicenseList::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool RaspLicenseList::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string RaspLicenseList::GetClusterId() const
{
    return m_clusterId;
}

void RaspLicenseList::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RaspLicenseList::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

OrderDetail RaspLicenseList::GetOrderDetail() const
{
    return m_orderDetail;
}

void RaspLicenseList::SetOrderDetail(const OrderDetail& _orderDetail)
{
    m_orderDetail = _orderDetail;
    m_orderDetailHasBeenSet = true;
}

bool RaspLicenseList::OrderDetailHasBeenSet() const
{
    return m_orderDetailHasBeenSet;
}

bool RaspLicenseList::GetIsUnBind() const
{
    return m_isUnBind;
}

void RaspLicenseList::SetIsUnBind(const bool& _isUnBind)
{
    m_isUnBind = _isUnBind;
    m_isUnBindHasBeenSet = true;
}

bool RaspLicenseList::IsUnBindHasBeenSet() const
{
    return m_isUnBindHasBeenSet;
}

string RaspLicenseList::GetUUID() const
{
    return m_uUID;
}

void RaspLicenseList::SetUUID(const string& _uUID)
{
    m_uUID = _uUID;
    m_uUIDHasBeenSet = true;
}

bool RaspLicenseList::UUIDHasBeenSet() const
{
    return m_uUIDHasBeenSet;
}

string RaspLicenseList::GetReason() const
{
    return m_reason;
}

void RaspLicenseList::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool RaspLicenseList::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

