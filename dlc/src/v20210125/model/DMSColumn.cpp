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

#include <tencentcloud/dlc/v20210125/model/DMSColumn.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DMSColumn::DMSColumn() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_bizParamsHasBeenSet(false),
    m_isPartitionHasBeenSet(false)
{
}

CoreInternalOutcome DMSColumn::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSColumn.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSColumn.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSColumn.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DMSColumn.Position` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_position = value["Position"].GetInt64();
        m_positionHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DMSColumn.Params` is not array type"));

        const rapidjson::Value &tmpValue = value["Params"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_params.push_back(item);
        }
        m_paramsHasBeenSet = true;
    }

    if (value.HasMember("BizParams") && !value["BizParams"].IsNull())
    {
        if (!value["BizParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DMSColumn.BizParams` is not array type"));

        const rapidjson::Value &tmpValue = value["BizParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bizParams.push_back(item);
        }
        m_bizParamsHasBeenSet = true;
    }

    if (value.HasMember("IsPartition") && !value["IsPartition"].IsNull())
    {
        if (!value["IsPartition"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DMSColumn.IsPartition` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPartition = value["IsPartition"].GetBool();
        m_isPartitionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DMSColumn::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_position, allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_params.begin(); itr != m_params.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bizParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bizParams.begin(); itr != m_bizParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isPartitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPartition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPartition, allocator);
    }

}


string DMSColumn::GetName() const
{
    return m_name;
}

void DMSColumn::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DMSColumn::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DMSColumn::GetDescription() const
{
    return m_description;
}

void DMSColumn::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DMSColumn::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DMSColumn::GetType() const
{
    return m_type;
}

void DMSColumn::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DMSColumn::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t DMSColumn::GetPosition() const
{
    return m_position;
}

void DMSColumn::SetPosition(const int64_t& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool DMSColumn::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

vector<KVPair> DMSColumn::GetParams() const
{
    return m_params;
}

void DMSColumn::SetParams(const vector<KVPair>& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool DMSColumn::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

vector<KVPair> DMSColumn::GetBizParams() const
{
    return m_bizParams;
}

void DMSColumn::SetBizParams(const vector<KVPair>& _bizParams)
{
    m_bizParams = _bizParams;
    m_bizParamsHasBeenSet = true;
}

bool DMSColumn::BizParamsHasBeenSet() const
{
    return m_bizParamsHasBeenSet;
}

bool DMSColumn::GetIsPartition() const
{
    return m_isPartition;
}

void DMSColumn::SetIsPartition(const bool& _isPartition)
{
    m_isPartition = _isPartition;
    m_isPartitionHasBeenSet = true;
}

bool DMSColumn::IsPartitionHasBeenSet() const
{
    return m_isPartitionHasBeenSet;
}

