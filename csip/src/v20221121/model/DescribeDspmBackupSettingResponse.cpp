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

#include <tencentcloud/csip/v20221121/model/DescribeDspmBackupSettingResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeDspmBackupSettingResponse::DescribeDspmBackupSettingResponse() :
    m_backupLogSaveTimeHasBeenSet(false),
    m_restoreLogSaveTimeHasBeenSet(false),
    m_logMaxSaveTimeHasBeenSet(false),
    m_onlineLogMaxSaveTimeHasBeenSet(false),
    m_maxOnlineLogCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDspmBackupSettingResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("BackupLogSaveTime") && !rsp["BackupLogSaveTime"].IsNull())
    {
        if (!rsp["BackupLogSaveTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupLogSaveTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupLogSaveTime = rsp["BackupLogSaveTime"].GetInt64();
        m_backupLogSaveTimeHasBeenSet = true;
    }

    if (rsp.HasMember("RestoreLogSaveTime") && !rsp["RestoreLogSaveTime"].IsNull())
    {
        if (!rsp["RestoreLogSaveTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreLogSaveTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_restoreLogSaveTime = rsp["RestoreLogSaveTime"].GetInt64();
        m_restoreLogSaveTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LogMaxSaveTime") && !rsp["LogMaxSaveTime"].IsNull())
    {
        if (!rsp["LogMaxSaveTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogMaxSaveTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logMaxSaveTime = rsp["LogMaxSaveTime"].GetInt64();
        m_logMaxSaveTimeHasBeenSet = true;
    }

    if (rsp.HasMember("OnlineLogMaxSaveTime") && !rsp["OnlineLogMaxSaveTime"].IsNull())
    {
        if (!rsp["OnlineLogMaxSaveTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OnlineLogMaxSaveTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_onlineLogMaxSaveTime = rsp["OnlineLogMaxSaveTime"].GetInt64();
        m_onlineLogMaxSaveTimeHasBeenSet = true;
    }

    if (rsp.HasMember("MaxOnlineLogCount") && !rsp["MaxOnlineLogCount"].IsNull())
    {
        if (!rsp["MaxOnlineLogCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxOnlineLogCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxOnlineLogCount = rsp["MaxOnlineLogCount"].GetInt64();
        m_maxOnlineLogCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDspmBackupSettingResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_backupLogSaveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupLogSaveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupLogSaveTime, allocator);
    }

    if (m_restoreLogSaveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreLogSaveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restoreLogSaveTime, allocator);
    }

    if (m_logMaxSaveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogMaxSaveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logMaxSaveTime, allocator);
    }

    if (m_onlineLogMaxSaveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineLogMaxSaveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlineLogMaxSaveTime, allocator);
    }

    if (m_maxOnlineLogCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxOnlineLogCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxOnlineLogCount, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeDspmBackupSettingResponse::GetBackupLogSaveTime() const
{
    return m_backupLogSaveTime;
}

bool DescribeDspmBackupSettingResponse::BackupLogSaveTimeHasBeenSet() const
{
    return m_backupLogSaveTimeHasBeenSet;
}

int64_t DescribeDspmBackupSettingResponse::GetRestoreLogSaveTime() const
{
    return m_restoreLogSaveTime;
}

bool DescribeDspmBackupSettingResponse::RestoreLogSaveTimeHasBeenSet() const
{
    return m_restoreLogSaveTimeHasBeenSet;
}

int64_t DescribeDspmBackupSettingResponse::GetLogMaxSaveTime() const
{
    return m_logMaxSaveTime;
}

bool DescribeDspmBackupSettingResponse::LogMaxSaveTimeHasBeenSet() const
{
    return m_logMaxSaveTimeHasBeenSet;
}

int64_t DescribeDspmBackupSettingResponse::GetOnlineLogMaxSaveTime() const
{
    return m_onlineLogMaxSaveTime;
}

bool DescribeDspmBackupSettingResponse::OnlineLogMaxSaveTimeHasBeenSet() const
{
    return m_onlineLogMaxSaveTimeHasBeenSet;
}

int64_t DescribeDspmBackupSettingResponse::GetMaxOnlineLogCount() const
{
    return m_maxOnlineLogCount;
}

bool DescribeDspmBackupSettingResponse::MaxOnlineLogCountHasBeenSet() const
{
    return m_maxOnlineLogCountHasBeenSet;
}


