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

#include <tencentcloud/databuddy/v20260715/model/MetaOwner.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

MetaOwner::MetaOwner() :
    m_fullNameHasBeenSet(false),
    m_ownerTypeHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_ownerNameHasBeenSet(false)
{
}

CoreInternalOutcome MetaOwner::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FullName") && !value["FullName"].IsNull())
    {
        if (!value["FullName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetaOwner.FullName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullName = string(value["FullName"].GetString());
        m_fullNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerType") && !value["OwnerType"].IsNull())
    {
        if (!value["OwnerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetaOwner.OwnerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerType = string(value["OwnerType"].GetString());
        m_ownerTypeHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetaOwner.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("OwnerName") && !value["OwnerName"].IsNull())
    {
        if (!value["OwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetaOwner.OwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerName = string(value["OwnerName"].GetString());
        m_ownerNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetaOwner::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fullNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerType.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerName.c_str(), allocator).Move(), allocator);
    }

}


string MetaOwner::GetFullName() const
{
    return m_fullName;
}

void MetaOwner::SetFullName(const string& _fullName)
{
    m_fullName = _fullName;
    m_fullNameHasBeenSet = true;
}

bool MetaOwner::FullNameHasBeenSet() const
{
    return m_fullNameHasBeenSet;
}

string MetaOwner::GetOwnerType() const
{
    return m_ownerType;
}

void MetaOwner::SetOwnerType(const string& _ownerType)
{
    m_ownerType = _ownerType;
    m_ownerTypeHasBeenSet = true;
}

bool MetaOwner::OwnerTypeHasBeenSet() const
{
    return m_ownerTypeHasBeenSet;
}

string MetaOwner::GetOwner() const
{
    return m_owner;
}

void MetaOwner::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool MetaOwner::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string MetaOwner::GetOwnerName() const
{
    return m_ownerName;
}

void MetaOwner::SetOwnerName(const string& _ownerName)
{
    m_ownerName = _ownerName;
    m_ownerNameHasBeenSet = true;
}

bool MetaOwner::OwnerNameHasBeenSet() const
{
    return m_ownerNameHasBeenSet;
}

