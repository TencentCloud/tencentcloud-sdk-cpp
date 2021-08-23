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

#include <tencentcloud/redis/v20180412/model/DescribeBackupUrlResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

DescribeBackupUrlResponse::DescribeBackupUrlResponse() :
    m_downloadUrlHasBeenSet(false),
    m_innerDownloadUrlHasBeenSet(false),
    m_filenamesHasBeenSet(false),
    m_backupInfosHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackupUrlResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DownloadUrl") && !rsp["DownloadUrl"].IsNull())
    {
        if (!rsp["DownloadUrl"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DownloadUrl` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DownloadUrl"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_downloadUrl.push_back((*itr).GetString());
        }
        m_downloadUrlHasBeenSet = true;
    }

    if (rsp.HasMember("InnerDownloadUrl") && !rsp["InnerDownloadUrl"].IsNull())
    {
        if (!rsp["InnerDownloadUrl"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InnerDownloadUrl` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InnerDownloadUrl"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_innerDownloadUrl.push_back((*itr).GetString());
        }
        m_innerDownloadUrlHasBeenSet = true;
    }

    if (rsp.HasMember("Filenames") && !rsp["Filenames"].IsNull())
    {
        if (!rsp["Filenames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Filenames` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Filenames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_filenames.push_back((*itr).GetString());
        }
        m_filenamesHasBeenSet = true;
    }

    if (rsp.HasMember("BackupInfos") && !rsp["BackupInfos"].IsNull())
    {
        if (!rsp["BackupInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BackupInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BackupDownloadInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_backupInfos.push_back(item);
        }
        m_backupInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBackupUrlResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_downloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_downloadUrl.begin(); itr != m_downloadUrl.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_innerDownloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerDownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_innerDownloadUrl.begin(); itr != m_innerDownloadUrl.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filenamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filenames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filenames.begin(); itr != m_filenames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_backupInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_backupInfos.begin(); itr != m_backupInfos.end(); ++itr, ++i)
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


vector<string> DescribeBackupUrlResponse::GetDownloadUrl() const
{
    return m_downloadUrl;
}

bool DescribeBackupUrlResponse::DownloadUrlHasBeenSet() const
{
    return m_downloadUrlHasBeenSet;
}

vector<string> DescribeBackupUrlResponse::GetInnerDownloadUrl() const
{
    return m_innerDownloadUrl;
}

bool DescribeBackupUrlResponse::InnerDownloadUrlHasBeenSet() const
{
    return m_innerDownloadUrlHasBeenSet;
}

vector<string> DescribeBackupUrlResponse::GetFilenames() const
{
    return m_filenames;
}

bool DescribeBackupUrlResponse::FilenamesHasBeenSet() const
{
    return m_filenamesHasBeenSet;
}

vector<BackupDownloadInfo> DescribeBackupUrlResponse::GetBackupInfos() const
{
    return m_backupInfos;
}

bool DescribeBackupUrlResponse::BackupInfosHasBeenSet() const
{
    return m_backupInfosHasBeenSet;
}


