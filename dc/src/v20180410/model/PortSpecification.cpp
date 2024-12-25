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

#include <tencentcloud/dc/v20180410/model/PortSpecification.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dc::V20180410::Model;
using namespace std;

PortSpecification::PortSpecification() :
    m_internationalNameHasBeenSet(false),
    m_specificationHasBeenSet(false),
    m_portTypeHasBeenSet(false)
{
}

CoreInternalOutcome PortSpecification::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InternationalName") && !value["InternationalName"].IsNull())
    {
        if (!value["InternationalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortSpecification.InternationalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internationalName = string(value["InternationalName"].GetString());
        m_internationalNameHasBeenSet = true;
    }

    if (value.HasMember("Specification") && !value["Specification"].IsNull())
    {
        if (!value["Specification"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PortSpecification.Specification` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_specification = value["Specification"].GetUint64();
        m_specificationHasBeenSet = true;
    }

    if (value.HasMember("PortType") && !value["PortType"].IsNull())
    {
        if (!value["PortType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortSpecification.PortType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portType = string(value["PortType"].GetString());
        m_portTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PortSpecification::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_internationalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternationalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internationalName.c_str(), allocator).Move(), allocator);
    }

    if (m_specificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Specification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_specification, allocator);
    }

    if (m_portTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_portType.c_str(), allocator).Move(), allocator);
    }

}


string PortSpecification::GetInternationalName() const
{
    return m_internationalName;
}

void PortSpecification::SetInternationalName(const string& _internationalName)
{
    m_internationalName = _internationalName;
    m_internationalNameHasBeenSet = true;
}

bool PortSpecification::InternationalNameHasBeenSet() const
{
    return m_internationalNameHasBeenSet;
}

uint64_t PortSpecification::GetSpecification() const
{
    return m_specification;
}

void PortSpecification::SetSpecification(const uint64_t& _specification)
{
    m_specification = _specification;
    m_specificationHasBeenSet = true;
}

bool PortSpecification::SpecificationHasBeenSet() const
{
    return m_specificationHasBeenSet;
}

string PortSpecification::GetPortType() const
{
    return m_portType;
}

void PortSpecification::SetPortType(const string& _portType)
{
    m_portType = _portType;
    m_portTypeHasBeenSet = true;
}

bool PortSpecification::PortTypeHasBeenSet() const
{
    return m_portTypeHasBeenSet;
}

