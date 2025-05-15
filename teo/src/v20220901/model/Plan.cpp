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

#include <tencentcloud/teo/v20220901/model/Plan.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

Plan::Plan() :
    m_planTypeHasBeenSet(false),
    m_planIdHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_zonesInfoHasBeenSet(false),
    m_smartRequestCapacityHasBeenSet(false),
    m_vAUCapacityHasBeenSet(false),
    m_accTrafficCapacityHasBeenSet(false),
    m_smartTrafficCapacityHasBeenSet(false),
    m_dDoSTrafficCapacityHasBeenSet(false),
    m_secTrafficCapacityHasBeenSet(false),
    m_secRequestCapacityHasBeenSet(false),
    m_l4TrafficCapacityHasBeenSet(false),
    m_crossMLCTrafficCapacityHasBeenSet(false),
    m_bindableHasBeenSet(false),
    m_enabledTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_featuresHasBeenSet(false)
{
}

CoreInternalOutcome Plan::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlanType") && !value["PlanType"].IsNull())
    {
        if (!value["PlanType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Plan.PlanType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planType = string(value["PlanType"].GetString());
        m_planTypeHasBeenSet = true;
    }

    if (value.HasMember("PlanId") && !value["PlanId"].IsNull())
    {
        if (!value["PlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Plan.PlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planId = string(value["PlanId"].GetString());
        m_planIdHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Plan.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Plan.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Plan.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("ZonesInfo") && !value["ZonesInfo"].IsNull())
    {
        if (!value["ZonesInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Plan.ZonesInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ZonesInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ZoneInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_zonesInfo.push_back(item);
        }
        m_zonesInfoHasBeenSet = true;
    }

    if (value.HasMember("SmartRequestCapacity") && !value["SmartRequestCapacity"].IsNull())
    {
        if (!value["SmartRequestCapacity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Plan.SmartRequestCapacity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_smartRequestCapacity = value["SmartRequestCapacity"].GetInt64();
        m_smartRequestCapacityHasBeenSet = true;
    }

    if (value.HasMember("VAUCapacity") && !value["VAUCapacity"].IsNull())
    {
        if (!value["VAUCapacity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Plan.VAUCapacity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vAUCapacity = value["VAUCapacity"].GetInt64();
        m_vAUCapacityHasBeenSet = true;
    }

    if (value.HasMember("AccTrafficCapacity") && !value["AccTrafficCapacity"].IsNull())
    {
        if (!value["AccTrafficCapacity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Plan.AccTrafficCapacity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accTrafficCapacity = value["AccTrafficCapacity"].GetInt64();
        m_accTrafficCapacityHasBeenSet = true;
    }

    if (value.HasMember("SmartTrafficCapacity") && !value["SmartTrafficCapacity"].IsNull())
    {
        if (!value["SmartTrafficCapacity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Plan.SmartTrafficCapacity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_smartTrafficCapacity = value["SmartTrafficCapacity"].GetInt64();
        m_smartTrafficCapacityHasBeenSet = true;
    }

    if (value.HasMember("DDoSTrafficCapacity") && !value["DDoSTrafficCapacity"].IsNull())
    {
        if (!value["DDoSTrafficCapacity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Plan.DDoSTrafficCapacity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dDoSTrafficCapacity = value["DDoSTrafficCapacity"].GetInt64();
        m_dDoSTrafficCapacityHasBeenSet = true;
    }

    if (value.HasMember("SecTrafficCapacity") && !value["SecTrafficCapacity"].IsNull())
    {
        if (!value["SecTrafficCapacity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Plan.SecTrafficCapacity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_secTrafficCapacity = value["SecTrafficCapacity"].GetInt64();
        m_secTrafficCapacityHasBeenSet = true;
    }

    if (value.HasMember("SecRequestCapacity") && !value["SecRequestCapacity"].IsNull())
    {
        if (!value["SecRequestCapacity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Plan.SecRequestCapacity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_secRequestCapacity = value["SecRequestCapacity"].GetInt64();
        m_secRequestCapacityHasBeenSet = true;
    }

    if (value.HasMember("L4TrafficCapacity") && !value["L4TrafficCapacity"].IsNull())
    {
        if (!value["L4TrafficCapacity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Plan.L4TrafficCapacity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_l4TrafficCapacity = value["L4TrafficCapacity"].GetInt64();
        m_l4TrafficCapacityHasBeenSet = true;
    }

    if (value.HasMember("CrossMLCTrafficCapacity") && !value["CrossMLCTrafficCapacity"].IsNull())
    {
        if (!value["CrossMLCTrafficCapacity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Plan.CrossMLCTrafficCapacity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_crossMLCTrafficCapacity = value["CrossMLCTrafficCapacity"].GetInt64();
        m_crossMLCTrafficCapacityHasBeenSet = true;
    }

    if (value.HasMember("Bindable") && !value["Bindable"].IsNull())
    {
        if (!value["Bindable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Plan.Bindable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindable = string(value["Bindable"].GetString());
        m_bindableHasBeenSet = true;
    }

    if (value.HasMember("EnabledTime") && !value["EnabledTime"].IsNull())
    {
        if (!value["EnabledTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Plan.EnabledTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enabledTime = string(value["EnabledTime"].GetString());
        m_enabledTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Plan.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("Features") && !value["Features"].IsNull())
    {
        if (!value["Features"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Plan.Features` is not array type"));

        const rapidjson::Value &tmpValue = value["Features"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_features.push_back((*itr).GetString());
        }
        m_featuresHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Plan::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_planTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_planType.c_str(), allocator).Move(), allocator);
    }

    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_planId.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_zonesInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZonesInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zonesInfo.begin(); itr != m_zonesInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_smartRequestCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmartRequestCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_smartRequestCapacity, allocator);
    }

    if (m_vAUCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VAUCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vAUCapacity, allocator);
    }

    if (m_accTrafficCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccTrafficCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accTrafficCapacity, allocator);
    }

    if (m_smartTrafficCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmartTrafficCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_smartTrafficCapacity, allocator);
    }

    if (m_dDoSTrafficCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDoSTrafficCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dDoSTrafficCapacity, allocator);
    }

    if (m_secTrafficCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecTrafficCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_secTrafficCapacity, allocator);
    }

    if (m_secRequestCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecRequestCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_secRequestCapacity, allocator);
    }

    if (m_l4TrafficCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L4TrafficCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_l4TrafficCapacity, allocator);
    }

    if (m_crossMLCTrafficCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossMLCTrafficCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crossMLCTrafficCapacity, allocator);
    }

    if (m_bindableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bindable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindable.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnabledTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enabledTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_featuresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Features";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_features.begin(); itr != m_features.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string Plan::GetPlanType() const
{
    return m_planType;
}

void Plan::SetPlanType(const string& _planType)
{
    m_planType = _planType;
    m_planTypeHasBeenSet = true;
}

bool Plan::PlanTypeHasBeenSet() const
{
    return m_planTypeHasBeenSet;
}

string Plan::GetPlanId() const
{
    return m_planId;
}

void Plan::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool Plan::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

string Plan::GetArea() const
{
    return m_area;
}

void Plan::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool Plan::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string Plan::GetStatus() const
{
    return m_status;
}

void Plan::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Plan::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t Plan::GetPayMode() const
{
    return m_payMode;
}

void Plan::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool Plan::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

vector<ZoneInfo> Plan::GetZonesInfo() const
{
    return m_zonesInfo;
}

void Plan::SetZonesInfo(const vector<ZoneInfo>& _zonesInfo)
{
    m_zonesInfo = _zonesInfo;
    m_zonesInfoHasBeenSet = true;
}

bool Plan::ZonesInfoHasBeenSet() const
{
    return m_zonesInfoHasBeenSet;
}

int64_t Plan::GetSmartRequestCapacity() const
{
    return m_smartRequestCapacity;
}

void Plan::SetSmartRequestCapacity(const int64_t& _smartRequestCapacity)
{
    m_smartRequestCapacity = _smartRequestCapacity;
    m_smartRequestCapacityHasBeenSet = true;
}

bool Plan::SmartRequestCapacityHasBeenSet() const
{
    return m_smartRequestCapacityHasBeenSet;
}

int64_t Plan::GetVAUCapacity() const
{
    return m_vAUCapacity;
}

void Plan::SetVAUCapacity(const int64_t& _vAUCapacity)
{
    m_vAUCapacity = _vAUCapacity;
    m_vAUCapacityHasBeenSet = true;
}

bool Plan::VAUCapacityHasBeenSet() const
{
    return m_vAUCapacityHasBeenSet;
}

int64_t Plan::GetAccTrafficCapacity() const
{
    return m_accTrafficCapacity;
}

void Plan::SetAccTrafficCapacity(const int64_t& _accTrafficCapacity)
{
    m_accTrafficCapacity = _accTrafficCapacity;
    m_accTrafficCapacityHasBeenSet = true;
}

bool Plan::AccTrafficCapacityHasBeenSet() const
{
    return m_accTrafficCapacityHasBeenSet;
}

int64_t Plan::GetSmartTrafficCapacity() const
{
    return m_smartTrafficCapacity;
}

void Plan::SetSmartTrafficCapacity(const int64_t& _smartTrafficCapacity)
{
    m_smartTrafficCapacity = _smartTrafficCapacity;
    m_smartTrafficCapacityHasBeenSet = true;
}

bool Plan::SmartTrafficCapacityHasBeenSet() const
{
    return m_smartTrafficCapacityHasBeenSet;
}

int64_t Plan::GetDDoSTrafficCapacity() const
{
    return m_dDoSTrafficCapacity;
}

void Plan::SetDDoSTrafficCapacity(const int64_t& _dDoSTrafficCapacity)
{
    m_dDoSTrafficCapacity = _dDoSTrafficCapacity;
    m_dDoSTrafficCapacityHasBeenSet = true;
}

bool Plan::DDoSTrafficCapacityHasBeenSet() const
{
    return m_dDoSTrafficCapacityHasBeenSet;
}

int64_t Plan::GetSecTrafficCapacity() const
{
    return m_secTrafficCapacity;
}

void Plan::SetSecTrafficCapacity(const int64_t& _secTrafficCapacity)
{
    m_secTrafficCapacity = _secTrafficCapacity;
    m_secTrafficCapacityHasBeenSet = true;
}

bool Plan::SecTrafficCapacityHasBeenSet() const
{
    return m_secTrafficCapacityHasBeenSet;
}

int64_t Plan::GetSecRequestCapacity() const
{
    return m_secRequestCapacity;
}

void Plan::SetSecRequestCapacity(const int64_t& _secRequestCapacity)
{
    m_secRequestCapacity = _secRequestCapacity;
    m_secRequestCapacityHasBeenSet = true;
}

bool Plan::SecRequestCapacityHasBeenSet() const
{
    return m_secRequestCapacityHasBeenSet;
}

int64_t Plan::GetL4TrafficCapacity() const
{
    return m_l4TrafficCapacity;
}

void Plan::SetL4TrafficCapacity(const int64_t& _l4TrafficCapacity)
{
    m_l4TrafficCapacity = _l4TrafficCapacity;
    m_l4TrafficCapacityHasBeenSet = true;
}

bool Plan::L4TrafficCapacityHasBeenSet() const
{
    return m_l4TrafficCapacityHasBeenSet;
}

int64_t Plan::GetCrossMLCTrafficCapacity() const
{
    return m_crossMLCTrafficCapacity;
}

void Plan::SetCrossMLCTrafficCapacity(const int64_t& _crossMLCTrafficCapacity)
{
    m_crossMLCTrafficCapacity = _crossMLCTrafficCapacity;
    m_crossMLCTrafficCapacityHasBeenSet = true;
}

bool Plan::CrossMLCTrafficCapacityHasBeenSet() const
{
    return m_crossMLCTrafficCapacityHasBeenSet;
}

string Plan::GetBindable() const
{
    return m_bindable;
}

void Plan::SetBindable(const string& _bindable)
{
    m_bindable = _bindable;
    m_bindableHasBeenSet = true;
}

bool Plan::BindableHasBeenSet() const
{
    return m_bindableHasBeenSet;
}

string Plan::GetEnabledTime() const
{
    return m_enabledTime;
}

void Plan::SetEnabledTime(const string& _enabledTime)
{
    m_enabledTime = _enabledTime;
    m_enabledTimeHasBeenSet = true;
}

bool Plan::EnabledTimeHasBeenSet() const
{
    return m_enabledTimeHasBeenSet;
}

string Plan::GetExpiredTime() const
{
    return m_expiredTime;
}

void Plan::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool Plan::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

vector<string> Plan::GetFeatures() const
{
    return m_features;
}

void Plan::SetFeatures(const vector<string>& _features)
{
    m_features = _features;
    m_featuresHasBeenSet = true;
}

bool Plan::FeaturesHasBeenSet() const
{
    return m_featuresHasBeenSet;
}

