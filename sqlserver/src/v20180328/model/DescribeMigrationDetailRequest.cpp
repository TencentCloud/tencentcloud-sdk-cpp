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

#include <tencentcloud/sqlserver/v20180328/model/DescribeMigrationDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeMigrationDetailRequest::DescribeMigrationDetailRequest() :
    m_migrateIdHasBeenSet(false)
{
}

string DescribeMigrationDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_migrateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_migrateId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeMigrationDetailRequest::GetMigrateId() const
{
    return m_migrateId;
}

void DescribeMigrationDetailRequest::SetMigrateId(const uint64_t& _migrateId)
{
    m_migrateId = _migrateId;
    m_migrateIdHasBeenSet = true;
}

bool DescribeMigrationDetailRequest::MigrateIdHasBeenSet() const
{
    return m_migrateIdHasBeenSet;
}


