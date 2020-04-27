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

#include <tencentcloud/gs/v20191118/model/EnterQueueResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gs::V20191118::Model;
using namespace rapidjson;
using namespace std;

EnterQueueResponse::EnterQueueResponse() :
    m_rankHasBeenSet(false),
    m_lockSuccessHasBeenSet(false)
{
}

CoreInternalOutcome EnterQueueResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Rank") && !rsp["Rank"].IsNull())
    {
        if (!rsp["Rank"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Rank` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rank = rsp["Rank"].GetUint64();
        m_rankHasBeenSet = true;
    }

    if (rsp.HasMember("LockSuccess") && !rsp["LockSuccess"].IsNull())
    {
        if (!rsp["LockSuccess"].IsBool())
        {
            return CoreInternalOutcome(Error("response `LockSuccess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_lockSuccess = rsp["LockSuccess"].GetBool();
        m_lockSuccessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t EnterQueueResponse::GetRank() const
{
    return m_rank;
}

bool EnterQueueResponse::RankHasBeenSet() const
{
    return m_rankHasBeenSet;
}

bool EnterQueueResponse::GetLockSuccess() const
{
    return m_lockSuccess;
}

bool EnterQueueResponse::LockSuccessHasBeenSet() const
{
    return m_lockSuccessHasBeenSet;
}


