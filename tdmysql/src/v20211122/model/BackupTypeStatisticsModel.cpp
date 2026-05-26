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

#include <tencentcloud/tdmysql/v20211122/model/BackupTypeStatisticsModel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

BackupTypeStatisticsModel::BackupTypeStatisticsModel() :
    m_dataBackupSizeHasBeenSet(false),
    m_logBackupSizeHasBeenSet(false)
{
}

CoreInternalOutcome BackupTypeStatisticsModel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataBackupSize") && !value["DataBackupSize"].IsNull())
    {
        if (!value["DataBackupSize"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupTypeStatisticsModel.DataBackupSize` is not array type"));

        const rapidjson::Value &tmpValue = value["DataBackupSize"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dataBackupSize.push_back((*itr).GetInt64());
        }
        m_dataBackupSizeHasBeenSet = true;
    }

    if (value.HasMember("LogBackupSize") && !value["LogBackupSize"].IsNull())
    {
        if (!value["LogBackupSize"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupTypeStatisticsModel.LogBackupSize` is not array type"));

        const rapidjson::Value &tmpValue = value["LogBackupSize"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_logBackupSize.push_back((*itr).GetInt64());
        }
        m_logBackupSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupTypeStatisticsModel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataBackupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataBackupSize.begin(); itr != m_dataBackupSize.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_logBackupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogBackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_logBackupSize.begin(); itr != m_logBackupSize.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


vector<int64_t> BackupTypeStatisticsModel::GetDataBackupSize() const
{
    return m_dataBackupSize;
}

void BackupTypeStatisticsModel::SetDataBackupSize(const vector<int64_t>& _dataBackupSize)
{
    m_dataBackupSize = _dataBackupSize;
    m_dataBackupSizeHasBeenSet = true;
}

bool BackupTypeStatisticsModel::DataBackupSizeHasBeenSet() const
{
    return m_dataBackupSizeHasBeenSet;
}

vector<int64_t> BackupTypeStatisticsModel::GetLogBackupSize() const
{
    return m_logBackupSize;
}

void BackupTypeStatisticsModel::SetLogBackupSize(const vector<int64_t>& _logBackupSize)
{
    m_logBackupSize = _logBackupSize;
    m_logBackupSizeHasBeenSet = true;
}

bool BackupTypeStatisticsModel::LogBackupSizeHasBeenSet() const
{
    return m_logBackupSizeHasBeenSet;
}

