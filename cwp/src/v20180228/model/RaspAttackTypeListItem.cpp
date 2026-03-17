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

#include <tencentcloud/cwp/v20180228/model/RaspAttackTypeListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RaspAttackTypeListItem::RaspAttackTypeListItem() :
    m_attackTypeNameHasBeenSet(false),
    m_attackTypeIDHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

CoreInternalOutcome RaspAttackTypeListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AttackTypeName") && !value["AttackTypeName"].IsNull())
    {
        if (!value["AttackTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspAttackTypeListItem.AttackTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackTypeName = string(value["AttackTypeName"].GetString());
        m_attackTypeNameHasBeenSet = true;
    }

    if (value.HasMember("AttackTypeID") && !value["AttackTypeID"].IsNull())
    {
        if (!value["AttackTypeID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspAttackTypeListItem.AttackTypeID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackTypeID = value["AttackTypeID"].GetInt64();
        m_attackTypeIDHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspAttackTypeListItem.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RaspAttackTypeListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_attackTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_attackTypeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackTypeID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackTypeID, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

}


string RaspAttackTypeListItem::GetAttackTypeName() const
{
    return m_attackTypeName;
}

void RaspAttackTypeListItem::SetAttackTypeName(const string& _attackTypeName)
{
    m_attackTypeName = _attackTypeName;
    m_attackTypeNameHasBeenSet = true;
}

bool RaspAttackTypeListItem::AttackTypeNameHasBeenSet() const
{
    return m_attackTypeNameHasBeenSet;
}

int64_t RaspAttackTypeListItem::GetAttackTypeID() const
{
    return m_attackTypeID;
}

void RaspAttackTypeListItem::SetAttackTypeID(const int64_t& _attackTypeID)
{
    m_attackTypeID = _attackTypeID;
    m_attackTypeIDHasBeenSet = true;
}

bool RaspAttackTypeListItem::AttackTypeIDHasBeenSet() const
{
    return m_attackTypeIDHasBeenSet;
}

string RaspAttackTypeListItem::GetSource() const
{
    return m_source;
}

void RaspAttackTypeListItem::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool RaspAttackTypeListItem::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

