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

#include <tencentcloud/tcb/v20180608/model/GatewayItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

GatewayItem::GatewayItem() :
    m_uinHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_wxAppIdHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_gatewayNameHasBeenSet(false),
    m_gatewayTypeHasBeenSet(false),
    m_gatewayDescHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_packageIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_l5AddrHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_canRenewHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_isolateTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_canDowngradeHasBeenSet(false),
    m_allowUncertifiedHasBeenSet(false),
    m_versionNumLimitHasBeenSet(false),
    m_longAccessIdHasBeenSet(false),
    m_accessDomainHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome GatewayItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("WxAppId") && !value["WxAppId"].IsNull())
    {
        if (!value["WxAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.WxAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wxAppId = string(value["WxAppId"].GetString());
        m_wxAppIdHasBeenSet = true;
    }

    if (value.HasMember("EnvId") && !value["EnvId"].IsNull())
    {
        if (!value["EnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(value["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (value.HasMember("GatewayId") && !value["GatewayId"].IsNull())
    {
        if (!value["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(value["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (value.HasMember("GatewayName") && !value["GatewayName"].IsNull())
    {
        if (!value["GatewayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.GatewayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayName = string(value["GatewayName"].GetString());
        m_gatewayNameHasBeenSet = true;
    }

    if (value.HasMember("GatewayType") && !value["GatewayType"].IsNull())
    {
        if (!value["GatewayType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.GatewayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayType = string(value["GatewayType"].GetString());
        m_gatewayTypeHasBeenSet = true;
    }

    if (value.HasMember("GatewayDesc") && !value["GatewayDesc"].IsNull())
    {
        if (!value["GatewayDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.GatewayDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayDesc = string(value["GatewayDesc"].GetString());
        m_gatewayDescHasBeenSet = true;
    }

    if (value.HasMember("PackageVersion") && !value["PackageVersion"].IsNull())
    {
        if (!value["PackageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.PackageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageVersion = string(value["PackageVersion"].GetString());
        m_packageVersionHasBeenSet = true;
    }

    if (value.HasMember("PackageId") && !value["PackageId"].IsNull())
    {
        if (!value["PackageId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.PackageId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = value["PackageId"].GetUint64();
        m_packageIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetIds") && !value["SubnetIds"].IsNull())
    {
        if (!value["SubnetIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GatewayItem.SubnetIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SubnetIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subnetIds.push_back((*itr).GetString());
        }
        m_subnetIdsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("L5Addr") && !value["L5Addr"].IsNull())
    {
        if (!value["L5Addr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.L5Addr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_l5Addr = string(value["L5Addr"].GetString());
        m_l5AddrHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("CanRenew") && !value["CanRenew"].IsNull())
    {
        if (!value["CanRenew"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.CanRenew` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canRenew = value["CanRenew"].GetBool();
        m_canRenewHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.AutoRenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetUint64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("IsolateTime") && !value["IsolateTime"].IsNull())
    {
        if (!value["IsolateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.IsolateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateTime = string(value["IsolateTime"].GetString());
        m_isolateTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CanDowngrade") && !value["CanDowngrade"].IsNull())
    {
        if (!value["CanDowngrade"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.CanDowngrade` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canDowngrade = value["CanDowngrade"].GetBool();
        m_canDowngradeHasBeenSet = true;
    }

    if (value.HasMember("AllowUncertified") && !value["AllowUncertified"].IsNull())
    {
        if (!value["AllowUncertified"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.AllowUncertified` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allowUncertified = value["AllowUncertified"].GetInt64();
        m_allowUncertifiedHasBeenSet = true;
    }

    if (value.HasMember("VersionNumLimit") && !value["VersionNumLimit"].IsNull())
    {
        if (!value["VersionNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.VersionNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_versionNumLimit = value["VersionNumLimit"].GetInt64();
        m_versionNumLimitHasBeenSet = true;
    }

    if (value.HasMember("LongAccessId") && !value["LongAccessId"].IsNull())
    {
        if (!value["LongAccessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.LongAccessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_longAccessId = string(value["LongAccessId"].GetString());
        m_longAccessIdHasBeenSet = true;
    }

    if (value.HasMember("AccessDomain") && !value["AccessDomain"].IsNull())
    {
        if (!value["AccessDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayItem.AccessDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessDomain = string(value["AccessDomain"].GetString());
        m_accessDomainHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GatewayItem.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
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


    return CoreInternalOutcome(true);
}

void GatewayItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_wxAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wxAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayType.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_packageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageId, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_l5AddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L5Addr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_l5Addr.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_canRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canRenew, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_isolateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_canDowngradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanDowngrade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canDowngrade, allocator);
    }

    if (m_allowUncertifiedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowUncertified";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowUncertified, allocator);
    }

    if (m_versionNumLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionNumLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_versionNumLimit, allocator);
    }

    if (m_longAccessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongAccessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_longAccessId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessDomain.c_str(), allocator).Move(), allocator);
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

}


string GatewayItem::GetUin() const
{
    return m_uin;
}

void GatewayItem::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool GatewayItem::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

uint64_t GatewayItem::GetAppId() const
{
    return m_appId;
}

void GatewayItem::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool GatewayItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string GatewayItem::GetWxAppId() const
{
    return m_wxAppId;
}

void GatewayItem::SetWxAppId(const string& _wxAppId)
{
    m_wxAppId = _wxAppId;
    m_wxAppIdHasBeenSet = true;
}

bool GatewayItem::WxAppIdHasBeenSet() const
{
    return m_wxAppIdHasBeenSet;
}

string GatewayItem::GetEnvId() const
{
    return m_envId;
}

void GatewayItem::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool GatewayItem::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string GatewayItem::GetGatewayId() const
{
    return m_gatewayId;
}

void GatewayItem::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool GatewayItem::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string GatewayItem::GetGatewayName() const
{
    return m_gatewayName;
}

void GatewayItem::SetGatewayName(const string& _gatewayName)
{
    m_gatewayName = _gatewayName;
    m_gatewayNameHasBeenSet = true;
}

bool GatewayItem::GatewayNameHasBeenSet() const
{
    return m_gatewayNameHasBeenSet;
}

string GatewayItem::GetGatewayType() const
{
    return m_gatewayType;
}

void GatewayItem::SetGatewayType(const string& _gatewayType)
{
    m_gatewayType = _gatewayType;
    m_gatewayTypeHasBeenSet = true;
}

bool GatewayItem::GatewayTypeHasBeenSet() const
{
    return m_gatewayTypeHasBeenSet;
}

string GatewayItem::GetGatewayDesc() const
{
    return m_gatewayDesc;
}

void GatewayItem::SetGatewayDesc(const string& _gatewayDesc)
{
    m_gatewayDesc = _gatewayDesc;
    m_gatewayDescHasBeenSet = true;
}

bool GatewayItem::GatewayDescHasBeenSet() const
{
    return m_gatewayDescHasBeenSet;
}

string GatewayItem::GetPackageVersion() const
{
    return m_packageVersion;
}

void GatewayItem::SetPackageVersion(const string& _packageVersion)
{
    m_packageVersion = _packageVersion;
    m_packageVersionHasBeenSet = true;
}

bool GatewayItem::PackageVersionHasBeenSet() const
{
    return m_packageVersionHasBeenSet;
}

uint64_t GatewayItem::GetPackageId() const
{
    return m_packageId;
}

void GatewayItem::SetPackageId(const uint64_t& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool GatewayItem::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

string GatewayItem::GetVpcId() const
{
    return m_vpcId;
}

void GatewayItem::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool GatewayItem::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> GatewayItem::GetSubnetIds() const
{
    return m_subnetIds;
}

void GatewayItem::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool GatewayItem::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

string GatewayItem::GetStatus() const
{
    return m_status;
}

void GatewayItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool GatewayItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string GatewayItem::GetL5Addr() const
{
    return m_l5Addr;
}

void GatewayItem::SetL5Addr(const string& _l5Addr)
{
    m_l5Addr = _l5Addr;
    m_l5AddrHasBeenSet = true;
}

bool GatewayItem::L5AddrHasBeenSet() const
{
    return m_l5AddrHasBeenSet;
}

string GatewayItem::GetRegion() const
{
    return m_region;
}

void GatewayItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool GatewayItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

bool GatewayItem::GetCanRenew() const
{
    return m_canRenew;
}

void GatewayItem::SetCanRenew(const bool& _canRenew)
{
    m_canRenew = _canRenew;
    m_canRenewHasBeenSet = true;
}

bool GatewayItem::CanRenewHasBeenSet() const
{
    return m_canRenewHasBeenSet;
}

uint64_t GatewayItem::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void GatewayItem::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool GatewayItem::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string GatewayItem::GetIsolateTime() const
{
    return m_isolateTime;
}

void GatewayItem::SetIsolateTime(const string& _isolateTime)
{
    m_isolateTime = _isolateTime;
    m_isolateTimeHasBeenSet = true;
}

bool GatewayItem::IsolateTimeHasBeenSet() const
{
    return m_isolateTimeHasBeenSet;
}

string GatewayItem::GetExpireTime() const
{
    return m_expireTime;
}

void GatewayItem::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool GatewayItem::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string GatewayItem::GetCreateTime() const
{
    return m_createTime;
}

void GatewayItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool GatewayItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string GatewayItem::GetUpdateTime() const
{
    return m_updateTime;
}

void GatewayItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool GatewayItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

bool GatewayItem::GetCanDowngrade() const
{
    return m_canDowngrade;
}

void GatewayItem::SetCanDowngrade(const bool& _canDowngrade)
{
    m_canDowngrade = _canDowngrade;
    m_canDowngradeHasBeenSet = true;
}

bool GatewayItem::CanDowngradeHasBeenSet() const
{
    return m_canDowngradeHasBeenSet;
}

int64_t GatewayItem::GetAllowUncertified() const
{
    return m_allowUncertified;
}

void GatewayItem::SetAllowUncertified(const int64_t& _allowUncertified)
{
    m_allowUncertified = _allowUncertified;
    m_allowUncertifiedHasBeenSet = true;
}

bool GatewayItem::AllowUncertifiedHasBeenSet() const
{
    return m_allowUncertifiedHasBeenSet;
}

int64_t GatewayItem::GetVersionNumLimit() const
{
    return m_versionNumLimit;
}

void GatewayItem::SetVersionNumLimit(const int64_t& _versionNumLimit)
{
    m_versionNumLimit = _versionNumLimit;
    m_versionNumLimitHasBeenSet = true;
}

bool GatewayItem::VersionNumLimitHasBeenSet() const
{
    return m_versionNumLimitHasBeenSet;
}

string GatewayItem::GetLongAccessId() const
{
    return m_longAccessId;
}

void GatewayItem::SetLongAccessId(const string& _longAccessId)
{
    m_longAccessId = _longAccessId;
    m_longAccessIdHasBeenSet = true;
}

bool GatewayItem::LongAccessIdHasBeenSet() const
{
    return m_longAccessIdHasBeenSet;
}

string GatewayItem::GetAccessDomain() const
{
    return m_accessDomain;
}

void GatewayItem::SetAccessDomain(const string& _accessDomain)
{
    m_accessDomain = _accessDomain;
    m_accessDomainHasBeenSet = true;
}

bool GatewayItem::AccessDomainHasBeenSet() const
{
    return m_accessDomainHasBeenSet;
}

vector<Tag> GatewayItem::GetTags() const
{
    return m_tags;
}

void GatewayItem::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool GatewayItem::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

