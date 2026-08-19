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

#include <tencentcloud/csip/v20221121/model/ModifyCspmShardConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyCspmShardConfigResponse::ModifyCspmShardConfigResponse() :
    m_shardFromAppIDHasBeenSet(false),
    m_autoShardStatusHasBeenSet(false),
    m_shardAppIDsHasBeenSet(false)
{
}

CoreInternalOutcome ModifyCspmShardConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ShardFromAppID") && !rsp["ShardFromAppID"].IsNull())
    {
        if (!rsp["ShardFromAppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ShardFromAppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shardFromAppID = rsp["ShardFromAppID"].GetUint64();
        m_shardFromAppIDHasBeenSet = true;
    }

    if (rsp.HasMember("AutoShardStatus") && !rsp["AutoShardStatus"].IsNull())
    {
        if (!rsp["AutoShardStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoShardStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoShardStatus = rsp["AutoShardStatus"].GetUint64();
        m_autoShardStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ShardAppIDs") && !rsp["ShardAppIDs"].IsNull())
    {
        if (!rsp["ShardAppIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ShardAppIDs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ShardAppIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_shardAppIDs.push_back((*itr).GetUint64());
        }
        m_shardAppIDsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ModifyCspmShardConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_shardFromAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardFromAppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shardFromAppID, allocator);
    }

    if (m_autoShardStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoShardStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoShardStatus, allocator);
    }

    if (m_shardAppIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardAppIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_shardAppIDs.begin(); itr != m_shardAppIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
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


uint64_t ModifyCspmShardConfigResponse::GetShardFromAppID() const
{
    return m_shardFromAppID;
}

bool ModifyCspmShardConfigResponse::ShardFromAppIDHasBeenSet() const
{
    return m_shardFromAppIDHasBeenSet;
}

uint64_t ModifyCspmShardConfigResponse::GetAutoShardStatus() const
{
    return m_autoShardStatus;
}

bool ModifyCspmShardConfigResponse::AutoShardStatusHasBeenSet() const
{
    return m_autoShardStatusHasBeenSet;
}

vector<uint64_t> ModifyCspmShardConfigResponse::GetShardAppIDs() const
{
    return m_shardAppIDs;
}

bool ModifyCspmShardConfigResponse::ShardAppIDsHasBeenSet() const
{
    return m_shardAppIDsHasBeenSet;
}


