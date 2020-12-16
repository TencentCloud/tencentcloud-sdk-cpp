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

#include <tencentcloud/ams/v20200608/model/DescribeAmsListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ams::V20200608::Model;
using namespace rapidjson;
using namespace std;

DescribeAmsListResponse::DescribeAmsListResponse() :
    m_amsDetailSetHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_pageTokenHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAmsListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AmsDetailSet") && !rsp["AmsDetailSet"].IsNull())
    {
        if (!rsp["AmsDetailSet"].IsArray())
            return CoreInternalOutcome(Error("response `AmsDetailSet` is not array type"));

        const Value &tmpValue = rsp["AmsDetailSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AmsDetailInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_amsDetailSet.push_back(item);
        }
        m_amsDetailSetHasBeenSet = true;
    }

    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("PageToken") && !rsp["PageToken"].IsNull())
    {
        if (!rsp["PageToken"].IsString())
        {
            return CoreInternalOutcome(Error("response `PageToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageToken = string(rsp["PageToken"].GetString());
        m_pageTokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<AmsDetailInfo> DescribeAmsListResponse::GetAmsDetailSet() const
{
    return m_amsDetailSet;
}

bool DescribeAmsListResponse::AmsDetailSetHasBeenSet() const
{
    return m_amsDetailSetHasBeenSet;
}

int64_t DescribeAmsListResponse::GetTotal() const
{
    return m_total;
}

bool DescribeAmsListResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string DescribeAmsListResponse::GetPageToken() const
{
    return m_pageToken;
}

bool DescribeAmsListResponse::PageTokenHasBeenSet() const
{
    return m_pageTokenHasBeenSet;
}


