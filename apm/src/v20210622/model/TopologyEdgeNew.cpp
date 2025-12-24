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

#include <tencentcloud/apm/v20210622/model/TopologyEdgeNew.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

TopologyEdgeNew::TopologyEdgeNew() :
    m_sourceHasBeenSet(false),
    m_idHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_errRateHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_sqlRequestCountHasBeenSet(false),
    m_sqlErrorRequestCountHasBeenSet(false),
    m_sourceCompHasBeenSet(false),
    m_targetCompHasBeenSet(false)
{
}

CoreInternalOutcome TopologyEdgeNew::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyEdgeNew.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyEdgeNew.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyEdgeNew.Weight` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetDouble();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("Target") && !value["Target"].IsNull())
    {
        if (!value["Target"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyEdgeNew.Target` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_target = string(value["Target"].GetString());
        m_targetHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyEdgeNew.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("ErrRate") && !value["ErrRate"].IsNull())
    {
        if (!value["ErrRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyEdgeNew.ErrRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_errRate = value["ErrRate"].GetDouble();
        m_errRateHasBeenSet = true;
    }

    if (value.HasMember("Qps") && !value["Qps"].IsNull())
    {
        if (!value["Qps"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyEdgeNew.Qps` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_qps = value["Qps"].GetDouble();
        m_qpsHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyEdgeNew.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Color") && !value["Color"].IsNull())
    {
        if (!value["Color"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyEdgeNew.Color` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_color = string(value["Color"].GetString());
        m_colorHasBeenSet = true;
    }

    if (value.HasMember("SqlRequestCount") && !value["SqlRequestCount"].IsNull())
    {
        if (!value["SqlRequestCount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyEdgeNew.SqlRequestCount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sqlRequestCount = value["SqlRequestCount"].GetDouble();
        m_sqlRequestCountHasBeenSet = true;
    }

    if (value.HasMember("SqlErrorRequestCount") && !value["SqlErrorRequestCount"].IsNull())
    {
        if (!value["SqlErrorRequestCount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyEdgeNew.SqlErrorRequestCount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sqlErrorRequestCount = value["SqlErrorRequestCount"].GetDouble();
        m_sqlErrorRequestCountHasBeenSet = true;
    }

    if (value.HasMember("SourceComp") && !value["SourceComp"].IsNull())
    {
        if (!value["SourceComp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyEdgeNew.SourceComp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceComp = string(value["SourceComp"].GetString());
        m_sourceCompHasBeenSet = true;
    }

    if (value.HasMember("TargetComp") && !value["TargetComp"].IsNull())
    {
        if (!value["TargetComp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyEdgeNew.TargetComp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetComp = string(value["TargetComp"].GetString());
        m_targetCompHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopologyEdgeNew::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_target.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_errRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errRate, allocator);
    }

    if (m_qpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qps, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_colorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Color";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_color.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlRequestCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlRequestCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sqlRequestCount, allocator);
    }

    if (m_sqlErrorRequestCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlErrorRequestCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sqlErrorRequestCount, allocator);
    }

    if (m_sourceCompHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceComp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceComp.c_str(), allocator).Move(), allocator);
    }

    if (m_targetCompHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetComp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetComp.c_str(), allocator).Move(), allocator);
    }

}


string TopologyEdgeNew::GetSource() const
{
    return m_source;
}

void TopologyEdgeNew::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool TopologyEdgeNew::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string TopologyEdgeNew::GetId() const
{
    return m_id;
}

void TopologyEdgeNew::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool TopologyEdgeNew::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

double TopologyEdgeNew::GetWeight() const
{
    return m_weight;
}

void TopologyEdgeNew::SetWeight(const double& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool TopologyEdgeNew::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string TopologyEdgeNew::GetTarget() const
{
    return m_target;
}

void TopologyEdgeNew::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool TopologyEdgeNew::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

double TopologyEdgeNew::GetDuration() const
{
    return m_duration;
}

void TopologyEdgeNew::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool TopologyEdgeNew::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

double TopologyEdgeNew::GetErrRate() const
{
    return m_errRate;
}

void TopologyEdgeNew::SetErrRate(const double& _errRate)
{
    m_errRate = _errRate;
    m_errRateHasBeenSet = true;
}

bool TopologyEdgeNew::ErrRateHasBeenSet() const
{
    return m_errRateHasBeenSet;
}

double TopologyEdgeNew::GetQps() const
{
    return m_qps;
}

void TopologyEdgeNew::SetQps(const double& _qps)
{
    m_qps = _qps;
    m_qpsHasBeenSet = true;
}

bool TopologyEdgeNew::QpsHasBeenSet() const
{
    return m_qpsHasBeenSet;
}

string TopologyEdgeNew::GetType() const
{
    return m_type;
}

void TopologyEdgeNew::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TopologyEdgeNew::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string TopologyEdgeNew::GetColor() const
{
    return m_color;
}

void TopologyEdgeNew::SetColor(const string& _color)
{
    m_color = _color;
    m_colorHasBeenSet = true;
}

bool TopologyEdgeNew::ColorHasBeenSet() const
{
    return m_colorHasBeenSet;
}

double TopologyEdgeNew::GetSqlRequestCount() const
{
    return m_sqlRequestCount;
}

void TopologyEdgeNew::SetSqlRequestCount(const double& _sqlRequestCount)
{
    m_sqlRequestCount = _sqlRequestCount;
    m_sqlRequestCountHasBeenSet = true;
}

bool TopologyEdgeNew::SqlRequestCountHasBeenSet() const
{
    return m_sqlRequestCountHasBeenSet;
}

double TopologyEdgeNew::GetSqlErrorRequestCount() const
{
    return m_sqlErrorRequestCount;
}

void TopologyEdgeNew::SetSqlErrorRequestCount(const double& _sqlErrorRequestCount)
{
    m_sqlErrorRequestCount = _sqlErrorRequestCount;
    m_sqlErrorRequestCountHasBeenSet = true;
}

bool TopologyEdgeNew::SqlErrorRequestCountHasBeenSet() const
{
    return m_sqlErrorRequestCountHasBeenSet;
}

string TopologyEdgeNew::GetSourceComp() const
{
    return m_sourceComp;
}

void TopologyEdgeNew::SetSourceComp(const string& _sourceComp)
{
    m_sourceComp = _sourceComp;
    m_sourceCompHasBeenSet = true;
}

bool TopologyEdgeNew::SourceCompHasBeenSet() const
{
    return m_sourceCompHasBeenSet;
}

string TopologyEdgeNew::GetTargetComp() const
{
    return m_targetComp;
}

void TopologyEdgeNew::SetTargetComp(const string& _targetComp)
{
    m_targetComp = _targetComp;
    m_targetCompHasBeenSet = true;
}

bool TopologyEdgeNew::TargetCompHasBeenSet() const
{
    return m_targetCompHasBeenSet;
}

