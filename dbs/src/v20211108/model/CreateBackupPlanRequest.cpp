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

#include <tencentcloud/dbs/v20211108/model/CreateBackupPlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

CreateBackupPlanRequest::CreateBackupPlanRequest() :
    m_databaseTypeHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_instanceClassHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_payTypeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateBackupPlanRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_databaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_databaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_backupMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceClass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceClass.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_payTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payType.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenew, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBackupPlanRequest::GetDatabaseType() const
{
    return m_databaseType;
}

void CreateBackupPlanRequest::SetDatabaseType(const string& _databaseType)
{
    m_databaseType = _databaseType;
    m_databaseTypeHasBeenSet = true;
}

bool CreateBackupPlanRequest::DatabaseTypeHasBeenSet() const
{
    return m_databaseTypeHasBeenSet;
}

string CreateBackupPlanRequest::GetBackupMethod() const
{
    return m_backupMethod;
}

void CreateBackupPlanRequest::SetBackupMethod(const string& _backupMethod)
{
    m_backupMethod = _backupMethod;
    m_backupMethodHasBeenSet = true;
}

bool CreateBackupPlanRequest::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

string CreateBackupPlanRequest::GetInstanceClass() const
{
    return m_instanceClass;
}

void CreateBackupPlanRequest::SetInstanceClass(const string& _instanceClass)
{
    m_instanceClass = _instanceClass;
    m_instanceClassHasBeenSet = true;
}

bool CreateBackupPlanRequest::InstanceClassHasBeenSet() const
{
    return m_instanceClassHasBeenSet;
}

int64_t CreateBackupPlanRequest::GetPeriod() const
{
    return m_period;
}

void CreateBackupPlanRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateBackupPlanRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string CreateBackupPlanRequest::GetPayType() const
{
    return m_payType;
}

void CreateBackupPlanRequest::SetPayType(const string& _payType)
{
    m_payType = _payType;
    m_payTypeHasBeenSet = true;
}

bool CreateBackupPlanRequest::PayTypeHasBeenSet() const
{
    return m_payTypeHasBeenSet;
}

int64_t CreateBackupPlanRequest::GetCount() const
{
    return m_count;
}

void CreateBackupPlanRequest::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool CreateBackupPlanRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t CreateBackupPlanRequest::GetAutoRenew() const
{
    return m_autoRenew;
}

void CreateBackupPlanRequest::SetAutoRenew(const int64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool CreateBackupPlanRequest::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

vector<Tag> CreateBackupPlanRequest::GetTags() const
{
    return m_tags;
}

void CreateBackupPlanRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateBackupPlanRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


