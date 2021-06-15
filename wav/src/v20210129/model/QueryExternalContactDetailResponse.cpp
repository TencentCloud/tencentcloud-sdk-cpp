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

#include <tencentcloud/wav/v20210129/model/QueryExternalContactDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

QueryExternalContactDetailResponse::QueryExternalContactDetailResponse() :
    m_nextCursorHasBeenSet(false),
    m_customerHasBeenSet(false),
    m_followUserHasBeenSet(false)
{
}

CoreInternalOutcome QueryExternalContactDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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


    if (rsp.HasMember("NextCursor") && !rsp["NextCursor"].IsNull())
    {
        if (!rsp["NextCursor"].IsString())
        {
            return CoreInternalOutcome(Error("response `NextCursor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextCursor = string(rsp["NextCursor"].GetString());
        m_nextCursorHasBeenSet = true;
    }

    if (rsp.HasMember("Customer") && !rsp["Customer"].IsNull())
    {
        if (!rsp["Customer"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Customer` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customer.Deserialize(rsp["Customer"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customerHasBeenSet = true;
    }

    if (rsp.HasMember("FollowUser") && !rsp["FollowUser"].IsNull())
    {
        if (!rsp["FollowUser"].IsArray())
            return CoreInternalOutcome(Error("response `FollowUser` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FollowUser"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FollowUser item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_followUser.push_back(item);
        }
        m_followUserHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string QueryExternalContactDetailResponse::GetNextCursor() const
{
    return m_nextCursor;
}

bool QueryExternalContactDetailResponse::NextCursorHasBeenSet() const
{
    return m_nextCursorHasBeenSet;
}

ExternalContact QueryExternalContactDetailResponse::GetCustomer() const
{
    return m_customer;
}

bool QueryExternalContactDetailResponse::CustomerHasBeenSet() const
{
    return m_customerHasBeenSet;
}

vector<FollowUser> QueryExternalContactDetailResponse::GetFollowUser() const
{
    return m_followUser;
}

bool QueryExternalContactDetailResponse::FollowUserHasBeenSet() const
{
    return m_followUserHasBeenSet;
}


