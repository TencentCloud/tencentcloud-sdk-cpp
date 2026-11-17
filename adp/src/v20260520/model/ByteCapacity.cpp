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

#include <tencentcloud/adp/v20260520/model/ByteCapacity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ByteCapacity::ByteCapacity() :
    m_maxCapacityHasBeenSet(false),
    m_exceededInvalidCapacityHasBeenSet(false),
    m_usedCapacityHasBeenSet(false)
{
}

CoreInternalOutcome ByteCapacity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxCapacity") && !value["MaxCapacity"].IsNull())
    {
        if (!value["MaxCapacity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ByteCapacity.MaxCapacity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxCapacity = string(value["MaxCapacity"].GetString());
        m_maxCapacityHasBeenSet = true;
    }

    if (value.HasMember("ExceededInvalidCapacity") && !value["ExceededInvalidCapacity"].IsNull())
    {
        if (!value["ExceededInvalidCapacity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ByteCapacity.ExceededInvalidCapacity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exceededInvalidCapacity = string(value["ExceededInvalidCapacity"].GetString());
        m_exceededInvalidCapacityHasBeenSet = true;
    }

    if (value.HasMember("UsedCapacity") && !value["UsedCapacity"].IsNull())
    {
        if (!value["UsedCapacity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ByteCapacity.UsedCapacity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usedCapacity = string(value["UsedCapacity"].GetString());
        m_usedCapacityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ByteCapacity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxCapacity.c_str(), allocator).Move(), allocator);
    }

    if (m_exceededInvalidCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceededInvalidCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exceededInvalidCapacity.c_str(), allocator).Move(), allocator);
    }

    if (m_usedCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usedCapacity.c_str(), allocator).Move(), allocator);
    }

}


string ByteCapacity::GetMaxCapacity() const
{
    return m_maxCapacity;
}

void ByteCapacity::SetMaxCapacity(const string& _maxCapacity)
{
    m_maxCapacity = _maxCapacity;
    m_maxCapacityHasBeenSet = true;
}

bool ByteCapacity::MaxCapacityHasBeenSet() const
{
    return m_maxCapacityHasBeenSet;
}

string ByteCapacity::GetExceededInvalidCapacity() const
{
    return m_exceededInvalidCapacity;
}

void ByteCapacity::SetExceededInvalidCapacity(const string& _exceededInvalidCapacity)
{
    m_exceededInvalidCapacity = _exceededInvalidCapacity;
    m_exceededInvalidCapacityHasBeenSet = true;
}

bool ByteCapacity::ExceededInvalidCapacityHasBeenSet() const
{
    return m_exceededInvalidCapacityHasBeenSet;
}

string ByteCapacity::GetUsedCapacity() const
{
    return m_usedCapacity;
}

void ByteCapacity::SetUsedCapacity(const string& _usedCapacity)
{
    m_usedCapacity = _usedCapacity;
    m_usedCapacityHasBeenSet = true;
}

bool ByteCapacity::UsedCapacityHasBeenSet() const
{
    return m_usedCapacityHasBeenSet;
}

