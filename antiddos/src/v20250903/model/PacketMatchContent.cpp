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

#include <tencentcloud/antiddos/v20250903/model/PacketMatchContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20250903::Model;
using namespace std;

PacketMatchContent::PacketMatchContent() :
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_depthHasBeenSet(false)
{
}

CoreInternalOutcome PacketMatchContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PacketMatchContent.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PacketMatchContent.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PacketMatchContent.Offset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetUint64();
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("Depth") && !value["Depth"].IsNull())
    {
        if (!value["Depth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PacketMatchContent.Depth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_depth = value["Depth"].GetUint64();
        m_depthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PacketMatchContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_depthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Depth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_depth, allocator);
    }

}


string PacketMatchContent::GetType() const
{
    return m_type;
}

void PacketMatchContent::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PacketMatchContent::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string PacketMatchContent::GetValue() const
{
    return m_value;
}

void PacketMatchContent::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool PacketMatchContent::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

uint64_t PacketMatchContent::GetOffset() const
{
    return m_offset;
}

void PacketMatchContent::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool PacketMatchContent::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t PacketMatchContent::GetDepth() const
{
    return m_depth;
}

void PacketMatchContent::SetDepth(const uint64_t& _depth)
{
    m_depth = _depth;
    m_depthHasBeenSet = true;
}

bool PacketMatchContent::DepthHasBeenSet() const
{
    return m_depthHasBeenSet;
}

