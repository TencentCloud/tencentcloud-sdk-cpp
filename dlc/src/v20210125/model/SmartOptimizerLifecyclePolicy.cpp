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

#include <tencentcloud/dlc/v20210125/model/SmartOptimizerLifecyclePolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

SmartOptimizerLifecyclePolicy::SmartOptimizerLifecyclePolicy() :
    m_lifecycleEnableHasBeenSet(false),
    m_expirationHasBeenSet(false),
    m_dropTableHasBeenSet(false),
    m_expiredFieldHasBeenSet(false),
    m_expiredFieldFormatHasBeenSet(false)
{
}

CoreInternalOutcome SmartOptimizerLifecyclePolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LifecycleEnable") && !value["LifecycleEnable"].IsNull())
    {
        if (!value["LifecycleEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartOptimizerLifecyclePolicy.LifecycleEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifecycleEnable = string(value["LifecycleEnable"].GetString());
        m_lifecycleEnableHasBeenSet = true;
    }

    if (value.HasMember("Expiration") && !value["Expiration"].IsNull())
    {
        if (!value["Expiration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SmartOptimizerLifecyclePolicy.Expiration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiration = value["Expiration"].GetInt64();
        m_expirationHasBeenSet = true;
    }

    if (value.HasMember("DropTable") && !value["DropTable"].IsNull())
    {
        if (!value["DropTable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SmartOptimizerLifecyclePolicy.DropTable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dropTable = value["DropTable"].GetBool();
        m_dropTableHasBeenSet = true;
    }

    if (value.HasMember("ExpiredField") && !value["ExpiredField"].IsNull())
    {
        if (!value["ExpiredField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartOptimizerLifecyclePolicy.ExpiredField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredField = string(value["ExpiredField"].GetString());
        m_expiredFieldHasBeenSet = true;
    }

    if (value.HasMember("ExpiredFieldFormat") && !value["ExpiredFieldFormat"].IsNull())
    {
        if (!value["ExpiredFieldFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartOptimizerLifecyclePolicy.ExpiredFieldFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredFieldFormat = string(value["ExpiredFieldFormat"].GetString());
        m_expiredFieldFormatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartOptimizerLifecyclePolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lifecycleEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifecycleEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_expirationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expiration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiration, allocator);
    }

    if (m_dropTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropTable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dropTable, allocator);
    }

    if (m_expiredFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredField.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredFieldFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredFieldFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredFieldFormat.c_str(), allocator).Move(), allocator);
    }

}


string SmartOptimizerLifecyclePolicy::GetLifecycleEnable() const
{
    return m_lifecycleEnable;
}

void SmartOptimizerLifecyclePolicy::SetLifecycleEnable(const string& _lifecycleEnable)
{
    m_lifecycleEnable = _lifecycleEnable;
    m_lifecycleEnableHasBeenSet = true;
}

bool SmartOptimizerLifecyclePolicy::LifecycleEnableHasBeenSet() const
{
    return m_lifecycleEnableHasBeenSet;
}

int64_t SmartOptimizerLifecyclePolicy::GetExpiration() const
{
    return m_expiration;
}

void SmartOptimizerLifecyclePolicy::SetExpiration(const int64_t& _expiration)
{
    m_expiration = _expiration;
    m_expirationHasBeenSet = true;
}

bool SmartOptimizerLifecyclePolicy::ExpirationHasBeenSet() const
{
    return m_expirationHasBeenSet;
}

bool SmartOptimizerLifecyclePolicy::GetDropTable() const
{
    return m_dropTable;
}

void SmartOptimizerLifecyclePolicy::SetDropTable(const bool& _dropTable)
{
    m_dropTable = _dropTable;
    m_dropTableHasBeenSet = true;
}

bool SmartOptimizerLifecyclePolicy::DropTableHasBeenSet() const
{
    return m_dropTableHasBeenSet;
}

string SmartOptimizerLifecyclePolicy::GetExpiredField() const
{
    return m_expiredField;
}

void SmartOptimizerLifecyclePolicy::SetExpiredField(const string& _expiredField)
{
    m_expiredField = _expiredField;
    m_expiredFieldHasBeenSet = true;
}

bool SmartOptimizerLifecyclePolicy::ExpiredFieldHasBeenSet() const
{
    return m_expiredFieldHasBeenSet;
}

string SmartOptimizerLifecyclePolicy::GetExpiredFieldFormat() const
{
    return m_expiredFieldFormat;
}

void SmartOptimizerLifecyclePolicy::SetExpiredFieldFormat(const string& _expiredFieldFormat)
{
    m_expiredFieldFormat = _expiredFieldFormat;
    m_expiredFieldFormatHasBeenSet = true;
}

bool SmartOptimizerLifecyclePolicy::ExpiredFieldFormatHasBeenSet() const
{
    return m_expiredFieldFormatHasBeenSet;
}

