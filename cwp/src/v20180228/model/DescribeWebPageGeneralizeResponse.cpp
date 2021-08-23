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

#include <tencentcloud/cwp/v20180228/model/DescribeWebPageGeneralizeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeWebPageGeneralizeResponse::DescribeWebPageGeneralizeResponse() :
    m_protectMonitorHasBeenSet(false),
    m_protectDirNumHasBeenSet(false),
    m_protectFileNumHasBeenSet(false),
    m_tamperFileNumHasBeenSet(false),
    m_tamperNumHasBeenSet(false),
    m_protectTodayHasBeenSet(false),
    m_protectHostNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeWebPageGeneralizeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ProtectMonitor") && !rsp["ProtectMonitor"].IsNull())
    {
        if (!rsp["ProtectMonitor"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectMonitor` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectMonitor = rsp["ProtectMonitor"].GetUint64();
        m_protectMonitorHasBeenSet = true;
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

    if (rsp.HasMember("TamperFileNum") && !rsp["TamperFileNum"].IsNull())
    {
        if (!rsp["TamperFileNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TamperFileNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tamperFileNum = rsp["TamperFileNum"].GetUint64();
        m_tamperFileNumHasBeenSet = true;
    }

    if (rsp.HasMember("TamperNum") && !rsp["TamperNum"].IsNull())
    {
        if (!rsp["TamperNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TamperNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tamperNum = rsp["TamperNum"].GetUint64();
        m_tamperNumHasBeenSet = true;
    }

    if (rsp.HasMember("ProtectToday") && !rsp["ProtectToday"].IsNull())
    {
        if (!rsp["ProtectToday"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectToday` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectToday = rsp["ProtectToday"].GetUint64();
        m_protectTodayHasBeenSet = true;
    }

    if (rsp.HasMember("ProtectHostNum") && !rsp["ProtectHostNum"].IsNull())
    {
        if (!rsp["ProtectHostNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectHostNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectHostNum = rsp["ProtectHostNum"].GetUint64();
        m_protectHostNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeWebPageGeneralizeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_protectMonitorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectMonitor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectMonitor, allocator);
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

    if (m_tamperFileNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TamperFileNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tamperFileNum, allocator);
    }

    if (m_tamperNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TamperNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tamperNum, allocator);
    }

    if (m_protectTodayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectToday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectToday, allocator);
    }

    if (m_protectHostNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectHostNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectHostNum, allocator);
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


uint64_t DescribeWebPageGeneralizeResponse::GetProtectMonitor() const
{
    return m_protectMonitor;
}

bool DescribeWebPageGeneralizeResponse::ProtectMonitorHasBeenSet() const
{
    return m_protectMonitorHasBeenSet;
}

uint64_t DescribeWebPageGeneralizeResponse::GetProtectDirNum() const
{
    return m_protectDirNum;
}

bool DescribeWebPageGeneralizeResponse::ProtectDirNumHasBeenSet() const
{
    return m_protectDirNumHasBeenSet;
}

uint64_t DescribeWebPageGeneralizeResponse::GetProtectFileNum() const
{
    return m_protectFileNum;
}

bool DescribeWebPageGeneralizeResponse::ProtectFileNumHasBeenSet() const
{
    return m_protectFileNumHasBeenSet;
}

uint64_t DescribeWebPageGeneralizeResponse::GetTamperFileNum() const
{
    return m_tamperFileNum;
}

bool DescribeWebPageGeneralizeResponse::TamperFileNumHasBeenSet() const
{
    return m_tamperFileNumHasBeenSet;
}

uint64_t DescribeWebPageGeneralizeResponse::GetTamperNum() const
{
    return m_tamperNum;
}

bool DescribeWebPageGeneralizeResponse::TamperNumHasBeenSet() const
{
    return m_tamperNumHasBeenSet;
}

uint64_t DescribeWebPageGeneralizeResponse::GetProtectToday() const
{
    return m_protectToday;
}

bool DescribeWebPageGeneralizeResponse::ProtectTodayHasBeenSet() const
{
    return m_protectTodayHasBeenSet;
}

uint64_t DescribeWebPageGeneralizeResponse::GetProtectHostNum() const
{
    return m_protectHostNum;
}

bool DescribeWebPageGeneralizeResponse::ProtectHostNumHasBeenSet() const
{
    return m_protectHostNumHasBeenSet;
}


