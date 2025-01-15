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

#include <tencentcloud/hunyuan/v20230901/model/GetThreadMessageListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

GetThreadMessageListResponse::GetThreadMessageListResponse() :
    m_dataHasBeenSet(false),
    m_firstIDHasBeenSet(false),
    m_lastIDHasBeenSet(false),
    m_hasMoreHasBeenSet(false),
    m_objectHasBeenSet(false),
    m_firstMsgIDHasBeenSet(false),
    m_lastMsgIDHasBeenSet(false)
{
}

CoreInternalOutcome GetThreadMessageListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Data` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ThreadMessage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_data.push_back(item);
        }
        m_dataHasBeenSet = true;
    }

    if (rsp.HasMember("FirstID") && !rsp["FirstID"].IsNull())
    {
        if (!rsp["FirstID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirstID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstID = string(rsp["FirstID"].GetString());
        m_firstIDHasBeenSet = true;
    }

    if (rsp.HasMember("LastID") && !rsp["LastID"].IsNull())
    {
        if (!rsp["LastID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LastID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastID = rsp["LastID"].GetInt64();
        m_lastIDHasBeenSet = true;
    }

    if (rsp.HasMember("HasMore") && !rsp["HasMore"].IsNull())
    {
        if (!rsp["HasMore"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HasMore` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasMore = rsp["HasMore"].GetBool();
        m_hasMoreHasBeenSet = true;
    }

    if (rsp.HasMember("Object") && !rsp["Object"].IsNull())
    {
        if (!rsp["Object"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Object` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_object = string(rsp["Object"].GetString());
        m_objectHasBeenSet = true;
    }

    if (rsp.HasMember("FirstMsgID") && !rsp["FirstMsgID"].IsNull())
    {
        if (!rsp["FirstMsgID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirstMsgID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstMsgID = string(rsp["FirstMsgID"].GetString());
        m_firstMsgIDHasBeenSet = true;
    }

    if (rsp.HasMember("LastMsgID") && !rsp["LastMsgID"].IsNull())
    {
        if (!rsp["LastMsgID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastMsgID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastMsgID = string(rsp["LastMsgID"].GetString());
        m_lastMsgIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetThreadMessageListResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_firstIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstID.c_str(), allocator).Move(), allocator);
    }

    if (m_lastIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastID, allocator);
    }

    if (m_hasMoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasMore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasMore, allocator);
    }

    if (m_objectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Object";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_object.c_str(), allocator).Move(), allocator);
    }

    if (m_firstMsgIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstMsgID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstMsgID.c_str(), allocator).Move(), allocator);
    }

    if (m_lastMsgIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastMsgID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastMsgID.c_str(), allocator).Move(), allocator);
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


vector<ThreadMessage> GetThreadMessageListResponse::GetData() const
{
    return m_data;
}

bool GetThreadMessageListResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

string GetThreadMessageListResponse::GetFirstID() const
{
    return m_firstID;
}

bool GetThreadMessageListResponse::FirstIDHasBeenSet() const
{
    return m_firstIDHasBeenSet;
}

int64_t GetThreadMessageListResponse::GetLastID() const
{
    return m_lastID;
}

bool GetThreadMessageListResponse::LastIDHasBeenSet() const
{
    return m_lastIDHasBeenSet;
}

bool GetThreadMessageListResponse::GetHasMore() const
{
    return m_hasMore;
}

bool GetThreadMessageListResponse::HasMoreHasBeenSet() const
{
    return m_hasMoreHasBeenSet;
}

string GetThreadMessageListResponse::GetObject() const
{
    return m_object;
}

bool GetThreadMessageListResponse::ObjectHasBeenSet() const
{
    return m_objectHasBeenSet;
}

string GetThreadMessageListResponse::GetFirstMsgID() const
{
    return m_firstMsgID;
}

bool GetThreadMessageListResponse::FirstMsgIDHasBeenSet() const
{
    return m_firstMsgIDHasBeenSet;
}

string GetThreadMessageListResponse::GetLastMsgID() const
{
    return m_lastMsgID;
}

bool GetThreadMessageListResponse::LastMsgIDHasBeenSet() const
{
    return m_lastMsgIDHasBeenSet;
}


