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

#include <tencentcloud/mongodb/v20190725/model/BackupTotalSize.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

BackupTotalSize::BackupTotalSize() :
    m_snapshotSizeHasBeenSet(false),
    m_oplogSizeHasBeenSet(false),
    m_freeQuotaHasBeenSet(false)
{
}

CoreInternalOutcome BackupTotalSize::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SnapshotSize") && !value["SnapshotSize"].IsNull())
    {
        if (!value["SnapshotSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTotalSize.SnapshotSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotSize = value["SnapshotSize"].GetInt64();
        m_snapshotSizeHasBeenSet = true;
    }

    if (value.HasMember("OplogSize") && !value["OplogSize"].IsNull())
    {
        if (!value["OplogSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTotalSize.OplogSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_oplogSize = value["OplogSize"].GetInt64();
        m_oplogSizeHasBeenSet = true;
    }

    if (value.HasMember("FreeQuota") && !value["FreeQuota"].IsNull())
    {
        if (!value["FreeQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTotalSize.FreeQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_freeQuota = value["FreeQuota"].GetInt64();
        m_freeQuotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupTotalSize::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_snapshotSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snapshotSize, allocator);
    }

    if (m_oplogSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OplogSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oplogSize, allocator);
    }

    if (m_freeQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freeQuota, allocator);
    }

}


int64_t BackupTotalSize::GetSnapshotSize() const
{
    return m_snapshotSize;
}

void BackupTotalSize::SetSnapshotSize(const int64_t& _snapshotSize)
{
    m_snapshotSize = _snapshotSize;
    m_snapshotSizeHasBeenSet = true;
}

bool BackupTotalSize::SnapshotSizeHasBeenSet() const
{
    return m_snapshotSizeHasBeenSet;
}

int64_t BackupTotalSize::GetOplogSize() const
{
    return m_oplogSize;
}

void BackupTotalSize::SetOplogSize(const int64_t& _oplogSize)
{
    m_oplogSize = _oplogSize;
    m_oplogSizeHasBeenSet = true;
}

bool BackupTotalSize::OplogSizeHasBeenSet() const
{
    return m_oplogSizeHasBeenSet;
}

int64_t BackupTotalSize::GetFreeQuota() const
{
    return m_freeQuota;
}

void BackupTotalSize::SetFreeQuota(const int64_t& _freeQuota)
{
    m_freeQuota = _freeQuota;
    m_freeQuotaHasBeenSet = true;
}

bool BackupTotalSize::FreeQuotaHasBeenSet() const
{
    return m_freeQuotaHasBeenSet;
}

