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

#include <tencentcloud/iss/v20230517/model/DescribeGatewayProtocolData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

DescribeGatewayProtocolData::DescribeGatewayProtocolData() :
    m_typeCodeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_valueTextHasBeenSet(false)
{
}

CoreInternalOutcome DescribeGatewayProtocolData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TypeCode") && !value["TypeCode"].IsNull())
    {
        if (!value["TypeCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeGatewayProtocolData.TypeCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeCode = string(value["TypeCode"].GetString());
        m_typeCodeHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeGatewayProtocolData.Value` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetInt64();
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeGatewayProtocolData.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("ValueText") && !value["ValueText"].IsNull())
    {
        if (!value["ValueText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeGatewayProtocolData.ValueText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueText = string(value["ValueText"].GetString());
        m_valueTextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeGatewayProtocolData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeCode.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_valueTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueText.c_str(), allocator).Move(), allocator);
    }

}


string DescribeGatewayProtocolData::GetTypeCode() const
{
    return m_typeCode;
}

void DescribeGatewayProtocolData::SetTypeCode(const string& _typeCode)
{
    m_typeCode = _typeCode;
    m_typeCodeHasBeenSet = true;
}

bool DescribeGatewayProtocolData::TypeCodeHasBeenSet() const
{
    return m_typeCodeHasBeenSet;
}

int64_t DescribeGatewayProtocolData::GetValue() const
{
    return m_value;
}

void DescribeGatewayProtocolData::SetValue(const int64_t& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool DescribeGatewayProtocolData::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string DescribeGatewayProtocolData::GetLabel() const
{
    return m_label;
}

void DescribeGatewayProtocolData::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool DescribeGatewayProtocolData::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string DescribeGatewayProtocolData::GetValueText() const
{
    return m_valueText;
}

void DescribeGatewayProtocolData::SetValueText(const string& _valueText)
{
    m_valueText = _valueText;
    m_valueTextHasBeenSet = true;
}

bool DescribeGatewayProtocolData::ValueTextHasBeenSet() const
{
    return m_valueTextHasBeenSet;
}

