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

#include <tencentcloud/tem/v20210701/model/Autoscaler.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

Autoscaler::Autoscaler() :
    m_minReplicasHasBeenSet(false),
    m_maxReplicasHasBeenSet(false),
    m_horizontalAutoscalerHasBeenSet(false),
    m_cronHorizontalAutoscalerHasBeenSet(false),
    m_autoscalerIdHasBeenSet(false),
    m_autoscalerNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_modifyDateHasBeenSet(false),
    m_enableDateHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

CoreInternalOutcome Autoscaler::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MinReplicas") && !value["MinReplicas"].IsNull())
    {
        if (!value["MinReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Autoscaler.MinReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minReplicas = value["MinReplicas"].GetInt64();
        m_minReplicasHasBeenSet = true;
    }

    if (value.HasMember("MaxReplicas") && !value["MaxReplicas"].IsNull())
    {
        if (!value["MaxReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Autoscaler.MaxReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxReplicas = value["MaxReplicas"].GetInt64();
        m_maxReplicasHasBeenSet = true;
    }

    if (value.HasMember("HorizontalAutoscaler") && !value["HorizontalAutoscaler"].IsNull())
    {
        if (!value["HorizontalAutoscaler"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Autoscaler.HorizontalAutoscaler` is not array type"));

        const rapidjson::Value &tmpValue = value["HorizontalAutoscaler"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HorizontalAutoscaler item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_horizontalAutoscaler.push_back(item);
        }
        m_horizontalAutoscalerHasBeenSet = true;
    }

    if (value.HasMember("CronHorizontalAutoscaler") && !value["CronHorizontalAutoscaler"].IsNull())
    {
        if (!value["CronHorizontalAutoscaler"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Autoscaler.CronHorizontalAutoscaler` is not array type"));

        const rapidjson::Value &tmpValue = value["CronHorizontalAutoscaler"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CronHorizontalAutoscaler item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cronHorizontalAutoscaler.push_back(item);
        }
        m_cronHorizontalAutoscalerHasBeenSet = true;
    }

    if (value.HasMember("AutoscalerId") && !value["AutoscalerId"].IsNull())
    {
        if (!value["AutoscalerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Autoscaler.AutoscalerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoscalerId = string(value["AutoscalerId"].GetString());
        m_autoscalerIdHasBeenSet = true;
    }

    if (value.HasMember("AutoscalerName") && !value["AutoscalerName"].IsNull())
    {
        if (!value["AutoscalerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Autoscaler.AutoscalerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoscalerName = string(value["AutoscalerName"].GetString());
        m_autoscalerNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Autoscaler.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateDate") && !value["CreateDate"].IsNull())
    {
        if (!value["CreateDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Autoscaler.CreateDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createDate = string(value["CreateDate"].GetString());
        m_createDateHasBeenSet = true;
    }

    if (value.HasMember("ModifyDate") && !value["ModifyDate"].IsNull())
    {
        if (!value["ModifyDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Autoscaler.ModifyDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyDate = string(value["ModifyDate"].GetString());
        m_modifyDateHasBeenSet = true;
    }

    if (value.HasMember("EnableDate") && !value["EnableDate"].IsNull())
    {
        if (!value["EnableDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Autoscaler.EnableDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enableDate = string(value["EnableDate"].GetString());
        m_enableDateHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Autoscaler.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Autoscaler::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_minReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minReplicas, allocator);
    }

    if (m_maxReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxReplicas, allocator);
    }

    if (m_horizontalAutoscalerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HorizontalAutoscaler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_horizontalAutoscaler.begin(); itr != m_horizontalAutoscaler.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cronHorizontalAutoscalerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronHorizontalAutoscaler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cronHorizontalAutoscaler.begin(); itr != m_cronHorizontalAutoscaler.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_autoscalerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoscalerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoscalerId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoscalerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoscalerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoscalerName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createDate.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyDate.c_str(), allocator).Move(), allocator);
    }

    if (m_enableDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enableDate.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

}


int64_t Autoscaler::GetMinReplicas() const
{
    return m_minReplicas;
}

void Autoscaler::SetMinReplicas(const int64_t& _minReplicas)
{
    m_minReplicas = _minReplicas;
    m_minReplicasHasBeenSet = true;
}

bool Autoscaler::MinReplicasHasBeenSet() const
{
    return m_minReplicasHasBeenSet;
}

int64_t Autoscaler::GetMaxReplicas() const
{
    return m_maxReplicas;
}

void Autoscaler::SetMaxReplicas(const int64_t& _maxReplicas)
{
    m_maxReplicas = _maxReplicas;
    m_maxReplicasHasBeenSet = true;
}

bool Autoscaler::MaxReplicasHasBeenSet() const
{
    return m_maxReplicasHasBeenSet;
}

vector<HorizontalAutoscaler> Autoscaler::GetHorizontalAutoscaler() const
{
    return m_horizontalAutoscaler;
}

void Autoscaler::SetHorizontalAutoscaler(const vector<HorizontalAutoscaler>& _horizontalAutoscaler)
{
    m_horizontalAutoscaler = _horizontalAutoscaler;
    m_horizontalAutoscalerHasBeenSet = true;
}

bool Autoscaler::HorizontalAutoscalerHasBeenSet() const
{
    return m_horizontalAutoscalerHasBeenSet;
}

vector<CronHorizontalAutoscaler> Autoscaler::GetCronHorizontalAutoscaler() const
{
    return m_cronHorizontalAutoscaler;
}

void Autoscaler::SetCronHorizontalAutoscaler(const vector<CronHorizontalAutoscaler>& _cronHorizontalAutoscaler)
{
    m_cronHorizontalAutoscaler = _cronHorizontalAutoscaler;
    m_cronHorizontalAutoscalerHasBeenSet = true;
}

bool Autoscaler::CronHorizontalAutoscalerHasBeenSet() const
{
    return m_cronHorizontalAutoscalerHasBeenSet;
}

string Autoscaler::GetAutoscalerId() const
{
    return m_autoscalerId;
}

void Autoscaler::SetAutoscalerId(const string& _autoscalerId)
{
    m_autoscalerId = _autoscalerId;
    m_autoscalerIdHasBeenSet = true;
}

bool Autoscaler::AutoscalerIdHasBeenSet() const
{
    return m_autoscalerIdHasBeenSet;
}

string Autoscaler::GetAutoscalerName() const
{
    return m_autoscalerName;
}

void Autoscaler::SetAutoscalerName(const string& _autoscalerName)
{
    m_autoscalerName = _autoscalerName;
    m_autoscalerNameHasBeenSet = true;
}

bool Autoscaler::AutoscalerNameHasBeenSet() const
{
    return m_autoscalerNameHasBeenSet;
}

string Autoscaler::GetDescription() const
{
    return m_description;
}

void Autoscaler::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Autoscaler::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Autoscaler::GetCreateDate() const
{
    return m_createDate;
}

void Autoscaler::SetCreateDate(const string& _createDate)
{
    m_createDate = _createDate;
    m_createDateHasBeenSet = true;
}

bool Autoscaler::CreateDateHasBeenSet() const
{
    return m_createDateHasBeenSet;
}

string Autoscaler::GetModifyDate() const
{
    return m_modifyDate;
}

void Autoscaler::SetModifyDate(const string& _modifyDate)
{
    m_modifyDate = _modifyDate;
    m_modifyDateHasBeenSet = true;
}

bool Autoscaler::ModifyDateHasBeenSet() const
{
    return m_modifyDateHasBeenSet;
}

string Autoscaler::GetEnableDate() const
{
    return m_enableDate;
}

void Autoscaler::SetEnableDate(const string& _enableDate)
{
    m_enableDate = _enableDate;
    m_enableDateHasBeenSet = true;
}

bool Autoscaler::EnableDateHasBeenSet() const
{
    return m_enableDateHasBeenSet;
}

bool Autoscaler::GetEnabled() const
{
    return m_enabled;
}

void Autoscaler::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool Autoscaler::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

