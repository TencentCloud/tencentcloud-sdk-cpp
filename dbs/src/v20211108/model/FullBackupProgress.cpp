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

#include <tencentcloud/dbs/v20211108/model/FullBackupProgress.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

FullBackupProgress::FullBackupProgress() :
    m_schemaProgressHasBeenSet(false),
    m_dataProgressHasBeenSet(false)
{
}

CoreInternalOutcome FullBackupProgress::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SchemaProgress") && !value["SchemaProgress"].IsNull())
    {
        if (!value["SchemaProgress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FullBackupProgress.SchemaProgress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_schemaProgress = value["SchemaProgress"].GetInt64();
        m_schemaProgressHasBeenSet = true;
    }

    if (value.HasMember("DataProgress") && !value["DataProgress"].IsNull())
    {
        if (!value["DataProgress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FullBackupProgress.DataProgress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataProgress = value["DataProgress"].GetInt64();
        m_dataProgressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FullBackupProgress::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_schemaProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_schemaProgress, allocator);
    }

    if (m_dataProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataProgress, allocator);
    }

}


int64_t FullBackupProgress::GetSchemaProgress() const
{
    return m_schemaProgress;
}

void FullBackupProgress::SetSchemaProgress(const int64_t& _schemaProgress)
{
    m_schemaProgress = _schemaProgress;
    m_schemaProgressHasBeenSet = true;
}

bool FullBackupProgress::SchemaProgressHasBeenSet() const
{
    return m_schemaProgressHasBeenSet;
}

int64_t FullBackupProgress::GetDataProgress() const
{
    return m_dataProgress;
}

void FullBackupProgress::SetDataProgress(const int64_t& _dataProgress)
{
    m_dataProgress = _dataProgress;
    m_dataProgressHasBeenSet = true;
}

bool FullBackupProgress::DataProgressHasBeenSet() const
{
    return m_dataProgressHasBeenSet;
}

