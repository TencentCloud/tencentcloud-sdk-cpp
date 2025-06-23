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

#include <tencentcloud/ioa/v20220601/model/DeviceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DeviceDetail::DeviceDetail() :
    m_idHasBeenSet(false),
    m_midHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_osTypeHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_onlineStatusHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_strVersionHasBeenSet(false),
    m_itimeHasBeenSet(false),
    m_connActiveTimeHasBeenSet(false),
    m_lockedHasBeenSet(false),
    m_localIpListHasBeenSet(false),
    m_hostIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupNamePathHasBeenSet(false),
    m_criticalVulListCountHasBeenSet(false),
    m_osHasBeenSet(false),
    m_osBitsHasBeenSet(false),
    m_osVersionHasBeenSet(false),
    m_osLanguageHasBeenSet(false),
    m_osInstallDateHasBeenSet(false),
    m_computerNameHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_macAddrHasBeenSet(false),
    m_vulCountHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_virusVerHasBeenSet(false),
    m_vulVersionHasBeenSet(false),
    m_sysRepVersionHasBeenSet(false),
    m_vulCriticalListHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_firewallStatusHasBeenSet(false),
    m_serialNumHasBeenSet(false),
    m_deviceStrategyVerHasBeenSet(false),
    m_nGNStrategyVerHasBeenSet(false),
    m_iOAUserNameHasBeenSet(false),
    m_deviceNewStrategyVerHasBeenSet(false),
    m_nGNNewStrategyVerHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_baseBoardSnHasBeenSet(false),
    m_accountUsersHasBeenSet(false),
    m_identityStrategyVerHasBeenSet(false),
    m_identityNewStrategyVerHasBeenSet(false),
    m_accountGroupNameHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_accountGroupIdHasBeenSet(false),
    m_remarkNameHasBeenSet(false)
{
}

CoreInternalOutcome DeviceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Mid") && !value["Mid"].IsNull())
    {
        if (!value["Mid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.Mid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mid = string(value["Mid"].GetString());
        m_midHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.GroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetInt64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("OsType") && !value["OsType"].IsNull())
    {
        if (!value["OsType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.OsType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_osType = value["OsType"].GetInt64();
        m_osTypeHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("OnlineStatus") && !value["OnlineStatus"].IsNull())
    {
        if (!value["OnlineStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.OnlineStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_onlineStatus = value["OnlineStatus"].GetInt64();
        m_onlineStatusHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("StrVersion") && !value["StrVersion"].IsNull())
    {
        if (!value["StrVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.StrVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strVersion = string(value["StrVersion"].GetString());
        m_strVersionHasBeenSet = true;
    }

    if (value.HasMember("Itime") && !value["Itime"].IsNull())
    {
        if (!value["Itime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.Itime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itime = string(value["Itime"].GetString());
        m_itimeHasBeenSet = true;
    }

    if (value.HasMember("ConnActiveTime") && !value["ConnActiveTime"].IsNull())
    {
        if (!value["ConnActiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.ConnActiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connActiveTime = string(value["ConnActiveTime"].GetString());
        m_connActiveTimeHasBeenSet = true;
    }

    if (value.HasMember("Locked") && !value["Locked"].IsNull())
    {
        if (!value["Locked"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.Locked` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_locked = value["Locked"].GetInt64();
        m_lockedHasBeenSet = true;
    }

    if (value.HasMember("LocalIpList") && !value["LocalIpList"].IsNull())
    {
        if (!value["LocalIpList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.LocalIpList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localIpList = string(value["LocalIpList"].GetString());
        m_localIpListHasBeenSet = true;
    }

    if (value.HasMember("HostId") && !value["HostId"].IsNull())
    {
        if (!value["HostId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.HostId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostId = value["HostId"].GetInt64();
        m_hostIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("GroupNamePath") && !value["GroupNamePath"].IsNull())
    {
        if (!value["GroupNamePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.GroupNamePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupNamePath = string(value["GroupNamePath"].GetString());
        m_groupNamePathHasBeenSet = true;
    }

    if (value.HasMember("CriticalVulListCount") && !value["CriticalVulListCount"].IsNull())
    {
        if (!value["CriticalVulListCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.CriticalVulListCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_criticalVulListCount = value["CriticalVulListCount"].GetInt64();
        m_criticalVulListCountHasBeenSet = true;
    }

    if (value.HasMember("Os") && !value["Os"].IsNull())
    {
        if (!value["Os"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.Os` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_os = string(value["Os"].GetString());
        m_osHasBeenSet = true;
    }

    if (value.HasMember("OsBits") && !value["OsBits"].IsNull())
    {
        if (!value["OsBits"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.OsBits` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_osBits = value["OsBits"].GetInt64();
        m_osBitsHasBeenSet = true;
    }

    if (value.HasMember("OsVersion") && !value["OsVersion"].IsNull())
    {
        if (!value["OsVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.OsVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osVersion = string(value["OsVersion"].GetString());
        m_osVersionHasBeenSet = true;
    }

    if (value.HasMember("OsLanguage") && !value["OsLanguage"].IsNull())
    {
        if (!value["OsLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.OsLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osLanguage = string(value["OsLanguage"].GetString());
        m_osLanguageHasBeenSet = true;
    }

    if (value.HasMember("OsInstallDate") && !value["OsInstallDate"].IsNull())
    {
        if (!value["OsInstallDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.OsInstallDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osInstallDate = string(value["OsInstallDate"].GetString());
        m_osInstallDateHasBeenSet = true;
    }

    if (value.HasMember("ComputerName") && !value["ComputerName"].IsNull())
    {
        if (!value["ComputerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.ComputerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computerName = string(value["ComputerName"].GetString());
        m_computerNameHasBeenSet = true;
    }

    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("MacAddr") && !value["MacAddr"].IsNull())
    {
        if (!value["MacAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.MacAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_macAddr = string(value["MacAddr"].GetString());
        m_macAddrHasBeenSet = true;
    }

    if (value.HasMember("VulCount") && !value["VulCount"].IsNull())
    {
        if (!value["VulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.VulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulCount = value["VulCount"].GetInt64();
        m_vulCountHasBeenSet = true;
    }

    if (value.HasMember("RiskCount") && !value["RiskCount"].IsNull())
    {
        if (!value["RiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.RiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCount = value["RiskCount"].GetInt64();
        m_riskCountHasBeenSet = true;
    }

    if (value.HasMember("VirusVer") && !value["VirusVer"].IsNull())
    {
        if (!value["VirusVer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.VirusVer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virusVer = string(value["VirusVer"].GetString());
        m_virusVerHasBeenSet = true;
    }

    if (value.HasMember("VulVersion") && !value["VulVersion"].IsNull())
    {
        if (!value["VulVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.VulVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulVersion = string(value["VulVersion"].GetString());
        m_vulVersionHasBeenSet = true;
    }

    if (value.HasMember("SysRepVersion") && !value["SysRepVersion"].IsNull())
    {
        if (!value["SysRepVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.SysRepVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sysRepVersion = string(value["SysRepVersion"].GetString());
        m_sysRepVersionHasBeenSet = true;
    }

    if (value.HasMember("VulCriticalList") && !value["VulCriticalList"].IsNull())
    {
        if (!value["VulCriticalList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.VulCriticalList` is not array type"));

        const rapidjson::Value &tmpValue = value["VulCriticalList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vulCriticalList.push_back((*itr).GetString());
        }
        m_vulCriticalListHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.Tags` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tags = string(value["Tags"].GetString());
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("FirewallStatus") && !value["FirewallStatus"].IsNull())
    {
        if (!value["FirewallStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.FirewallStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_firewallStatus = value["FirewallStatus"].GetInt64();
        m_firewallStatusHasBeenSet = true;
    }

    if (value.HasMember("SerialNum") && !value["SerialNum"].IsNull())
    {
        if (!value["SerialNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.SerialNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNum = string(value["SerialNum"].GetString());
        m_serialNumHasBeenSet = true;
    }

    if (value.HasMember("DeviceStrategyVer") && !value["DeviceStrategyVer"].IsNull())
    {
        if (!value["DeviceStrategyVer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.DeviceStrategyVer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceStrategyVer = string(value["DeviceStrategyVer"].GetString());
        m_deviceStrategyVerHasBeenSet = true;
    }

    if (value.HasMember("NGNStrategyVer") && !value["NGNStrategyVer"].IsNull())
    {
        if (!value["NGNStrategyVer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.NGNStrategyVer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nGNStrategyVer = string(value["NGNStrategyVer"].GetString());
        m_nGNStrategyVerHasBeenSet = true;
    }

    if (value.HasMember("IOAUserName") && !value["IOAUserName"].IsNull())
    {
        if (!value["IOAUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.IOAUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iOAUserName = string(value["IOAUserName"].GetString());
        m_iOAUserNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceNewStrategyVer") && !value["DeviceNewStrategyVer"].IsNull())
    {
        if (!value["DeviceNewStrategyVer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.DeviceNewStrategyVer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceNewStrategyVer = string(value["DeviceNewStrategyVer"].GetString());
        m_deviceNewStrategyVerHasBeenSet = true;
    }

    if (value.HasMember("NGNNewStrategyVer") && !value["NGNNewStrategyVer"].IsNull())
    {
        if (!value["NGNNewStrategyVer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.NGNNewStrategyVer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nGNNewStrategyVer = string(value["NGNNewStrategyVer"].GetString());
        m_nGNNewStrategyVerHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("BaseBoardSn") && !value["BaseBoardSn"].IsNull())
    {
        if (!value["BaseBoardSn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.BaseBoardSn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baseBoardSn = string(value["BaseBoardSn"].GetString());
        m_baseBoardSnHasBeenSet = true;
    }

    if (value.HasMember("AccountUsers") && !value["AccountUsers"].IsNull())
    {
        if (!value["AccountUsers"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.AccountUsers` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountUsers = string(value["AccountUsers"].GetString());
        m_accountUsersHasBeenSet = true;
    }

    if (value.HasMember("IdentityStrategyVer") && !value["IdentityStrategyVer"].IsNull())
    {
        if (!value["IdentityStrategyVer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.IdentityStrategyVer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityStrategyVer = string(value["IdentityStrategyVer"].GetString());
        m_identityStrategyVerHasBeenSet = true;
    }

    if (value.HasMember("IdentityNewStrategyVer") && !value["IdentityNewStrategyVer"].IsNull())
    {
        if (!value["IdentityNewStrategyVer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.IdentityNewStrategyVer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityNewStrategyVer = string(value["IdentityNewStrategyVer"].GetString());
        m_identityNewStrategyVerHasBeenSet = true;
    }

    if (value.HasMember("AccountGroupName") && !value["AccountGroupName"].IsNull())
    {
        if (!value["AccountGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.AccountGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountGroupName = string(value["AccountGroupName"].GetString());
        m_accountGroupNameHasBeenSet = true;
    }

    if (value.HasMember("AccountName") && !value["AccountName"].IsNull())
    {
        if (!value["AccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.AccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountName = string(value["AccountName"].GetString());
        m_accountNameHasBeenSet = true;
    }

    if (value.HasMember("AccountGroupId") && !value["AccountGroupId"].IsNull())
    {
        if (!value["AccountGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.AccountGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountGroupId = value["AccountGroupId"].GetInt64();
        m_accountGroupIdHasBeenSet = true;
    }

    if (value.HasMember("RemarkName") && !value["RemarkName"].IsNull())
    {
        if (!value["RemarkName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetail.RemarkName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remarkName = string(value["RemarkName"].GetString());
        m_remarkNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_midHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mid.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_osType, allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_onlineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlineStatus, allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_strVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_itimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Itime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itime.c_str(), allocator).Move(), allocator);
    }

    if (m_connActiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnActiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connActiveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lockedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Locked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_locked, allocator);
    }

    if (m_localIpListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalIpList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localIpList.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostId, allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNamePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupNamePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupNamePath.c_str(), allocator).Move(), allocator);
    }

    if (m_criticalVulListCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalVulListCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_criticalVulListCount, allocator);
    }

    if (m_osHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Os";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_os.c_str(), allocator).Move(), allocator);
    }

    if (m_osBitsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsBits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_osBits, allocator);
    }

    if (m_osVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_osLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_osInstallDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsInstallDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osInstallDate.c_str(), allocator).Move(), allocator);
    }

    if (m_computerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computerName.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_macAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MacAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_macAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_vulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulCount, allocator);
    }

    if (m_riskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCount, allocator);
    }

    if (m_virusVerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusVer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virusVer.c_str(), allocator).Move(), allocator);
    }

    if (m_vulVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_sysRepVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SysRepVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sysRepVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_vulCriticalListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCriticalList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vulCriticalList.begin(); itr != m_vulCriticalList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tags.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_firewallStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirewallStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firewallStatus, allocator);
    }

    if (m_serialNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNum.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceStrategyVerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceStrategyVer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceStrategyVer.c_str(), allocator).Move(), allocator);
    }

    if (m_nGNStrategyVerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NGNStrategyVer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nGNStrategyVer.c_str(), allocator).Move(), allocator);
    }

    if (m_iOAUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IOAUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iOAUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNewStrategyVerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceNewStrategyVer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceNewStrategyVer.c_str(), allocator).Move(), allocator);
    }

    if (m_nGNNewStrategyVerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NGNNewStrategyVer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nGNNewStrategyVer.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_baseBoardSnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseBoardSn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baseBoardSn.c_str(), allocator).Move(), allocator);
    }

    if (m_accountUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountUsers.c_str(), allocator).Move(), allocator);
    }

    if (m_identityStrategyVerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityStrategyVer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identityStrategyVer.c_str(), allocator).Move(), allocator);
    }

    if (m_identityNewStrategyVerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityNewStrategyVer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identityNewStrategyVer.c_str(), allocator).Move(), allocator);
    }

    if (m_accountGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_accountGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountGroupId, allocator);
    }

    if (m_remarkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemarkName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remarkName.c_str(), allocator).Move(), allocator);
    }

}


int64_t DeviceDetail::GetId() const
{
    return m_id;
}

void DeviceDetail::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DeviceDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DeviceDetail::GetMid() const
{
    return m_mid;
}

void DeviceDetail::SetMid(const string& _mid)
{
    m_mid = _mid;
    m_midHasBeenSet = true;
}

bool DeviceDetail::MidHasBeenSet() const
{
    return m_midHasBeenSet;
}

string DeviceDetail::GetName() const
{
    return m_name;
}

void DeviceDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DeviceDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DeviceDetail::GetGroupId() const
{
    return m_groupId;
}

void DeviceDetail::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DeviceDetail::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t DeviceDetail::GetOsType() const
{
    return m_osType;
}

void DeviceDetail::SetOsType(const int64_t& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool DeviceDetail::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

string DeviceDetail::GetIp() const
{
    return m_ip;
}

void DeviceDetail::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DeviceDetail::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t DeviceDetail::GetOnlineStatus() const
{
    return m_onlineStatus;
}

void DeviceDetail::SetOnlineStatus(const int64_t& _onlineStatus)
{
    m_onlineStatus = _onlineStatus;
    m_onlineStatusHasBeenSet = true;
}

bool DeviceDetail::OnlineStatusHasBeenSet() const
{
    return m_onlineStatusHasBeenSet;
}

string DeviceDetail::GetVersion() const
{
    return m_version;
}

void DeviceDetail::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool DeviceDetail::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string DeviceDetail::GetStrVersion() const
{
    return m_strVersion;
}

void DeviceDetail::SetStrVersion(const string& _strVersion)
{
    m_strVersion = _strVersion;
    m_strVersionHasBeenSet = true;
}

bool DeviceDetail::StrVersionHasBeenSet() const
{
    return m_strVersionHasBeenSet;
}

string DeviceDetail::GetItime() const
{
    return m_itime;
}

void DeviceDetail::SetItime(const string& _itime)
{
    m_itime = _itime;
    m_itimeHasBeenSet = true;
}

bool DeviceDetail::ItimeHasBeenSet() const
{
    return m_itimeHasBeenSet;
}

string DeviceDetail::GetConnActiveTime() const
{
    return m_connActiveTime;
}

void DeviceDetail::SetConnActiveTime(const string& _connActiveTime)
{
    m_connActiveTime = _connActiveTime;
    m_connActiveTimeHasBeenSet = true;
}

bool DeviceDetail::ConnActiveTimeHasBeenSet() const
{
    return m_connActiveTimeHasBeenSet;
}

int64_t DeviceDetail::GetLocked() const
{
    return m_locked;
}

void DeviceDetail::SetLocked(const int64_t& _locked)
{
    m_locked = _locked;
    m_lockedHasBeenSet = true;
}

bool DeviceDetail::LockedHasBeenSet() const
{
    return m_lockedHasBeenSet;
}

string DeviceDetail::GetLocalIpList() const
{
    return m_localIpList;
}

void DeviceDetail::SetLocalIpList(const string& _localIpList)
{
    m_localIpList = _localIpList;
    m_localIpListHasBeenSet = true;
}

bool DeviceDetail::LocalIpListHasBeenSet() const
{
    return m_localIpListHasBeenSet;
}

int64_t DeviceDetail::GetHostId() const
{
    return m_hostId;
}

void DeviceDetail::SetHostId(const int64_t& _hostId)
{
    m_hostId = _hostId;
    m_hostIdHasBeenSet = true;
}

bool DeviceDetail::HostIdHasBeenSet() const
{
    return m_hostIdHasBeenSet;
}

string DeviceDetail::GetGroupName() const
{
    return m_groupName;
}

void DeviceDetail::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DeviceDetail::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string DeviceDetail::GetGroupNamePath() const
{
    return m_groupNamePath;
}

void DeviceDetail::SetGroupNamePath(const string& _groupNamePath)
{
    m_groupNamePath = _groupNamePath;
    m_groupNamePathHasBeenSet = true;
}

bool DeviceDetail::GroupNamePathHasBeenSet() const
{
    return m_groupNamePathHasBeenSet;
}

int64_t DeviceDetail::GetCriticalVulListCount() const
{
    return m_criticalVulListCount;
}

void DeviceDetail::SetCriticalVulListCount(const int64_t& _criticalVulListCount)
{
    m_criticalVulListCount = _criticalVulListCount;
    m_criticalVulListCountHasBeenSet = true;
}

bool DeviceDetail::CriticalVulListCountHasBeenSet() const
{
    return m_criticalVulListCountHasBeenSet;
}

string DeviceDetail::GetOs() const
{
    return m_os;
}

void DeviceDetail::SetOs(const string& _os)
{
    m_os = _os;
    m_osHasBeenSet = true;
}

bool DeviceDetail::OsHasBeenSet() const
{
    return m_osHasBeenSet;
}

int64_t DeviceDetail::GetOsBits() const
{
    return m_osBits;
}

void DeviceDetail::SetOsBits(const int64_t& _osBits)
{
    m_osBits = _osBits;
    m_osBitsHasBeenSet = true;
}

bool DeviceDetail::OsBitsHasBeenSet() const
{
    return m_osBitsHasBeenSet;
}

string DeviceDetail::GetOsVersion() const
{
    return m_osVersion;
}

void DeviceDetail::SetOsVersion(const string& _osVersion)
{
    m_osVersion = _osVersion;
    m_osVersionHasBeenSet = true;
}

bool DeviceDetail::OsVersionHasBeenSet() const
{
    return m_osVersionHasBeenSet;
}

string DeviceDetail::GetOsLanguage() const
{
    return m_osLanguage;
}

void DeviceDetail::SetOsLanguage(const string& _osLanguage)
{
    m_osLanguage = _osLanguage;
    m_osLanguageHasBeenSet = true;
}

bool DeviceDetail::OsLanguageHasBeenSet() const
{
    return m_osLanguageHasBeenSet;
}

string DeviceDetail::GetOsInstallDate() const
{
    return m_osInstallDate;
}

void DeviceDetail::SetOsInstallDate(const string& _osInstallDate)
{
    m_osInstallDate = _osInstallDate;
    m_osInstallDateHasBeenSet = true;
}

bool DeviceDetail::OsInstallDateHasBeenSet() const
{
    return m_osInstallDateHasBeenSet;
}

string DeviceDetail::GetComputerName() const
{
    return m_computerName;
}

void DeviceDetail::SetComputerName(const string& _computerName)
{
    m_computerName = _computerName;
    m_computerNameHasBeenSet = true;
}

bool DeviceDetail::ComputerNameHasBeenSet() const
{
    return m_computerNameHasBeenSet;
}

string DeviceDetail::GetDomainName() const
{
    return m_domainName;
}

void DeviceDetail::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool DeviceDetail::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string DeviceDetail::GetMacAddr() const
{
    return m_macAddr;
}

void DeviceDetail::SetMacAddr(const string& _macAddr)
{
    m_macAddr = _macAddr;
    m_macAddrHasBeenSet = true;
}

bool DeviceDetail::MacAddrHasBeenSet() const
{
    return m_macAddrHasBeenSet;
}

int64_t DeviceDetail::GetVulCount() const
{
    return m_vulCount;
}

void DeviceDetail::SetVulCount(const int64_t& _vulCount)
{
    m_vulCount = _vulCount;
    m_vulCountHasBeenSet = true;
}

bool DeviceDetail::VulCountHasBeenSet() const
{
    return m_vulCountHasBeenSet;
}

int64_t DeviceDetail::GetRiskCount() const
{
    return m_riskCount;
}

void DeviceDetail::SetRiskCount(const int64_t& _riskCount)
{
    m_riskCount = _riskCount;
    m_riskCountHasBeenSet = true;
}

bool DeviceDetail::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

string DeviceDetail::GetVirusVer() const
{
    return m_virusVer;
}

void DeviceDetail::SetVirusVer(const string& _virusVer)
{
    m_virusVer = _virusVer;
    m_virusVerHasBeenSet = true;
}

bool DeviceDetail::VirusVerHasBeenSet() const
{
    return m_virusVerHasBeenSet;
}

string DeviceDetail::GetVulVersion() const
{
    return m_vulVersion;
}

void DeviceDetail::SetVulVersion(const string& _vulVersion)
{
    m_vulVersion = _vulVersion;
    m_vulVersionHasBeenSet = true;
}

bool DeviceDetail::VulVersionHasBeenSet() const
{
    return m_vulVersionHasBeenSet;
}

string DeviceDetail::GetSysRepVersion() const
{
    return m_sysRepVersion;
}

void DeviceDetail::SetSysRepVersion(const string& _sysRepVersion)
{
    m_sysRepVersion = _sysRepVersion;
    m_sysRepVersionHasBeenSet = true;
}

bool DeviceDetail::SysRepVersionHasBeenSet() const
{
    return m_sysRepVersionHasBeenSet;
}

vector<string> DeviceDetail::GetVulCriticalList() const
{
    return m_vulCriticalList;
}

void DeviceDetail::SetVulCriticalList(const vector<string>& _vulCriticalList)
{
    m_vulCriticalList = _vulCriticalList;
    m_vulCriticalListHasBeenSet = true;
}

bool DeviceDetail::VulCriticalListHasBeenSet() const
{
    return m_vulCriticalListHasBeenSet;
}

string DeviceDetail::GetTags() const
{
    return m_tags;
}

void DeviceDetail::SetTags(const string& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DeviceDetail::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string DeviceDetail::GetUserName() const
{
    return m_userName;
}

void DeviceDetail::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DeviceDetail::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

int64_t DeviceDetail::GetFirewallStatus() const
{
    return m_firewallStatus;
}

void DeviceDetail::SetFirewallStatus(const int64_t& _firewallStatus)
{
    m_firewallStatus = _firewallStatus;
    m_firewallStatusHasBeenSet = true;
}

bool DeviceDetail::FirewallStatusHasBeenSet() const
{
    return m_firewallStatusHasBeenSet;
}

string DeviceDetail::GetSerialNum() const
{
    return m_serialNum;
}

void DeviceDetail::SetSerialNum(const string& _serialNum)
{
    m_serialNum = _serialNum;
    m_serialNumHasBeenSet = true;
}

bool DeviceDetail::SerialNumHasBeenSet() const
{
    return m_serialNumHasBeenSet;
}

string DeviceDetail::GetDeviceStrategyVer() const
{
    return m_deviceStrategyVer;
}

void DeviceDetail::SetDeviceStrategyVer(const string& _deviceStrategyVer)
{
    m_deviceStrategyVer = _deviceStrategyVer;
    m_deviceStrategyVerHasBeenSet = true;
}

bool DeviceDetail::DeviceStrategyVerHasBeenSet() const
{
    return m_deviceStrategyVerHasBeenSet;
}

string DeviceDetail::GetNGNStrategyVer() const
{
    return m_nGNStrategyVer;
}

void DeviceDetail::SetNGNStrategyVer(const string& _nGNStrategyVer)
{
    m_nGNStrategyVer = _nGNStrategyVer;
    m_nGNStrategyVerHasBeenSet = true;
}

bool DeviceDetail::NGNStrategyVerHasBeenSet() const
{
    return m_nGNStrategyVerHasBeenSet;
}

string DeviceDetail::GetIOAUserName() const
{
    return m_iOAUserName;
}

void DeviceDetail::SetIOAUserName(const string& _iOAUserName)
{
    m_iOAUserName = _iOAUserName;
    m_iOAUserNameHasBeenSet = true;
}

bool DeviceDetail::IOAUserNameHasBeenSet() const
{
    return m_iOAUserNameHasBeenSet;
}

string DeviceDetail::GetDeviceNewStrategyVer() const
{
    return m_deviceNewStrategyVer;
}

void DeviceDetail::SetDeviceNewStrategyVer(const string& _deviceNewStrategyVer)
{
    m_deviceNewStrategyVer = _deviceNewStrategyVer;
    m_deviceNewStrategyVerHasBeenSet = true;
}

bool DeviceDetail::DeviceNewStrategyVerHasBeenSet() const
{
    return m_deviceNewStrategyVerHasBeenSet;
}

string DeviceDetail::GetNGNNewStrategyVer() const
{
    return m_nGNNewStrategyVer;
}

void DeviceDetail::SetNGNNewStrategyVer(const string& _nGNNewStrategyVer)
{
    m_nGNNewStrategyVer = _nGNNewStrategyVer;
    m_nGNNewStrategyVerHasBeenSet = true;
}

bool DeviceDetail::NGNNewStrategyVerHasBeenSet() const
{
    return m_nGNNewStrategyVerHasBeenSet;
}

string DeviceDetail::GetHostName() const
{
    return m_hostName;
}

void DeviceDetail::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool DeviceDetail::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string DeviceDetail::GetBaseBoardSn() const
{
    return m_baseBoardSn;
}

void DeviceDetail::SetBaseBoardSn(const string& _baseBoardSn)
{
    m_baseBoardSn = _baseBoardSn;
    m_baseBoardSnHasBeenSet = true;
}

bool DeviceDetail::BaseBoardSnHasBeenSet() const
{
    return m_baseBoardSnHasBeenSet;
}

string DeviceDetail::GetAccountUsers() const
{
    return m_accountUsers;
}

void DeviceDetail::SetAccountUsers(const string& _accountUsers)
{
    m_accountUsers = _accountUsers;
    m_accountUsersHasBeenSet = true;
}

bool DeviceDetail::AccountUsersHasBeenSet() const
{
    return m_accountUsersHasBeenSet;
}

string DeviceDetail::GetIdentityStrategyVer() const
{
    return m_identityStrategyVer;
}

void DeviceDetail::SetIdentityStrategyVer(const string& _identityStrategyVer)
{
    m_identityStrategyVer = _identityStrategyVer;
    m_identityStrategyVerHasBeenSet = true;
}

bool DeviceDetail::IdentityStrategyVerHasBeenSet() const
{
    return m_identityStrategyVerHasBeenSet;
}

string DeviceDetail::GetIdentityNewStrategyVer() const
{
    return m_identityNewStrategyVer;
}

void DeviceDetail::SetIdentityNewStrategyVer(const string& _identityNewStrategyVer)
{
    m_identityNewStrategyVer = _identityNewStrategyVer;
    m_identityNewStrategyVerHasBeenSet = true;
}

bool DeviceDetail::IdentityNewStrategyVerHasBeenSet() const
{
    return m_identityNewStrategyVerHasBeenSet;
}

string DeviceDetail::GetAccountGroupName() const
{
    return m_accountGroupName;
}

void DeviceDetail::SetAccountGroupName(const string& _accountGroupName)
{
    m_accountGroupName = _accountGroupName;
    m_accountGroupNameHasBeenSet = true;
}

bool DeviceDetail::AccountGroupNameHasBeenSet() const
{
    return m_accountGroupNameHasBeenSet;
}

string DeviceDetail::GetAccountName() const
{
    return m_accountName;
}

void DeviceDetail::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool DeviceDetail::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

int64_t DeviceDetail::GetAccountGroupId() const
{
    return m_accountGroupId;
}

void DeviceDetail::SetAccountGroupId(const int64_t& _accountGroupId)
{
    m_accountGroupId = _accountGroupId;
    m_accountGroupIdHasBeenSet = true;
}

bool DeviceDetail::AccountGroupIdHasBeenSet() const
{
    return m_accountGroupIdHasBeenSet;
}

string DeviceDetail::GetRemarkName() const
{
    return m_remarkName;
}

void DeviceDetail::SetRemarkName(const string& _remarkName)
{
    m_remarkName = _remarkName;
    m_remarkNameHasBeenSet = true;
}

bool DeviceDetail::RemarkNameHasBeenSet() const
{
    return m_remarkNameHasBeenSet;
}

