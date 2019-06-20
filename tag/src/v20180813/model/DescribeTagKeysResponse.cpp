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

#include <tencentcloud/tag/v20180813/model/DescribeTagKeysResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tag::V20180813::Model;
using namespace rapidjson;
using namespace std;

DescribeTagKeysResponse::DescribeTagKeysResponse() :
    m_totalCountHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTagKeysResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("Offset") && !rsp["Offset"].IsNull())
    {
        if (!rsp["Offset"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Offset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = rsp["Offset"].GetUint64();
        m_offsetHasBeenSet = true;
    }

    if (rsp.HasMember("Limit") && !rsp["Limit"].IsNull())
    {
        if (!rsp["Limit"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Limit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_limit = rsp["Limit"].GetUint64();
        m_limitHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Error("response `Tags` is not array type"));

        const Value &tmpValue = rsp["Tags"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t DescribeTagKeysResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeTagKeysResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

uint64_t DescribeTagKeysResponse::GetOffset() const
{
    return m_offset;
}

bool DescribeTagKeysResponse::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeTagKeysResponse::GetLimit() const
{
    return m_limit;
}

bool DescribeTagKeysResponse::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeTagKeysResponse::GetTags() const
{
    return m_tags;
}

bool DescribeTagKeysResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


