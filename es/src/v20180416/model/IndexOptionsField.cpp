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

#include <tencentcloud/es/v20180416/model/IndexOptionsField.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

IndexOptionsField::IndexOptionsField() :
    m_expireMaxAgeHasBeenSet(false),
    m_expireMaxSizeHasBeenSet(false),
    m_rolloverMaxAgeHasBeenSet(false),
    m_rolloverDynamicHasBeenSet(false),
    m_shardNumDynamicHasBeenSet(false),
    m_timestampFieldHasBeenSet(false),
    m_writeModeHasBeenSet(false)
{
}

CoreInternalOutcome IndexOptionsField::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExpireMaxAge") && !value["ExpireMaxAge"].IsNull())
    {
        if (!value["ExpireMaxAge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexOptionsField.ExpireMaxAge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireMaxAge = string(value["ExpireMaxAge"].GetString());
        m_expireMaxAgeHasBeenSet = true;
    }

    if (value.HasMember("ExpireMaxSize") && !value["ExpireMaxSize"].IsNull())
    {
        if (!value["ExpireMaxSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexOptionsField.ExpireMaxSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireMaxSize = string(value["ExpireMaxSize"].GetString());
        m_expireMaxSizeHasBeenSet = true;
    }

    if (value.HasMember("RolloverMaxAge") && !value["RolloverMaxAge"].IsNull())
    {
        if (!value["RolloverMaxAge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexOptionsField.RolloverMaxAge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rolloverMaxAge = string(value["RolloverMaxAge"].GetString());
        m_rolloverMaxAgeHasBeenSet = true;
    }

    if (value.HasMember("RolloverDynamic") && !value["RolloverDynamic"].IsNull())
    {
        if (!value["RolloverDynamic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexOptionsField.RolloverDynamic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rolloverDynamic = string(value["RolloverDynamic"].GetString());
        m_rolloverDynamicHasBeenSet = true;
    }

    if (value.HasMember("ShardNumDynamic") && !value["ShardNumDynamic"].IsNull())
    {
        if (!value["ShardNumDynamic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexOptionsField.ShardNumDynamic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardNumDynamic = string(value["ShardNumDynamic"].GetString());
        m_shardNumDynamicHasBeenSet = true;
    }

    if (value.HasMember("TimestampField") && !value["TimestampField"].IsNull())
    {
        if (!value["TimestampField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexOptionsField.TimestampField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestampField = string(value["TimestampField"].GetString());
        m_timestampFieldHasBeenSet = true;
    }

    if (value.HasMember("WriteMode") && !value["WriteMode"].IsNull())
    {
        if (!value["WriteMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexOptionsField.WriteMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_writeMode = string(value["WriteMode"].GetString());
        m_writeModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IndexOptionsField::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_expireMaxAgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireMaxAge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireMaxAge.c_str(), allocator).Move(), allocator);
    }

    if (m_expireMaxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireMaxSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireMaxSize.c_str(), allocator).Move(), allocator);
    }

    if (m_rolloverMaxAgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RolloverMaxAge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rolloverMaxAge.c_str(), allocator).Move(), allocator);
    }

    if (m_rolloverDynamicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RolloverDynamic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rolloverDynamic.c_str(), allocator).Move(), allocator);
    }

    if (m_shardNumDynamicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardNumDynamic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shardNumDynamic.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimestampField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestampField.c_str(), allocator).Move(), allocator);
    }

    if (m_writeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_writeMode.c_str(), allocator).Move(), allocator);
    }

}


string IndexOptionsField::GetExpireMaxAge() const
{
    return m_expireMaxAge;
}

void IndexOptionsField::SetExpireMaxAge(const string& _expireMaxAge)
{
    m_expireMaxAge = _expireMaxAge;
    m_expireMaxAgeHasBeenSet = true;
}

bool IndexOptionsField::ExpireMaxAgeHasBeenSet() const
{
    return m_expireMaxAgeHasBeenSet;
}

string IndexOptionsField::GetExpireMaxSize() const
{
    return m_expireMaxSize;
}

void IndexOptionsField::SetExpireMaxSize(const string& _expireMaxSize)
{
    m_expireMaxSize = _expireMaxSize;
    m_expireMaxSizeHasBeenSet = true;
}

bool IndexOptionsField::ExpireMaxSizeHasBeenSet() const
{
    return m_expireMaxSizeHasBeenSet;
}

string IndexOptionsField::GetRolloverMaxAge() const
{
    return m_rolloverMaxAge;
}

void IndexOptionsField::SetRolloverMaxAge(const string& _rolloverMaxAge)
{
    m_rolloverMaxAge = _rolloverMaxAge;
    m_rolloverMaxAgeHasBeenSet = true;
}

bool IndexOptionsField::RolloverMaxAgeHasBeenSet() const
{
    return m_rolloverMaxAgeHasBeenSet;
}

string IndexOptionsField::GetRolloverDynamic() const
{
    return m_rolloverDynamic;
}

void IndexOptionsField::SetRolloverDynamic(const string& _rolloverDynamic)
{
    m_rolloverDynamic = _rolloverDynamic;
    m_rolloverDynamicHasBeenSet = true;
}

bool IndexOptionsField::RolloverDynamicHasBeenSet() const
{
    return m_rolloverDynamicHasBeenSet;
}

string IndexOptionsField::GetShardNumDynamic() const
{
    return m_shardNumDynamic;
}

void IndexOptionsField::SetShardNumDynamic(const string& _shardNumDynamic)
{
    m_shardNumDynamic = _shardNumDynamic;
    m_shardNumDynamicHasBeenSet = true;
}

bool IndexOptionsField::ShardNumDynamicHasBeenSet() const
{
    return m_shardNumDynamicHasBeenSet;
}

string IndexOptionsField::GetTimestampField() const
{
    return m_timestampField;
}

void IndexOptionsField::SetTimestampField(const string& _timestampField)
{
    m_timestampField = _timestampField;
    m_timestampFieldHasBeenSet = true;
}

bool IndexOptionsField::TimestampFieldHasBeenSet() const
{
    return m_timestampFieldHasBeenSet;
}

string IndexOptionsField::GetWriteMode() const
{
    return m_writeMode;
}

void IndexOptionsField::SetWriteMode(const string& _writeMode)
{
    m_writeMode = _writeMode;
    m_writeModeHasBeenSet = true;
}

bool IndexOptionsField::WriteModeHasBeenSet() const
{
    return m_writeModeHasBeenSet;
}

