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

#include <tencentcloud/live/v20180801/model/DescribeProIspPlaySumInfoListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

DescribeProIspPlaySumInfoListResponse::DescribeProIspPlaySumInfoListResponse() :
    m_totalFluxHasBeenSet(false),
    m_totalRequestHasBeenSet(false),
    m_statTypeHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_totalNumHasBeenSet(false),
    m_totalPageHasBeenSet(false),
    m_dataInfoListHasBeenSet(false),
    m_avgFluxPerSecondHasBeenSet(false)
{
}

CoreInternalOutcome DescribeProIspPlaySumInfoListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalFlux") && !rsp["TotalFlux"].IsNull())
    {
        if (!rsp["TotalFlux"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `TotalFlux` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalFlux = rsp["TotalFlux"].GetDouble();
        m_totalFluxHasBeenSet = true;
    }

    if (rsp.HasMember("TotalRequest") && !rsp["TotalRequest"].IsNull())
    {
        if (!rsp["TotalRequest"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TotalRequest` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRequest = rsp["TotalRequest"].GetUint64();
        m_totalRequestHasBeenSet = true;
    }

    if (rsp.HasMember("StatType") && !rsp["StatType"].IsNull())
    {
        if (!rsp["StatType"].IsString())
        {
            return CoreInternalOutcome(Error("response `StatType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statType = string(rsp["StatType"].GetString());
        m_statTypeHasBeenSet = true;
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

    if (rsp.HasMember("PageNum") && !rsp["PageNum"].IsNull())
    {
        if (!rsp["PageNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `PageNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNum = rsp["PageNum"].GetUint64();
        m_pageNumHasBeenSet = true;
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
            ProIspPlaySumInfo item;
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

    if (rsp.HasMember("AvgFluxPerSecond") && !rsp["AvgFluxPerSecond"].IsNull())
    {
        if (!rsp["AvgFluxPerSecond"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `AvgFluxPerSecond` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgFluxPerSecond = rsp["AvgFluxPerSecond"].GetDouble();
        m_avgFluxPerSecondHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


double DescribeProIspPlaySumInfoListResponse::GetTotalFlux() const
{
    return m_totalFlux;
}

bool DescribeProIspPlaySumInfoListResponse::TotalFluxHasBeenSet() const
{
    return m_totalFluxHasBeenSet;
}

uint64_t DescribeProIspPlaySumInfoListResponse::GetTotalRequest() const
{
    return m_totalRequest;
}

bool DescribeProIspPlaySumInfoListResponse::TotalRequestHasBeenSet() const
{
    return m_totalRequestHasBeenSet;
}

string DescribeProIspPlaySumInfoListResponse::GetStatType() const
{
    return m_statType;
}

bool DescribeProIspPlaySumInfoListResponse::StatTypeHasBeenSet() const
{
    return m_statTypeHasBeenSet;
}

uint64_t DescribeProIspPlaySumInfoListResponse::GetPageSize() const
{
    return m_pageSize;
}

bool DescribeProIspPlaySumInfoListResponse::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

uint64_t DescribeProIspPlaySumInfoListResponse::GetPageNum() const
{
    return m_pageNum;
}

bool DescribeProIspPlaySumInfoListResponse::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

uint64_t DescribeProIspPlaySumInfoListResponse::GetTotalNum() const
{
    return m_totalNum;
}

bool DescribeProIspPlaySumInfoListResponse::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}

uint64_t DescribeProIspPlaySumInfoListResponse::GetTotalPage() const
{
    return m_totalPage;
}

bool DescribeProIspPlaySumInfoListResponse::TotalPageHasBeenSet() const
{
    return m_totalPageHasBeenSet;
}

vector<ProIspPlaySumInfo> DescribeProIspPlaySumInfoListResponse::GetDataInfoList() const
{
    return m_dataInfoList;
}

bool DescribeProIspPlaySumInfoListResponse::DataInfoListHasBeenSet() const
{
    return m_dataInfoListHasBeenSet;
}

double DescribeProIspPlaySumInfoListResponse::GetAvgFluxPerSecond() const
{
    return m_avgFluxPerSecond;
}

bool DescribeProIspPlaySumInfoListResponse::AvgFluxPerSecondHasBeenSet() const
{
    return m_avgFluxPerSecondHasBeenSet;
}


