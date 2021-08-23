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


    if (rsp.HasMember("TotalFlux") && !rsp["TotalFlux"].IsNull())
    {
        if (!rsp["TotalFlux"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TotalFlux` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalFlux = rsp["TotalFlux"].GetDouble();
        m_totalFluxHasBeenSet = true;
    }

    if (rsp.HasMember("TotalRequest") && !rsp["TotalRequest"].IsNull())
    {
        if (!rsp["TotalRequest"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalRequest` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRequest = rsp["TotalRequest"].GetUint64();
        m_totalRequestHasBeenSet = true;
    }

    if (rsp.HasMember("StatType") && !rsp["StatType"].IsNull())
    {
        if (!rsp["StatType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statType = string(rsp["StatType"].GetString());
        m_statTypeHasBeenSet = true;
    }

    if (rsp.HasMember("PageSize") && !rsp["PageSize"].IsNull())
    {
        if (!rsp["PageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = rsp["PageSize"].GetUint64();
        m_pageSizeHasBeenSet = true;
    }

    if (rsp.HasMember("PageNum") && !rsp["PageNum"].IsNull())
    {
        if (!rsp["PageNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PageNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNum = rsp["PageNum"].GetUint64();
        m_pageNumHasBeenSet = true;
    }

    if (rsp.HasMember("TotalNum") && !rsp["TotalNum"].IsNull())
    {
        if (!rsp["TotalNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = rsp["TotalNum"].GetUint64();
        m_totalNumHasBeenSet = true;
    }

    if (rsp.HasMember("TotalPage") && !rsp["TotalPage"].IsNull())
    {
        if (!rsp["TotalPage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalPage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPage = rsp["TotalPage"].GetUint64();
        m_totalPageHasBeenSet = true;
    }

    if (rsp.HasMember("DataInfoList") && !rsp["DataInfoList"].IsNull())
    {
        if (!rsp["DataInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataInfoList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DataInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
        if (!rsp["AvgFluxPerSecond"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AvgFluxPerSecond` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgFluxPerSecond = rsp["AvgFluxPerSecond"].GetDouble();
        m_avgFluxPerSecondHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeProIspPlaySumInfoListResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalFluxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalFlux";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalFlux, allocator);
    }

    if (m_totalRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRequest, allocator);
    }

    if (m_statTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statType.c_str(), allocator).Move(), allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageNum, allocator);
    }

    if (m_totalNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNum, allocator);
    }

    if (m_totalPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPage, allocator);
    }

    if (m_dataInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataInfoList.begin(); itr != m_dataInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_avgFluxPerSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgFluxPerSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgFluxPerSecond, allocator);
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


