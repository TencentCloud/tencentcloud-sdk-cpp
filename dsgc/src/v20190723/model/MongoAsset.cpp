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

#include <tencentcloud/dsgc/v20190723/model/MongoAsset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

MongoAsset::MongoAsset() :
    m_dbNumsHasBeenSet(false),
    m_sensitiveDbNumsHasBeenSet(false),
    m_colNumsHasBeenSet(false),
    m_sensitiveColNumsHasBeenSet(false),
    m_fieldNumsHasBeenSet(false),
    m_sensitiveFieldNumsHasBeenSet(false)
{
}

CoreInternalOutcome MongoAsset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DbNums") && !value["DbNums"].IsNull())
    {
        if (!value["DbNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoAsset.DbNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dbNums = value["DbNums"].GetInt64();
        m_dbNumsHasBeenSet = true;
    }

    if (value.HasMember("SensitiveDbNums") && !value["SensitiveDbNums"].IsNull())
    {
        if (!value["SensitiveDbNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoAsset.SensitiveDbNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveDbNums = value["SensitiveDbNums"].GetInt64();
        m_sensitiveDbNumsHasBeenSet = true;
    }

    if (value.HasMember("ColNums") && !value["ColNums"].IsNull())
    {
        if (!value["ColNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoAsset.ColNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_colNums = value["ColNums"].GetInt64();
        m_colNumsHasBeenSet = true;
    }

    if (value.HasMember("SensitiveColNums") && !value["SensitiveColNums"].IsNull())
    {
        if (!value["SensitiveColNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoAsset.SensitiveColNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveColNums = value["SensitiveColNums"].GetInt64();
        m_sensitiveColNumsHasBeenSet = true;
    }

    if (value.HasMember("FieldNums") && !value["FieldNums"].IsNull())
    {
        if (!value["FieldNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoAsset.FieldNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fieldNums = value["FieldNums"].GetInt64();
        m_fieldNumsHasBeenSet = true;
    }

    if (value.HasMember("SensitiveFieldNums") && !value["SensitiveFieldNums"].IsNull())
    {
        if (!value["SensitiveFieldNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoAsset.SensitiveFieldNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveFieldNums = value["SensitiveFieldNums"].GetInt64();
        m_sensitiveFieldNumsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MongoAsset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dbNums, allocator);
    }

    if (m_sensitiveDbNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveDbNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveDbNums, allocator);
    }

    if (m_colNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_colNums, allocator);
    }

    if (m_sensitiveColNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveColNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveColNums, allocator);
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


int64_t MongoAsset::GetDbNums() const
{
    return m_dbNums;
}

void MongoAsset::SetDbNums(const int64_t& _dbNums)
{
    m_dbNums = _dbNums;
    m_dbNumsHasBeenSet = true;
}

bool MongoAsset::DbNumsHasBeenSet() const
{
    return m_dbNumsHasBeenSet;
}

int64_t MongoAsset::GetSensitiveDbNums() const
{
    return m_sensitiveDbNums;
}

void MongoAsset::SetSensitiveDbNums(const int64_t& _sensitiveDbNums)
{
    m_sensitiveDbNums = _sensitiveDbNums;
    m_sensitiveDbNumsHasBeenSet = true;
}

bool MongoAsset::SensitiveDbNumsHasBeenSet() const
{
    return m_sensitiveDbNumsHasBeenSet;
}

int64_t MongoAsset::GetColNums() const
{
    return m_colNums;
}

void MongoAsset::SetColNums(const int64_t& _colNums)
{
    m_colNums = _colNums;
    m_colNumsHasBeenSet = true;
}

bool MongoAsset::ColNumsHasBeenSet() const
{
    return m_colNumsHasBeenSet;
}

int64_t MongoAsset::GetSensitiveColNums() const
{
    return m_sensitiveColNums;
}

void MongoAsset::SetSensitiveColNums(const int64_t& _sensitiveColNums)
{
    m_sensitiveColNums = _sensitiveColNums;
    m_sensitiveColNumsHasBeenSet = true;
}

bool MongoAsset::SensitiveColNumsHasBeenSet() const
{
    return m_sensitiveColNumsHasBeenSet;
}

int64_t MongoAsset::GetFieldNums() const
{
    return m_fieldNums;
}

void MongoAsset::SetFieldNums(const int64_t& _fieldNums)
{
    m_fieldNums = _fieldNums;
    m_fieldNumsHasBeenSet = true;
}

bool MongoAsset::FieldNumsHasBeenSet() const
{
    return m_fieldNumsHasBeenSet;
}

int64_t MongoAsset::GetSensitiveFieldNums() const
{
    return m_sensitiveFieldNums;
}

void MongoAsset::SetSensitiveFieldNums(const int64_t& _sensitiveFieldNums)
{
    m_sensitiveFieldNums = _sensitiveFieldNums;
    m_sensitiveFieldNumsHasBeenSet = true;
}

bool MongoAsset::SensitiveFieldNumsHasBeenSet() const
{
    return m_sensitiveFieldNumsHasBeenSet;
}

