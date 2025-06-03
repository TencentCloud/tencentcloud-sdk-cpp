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

#include <tencentcloud/emr/v20190103/model/AddUsersForUserManagerResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

AddUsersForUserManagerResponse::AddUsersForUserManagerResponse() :
    m_successUserListHasBeenSet(false),
    m_failedUserListHasBeenSet(false),
    m_flowIdHasBeenSet(false)
{
}

CoreInternalOutcome AddUsersForUserManagerResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SuccessUserList") && !rsp["SuccessUserList"].IsNull())
    {
        if (!rsp["SuccessUserList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SuccessUserList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SuccessUserList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_successUserList.push_back((*itr).GetString());
        }
        m_successUserListHasBeenSet = true;
    }

    if (rsp.HasMember("FailedUserList") && !rsp["FailedUserList"].IsNull())
    {
        if (!rsp["FailedUserList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FailedUserList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FailedUserList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_failedUserList.push_back((*itr).GetString());
        }
        m_failedUserListHasBeenSet = true;
    }

    if (rsp.HasMember("FlowId") && !rsp["FlowId"].IsNull())
    {
        if (!rsp["FlowId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = rsp["FlowId"].GetInt64();
        m_flowIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string AddUsersForUserManagerResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_successUserListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessUserList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_successUserList.begin(); itr != m_successUserList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_failedUserListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedUserList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_failedUserList.begin(); itr != m_failedUserList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowId, allocator);
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


vector<string> AddUsersForUserManagerResponse::GetSuccessUserList() const
{
    return m_successUserList;
}

bool AddUsersForUserManagerResponse::SuccessUserListHasBeenSet() const
{
    return m_successUserListHasBeenSet;
}

vector<string> AddUsersForUserManagerResponse::GetFailedUserList() const
{
    return m_failedUserList;
}

bool AddUsersForUserManagerResponse::FailedUserListHasBeenSet() const
{
    return m_failedUserListHasBeenSet;
}

int64_t AddUsersForUserManagerResponse::GetFlowId() const
{
    return m_flowId;
}

bool AddUsersForUserManagerResponse::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}


