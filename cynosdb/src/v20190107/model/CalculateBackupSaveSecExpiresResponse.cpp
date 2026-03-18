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

#include <tencentcloud/cynosdb/v20190107/model/CalculateBackupSaveSecExpiresResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CalculateBackupSaveSecExpiresResponse::CalculateBackupSaveSecExpiresResponse() :
    m_willDeleteBackupFileCountHasBeenSet(false),
    m_willDeleteBackupFilesHasBeenSet(false),
    m_willDeleteBinlogFileCountHasBeenSet(false),
    m_willDeleteBinlogFilesHasBeenSet(false),
    m_willDeleteRedoLogFileCountHasBeenSet(false),
    m_willDeleteRedoLogFilesHasBeenSet(false)
{
}

CoreInternalOutcome CalculateBackupSaveSecExpiresResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("WillDeleteBackupFileCount") && !rsp["WillDeleteBackupFileCount"].IsNull())
    {
        if (!rsp["WillDeleteBackupFileCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WillDeleteBackupFileCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_willDeleteBackupFileCount = rsp["WillDeleteBackupFileCount"].GetInt64();
        m_willDeleteBackupFileCountHasBeenSet = true;
    }

    if (rsp.HasMember("WillDeleteBackupFiles") && !rsp["WillDeleteBackupFiles"].IsNull())
    {
        if (!rsp["WillDeleteBackupFiles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WillDeleteBackupFiles` is not array type"));

        const rapidjson::Value &tmpValue = rsp["WillDeleteBackupFiles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WillDeleteItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_willDeleteBackupFiles.push_back(item);
        }
        m_willDeleteBackupFilesHasBeenSet = true;
    }

    if (rsp.HasMember("WillDeleteBinlogFileCount") && !rsp["WillDeleteBinlogFileCount"].IsNull())
    {
        if (!rsp["WillDeleteBinlogFileCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WillDeleteBinlogFileCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_willDeleteBinlogFileCount = rsp["WillDeleteBinlogFileCount"].GetInt64();
        m_willDeleteBinlogFileCountHasBeenSet = true;
    }

    if (rsp.HasMember("WillDeleteBinlogFiles") && !rsp["WillDeleteBinlogFiles"].IsNull())
    {
        if (!rsp["WillDeleteBinlogFiles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WillDeleteBinlogFiles` is not array type"));

        const rapidjson::Value &tmpValue = rsp["WillDeleteBinlogFiles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WillDeleteItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_willDeleteBinlogFiles.push_back(item);
        }
        m_willDeleteBinlogFilesHasBeenSet = true;
    }

    if (rsp.HasMember("WillDeleteRedoLogFileCount") && !rsp["WillDeleteRedoLogFileCount"].IsNull())
    {
        if (!rsp["WillDeleteRedoLogFileCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WillDeleteRedoLogFileCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_willDeleteRedoLogFileCount = rsp["WillDeleteRedoLogFileCount"].GetInt64();
        m_willDeleteRedoLogFileCountHasBeenSet = true;
    }

    if (rsp.HasMember("WillDeleteRedoLogFiles") && !rsp["WillDeleteRedoLogFiles"].IsNull())
    {
        if (!rsp["WillDeleteRedoLogFiles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WillDeleteRedoLogFiles` is not array type"));

        const rapidjson::Value &tmpValue = rsp["WillDeleteRedoLogFiles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WillDeleteItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_willDeleteRedoLogFiles.push_back(item);
        }
        m_willDeleteRedoLogFilesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CalculateBackupSaveSecExpiresResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_willDeleteBackupFileCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WillDeleteBackupFileCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_willDeleteBackupFileCount, allocator);
    }

    if (m_willDeleteBackupFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WillDeleteBackupFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_willDeleteBackupFiles.begin(); itr != m_willDeleteBackupFiles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_willDeleteBinlogFileCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WillDeleteBinlogFileCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_willDeleteBinlogFileCount, allocator);
    }

    if (m_willDeleteBinlogFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WillDeleteBinlogFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_willDeleteBinlogFiles.begin(); itr != m_willDeleteBinlogFiles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_willDeleteRedoLogFileCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WillDeleteRedoLogFileCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_willDeleteRedoLogFileCount, allocator);
    }

    if (m_willDeleteRedoLogFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WillDeleteRedoLogFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_willDeleteRedoLogFiles.begin(); itr != m_willDeleteRedoLogFiles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


int64_t CalculateBackupSaveSecExpiresResponse::GetWillDeleteBackupFileCount() const
{
    return m_willDeleteBackupFileCount;
}

bool CalculateBackupSaveSecExpiresResponse::WillDeleteBackupFileCountHasBeenSet() const
{
    return m_willDeleteBackupFileCountHasBeenSet;
}

vector<WillDeleteItem> CalculateBackupSaveSecExpiresResponse::GetWillDeleteBackupFiles() const
{
    return m_willDeleteBackupFiles;
}

bool CalculateBackupSaveSecExpiresResponse::WillDeleteBackupFilesHasBeenSet() const
{
    return m_willDeleteBackupFilesHasBeenSet;
}

int64_t CalculateBackupSaveSecExpiresResponse::GetWillDeleteBinlogFileCount() const
{
    return m_willDeleteBinlogFileCount;
}

bool CalculateBackupSaveSecExpiresResponse::WillDeleteBinlogFileCountHasBeenSet() const
{
    return m_willDeleteBinlogFileCountHasBeenSet;
}

vector<WillDeleteItem> CalculateBackupSaveSecExpiresResponse::GetWillDeleteBinlogFiles() const
{
    return m_willDeleteBinlogFiles;
}

bool CalculateBackupSaveSecExpiresResponse::WillDeleteBinlogFilesHasBeenSet() const
{
    return m_willDeleteBinlogFilesHasBeenSet;
}

int64_t CalculateBackupSaveSecExpiresResponse::GetWillDeleteRedoLogFileCount() const
{
    return m_willDeleteRedoLogFileCount;
}

bool CalculateBackupSaveSecExpiresResponse::WillDeleteRedoLogFileCountHasBeenSet() const
{
    return m_willDeleteRedoLogFileCountHasBeenSet;
}

vector<WillDeleteItem> CalculateBackupSaveSecExpiresResponse::GetWillDeleteRedoLogFiles() const
{
    return m_willDeleteRedoLogFiles;
}

bool CalculateBackupSaveSecExpiresResponse::WillDeleteRedoLogFilesHasBeenSet() const
{
    return m_willDeleteRedoLogFilesHasBeenSet;
}


