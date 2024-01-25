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

#include <tencentcloud/wedata/v20210820/model/Columns.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

Columns::Columns() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_isPartitionHasBeenSet(false),
    m_bizParamsHasBeenSet(false),
    m_precisionHasBeenSet(false),
    m_scaleHasBeenSet(false),
    m_paramsHasBeenSet(false)
{
}

CoreInternalOutcome Columns::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Columns.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Columns.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Columns.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Columns.Position` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_position = value["Position"].GetInt64();
        m_positionHasBeenSet = true;
    }

    if (value.HasMember("IsPartition") && !value["IsPartition"].IsNull())
    {
        if (!value["IsPartition"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Columns.IsPartition` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPartition = value["IsPartition"].GetBool();
        m_isPartitionHasBeenSet = true;
    }

    if (value.HasMember("BizParams") && !value["BizParams"].IsNull())
    {
        if (!value["BizParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Columns.BizParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bizParams.Deserialize(value["BizParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bizParamsHasBeenSet = true;
    }

    if (value.HasMember("Precision") && !value["Precision"].IsNull())
    {
        if (!value["Precision"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Columns.Precision` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_precision = value["Precision"].GetInt64();
        m_precisionHasBeenSet = true;
    }

    if (value.HasMember("Scale") && !value["Scale"].IsNull())
    {
        if (!value["Scale"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Columns.Scale` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scale = value["Scale"].GetInt64();
        m_scaleHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Columns.Params` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_params.Deserialize(value["Params"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_paramsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Columns::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_position, allocator);
    }

    if (m_isPartitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPartition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPartition, allocator);
    }

    if (m_bizParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bizParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_precisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Precision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_precision, allocator);
    }

    if (m_scaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scale";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scale, allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_params.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Columns::GetName() const
{
    return m_name;
}

void Columns::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Columns::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Columns::GetType() const
{
    return m_type;
}

void Columns::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Columns::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Columns::GetDescription() const
{
    return m_description;
}

void Columns::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Columns::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t Columns::GetPosition() const
{
    return m_position;
}

void Columns::SetPosition(const int64_t& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool Columns::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

bool Columns::GetIsPartition() const
{
    return m_isPartition;
}

void Columns::SetIsPartition(const bool& _isPartition)
{
    m_isPartition = _isPartition;
    m_isPartitionHasBeenSet = true;
}

bool Columns::IsPartitionHasBeenSet() const
{
    return m_isPartitionHasBeenSet;
}

BizParams Columns::GetBizParams() const
{
    return m_bizParams;
}

void Columns::SetBizParams(const BizParams& _bizParams)
{
    m_bizParams = _bizParams;
    m_bizParamsHasBeenSet = true;
}

bool Columns::BizParamsHasBeenSet() const
{
    return m_bizParamsHasBeenSet;
}

int64_t Columns::GetPrecision() const
{
    return m_precision;
}

void Columns::SetPrecision(const int64_t& _precision)
{
    m_precision = _precision;
    m_precisionHasBeenSet = true;
}

bool Columns::PrecisionHasBeenSet() const
{
    return m_precisionHasBeenSet;
}

int64_t Columns::GetScale() const
{
    return m_scale;
}

void Columns::SetScale(const int64_t& _scale)
{
    m_scale = _scale;
    m_scaleHasBeenSet = true;
}

bool Columns::ScaleHasBeenSet() const
{
    return m_scaleHasBeenSet;
}

Params Columns::GetParams() const
{
    return m_params;
}

void Columns::SetParams(const Params& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool Columns::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

