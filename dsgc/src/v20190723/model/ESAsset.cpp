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

#include <tencentcloud/dsgc/v20190723/model/ESAsset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ESAsset::ESAsset() :
    m_indexNumsHasBeenSet(false),
    m_sensitiveIndexNumsHasBeenSet(false),
    m_fieldNumsHasBeenSet(false),
    m_sensitiveFieldNumsHasBeenSet(false)
{
}

CoreInternalOutcome ESAsset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IndexNums") && !value["IndexNums"].IsNull())
    {
        if (!value["IndexNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESAsset.IndexNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_indexNums = value["IndexNums"].GetInt64();
        m_indexNumsHasBeenSet = true;
    }

    if (value.HasMember("SensitiveIndexNums") && !value["SensitiveIndexNums"].IsNull())
    {
        if (!value["SensitiveIndexNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESAsset.SensitiveIndexNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveIndexNums = value["SensitiveIndexNums"].GetInt64();
        m_sensitiveIndexNumsHasBeenSet = true;
    }

    if (value.HasMember("FieldNums") && !value["FieldNums"].IsNull())
    {
        if (!value["FieldNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESAsset.FieldNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fieldNums = value["FieldNums"].GetInt64();
        m_fieldNumsHasBeenSet = true;
    }

    if (value.HasMember("SensitiveFieldNums") && !value["SensitiveFieldNums"].IsNull())
    {
        if (!value["SensitiveFieldNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESAsset.SensitiveFieldNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveFieldNums = value["SensitiveFieldNums"].GetInt64();
        m_sensitiveFieldNumsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ESAsset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indexNums, allocator);
    }

    if (m_sensitiveIndexNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveIndexNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveIndexNums, allocator);
    }

    if (m_fieldNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fieldNums, allocator);
    }

    if (m_sensitiveFieldNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveFieldNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveFieldNums, allocator);
    }

}


int64_t ESAsset::GetIndexNums() const
{
    return m_indexNums;
}

void ESAsset::SetIndexNums(const int64_t& _indexNums)
{
    m_indexNums = _indexNums;
    m_indexNumsHasBeenSet = true;
}

bool ESAsset::IndexNumsHasBeenSet() const
{
    return m_indexNumsHasBeenSet;
}

int64_t ESAsset::GetSensitiveIndexNums() const
{
    return m_sensitiveIndexNums;
}

void ESAsset::SetSensitiveIndexNums(const int64_t& _sensitiveIndexNums)
{
    m_sensitiveIndexNums = _sensitiveIndexNums;
    m_sensitiveIndexNumsHasBeenSet = true;
}

bool ESAsset::SensitiveIndexNumsHasBeenSet() const
{
    return m_sensitiveIndexNumsHasBeenSet;
}

int64_t ESAsset::GetFieldNums() const
{
    return m_fieldNums;
}

void ESAsset::SetFieldNums(const int64_t& _fieldNums)
{
    m_fieldNums = _fieldNums;
    m_fieldNumsHasBeenSet = true;
}

bool ESAsset::FieldNumsHasBeenSet() const
{
    return m_fieldNumsHasBeenSet;
}

int64_t ESAsset::GetSensitiveFieldNums() const
{
    return m_sensitiveFieldNums;
}

void ESAsset::SetSensitiveFieldNums(const int64_t& _sensitiveFieldNums)
{
    m_sensitiveFieldNums = _sensitiveFieldNums;
    m_sensitiveFieldNumsHasBeenSet = true;
}

bool ESAsset::SensitiveFieldNumsHasBeenSet() const
{
    return m_sensitiveFieldNumsHasBeenSet;
}

