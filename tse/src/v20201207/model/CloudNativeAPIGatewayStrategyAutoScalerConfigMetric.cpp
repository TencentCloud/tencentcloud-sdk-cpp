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

#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayStrategyAutoScalerConfigMetric.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CloudNativeAPIGatewayStrategyAutoScalerConfigMetric::CloudNativeAPIGatewayStrategyAutoScalerConfigMetric() :
    m_typeHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_targetValueHasBeenSet(false)
{
}

CoreInternalOutcome CloudNativeAPIGatewayStrategyAutoScalerConfigMetric::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyAutoScalerConfigMetric.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyAutoScalerConfigMetric.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyAutoScalerConfigMetric.TargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = string(value["TargetType"].GetString());
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetValue") && !value["TargetValue"].IsNull())
    {
        if (!value["TargetValue"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyAutoScalerConfigMetric.TargetValue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetValue = value["TargetValue"].GetInt64();
        m_targetValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudNativeAPIGatewayStrategyAutoScalerConfigMetric::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetValue, allocator);
    }

}


string CloudNativeAPIGatewayStrategyAutoScalerConfigMetric::GetType() const
{
    return m_type;
}

void CloudNativeAPIGatewayStrategyAutoScalerConfigMetric::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyAutoScalerConfigMetric::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CloudNativeAPIGatewayStrategyAutoScalerConfigMetric::GetResourceName() const
{
    return m_resourceName;
}

void CloudNativeAPIGatewayStrategyAutoScalerConfigMetric::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyAutoScalerConfigMetric::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string CloudNativeAPIGatewayStrategyAutoScalerConfigMetric::GetTargetType() const
{
    return m_targetType;
}

void CloudNativeAPIGatewayStrategyAutoScalerConfigMetric::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyAutoScalerConfigMetric::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

int64_t CloudNativeAPIGatewayStrategyAutoScalerConfigMetric::GetTargetValue() const
{
    return m_targetValue;
}

void CloudNativeAPIGatewayStrategyAutoScalerConfigMetric::SetTargetValue(const int64_t& _targetValue)
{
    m_targetValue = _targetValue;
    m_targetValueHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyAutoScalerConfigMetric::TargetValueHasBeenSet() const
{
    return m_targetValueHasBeenSet;
}

