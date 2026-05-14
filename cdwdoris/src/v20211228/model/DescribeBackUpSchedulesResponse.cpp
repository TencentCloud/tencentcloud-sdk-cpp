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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpSchedulesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeBackUpSchedulesResponse::DescribeBackUpSchedulesResponse() :
    m_backUpOpenedHasBeenSet(false),
    m_cosBucketNameHasBeenSet(false),
    m_backUpStatusHasBeenSet(false),
    m_backupScheduleInfosHasBeenSet(false),
    m_currentTimeHasBeenSet(false),
    m_bucketEncryptionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackUpSchedulesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BackUpOpened") && !rsp["BackUpOpened"].IsNull())
    {
        if (!rsp["BackUpOpened"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpOpened` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_backUpOpened = rsp["BackUpOpened"].GetBool();
        m_backUpOpenedHasBeenSet = true;
    }

    if (rsp.HasMember("CosBucketName") && !rsp["CosBucketName"].IsNull())
    {
        if (!rsp["CosBucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketName = string(rsp["CosBucketName"].GetString());
        m_cosBucketNameHasBeenSet = true;
    }

    if (rsp.HasMember("BackUpStatus") && !rsp["BackUpStatus"].IsNull())
    {
        if (!rsp["BackUpStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backUpStatus = rsp["BackUpStatus"].GetInt64();
        m_backUpStatusHasBeenSet = true;
    }

    if (rsp.HasMember("BackupScheduleInfos") && !rsp["BackupScheduleInfos"].IsNull())
    {
        if (!rsp["BackupScheduleInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupScheduleInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BackupScheduleInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BackupScheduleInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_backupScheduleInfos.push_back(item);
        }
        m_backupScheduleInfosHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentTime") && !rsp["CurrentTime"].IsNull())
    {
        if (!rsp["CurrentTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentTime = string(rsp["CurrentTime"].GetString());
        m_currentTimeHasBeenSet = true;
    }

    if (rsp.HasMember("BucketEncryption") && !rsp["BucketEncryption"].IsNull())
    {
        if (!rsp["BucketEncryption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BucketEncryption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bucketEncryption.Deserialize(rsp["BucketEncryption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bucketEncryptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBackUpSchedulesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_backUpOpenedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackUpOpened";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backUpOpened, allocator);
    }

    if (m_cosBucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_backUpStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackUpStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backUpStatus, allocator);
    }

    if (m_backupScheduleInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupScheduleInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_backupScheduleInfos.begin(); itr != m_backupScheduleInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_currentTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentTime.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketEncryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketEncryption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bucketEncryption.ToJsonObject(value[key.c_str()], allocator);
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


bool DescribeBackUpSchedulesResponse::GetBackUpOpened() const
{
    return m_backUpOpened;
}

bool DescribeBackUpSchedulesResponse::BackUpOpenedHasBeenSet() const
{
    return m_backUpOpenedHasBeenSet;
}

string DescribeBackUpSchedulesResponse::GetCosBucketName() const
{
    return m_cosBucketName;
}

bool DescribeBackUpSchedulesResponse::CosBucketNameHasBeenSet() const
{
    return m_cosBucketNameHasBeenSet;
}

int64_t DescribeBackUpSchedulesResponse::GetBackUpStatus() const
{
    return m_backUpStatus;
}

bool DescribeBackUpSchedulesResponse::BackUpStatusHasBeenSet() const
{
    return m_backUpStatusHasBeenSet;
}

vector<BackupScheduleInfo> DescribeBackUpSchedulesResponse::GetBackupScheduleInfos() const
{
    return m_backupScheduleInfos;
}

bool DescribeBackUpSchedulesResponse::BackupScheduleInfosHasBeenSet() const
{
    return m_backupScheduleInfosHasBeenSet;
}

string DescribeBackUpSchedulesResponse::GetCurrentTime() const
{
    return m_currentTime;
}

bool DescribeBackUpSchedulesResponse::CurrentTimeHasBeenSet() const
{
    return m_currentTimeHasBeenSet;
}

BucketEncryptionInfo DescribeBackUpSchedulesResponse::GetBucketEncryption() const
{
    return m_bucketEncryption;
}

bool DescribeBackUpSchedulesResponse::BucketEncryptionHasBeenSet() const
{
    return m_bucketEncryptionHasBeenSet;
}


