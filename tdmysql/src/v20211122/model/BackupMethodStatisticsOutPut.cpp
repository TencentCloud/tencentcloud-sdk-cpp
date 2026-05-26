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

#include <tencentcloud/tdmysql/v20211122/model/BackupMethodStatisticsOutPut.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

BackupMethodStatisticsOutPut::BackupMethodStatisticsOutPut() :
    m_autoBackupSizeHasBeenSet(false),
    m_manualBackupSizeHasBeenSet(false)
{
}

CoreInternalOutcome BackupMethodStatisticsOutPut::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoBackupSize") && !value["AutoBackupSize"].IsNull())
    {
        if (!value["AutoBackupSize"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupMethodStatisticsOutPut.AutoBackupSize` is not array type"));

        const rapidjson::Value &tmpValue = value["AutoBackupSize"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_autoBackupSize.push_back((*itr).GetInt64());
        }
        m_autoBackupSizeHasBeenSet = true;
    }

    if (value.HasMember("ManualBackupSize") && !value["ManualBackupSize"].IsNull())
    {
        if (!value["ManualBackupSize"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupMethodStatisticsOutPut.ManualBackupSize` is not array type"));

        const rapidjson::Value &tmpValue = value["ManualBackupSize"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_manualBackupSize.push_back((*itr).GetInt64());
        }
        m_manualBackupSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupMethodStatisticsOutPut::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoBackupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_autoBackupSize.begin(); itr != m_autoBackupSize.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_manualBackupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualBackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_manualBackupSize.begin(); itr != m_manualBackupSize.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


vector<int64_t> BackupMethodStatisticsOutPut::GetAutoBackupSize() const
{
    return m_autoBackupSize;
}

void BackupMethodStatisticsOutPut::SetAutoBackupSize(const vector<int64_t>& _autoBackupSize)
{
    m_autoBackupSize = _autoBackupSize;
    m_autoBackupSizeHasBeenSet = true;
}

bool BackupMethodStatisticsOutPut::AutoBackupSizeHasBeenSet() const
{
    return m_autoBackupSizeHasBeenSet;
}

vector<int64_t> BackupMethodStatisticsOutPut::GetManualBackupSize() const
{
    return m_manualBackupSize;
}

void BackupMethodStatisticsOutPut::SetManualBackupSize(const vector<int64_t>& _manualBackupSize)
{
    m_manualBackupSize = _manualBackupSize;
    m_manualBackupSizeHasBeenSet = true;
}

bool BackupMethodStatisticsOutPut::ManualBackupSizeHasBeenSet() const
{
    return m_manualBackupSizeHasBeenSet;
}

