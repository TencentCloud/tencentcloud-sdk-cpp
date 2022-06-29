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

#include <tencentcloud/waf/v20180125/model/InstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

InstanceInfo::InstanceInfo() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_validTimeHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_domainCountHasBeenSet(false),
    m_subDomainLimitHasBeenSet(false),
    m_mainDomainCountHasBeenSet(false),
    m_mainDomainLimitHasBeenSet(false),
    m_maxQPSHasBeenSet(false),
    m_qPSHasBeenSet(false),
    m_domainPkgHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_fraudPkgHasBeenSet(false),
    m_botPkgHasBeenSet(false)
{
}

CoreInternalOutcome InstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceIds") && !value["ResourceIds"].IsNull())
    {
        if (!value["ResourceIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ResourceIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceIds = string(value["ResourceIds"].GetString());
        m_resourceIdsHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.PayMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetUint64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.RenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetUint64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Mode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = value["Mode"].GetUint64();
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("ValidTime") && !value["ValidTime"].IsNull())
    {
        if (!value["ValidTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ValidTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validTime = string(value["ValidTime"].GetString());
        m_validTimeHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("DomainCount") && !value["DomainCount"].IsNull())
    {
        if (!value["DomainCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DomainCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_domainCount = value["DomainCount"].GetUint64();
        m_domainCountHasBeenSet = true;
    }

    if (value.HasMember("SubDomainLimit") && !value["SubDomainLimit"].IsNull())
    {
        if (!value["SubDomainLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SubDomainLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subDomainLimit = value["SubDomainLimit"].GetUint64();
        m_subDomainLimitHasBeenSet = true;
    }

    if (value.HasMember("MainDomainCount") && !value["MainDomainCount"].IsNull())
    {
        if (!value["MainDomainCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MainDomainCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mainDomainCount = value["MainDomainCount"].GetUint64();
        m_mainDomainCountHasBeenSet = true;
    }

    if (value.HasMember("MainDomainLimit") && !value["MainDomainLimit"].IsNull())
    {
        if (!value["MainDomainLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MainDomainLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mainDomainLimit = value["MainDomainLimit"].GetUint64();
        m_mainDomainLimitHasBeenSet = true;
    }

    if (value.HasMember("MaxQPS") && !value["MaxQPS"].IsNull())
    {
        if (!value["MaxQPS"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MaxQPS` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxQPS = value["MaxQPS"].GetUint64();
        m_maxQPSHasBeenSet = true;
    }

    if (value.HasMember("QPS") && !value["QPS"].IsNull())
    {
        if (!value["QPS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.QPS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_qPS.Deserialize(value["QPS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_qPSHasBeenSet = true;
    }

    if (value.HasMember("DomainPkg") && !value["DomainPkg"].IsNull())
    {
        if (!value["DomainPkg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DomainPkg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_domainPkg.Deserialize(value["DomainPkg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_domainPkgHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Edition") && !value["Edition"].IsNull())
    {
        if (!value["Edition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Edition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edition = string(value["Edition"].GetString());
        m_editionHasBeenSet = true;
    }

    if (value.HasMember("FraudPkg") && !value["FraudPkg"].IsNull())
    {
        if (!value["FraudPkg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.FraudPkg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fraudPkg.Deserialize(value["FraudPkg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fraudPkgHasBeenSet = true;
    }

    if (value.HasMember("BotPkg") && !value["BotPkg"].IsNull())
    {
        if (!value["BotPkg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.BotPkg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_botPkg.Deserialize(value["BotPkg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_botPkgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceIds.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_validTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validTime.c_str(), allocator).Move(), allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_domainCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainCount, allocator);
    }

    if (m_subDomainLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDomainLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subDomainLimit, allocator);
    }

    if (m_mainDomainCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainDomainCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mainDomainCount, allocator);
    }

    if (m_mainDomainLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainDomainLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mainDomainLimit, allocator);
    }

    if (m_maxQPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxQPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxQPS, allocator);
    }

    if (m_qPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qPS.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_domainPkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_domainPkg.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_editionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edition.c_str(), allocator).Move(), allocator);
    }

    if (m_fraudPkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FraudPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fraudPkg.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_botPkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_botPkg.ToJsonObject(value[key.c_str()], allocator);
    }

}


string InstanceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceInfo::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string InstanceInfo::GetResourceIds() const
{
    return m_resourceIds;
}

void InstanceInfo::SetResourceIds(const string& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool InstanceInfo::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

string InstanceInfo::GetRegion() const
{
    return m_region;
}

void InstanceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InstanceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t InstanceInfo::GetPayMode() const
{
    return m_payMode;
}

void InstanceInfo::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool InstanceInfo::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

uint64_t InstanceInfo::GetRenewFlag() const
{
    return m_renewFlag;
}

void InstanceInfo::SetRenewFlag(const uint64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool InstanceInfo::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

uint64_t InstanceInfo::GetMode() const
{
    return m_mode;
}

void InstanceInfo::SetMode(const uint64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool InstanceInfo::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

uint64_t InstanceInfo::GetLevel() const
{
    return m_level;
}

void InstanceInfo::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool InstanceInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string InstanceInfo::GetValidTime() const
{
    return m_validTime;
}

void InstanceInfo::SetValidTime(const string& _validTime)
{
    m_validTime = _validTime;
    m_validTimeHasBeenSet = true;
}

bool InstanceInfo::ValidTimeHasBeenSet() const
{
    return m_validTimeHasBeenSet;
}

string InstanceInfo::GetBeginTime() const
{
    return m_beginTime;
}

void InstanceInfo::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool InstanceInfo::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

uint64_t InstanceInfo::GetDomainCount() const
{
    return m_domainCount;
}

void InstanceInfo::SetDomainCount(const uint64_t& _domainCount)
{
    m_domainCount = _domainCount;
    m_domainCountHasBeenSet = true;
}

bool InstanceInfo::DomainCountHasBeenSet() const
{
    return m_domainCountHasBeenSet;
}

uint64_t InstanceInfo::GetSubDomainLimit() const
{
    return m_subDomainLimit;
}

void InstanceInfo::SetSubDomainLimit(const uint64_t& _subDomainLimit)
{
    m_subDomainLimit = _subDomainLimit;
    m_subDomainLimitHasBeenSet = true;
}

bool InstanceInfo::SubDomainLimitHasBeenSet() const
{
    return m_subDomainLimitHasBeenSet;
}

uint64_t InstanceInfo::GetMainDomainCount() const
{
    return m_mainDomainCount;
}

void InstanceInfo::SetMainDomainCount(const uint64_t& _mainDomainCount)
{
    m_mainDomainCount = _mainDomainCount;
    m_mainDomainCountHasBeenSet = true;
}

bool InstanceInfo::MainDomainCountHasBeenSet() const
{
    return m_mainDomainCountHasBeenSet;
}

uint64_t InstanceInfo::GetMainDomainLimit() const
{
    return m_mainDomainLimit;
}

void InstanceInfo::SetMainDomainLimit(const uint64_t& _mainDomainLimit)
{
    m_mainDomainLimit = _mainDomainLimit;
    m_mainDomainLimitHasBeenSet = true;
}

bool InstanceInfo::MainDomainLimitHasBeenSet() const
{
    return m_mainDomainLimitHasBeenSet;
}

uint64_t InstanceInfo::GetMaxQPS() const
{
    return m_maxQPS;
}

void InstanceInfo::SetMaxQPS(const uint64_t& _maxQPS)
{
    m_maxQPS = _maxQPS;
    m_maxQPSHasBeenSet = true;
}

bool InstanceInfo::MaxQPSHasBeenSet() const
{
    return m_maxQPSHasBeenSet;
}

QPSPackageNew InstanceInfo::GetQPS() const
{
    return m_qPS;
}

void InstanceInfo::SetQPS(const QPSPackageNew& _qPS)
{
    m_qPS = _qPS;
    m_qPSHasBeenSet = true;
}

bool InstanceInfo::QPSHasBeenSet() const
{
    return m_qPSHasBeenSet;
}

DomainPackageNew InstanceInfo::GetDomainPkg() const
{
    return m_domainPkg;
}

void InstanceInfo::SetDomainPkg(const DomainPackageNew& _domainPkg)
{
    m_domainPkg = _domainPkg;
    m_domainPkgHasBeenSet = true;
}

bool InstanceInfo::DomainPkgHasBeenSet() const
{
    return m_domainPkgHasBeenSet;
}

uint64_t InstanceInfo::GetAppId() const
{
    return m_appId;
}

void InstanceInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool InstanceInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string InstanceInfo::GetEdition() const
{
    return m_edition;
}

void InstanceInfo::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool InstanceInfo::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

FraudPkg InstanceInfo::GetFraudPkg() const
{
    return m_fraudPkg;
}

void InstanceInfo::SetFraudPkg(const FraudPkg& _fraudPkg)
{
    m_fraudPkg = _fraudPkg;
    m_fraudPkgHasBeenSet = true;
}

bool InstanceInfo::FraudPkgHasBeenSet() const
{
    return m_fraudPkgHasBeenSet;
}

BotPkg InstanceInfo::GetBotPkg() const
{
    return m_botPkg;
}

void InstanceInfo::SetBotPkg(const BotPkg& _botPkg)
{
    m_botPkg = _botPkg;
    m_botPkgHasBeenSet = true;
}

bool InstanceInfo::BotPkgHasBeenSet() const
{
    return m_botPkgHasBeenSet;
}

