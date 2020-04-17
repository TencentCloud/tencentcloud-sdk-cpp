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

#include <tencentcloud/vod/v20180717/model/DescribeStorageDataResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

DescribeStorageDataResponse::DescribeStorageDataResponse() :
    m_mediaCountHasBeenSet(false),
    m_totalStorageHasBeenSet(false),
    m_infrequentStorageHasBeenSet(false),
    m_standardStorageHasBeenSet(false)
{
}

CoreInternalOutcome DescribeStorageDataResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MediaCount") && !rsp["MediaCount"].IsNull())
    {
        if (!rsp["MediaCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `MediaCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mediaCount = rsp["MediaCount"].GetUint64();
        m_mediaCountHasBeenSet = true;
    }

    if (rsp.HasMember("TotalStorage") && !rsp["TotalStorage"].IsNull())
    {
        if (!rsp["TotalStorage"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TotalStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalStorage = rsp["TotalStorage"].GetUint64();
        m_totalStorageHasBeenSet = true;
    }

    if (rsp.HasMember("InfrequentStorage") && !rsp["InfrequentStorage"].IsNull())
    {
        if (!rsp["InfrequentStorage"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `InfrequentStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_infrequentStorage = rsp["InfrequentStorage"].GetUint64();
        m_infrequentStorageHasBeenSet = true;
    }

    if (rsp.HasMember("StandardStorage") && !rsp["StandardStorage"].IsNull())
    {
        if (!rsp["StandardStorage"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `StandardStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_standardStorage = rsp["StandardStorage"].GetUint64();
        m_standardStorageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t DescribeStorageDataResponse::GetMediaCount() const
{
    return m_mediaCount;
}

bool DescribeStorageDataResponse::MediaCountHasBeenSet() const
{
    return m_mediaCountHasBeenSet;
}

uint64_t DescribeStorageDataResponse::GetTotalStorage() const
{
    return m_totalStorage;
}

bool DescribeStorageDataResponse::TotalStorageHasBeenSet() const
{
    return m_totalStorageHasBeenSet;
}

uint64_t DescribeStorageDataResponse::GetInfrequentStorage() const
{
    return m_infrequentStorage;
}

bool DescribeStorageDataResponse::InfrequentStorageHasBeenSet() const
{
    return m_infrequentStorageHasBeenSet;
}

uint64_t DescribeStorageDataResponse::GetStandardStorage() const
{
    return m_standardStorage;
}

bool DescribeStorageDataResponse::StandardStorageHasBeenSet() const
{
    return m_standardStorageHasBeenSet;
}


