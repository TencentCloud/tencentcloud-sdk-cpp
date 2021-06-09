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

#include <tencentcloud/vpc/v20170312/model/DescribeIpGeolocationDatabaseUrlResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeIpGeolocationDatabaseUrlResponse::DescribeIpGeolocationDatabaseUrlResponse() :
    m_downLoadUrlHasBeenSet(false),
    m_expiredAtHasBeenSet(false)
{
}

CoreInternalOutcome DescribeIpGeolocationDatabaseUrlResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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


    if (rsp.HasMember("DownLoadUrl") && !rsp["DownLoadUrl"].IsNull())
    {
        if (!rsp["DownLoadUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `DownLoadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downLoadUrl = string(rsp["DownLoadUrl"].GetString());
        m_downLoadUrlHasBeenSet = true;
    }

    if (rsp.HasMember("ExpiredAt") && !rsp["ExpiredAt"].IsNull())
    {
        if (!rsp["ExpiredAt"].IsString())
        {
            return CoreInternalOutcome(Error("response `ExpiredAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredAt = string(rsp["ExpiredAt"].GetString());
        m_expiredAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeIpGeolocationDatabaseUrlResponse::GetDownLoadUrl() const
{
    return m_downLoadUrl;
}

bool DescribeIpGeolocationDatabaseUrlResponse::DownLoadUrlHasBeenSet() const
{
    return m_downLoadUrlHasBeenSet;
}

string DescribeIpGeolocationDatabaseUrlResponse::GetExpiredAt() const
{
    return m_expiredAt;
}

bool DescribeIpGeolocationDatabaseUrlResponse::ExpiredAtHasBeenSet() const
{
    return m_expiredAtHasBeenSet;
}


