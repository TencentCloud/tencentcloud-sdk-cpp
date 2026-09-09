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

#include <tencentcloud/emr/v20190103/model/ExportConfMeta.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ExportConfMeta::ExportConfMeta() :
    m_serviceNameHasBeenSet(false),
    m_classificationHasBeenSet(false),
    m_serviceVersionHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
}

CoreInternalOutcome ExportConfMeta::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportConfMeta.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("Classification") && !value["Classification"].IsNull())
    {
        if (!value["Classification"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportConfMeta.Classification` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classification = string(value["Classification"].GetString());
        m_classificationHasBeenSet = true;
    }

    if (value.HasMember("ServiceVersion") && !value["ServiceVersion"].IsNull())
    {
        if (!value["ServiceVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportConfMeta.ServiceVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceVersion = string(value["ServiceVersion"].GetString());
        m_serviceVersionHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportConfMeta.Properties` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_properties = string(value["Properties"].GetString());
        m_propertiesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExportConfMeta::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_classificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Classification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classification.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_properties.c_str(), allocator).Move(), allocator);
    }

}


string ExportConfMeta::GetServiceName() const
{
    return m_serviceName;
}

void ExportConfMeta::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ExportConfMeta::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string ExportConfMeta::GetClassification() const
{
    return m_classification;
}

void ExportConfMeta::SetClassification(const string& _classification)
{
    m_classification = _classification;
    m_classificationHasBeenSet = true;
}

bool ExportConfMeta::ClassificationHasBeenSet() const
{
    return m_classificationHasBeenSet;
}

string ExportConfMeta::GetServiceVersion() const
{
    return m_serviceVersion;
}

void ExportConfMeta::SetServiceVersion(const string& _serviceVersion)
{
    m_serviceVersion = _serviceVersion;
    m_serviceVersionHasBeenSet = true;
}

bool ExportConfMeta::ServiceVersionHasBeenSet() const
{
    return m_serviceVersionHasBeenSet;
}

string ExportConfMeta::GetProperties() const
{
    return m_properties;
}

void ExportConfMeta::SetProperties(const string& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool ExportConfMeta::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

