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

#include <tencentcloud/mongodb/v20190725/model/DescribeBackupRulesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

DescribeBackupRulesResponse::DescribeBackupRulesResponse() :
    m_backupSaveTimeHasBeenSet(false),
    m_backupTimeHasBeenSet(false),
    m_backupMethodHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackupRulesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BackupSaveTime") && !rsp["BackupSaveTime"].IsNull())
    {
        if (!rsp["BackupSaveTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSaveTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupSaveTime = rsp["BackupSaveTime"].GetUint64();
        m_backupSaveTimeHasBeenSet = true;
    }

    if (rsp.HasMember("BackupTime") && !rsp["BackupTime"].IsNull())
    {
        if (!rsp["BackupTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupTime = rsp["BackupTime"].GetUint64();
        m_backupTimeHasBeenSet = true;
    }

    if (rsp.HasMember("BackupMethod") && !rsp["BackupMethod"].IsNull())
    {
        if (!rsp["BackupMethod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupMethod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupMethod = rsp["BackupMethod"].GetUint64();
        m_backupMethodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBackupRulesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_backupSaveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSaveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupSaveTime, allocator);
    }

    if (m_backupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupTime, allocator);
    }

    if (m_backupMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupMethod, allocator);
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


uint64_t DescribeBackupRulesResponse::GetBackupSaveTime() const
{
    return m_backupSaveTime;
}

bool DescribeBackupRulesResponse::BackupSaveTimeHasBeenSet() const
{
    return m_backupSaveTimeHasBeenSet;
}

uint64_t DescribeBackupRulesResponse::GetBackupTime() const
{
    return m_backupTime;
}

bool DescribeBackupRulesResponse::BackupTimeHasBeenSet() const
{
    return m_backupTimeHasBeenSet;
}

uint64_t DescribeBackupRulesResponse::GetBackupMethod() const
{
    return m_backupMethod;
}

bool DescribeBackupRulesResponse::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}


