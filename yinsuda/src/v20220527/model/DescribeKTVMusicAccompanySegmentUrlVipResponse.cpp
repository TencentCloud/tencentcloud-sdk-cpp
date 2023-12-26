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

#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVMusicAccompanySegmentUrlVipResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

DescribeKTVMusicAccompanySegmentUrlVipResponse::DescribeKTVMusicAccompanySegmentUrlVipResponse() :
    m_statusHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_extNameHasBeenSet(false),
    m_segmentBeginHasBeenSet(false),
    m_segmentEndHasBeenSet(false),
    m_fileSizeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeKTVMusicAccompanySegmentUrlVipResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Url") && !rsp["Url"].IsNull())
    {
        if (!rsp["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(rsp["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (rsp.HasMember("ExtName") && !rsp["ExtName"].IsNull())
    {
        if (!rsp["ExtName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extName = string(rsp["ExtName"].GetString());
        m_extNameHasBeenSet = true;
    }

    if (rsp.HasMember("SegmentBegin") && !rsp["SegmentBegin"].IsNull())
    {
        if (!rsp["SegmentBegin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentBegin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_segmentBegin = rsp["SegmentBegin"].GetInt64();
        m_segmentBeginHasBeenSet = true;
    }

    if (rsp.HasMember("SegmentEnd") && !rsp["SegmentEnd"].IsNull())
    {
        if (!rsp["SegmentEnd"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentEnd` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_segmentEnd = rsp["SegmentEnd"].GetInt64();
        m_segmentEndHasBeenSet = true;
    }

    if (rsp.HasMember("FileSize") && !rsp["FileSize"].IsNull())
    {
        if (!rsp["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = rsp["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeKTVMusicAccompanySegmentUrlVipResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_extNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extName.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentBegin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_segmentBegin, allocator);
    }

    if (m_segmentEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_segmentEnd, allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
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


int64_t DescribeKTVMusicAccompanySegmentUrlVipResponse::GetStatus() const
{
    return m_status;
}

bool DescribeKTVMusicAccompanySegmentUrlVipResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeKTVMusicAccompanySegmentUrlVipResponse::GetUrl() const
{
    return m_url;
}

bool DescribeKTVMusicAccompanySegmentUrlVipResponse::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string DescribeKTVMusicAccompanySegmentUrlVipResponse::GetExtName() const
{
    return m_extName;
}

bool DescribeKTVMusicAccompanySegmentUrlVipResponse::ExtNameHasBeenSet() const
{
    return m_extNameHasBeenSet;
}

int64_t DescribeKTVMusicAccompanySegmentUrlVipResponse::GetSegmentBegin() const
{
    return m_segmentBegin;
}

bool DescribeKTVMusicAccompanySegmentUrlVipResponse::SegmentBeginHasBeenSet() const
{
    return m_segmentBeginHasBeenSet;
}

int64_t DescribeKTVMusicAccompanySegmentUrlVipResponse::GetSegmentEnd() const
{
    return m_segmentEnd;
}

bool DescribeKTVMusicAccompanySegmentUrlVipResponse::SegmentEndHasBeenSet() const
{
    return m_segmentEndHasBeenSet;
}

int64_t DescribeKTVMusicAccompanySegmentUrlVipResponse::GetFileSize() const
{
    return m_fileSize;
}

bool DescribeKTVMusicAccompanySegmentUrlVipResponse::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}


