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

#include <tencentcloud/adp/v20260520/model/ResponseParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ResponseParam::ResponseParam() :
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_renderModeHasBeenSet(false),
    m_subParamsHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome ResponseParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResponseParam.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResponseParam.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("RenderMode") && !value["RenderMode"].IsNull())
    {
        if (!value["RenderMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResponseParam.RenderMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renderMode = value["RenderMode"].GetInt64();
        m_renderModeHasBeenSet = true;
    }

    if (value.HasMember("SubParams") && !value["SubParams"].IsNull())
    {
        if (!value["SubParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResponseParam.SubParams` is not array type"));

        const rapidjson::Value &tmpValue = value["SubParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResponseParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subParams.push_back(item);
        }
        m_subParamsHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResponseParam.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResponseParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_renderModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenderMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renderMode, allocator);
    }

    if (m_subParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subParams.begin(); itr != m_subParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

}


string ResponseParam::GetDescription() const
{
    return m_description;
}

void ResponseParam::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ResponseParam::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ResponseParam::GetName() const
{
    return m_name;
}

void ResponseParam::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ResponseParam::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ResponseParam::GetRenderMode() const
{
    return m_renderMode;
}

void ResponseParam::SetRenderMode(const int64_t& _renderMode)
{
    m_renderMode = _renderMode;
    m_renderModeHasBeenSet = true;
}

bool ResponseParam::RenderModeHasBeenSet() const
{
    return m_renderModeHasBeenSet;
}

vector<ResponseParam> ResponseParam::GetSubParams() const
{
    return m_subParams;
}

void ResponseParam::SetSubParams(const vector<ResponseParam>& _subParams)
{
    m_subParams = _subParams;
    m_subParamsHasBeenSet = true;
}

bool ResponseParam::SubParamsHasBeenSet() const
{
    return m_subParamsHasBeenSet;
}

int64_t ResponseParam::GetType() const
{
    return m_type;
}

void ResponseParam::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ResponseParam::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

