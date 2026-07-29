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

#include <tencentcloud/tcb/v20180608/model/DescribeCloudAppCosInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeCloudAppCosInfoResponse::DescribeCloudAppCosInfoResponse() :
    m_uploadUrlHasBeenSet(false),
    m_uploadHeadersHasBeenSet(false),
    m_downloadUrlHasBeenSet(false),
    m_downloadHeadersHasBeenSet(false),
    m_unixTimestampHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCloudAppCosInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("UploadUrl") && !rsp["UploadUrl"].IsNull())
    {
        if (!rsp["UploadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadUrl = string(rsp["UploadUrl"].GetString());
        m_uploadUrlHasBeenSet = true;
    }

    if (rsp.HasMember("UploadHeaders") && !rsp["UploadHeaders"].IsNull())
    {
        if (!rsp["UploadHeaders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UploadHeaders` is not array type"));

        const rapidjson::Value &tmpValue = rsp["UploadHeaders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_uploadHeaders.push_back(item);
        }
        m_uploadHeadersHasBeenSet = true;
    }

    if (rsp.HasMember("DownloadUrl") && !rsp["DownloadUrl"].IsNull())
    {
        if (!rsp["DownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadUrl = string(rsp["DownloadUrl"].GetString());
        m_downloadUrlHasBeenSet = true;
    }

    if (rsp.HasMember("DownloadHeaders") && !rsp["DownloadHeaders"].IsNull())
    {
        if (!rsp["DownloadHeaders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DownloadHeaders` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DownloadHeaders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_downloadHeaders.push_back(item);
        }
        m_downloadHeadersHasBeenSet = true;
    }

    if (rsp.HasMember("UnixTimestamp") && !rsp["UnixTimestamp"].IsNull())
    {
        if (!rsp["UnixTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnixTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unixTimestamp = string(rsp["UnixTimestamp"].GetString());
        m_unixTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCloudAppCosInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_uploadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_uploadHeaders.begin(); itr != m_uploadHeaders.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_downloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_downloadHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_downloadHeaders.begin(); itr != m_downloadHeaders.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_unixTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnixTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unixTimestamp.c_str(), allocator).Move(), allocator);
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


string DescribeCloudAppCosInfoResponse::GetUploadUrl() const
{
    return m_uploadUrl;
}

bool DescribeCloudAppCosInfoResponse::UploadUrlHasBeenSet() const
{
    return m_uploadUrlHasBeenSet;
}

vector<KVPair> DescribeCloudAppCosInfoResponse::GetUploadHeaders() const
{
    return m_uploadHeaders;
}

bool DescribeCloudAppCosInfoResponse::UploadHeadersHasBeenSet() const
{
    return m_uploadHeadersHasBeenSet;
}

string DescribeCloudAppCosInfoResponse::GetDownloadUrl() const
{
    return m_downloadUrl;
}

bool DescribeCloudAppCosInfoResponse::DownloadUrlHasBeenSet() const
{
    return m_downloadUrlHasBeenSet;
}

vector<KVPair> DescribeCloudAppCosInfoResponse::GetDownloadHeaders() const
{
    return m_downloadHeaders;
}

bool DescribeCloudAppCosInfoResponse::DownloadHeadersHasBeenSet() const
{
    return m_downloadHeadersHasBeenSet;
}

string DescribeCloudAppCosInfoResponse::GetUnixTimestamp() const
{
    return m_unixTimestamp;
}

bool DescribeCloudAppCosInfoResponse::UnixTimestampHasBeenSet() const
{
    return m_unixTimestampHasBeenSet;
}


