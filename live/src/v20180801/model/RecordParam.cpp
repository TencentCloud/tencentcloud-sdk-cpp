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

#include <tencentcloud/live/v20180801/model/RecordParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

RecordParam::RecordParam() :
    m_recordIntervalHasBeenSet(false),
    m_storageTimeHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_vodSubAppIdHasBeenSet(false),
    m_vodFileNameHasBeenSet(false),
    m_procedureHasBeenSet(false),
    m_storageModeHasBeenSet(false),
    m_classIdHasBeenSet(false),
    m_cosBucketNameHasBeenSet(false),
    m_cosBucketRegionHasBeenSet(false),
    m_cosBucketPathHasBeenSet(false)
{
}

CoreInternalOutcome RecordParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecordInterval") && !value["RecordInterval"].IsNull())
    {
        if (!value["RecordInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordParam.RecordInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordInterval = value["RecordInterval"].GetInt64();
        m_recordIntervalHasBeenSet = true;
    }

    if (value.HasMember("StorageTime") && !value["StorageTime"].IsNull())
    {
        if (!value["StorageTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordParam.StorageTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageTime = value["StorageTime"].GetInt64();
        m_storageTimeHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordParam.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("VodSubAppId") && !value["VodSubAppId"].IsNull())
    {
        if (!value["VodSubAppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordParam.VodSubAppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vodSubAppId = value["VodSubAppId"].GetInt64();
        m_vodSubAppIdHasBeenSet = true;
    }

    if (value.HasMember("VodFileName") && !value["VodFileName"].IsNull())
    {
        if (!value["VodFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordParam.VodFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vodFileName = string(value["VodFileName"].GetString());
        m_vodFileNameHasBeenSet = true;
    }

    if (value.HasMember("Procedure") && !value["Procedure"].IsNull())
    {
        if (!value["Procedure"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordParam.Procedure` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_procedure = string(value["Procedure"].GetString());
        m_procedureHasBeenSet = true;
    }

    if (value.HasMember("StorageMode") && !value["StorageMode"].IsNull())
    {
        if (!value["StorageMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordParam.StorageMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageMode = string(value["StorageMode"].GetString());
        m_storageModeHasBeenSet = true;
    }

    if (value.HasMember("ClassId") && !value["ClassId"].IsNull())
    {
        if (!value["ClassId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordParam.ClassId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_classId = value["ClassId"].GetInt64();
        m_classIdHasBeenSet = true;
    }

    if (value.HasMember("CosBucketName") && !value["CosBucketName"].IsNull())
    {
        if (!value["CosBucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordParam.CosBucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketName = string(value["CosBucketName"].GetString());
        m_cosBucketNameHasBeenSet = true;
    }

    if (value.HasMember("CosBucketRegion") && !value["CosBucketRegion"].IsNull())
    {
        if (!value["CosBucketRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordParam.CosBucketRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketRegion = string(value["CosBucketRegion"].GetString());
        m_cosBucketRegionHasBeenSet = true;
    }

    if (value.HasMember("CosBucketPath") && !value["CosBucketPath"].IsNull())
    {
        if (!value["CosBucketPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordParam.CosBucketPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketPath = string(value["CosBucketPath"].GetString());
        m_cosBucketPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recordIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordInterval, allocator);
    }

    if (m_storageTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageTime, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_vodSubAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VodSubAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vodSubAppId, allocator);
    }

    if (m_vodFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VodFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vodFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_procedureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Procedure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_procedure.c_str(), allocator).Move(), allocator);
    }

    if (m_storageModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageMode.c_str(), allocator).Move(), allocator);
    }

    if (m_classIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_classId, allocator);
    }

    if (m_cosBucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucketRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucketPath.c_str(), allocator).Move(), allocator);
    }

}


int64_t RecordParam::GetRecordInterval() const
{
    return m_recordInterval;
}

void RecordParam::SetRecordInterval(const int64_t& _recordInterval)
{
    m_recordInterval = _recordInterval;
    m_recordIntervalHasBeenSet = true;
}

bool RecordParam::RecordIntervalHasBeenSet() const
{
    return m_recordIntervalHasBeenSet;
}

int64_t RecordParam::GetStorageTime() const
{
    return m_storageTime;
}

void RecordParam::SetStorageTime(const int64_t& _storageTime)
{
    m_storageTime = _storageTime;
    m_storageTimeHasBeenSet = true;
}

bool RecordParam::StorageTimeHasBeenSet() const
{
    return m_storageTimeHasBeenSet;
}

int64_t RecordParam::GetEnable() const
{
    return m_enable;
}

void RecordParam::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool RecordParam::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t RecordParam::GetVodSubAppId() const
{
    return m_vodSubAppId;
}

void RecordParam::SetVodSubAppId(const int64_t& _vodSubAppId)
{
    m_vodSubAppId = _vodSubAppId;
    m_vodSubAppIdHasBeenSet = true;
}

bool RecordParam::VodSubAppIdHasBeenSet() const
{
    return m_vodSubAppIdHasBeenSet;
}

string RecordParam::GetVodFileName() const
{
    return m_vodFileName;
}

void RecordParam::SetVodFileName(const string& _vodFileName)
{
    m_vodFileName = _vodFileName;
    m_vodFileNameHasBeenSet = true;
}

bool RecordParam::VodFileNameHasBeenSet() const
{
    return m_vodFileNameHasBeenSet;
}

string RecordParam::GetProcedure() const
{
    return m_procedure;
}

void RecordParam::SetProcedure(const string& _procedure)
{
    m_procedure = _procedure;
    m_procedureHasBeenSet = true;
}

bool RecordParam::ProcedureHasBeenSet() const
{
    return m_procedureHasBeenSet;
}

string RecordParam::GetStorageMode() const
{
    return m_storageMode;
}

void RecordParam::SetStorageMode(const string& _storageMode)
{
    m_storageMode = _storageMode;
    m_storageModeHasBeenSet = true;
}

bool RecordParam::StorageModeHasBeenSet() const
{
    return m_storageModeHasBeenSet;
}

int64_t RecordParam::GetClassId() const
{
    return m_classId;
}

void RecordParam::SetClassId(const int64_t& _classId)
{
    m_classId = _classId;
    m_classIdHasBeenSet = true;
}

bool RecordParam::ClassIdHasBeenSet() const
{
    return m_classIdHasBeenSet;
}

string RecordParam::GetCosBucketName() const
{
    return m_cosBucketName;
}

void RecordParam::SetCosBucketName(const string& _cosBucketName)
{
    m_cosBucketName = _cosBucketName;
    m_cosBucketNameHasBeenSet = true;
}

bool RecordParam::CosBucketNameHasBeenSet() const
{
    return m_cosBucketNameHasBeenSet;
}

string RecordParam::GetCosBucketRegion() const
{
    return m_cosBucketRegion;
}

void RecordParam::SetCosBucketRegion(const string& _cosBucketRegion)
{
    m_cosBucketRegion = _cosBucketRegion;
    m_cosBucketRegionHasBeenSet = true;
}

bool RecordParam::CosBucketRegionHasBeenSet() const
{
    return m_cosBucketRegionHasBeenSet;
}

string RecordParam::GetCosBucketPath() const
{
    return m_cosBucketPath;
}

void RecordParam::SetCosBucketPath(const string& _cosBucketPath)
{
    m_cosBucketPath = _cosBucketPath;
    m_cosBucketPathHasBeenSet = true;
}

bool RecordParam::CosBucketPathHasBeenSet() const
{
    return m_cosBucketPathHasBeenSet;
}

