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
using namespace rapidjson;
using namespace std;

DescribeBackupUrlResponse::DescribeBackupUrlResponse() :
    m_downloadUrlHasBeenSet(false),
    m_innerDownloadUrlHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackupUrlResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("DownloadUrl") && !rsp["DownloadUrl"].IsNull())
    {
        if (!rsp["DownloadUrl"].IsArray())
            return CoreInternalOutcome(Error("response `DownloadUrl` is not array type"));

        const Value &tmpValue = rsp["DownloadUrl"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_downloadUrl.push_back((*itr).GetString());
        }
        m_downloadUrlHasBeenSet = true;
    }

    if (rsp.HasMember("InnerDownloadUrl") && !rsp["InnerDownloadUrl"].IsNull())
    {
        if (!rsp["InnerDownloadUrl"].IsArray())
            return CoreInternalOutcome(Error("response `InnerDownloadUrl` is not array type"));

        const Value &tmpValue = rsp["InnerDownloadUrl"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_innerDownloadUrl.push_back((*itr).GetString());
        }
        m_innerDownloadUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


