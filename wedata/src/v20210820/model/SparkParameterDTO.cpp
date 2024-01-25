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

#include <tencentcloud/wedata/v20210820/model/SparkParameterDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SparkParameterDTO::SparkParameterDTO() :
    m_propertiesHasBeenSet(false)
{
}

CoreInternalOutcome SparkParameterDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkParameterDTO.Properties` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_properties = string(value["Properties"].GetString());
        m_propertiesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SparkParameterDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_properties.c_str(), allocator).Move(), allocator);
    }

}


string SparkParameterDTO::GetProperties() const
{
    return m_properties;
}

void SparkParameterDTO::SetProperties(const string& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool SparkParameterDTO::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

