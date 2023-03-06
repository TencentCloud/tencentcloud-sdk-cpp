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

#include <tencentcloud/gme/v20180711/model/DescribeRecordInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

DescribeRecordInfoResponse::DescribeRecordInfoResponse() :
    m_recordInfoHasBeenSet(false),
    m_recordModeHasBeenSet(false),
    m_roomIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRecordInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RecordInfo") && !rsp["RecordInfo"].IsNull())
    {
        if (!rsp["RecordInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RecordInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RecordInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecordInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_recordInfo.push_back(item);
        }
        m_recordInfoHasBeenSet = true;
    }

    if (rsp.HasMember("RecordMode") && !rsp["RecordMode"].IsNull())
    {
        if (!rsp["RecordMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordMode = rsp["RecordMode"].GetUint64();
        m_recordModeHasBeenSet = true;
    }

    if (rsp.HasMember("RoomId") && !rsp["RoomId"].IsNull())
    {
        if (!rsp["RoomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = string(rsp["RoomId"].GetString());
        m_roomIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRecordInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_recordInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_recordInfo.begin(); itr != m_recordInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_recordModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordMode, allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
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


vector<RecordInfo> DescribeRecordInfoResponse::GetRecordInfo() const
{
    return m_recordInfo;
}

bool DescribeRecordInfoResponse::RecordInfoHasBeenSet() const
{
    return m_recordInfoHasBeenSet;
}

uint64_t DescribeRecordInfoResponse::GetRecordMode() const
{
    return m_recordMode;
}

bool DescribeRecordInfoResponse::RecordModeHasBeenSet() const
{
    return m_recordModeHasBeenSet;
}

string DescribeRecordInfoResponse::GetRoomId() const
{
    return m_roomId;
}

bool DescribeRecordInfoResponse::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}


