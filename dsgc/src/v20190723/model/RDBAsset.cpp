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

#include <tencentcloud/dsgc/v20190723/model/RDBAsset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

RDBAsset::RDBAsset() :
    m_dbNumsHasBeenSet(false),
    m_sensitiveDbNumsHasBeenSet(false),
    m_tableNumsHasBeenSet(false),
    m_sensitiveTableNumsHasBeenSet(false),
    m_fieldNumsHasBeenSet(false),
    m_sensitiveFieldNumsHasBeenSet(false)
{
}

CoreInternalOutcome RDBAsset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DbNums") && !value["DbNums"].IsNull())
    {
        if (!value["DbNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RDBAsset.DbNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dbNums = value["DbNums"].GetInt64();
        m_dbNumsHasBeenSet = true;
    }

    if (value.HasMember("SensitiveDbNums") && !value["SensitiveDbNums"].IsNull())
    {
        if (!value["SensitiveDbNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RDBAsset.SensitiveDbNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveDbNums = value["SensitiveDbNums"].GetInt64();
        m_sensitiveDbNumsHasBeenSet = true;
    }

    if (value.HasMember("TableNums") && !value["TableNums"].IsNull())
    {
        if (!value["TableNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RDBAsset.TableNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tableNums = value["TableNums"].GetInt64();
        m_tableNumsHasBeenSet = true;
    }

    if (value.HasMember("SensitiveTableNums") && !value["SensitiveTableNums"].IsNull())
    {
        if (!value["SensitiveTableNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RDBAsset.SensitiveTableNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveTableNums = value["SensitiveTableNums"].GetInt64();
        m_sensitiveTableNumsHasBeenSet = true;
    }

    if (value.HasMember("FieldNums") && !value["FieldNums"].IsNull())
    {
        if (!value["FieldNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RDBAsset.FieldNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fieldNums = value["FieldNums"].GetInt64();
        m_fieldNumsHasBeenSet = true;
    }

    if (value.HasMember("SensitiveFieldNums") && !value["SensitiveFieldNums"].IsNull())
    {
        if (!value["SensitiveFieldNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RDBAsset.SensitiveFieldNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveFieldNums = value["SensitiveFieldNums"].GetInt64();
        m_sensitiveFieldNumsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RDBAsset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_tableNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableNums, allocator);
    }

    if (m_sensitiveTableNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveTableNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveTableNums, allocator);
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


int64_t RDBAsset::GetDbNums() const
{
    return m_dbNums;
}

void RDBAsset::SetDbNums(const int64_t& _dbNums)
{
    m_dbNums = _dbNums;
    m_dbNumsHasBeenSet = true;
}

bool RDBAsset::DbNumsHasBeenSet() const
{
    return m_dbNumsHasBeenSet;
}

int64_t RDBAsset::GetSensitiveDbNums() const
{
    return m_sensitiveDbNums;
}

void RDBAsset::SetSensitiveDbNums(const int64_t& _sensitiveDbNums)
{
    m_sensitiveDbNums = _sensitiveDbNums;
    m_sensitiveDbNumsHasBeenSet = true;
}

bool RDBAsset::SensitiveDbNumsHasBeenSet() const
{
    return m_sensitiveDbNumsHasBeenSet;
}

int64_t RDBAsset::GetTableNums() const
{
    return m_tableNums;
}

void RDBAsset::SetTableNums(const int64_t& _tableNums)
{
    m_tableNums = _tableNums;
    m_tableNumsHasBeenSet = true;
}

bool RDBAsset::TableNumsHasBeenSet() const
{
    return m_tableNumsHasBeenSet;
}

int64_t RDBAsset::GetSensitiveTableNums() const
{
    return m_sensitiveTableNums;
}

void RDBAsset::SetSensitiveTableNums(const int64_t& _sensitiveTableNums)
{
    m_sensitiveTableNums = _sensitiveTableNums;
    m_sensitiveTableNumsHasBeenSet = true;
}

bool RDBAsset::SensitiveTableNumsHasBeenSet() const
{
    return m_sensitiveTableNumsHasBeenSet;
}

int64_t RDBAsset::GetFieldNums() const
{
    return m_fieldNums;
}

void RDBAsset::SetFieldNums(const int64_t& _fieldNums)
{
    m_fieldNums = _fieldNums;
    m_fieldNumsHasBeenSet = true;
}

bool RDBAsset::FieldNumsHasBeenSet() const
{
    return m_fieldNumsHasBeenSet;
}

int64_t RDBAsset::GetSensitiveFieldNums() const
{
    return m_sensitiveFieldNums;
}

void RDBAsset::SetSensitiveFieldNums(const int64_t& _sensitiveFieldNums)
{
    m_sensitiveFieldNums = _sensitiveFieldNums;
    m_sensitiveFieldNumsHasBeenSet = true;
}

bool RDBAsset::SensitiveFieldNumsHasBeenSet() const
{
    return m_sensitiveFieldNumsHasBeenSet;
}

