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

#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeLiveChannelResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

DescribeLiveChannelResponse::DescribeLiveChannelResponse() :
    m_liveChannelIdHasBeenSet(false),
    m_liveChannelNameHasBeenSet(false),
    m_liveChannelTypeHasBeenSet(false),
    m_liveStatusHasBeenSet(false),
    m_pushStreamAddressHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLiveChannelResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LiveChannelId") && !rsp["LiveChannelId"].IsNull())
    {
        if (!rsp["LiveChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_liveChannelId = string(rsp["LiveChannelId"].GetString());
        m_liveChannelIdHasBeenSet = true;
    }

    if (rsp.HasMember("LiveChannelName") && !rsp["LiveChannelName"].IsNull())
    {
        if (!rsp["LiveChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_liveChannelName = string(rsp["LiveChannelName"].GetString());
        m_liveChannelNameHasBeenSet = true;
    }

    if (rsp.HasMember("LiveChannelType") && !rsp["LiveChannelType"].IsNull())
    {
        if (!rsp["LiveChannelType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveChannelType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_liveChannelType = rsp["LiveChannelType"].GetInt64();
        m_liveChannelTypeHasBeenSet = true;
    }

    if (rsp.HasMember("LiveStatus") && !rsp["LiveStatus"].IsNull())
    {
        if (!rsp["LiveStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_liveStatus = rsp["LiveStatus"].GetInt64();
        m_liveStatusHasBeenSet = true;
    }

    if (rsp.HasMember("PushStreamAddress") && !rsp["PushStreamAddress"].IsNull())
    {
        if (!rsp["PushStreamAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushStreamAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushStreamAddress = string(rsp["PushStreamAddress"].GetString());
        m_pushStreamAddressHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateTime` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CreateTime"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_createTime.push_back((*itr).GetString());
        }
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpdateTime` is not array type"));

        const rapidjson::Value &tmpValue = rsp["UpdateTime"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_updateTime.push_back((*itr).GetString());
        }
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeLiveChannelResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_liveChannelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_liveChannelId.c_str(), allocator).Move(), allocator);
    }

    if (m_liveChannelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_liveChannelName.c_str(), allocator).Move(), allocator);
    }

    if (m_liveChannelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveChannelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_liveChannelType, allocator);
    }

    if (m_liveStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_liveStatus, allocator);
    }

    if (m_pushStreamAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushStreamAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushStreamAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_createTime.begin(); itr != m_createTime.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_updateTime.begin(); itr != m_updateTime.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


string DescribeLiveChannelResponse::GetLiveChannelId() const
{
    return m_liveChannelId;
}

bool DescribeLiveChannelResponse::LiveChannelIdHasBeenSet() const
{
    return m_liveChannelIdHasBeenSet;
}

string DescribeLiveChannelResponse::GetLiveChannelName() const
{
    return m_liveChannelName;
}

bool DescribeLiveChannelResponse::LiveChannelNameHasBeenSet() const
{
    return m_liveChannelNameHasBeenSet;
}

int64_t DescribeLiveChannelResponse::GetLiveChannelType() const
{
    return m_liveChannelType;
}

bool DescribeLiveChannelResponse::LiveChannelTypeHasBeenSet() const
{
    return m_liveChannelTypeHasBeenSet;
}

int64_t DescribeLiveChannelResponse::GetLiveStatus() const
{
    return m_liveStatus;
}

bool DescribeLiveChannelResponse::LiveStatusHasBeenSet() const
{
    return m_liveStatusHasBeenSet;
}

string DescribeLiveChannelResponse::GetPushStreamAddress() const
{
    return m_pushStreamAddress;
}

bool DescribeLiveChannelResponse::PushStreamAddressHasBeenSet() const
{
    return m_pushStreamAddressHasBeenSet;
}

vector<string> DescribeLiveChannelResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeLiveChannelResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<string> DescribeLiveChannelResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeLiveChannelResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}


