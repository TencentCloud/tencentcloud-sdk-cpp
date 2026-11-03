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

#include <tencentcloud/csip/v20221121/model/DeleteLoginWhiteLearnEDRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DeleteLoginWhiteLearnEDRResponse::DeleteLoginWhiteLearnEDRResponse() :
    m_deletedCountHasBeenSet(false),
    m_failedAppIdsHasBeenSet(false)
{
}

CoreInternalOutcome DeleteLoginWhiteLearnEDRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DeletedCount") && !rsp["DeletedCount"].IsNull())
    {
        if (!rsp["DeletedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeletedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deletedCount = rsp["DeletedCount"].GetInt64();
        m_deletedCountHasBeenSet = true;
    }

    if (rsp.HasMember("FailedAppIds") && !rsp["FailedAppIds"].IsNull())
    {
        if (!rsp["FailedAppIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FailedAppIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FailedAppIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_failedAppIds.push_back((*itr).GetUint64());
        }
        m_failedAppIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DeleteLoginWhiteLearnEDRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_deletedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deletedCount, allocator);
    }

    if (m_failedAppIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedAppIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_failedAppIds.begin(); itr != m_failedAppIds.end(); ++itr)
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


int64_t DeleteLoginWhiteLearnEDRResponse::GetDeletedCount() const
{
    return m_deletedCount;
}

bool DeleteLoginWhiteLearnEDRResponse::DeletedCountHasBeenSet() const
{
    return m_deletedCountHasBeenSet;
}

vector<uint64_t> DeleteLoginWhiteLearnEDRResponse::GetFailedAppIds() const
{
    return m_failedAppIds;
}

bool DeleteLoginWhiteLearnEDRResponse::FailedAppIdsHasBeenSet() const
{
    return m_failedAppIdsHasBeenSet;
}


