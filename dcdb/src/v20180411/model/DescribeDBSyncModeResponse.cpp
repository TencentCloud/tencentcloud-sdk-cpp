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

#include <tencentcloud/dcdb/v20180411/model/DescribeDBSyncModeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

DescribeDBSyncModeResponse::DescribeDBSyncModeResponse() :
    m_syncModeHasBeenSet(false),
    m_isModifyingHasBeenSet(false),
    m_currentSyncModeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBSyncModeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SyncMode") && !rsp["SyncMode"].IsNull())
    {
        if (!rsp["SyncMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SyncMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_syncMode = rsp["SyncMode"].GetInt64();
        m_syncModeHasBeenSet = true;
    }

    if (rsp.HasMember("IsModifying") && !rsp["IsModifying"].IsNull())
    {
        if (!rsp["IsModifying"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsModifying` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isModifying = rsp["IsModifying"].GetInt64();
        m_isModifyingHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentSyncMode") && !rsp["CurrentSyncMode"].IsNull())
    {
        if (!rsp["CurrentSyncMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentSyncMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentSyncMode = rsp["CurrentSyncMode"].GetInt64();
        m_currentSyncModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBSyncModeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_syncModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncMode, allocator);
    }

    if (m_isModifyingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsModifying";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isModifying, allocator);
    }

    if (m_currentSyncModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentSyncMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentSyncMode, allocator);
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


int64_t DescribeDBSyncModeResponse::GetSyncMode() const
{
    return m_syncMode;
}

bool DescribeDBSyncModeResponse::SyncModeHasBeenSet() const
{
    return m_syncModeHasBeenSet;
}

int64_t DescribeDBSyncModeResponse::GetIsModifying() const
{
    return m_isModifying;
}

bool DescribeDBSyncModeResponse::IsModifyingHasBeenSet() const
{
    return m_isModifyingHasBeenSet;
}

int64_t DescribeDBSyncModeResponse::GetCurrentSyncMode() const
{
    return m_currentSyncMode;
}

bool DescribeDBSyncModeResponse::CurrentSyncModeHasBeenSet() const
{
    return m_currentSyncModeHasBeenSet;
}


