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

#include <tencentcloud/csip/v20221121/model/AssetFilterConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetFilterConfig::AssetFilterConfig() :
    m_attrHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_styleHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_labelEnHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

CoreInternalOutcome AssetFilterConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Attr") && !value["Attr"].IsNull())
    {
        if (!value["Attr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetFilterConfig.Attr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attr = string(value["Attr"].GetString());
        m_attrHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetFilterConfig.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Style") && !value["Style"].IsNull())
    {
        if (!value["Style"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetFilterConfig.Style` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_style = string(value["Style"].GetString());
        m_styleHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetFilterConfig.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("LabelEn") && !value["LabelEn"].IsNull())
    {
        if (!value["LabelEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetFilterConfig.LabelEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelEn = string(value["LabelEn"].GetString());
        m_labelEnHasBeenSet = true;
    }

    if (value.HasMember("Options") && !value["Options"].IsNull())
    {
        if (!value["Options"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetFilterConfig.Options` is not array type"));

        const rapidjson::Value &tmpValue = value["Options"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetFilterOptions item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_options.push_back(item);
        }
        m_optionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetFilterConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_attrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attr.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_styleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Style";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_style.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_labelEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelEn.c_str(), allocator).Move(), allocator);
    }

    if (m_optionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Options";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_options.begin(); itr != m_options.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AssetFilterConfig::GetAttr() const
{
    return m_attr;
}

void AssetFilterConfig::SetAttr(const string& _attr)
{
    m_attr = _attr;
    m_attrHasBeenSet = true;
}

bool AssetFilterConfig::AttrHasBeenSet() const
{
    return m_attrHasBeenSet;
}

string AssetFilterConfig::GetLabel() const
{
    return m_label;
}

void AssetFilterConfig::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool AssetFilterConfig::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string AssetFilterConfig::GetStyle() const
{
    return m_style;
}

void AssetFilterConfig::SetStyle(const string& _style)
{
    m_style = _style;
    m_styleHasBeenSet = true;
}

bool AssetFilterConfig::StyleHasBeenSet() const
{
    return m_styleHasBeenSet;
}

string AssetFilterConfig::GetValue() const
{
    return m_value;
}

void AssetFilterConfig::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool AssetFilterConfig::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string AssetFilterConfig::GetLabelEn() const
{
    return m_labelEn;
}

void AssetFilterConfig::SetLabelEn(const string& _labelEn)
{
    m_labelEn = _labelEn;
    m_labelEnHasBeenSet = true;
}

bool AssetFilterConfig::LabelEnHasBeenSet() const
{
    return m_labelEnHasBeenSet;
}

vector<AssetFilterOptions> AssetFilterConfig::GetOptions() const
{
    return m_options;
}

void AssetFilterConfig::SetOptions(const vector<AssetFilterOptions>& _options)
{
    m_options = _options;
    m_optionsHasBeenSet = true;
}

bool AssetFilterConfig::OptionsHasBeenSet() const
{
    return m_optionsHasBeenSet;
}

