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

#include <tencentcloud/cwp/v20180228/model/DescribeServerRelatedDirInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeServerRelatedDirInfoResponse::DescribeServerRelatedDirInfoResponse() :
    m_hostNameHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_protectDirNumHasBeenSet(false),
    m_protectFileNumHasBeenSet(false),
    m_protectTamperNumHasBeenSet(false),
    m_protectLinkNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeServerRelatedDirInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("HostName") && !rsp["HostName"].IsNull())
    {
        if (!rsp["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(rsp["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (rsp.HasMember("HostIp") && !rsp["HostIp"].IsNull())
    {
        if (!rsp["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(rsp["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (rsp.HasMember("ProtectDirNum") && !rsp["ProtectDirNum"].IsNull())
    {
        if (!rsp["ProtectDirNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectDirNum = rsp["ProtectDirNum"].GetUint64();
        m_protectDirNumHasBeenSet = true;
    }

    if (rsp.HasMember("ProtectFileNum") && !rsp["ProtectFileNum"].IsNull())
    {
        if (!rsp["ProtectFileNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectFileNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectFileNum = rsp["ProtectFileNum"].GetUint64();
        m_protectFileNumHasBeenSet = true;
    }

    if (rsp.HasMember("ProtectTamperNum") && !rsp["ProtectTamperNum"].IsNull())
    {
        if (!rsp["ProtectTamperNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectTamperNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectTamperNum = rsp["ProtectTamperNum"].GetUint64();
        m_protectTamperNumHasBeenSet = true;
    }

    if (rsp.HasMember("ProtectLinkNum") && !rsp["ProtectLinkNum"].IsNull())
    {
        if (!rsp["ProtectLinkNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectLinkNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectLinkNum = rsp["ProtectLinkNum"].GetUint64();
        m_protectLinkNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeServerRelatedDirInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_protectDirNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectDirNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectDirNum, allocator);
    }

    if (m_protectFileNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectFileNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectFileNum, allocator);
    }

    if (m_protectTamperNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectTamperNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectTamperNum, allocator);
    }

    if (m_protectLinkNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectLinkNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectLinkNum, allocator);
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


string DescribeServerRelatedDirInfoResponse::GetHostName() const
{
    return m_hostName;
}

bool DescribeServerRelatedDirInfoResponse::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string DescribeServerRelatedDirInfoResponse::GetHostIp() const
{
    return m_hostIp;
}

bool DescribeServerRelatedDirInfoResponse::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

uint64_t DescribeServerRelatedDirInfoResponse::GetProtectDirNum() const
{
    return m_protectDirNum;
}

bool DescribeServerRelatedDirInfoResponse::ProtectDirNumHasBeenSet() const
{
    return m_protectDirNumHasBeenSet;
}

uint64_t DescribeServerRelatedDirInfoResponse::GetProtectFileNum() const
{
    return m_protectFileNum;
}

bool DescribeServerRelatedDirInfoResponse::ProtectFileNumHasBeenSet() const
{
    return m_protectFileNumHasBeenSet;
}

uint64_t DescribeServerRelatedDirInfoResponse::GetProtectTamperNum() const
{
    return m_protectTamperNum;
}

bool DescribeServerRelatedDirInfoResponse::ProtectTamperNumHasBeenSet() const
{
    return m_protectTamperNumHasBeenSet;
}

uint64_t DescribeServerRelatedDirInfoResponse::GetProtectLinkNum() const
{
    return m_protectLinkNum;
}

bool DescribeServerRelatedDirInfoResponse::ProtectLinkNumHasBeenSet() const
{
    return m_protectLinkNumHasBeenSet;
}


