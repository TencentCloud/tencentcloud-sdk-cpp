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

#include <tencentcloud/live/v20180801/model/DescribeVisitTopSumInfoListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

DescribeVisitTopSumInfoListResponse::DescribeVisitTopSumInfoListResponse() :
    m_pageNumHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_topIndexHasBeenSet(false),
    m_orderParamHasBeenSet(false),
    m_totalNumHasBeenSet(false),
    m_totalPageHasBeenSet(false),
    m_dataInfoListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVisitTopSumInfoListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PageNum") && !rsp["PageNum"].IsNull())
    {
        if (!rsp["PageNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `PageNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNum = rsp["PageNum"].GetUint64();
        m_pageNumHasBeenSet = true;
    }

    if (rsp.HasMember("PageSize") && !rsp["PageSize"].IsNull())
    {
        if (!rsp["PageSize"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `PageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = rsp["PageSize"].GetUint64();
        m_pageSizeHasBeenSet = true;
    }

    if (rsp.HasMember("TopIndex") && !rsp["TopIndex"].IsNull())
    {
        if (!rsp["TopIndex"].IsString())
        {
            return CoreInternalOutcome(Error("response `TopIndex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topIndex = string(rsp["TopIndex"].GetString());
        m_topIndexHasBeenSet = true;
    }

    if (rsp.HasMember("OrderParam") && !rsp["OrderParam"].IsNull())
    {
        if (!rsp["OrderParam"].IsString())
        {
            return CoreInternalOutcome(Error("response `OrderParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderParam = string(rsp["OrderParam"].GetString());
        m_orderParamHasBeenSet = true;
    }

    if (rsp.HasMember("TotalNum") && !rsp["TotalNum"].IsNull())
    {
        if (!rsp["TotalNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TotalNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = rsp["TotalNum"].GetUint64();
        m_totalNumHasBeenSet = true;
    }

    if (rsp.HasMember("TotalPage") && !rsp["TotalPage"].IsNull())
    {
        if (!rsp["TotalPage"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TotalPage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPage = rsp["TotalPage"].GetUint64();
        m_totalPageHasBeenSet = true;
    }

    if (rsp.HasMember("DataInfoList") && !rsp["DataInfoList"].IsNull())
    {
        if (!rsp["DataInfoList"].IsArray())
            return CoreInternalOutcome(Error("response `DataInfoList` is not array type"));

        const Value &tmpValue = rsp["DataInfoList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PlaySumStatInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataInfoList.push_back(item);
        }
        m_dataInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t DescribeVisitTopSumInfoListResponse::GetPageNum() const
{
    return m_pageNum;
}

bool DescribeVisitTopSumInfoListResponse::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

uint64_t DescribeVisitTopSumInfoListResponse::GetPageSize() const
{
    return m_pageSize;
}

bool DescribeVisitTopSumInfoListResponse::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeVisitTopSumInfoListResponse::GetTopIndex() const
{
    return m_topIndex;
}

bool DescribeVisitTopSumInfoListResponse::TopIndexHasBeenSet() const
{
    return m_topIndexHasBeenSet;
}

string DescribeVisitTopSumInfoListResponse::GetOrderParam() const
{
    return m_orderParam;
}

bool DescribeVisitTopSumInfoListResponse::OrderParamHasBeenSet() const
{
    return m_orderParamHasBeenSet;
}

uint64_t DescribeVisitTopSumInfoListResponse::GetTotalNum() const
{
    return m_totalNum;
}

bool DescribeVisitTopSumInfoListResponse::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}

uint64_t DescribeVisitTopSumInfoListResponse::GetTotalPage() const
{
    return m_totalPage;
}

bool DescribeVisitTopSumInfoListResponse::TotalPageHasBeenSet() const
{
    return m_totalPageHasBeenSet;
}

vector<PlaySumStatInfo> DescribeVisitTopSumInfoListResponse::GetDataInfoList() const
{
    return m_dataInfoList;
}

bool DescribeVisitTopSumInfoListResponse::DataInfoListHasBeenSet() const
{
    return m_dataInfoListHasBeenSet;
}


