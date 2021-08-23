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

#include <tencentcloud/emr/v20190103/model/Configuration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

Configuration::Configuration() :
    m_classificationHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
}

CoreInternalOutcome Configuration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Classification") && !value["Classification"].IsNull())
    {
        if (!value["Classification"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Configuration.Classification` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classification = string(value["Classification"].GetString());
        m_classificationHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Configuration.Properties` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_properties = string(value["Properties"].GetString());
        m_propertiesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Configuration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_classificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Classification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classification.c_str(), allocator).Move(), allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_properties.c_str(), allocator).Move(), allocator);
    }

}


string Configuration::GetClassification() const
{
    return m_classification;
}

void Configuration::SetClassification(const string& _classification)
{
    m_classification = _classification;
    m_classificationHasBeenSet = true;
}

bool Configuration::ClassificationHasBeenSet() const
{
    return m_classificationHasBeenSet;
}

string Configuration::GetProperties() const
{
    return m_properties;
}

void Configuration::SetProperties(const string& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool Configuration::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

