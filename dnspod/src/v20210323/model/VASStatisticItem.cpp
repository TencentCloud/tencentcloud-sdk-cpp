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

#include <tencentcloud/dnspod/v20210323/model/VASStatisticItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

VASStatisticItem::VASStatisticItem() :
    m_nameHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_limitCountHasBeenSet(false),
    m_useCountHasBeenSet(false)
{
}

CoreInternalOutcome VASStatisticItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VASStatisticItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VASStatisticItem.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("LimitCount") && !value["LimitCount"].IsNull())
    {
        if (!value["LimitCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VASStatisticItem.LimitCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_limitCount = value["LimitCount"].GetUint64();
        m_limitCountHasBeenSet = true;
    }

    if (value.HasMember("UseCount") && !value["UseCount"].IsNull())
    {
        if (!value["UseCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VASStatisticItem.UseCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_useCount = value["UseCount"].GetUint64();
        m_useCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VASStatisticItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_limitCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limitCount, allocator);
    }

    if (m_useCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useCount, allocator);
    }

}


string VASStatisticItem::GetName() const
{
    return m_name;
}

void VASStatisticItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VASStatisticItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VASStatisticItem::GetKey() const
{
    return m_key;
}

void VASStatisticItem::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool VASStatisticItem::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

uint64_t VASStatisticItem::GetLimitCount() const
{
    return m_limitCount;
}

void VASStatisticItem::SetLimitCount(const uint64_t& _limitCount)
{
    m_limitCount = _limitCount;
    m_limitCountHasBeenSet = true;
}

bool VASStatisticItem::LimitCountHasBeenSet() const
{
    return m_limitCountHasBeenSet;
}

uint64_t VASStatisticItem::GetUseCount() const
{
    return m_useCount;
}

void VASStatisticItem::SetUseCount(const uint64_t& _useCount)
{
    m_useCount = _useCount;
    m_useCountHasBeenSet = true;
}

bool VASStatisticItem::UseCountHasBeenSet() const
{
    return m_useCountHasBeenSet;
}

