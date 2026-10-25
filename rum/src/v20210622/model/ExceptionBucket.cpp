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

#include <tencentcloud/rum/v20210622/model/ExceptionBucket.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

ExceptionBucket::ExceptionBucket() :
    m_keyHasBeenSet(false),
    m_countHasBeenSet(false),
    m_includedInTotalHasBeenSet(false),
    m_parentKeyHasBeenSet(false)
{
}

CoreInternalOutcome ExceptionBucket::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExceptionBucket.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExceptionBucket.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("IncludedInTotal") && !value["IncludedInTotal"].IsNull())
    {
        if (!value["IncludedInTotal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExceptionBucket.IncludedInTotal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_includedInTotal = value["IncludedInTotal"].GetBool();
        m_includedInTotalHasBeenSet = true;
    }

    if (value.HasMember("ParentKey") && !value["ParentKey"].IsNull())
    {
        if (!value["ParentKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExceptionBucket.ParentKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentKey = string(value["ParentKey"].GetString());
        m_parentKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExceptionBucket::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_includedInTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludedInTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_includedInTotal, allocator);
    }

    if (m_parentKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentKey.c_str(), allocator).Move(), allocator);
    }

}


string ExceptionBucket::GetKey() const
{
    return m_key;
}

void ExceptionBucket::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool ExceptionBucket::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

int64_t ExceptionBucket::GetCount() const
{
    return m_count;
}

void ExceptionBucket::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool ExceptionBucket::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

bool ExceptionBucket::GetIncludedInTotal() const
{
    return m_includedInTotal;
}

void ExceptionBucket::SetIncludedInTotal(const bool& _includedInTotal)
{
    m_includedInTotal = _includedInTotal;
    m_includedInTotalHasBeenSet = true;
}

bool ExceptionBucket::IncludedInTotalHasBeenSet() const
{
    return m_includedInTotalHasBeenSet;
}

string ExceptionBucket::GetParentKey() const
{
    return m_parentKey;
}

void ExceptionBucket::SetParentKey(const string& _parentKey)
{
    m_parentKey = _parentKey;
    m_parentKeyHasBeenSet = true;
}

bool ExceptionBucket::ParentKeyHasBeenSet() const
{
    return m_parentKeyHasBeenSet;
}

