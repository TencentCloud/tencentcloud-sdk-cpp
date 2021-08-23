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

#include <tencentcloud/live/v20180801/model/DescribePlayErrorCodeSumInfoListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribePlayErrorCodeSumInfoListResponse::DescribePlayErrorCodeSumInfoListResponse() :
    m_proIspInfoListHasBeenSet(false),
    m_totalCodeAllHasBeenSet(false),
    m_totalCode4xxHasBeenSet(false),
    m_totalCode5xxHasBeenSet(false),
    m_totalCodeListHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_totalPageHasBeenSet(false),
    m_totalNumHasBeenSet(false),
    m_totalCode2xxHasBeenSet(false),
    m_totalCode3xxHasBeenSet(false)
{
}

CoreInternalOutcome DescribePlayErrorCodeSumInfoListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ProIspInfoList") && !rsp["ProIspInfoList"].IsNull())
    {
        if (!rsp["ProIspInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProIspInfoList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ProIspInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProIspPlayCodeDataInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_proIspInfoList.push_back(item);
        }
        m_proIspInfoListHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCodeAll") && !rsp["TotalCodeAll"].IsNull())
    {
        if (!rsp["TotalCodeAll"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCodeAll` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCodeAll = rsp["TotalCodeAll"].GetUint64();
        m_totalCodeAllHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCode4xx") && !rsp["TotalCode4xx"].IsNull())
    {
        if (!rsp["TotalCode4xx"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCode4xx` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCode4xx = rsp["TotalCode4xx"].GetUint64();
        m_totalCode4xxHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCode5xx") && !rsp["TotalCode5xx"].IsNull())
    {
        if (!rsp["TotalCode5xx"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCode5xx` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCode5xx = rsp["TotalCode5xx"].GetUint64();
        m_totalCode5xxHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCodeList") && !rsp["TotalCodeList"].IsNull())
    {
        if (!rsp["TotalCodeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TotalCodeList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TotalCodeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PlayCodeTotalInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_totalCodeList.push_back(item);
        }
        m_totalCodeListHasBeenSet = true;
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

    if (rsp.HasMember("PageSize") && !rsp["PageSize"].IsNull())
    {
        if (!rsp["PageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = rsp["PageSize"].GetUint64();
        m_pageSizeHasBeenSet = true;
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

    if (rsp.HasMember("TotalNum") && !rsp["TotalNum"].IsNull())
    {
        if (!rsp["TotalNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = rsp["TotalNum"].GetUint64();
        m_totalNumHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCode2xx") && !rsp["TotalCode2xx"].IsNull())
    {
        if (!rsp["TotalCode2xx"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCode2xx` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCode2xx = rsp["TotalCode2xx"].GetUint64();
        m_totalCode2xxHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCode3xx") && !rsp["TotalCode3xx"].IsNull())
    {
        if (!rsp["TotalCode3xx"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCode3xx` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCode3xx = rsp["TotalCode3xx"].GetUint64();
        m_totalCode3xxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePlayErrorCodeSumInfoListResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_proIspInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProIspInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proIspInfoList.begin(); itr != m_proIspInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCodeAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCodeAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCodeAll, allocator);
    }

    if (m_totalCode4xxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCode4xx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCode4xx, allocator);
    }

    if (m_totalCode5xxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCode5xx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCode5xx, allocator);
    }

    if (m_totalCodeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCodeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_totalCodeList.begin(); itr != m_totalCodeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageNum, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_totalPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPage, allocator);
    }

    if (m_totalNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNum, allocator);
    }

    if (m_totalCode2xxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCode2xx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCode2xx, allocator);
    }

    if (m_totalCode3xxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCode3xx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCode3xx, allocator);
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


vector<ProIspPlayCodeDataInfo> DescribePlayErrorCodeSumInfoListResponse::GetProIspInfoList() const
{
    return m_proIspInfoList;
}

bool DescribePlayErrorCodeSumInfoListResponse::ProIspInfoListHasBeenSet() const
{
    return m_proIspInfoListHasBeenSet;
}

uint64_t DescribePlayErrorCodeSumInfoListResponse::GetTotalCodeAll() const
{
    return m_totalCodeAll;
}

bool DescribePlayErrorCodeSumInfoListResponse::TotalCodeAllHasBeenSet() const
{
    return m_totalCodeAllHasBeenSet;
}

uint64_t DescribePlayErrorCodeSumInfoListResponse::GetTotalCode4xx() const
{
    return m_totalCode4xx;
}

bool DescribePlayErrorCodeSumInfoListResponse::TotalCode4xxHasBeenSet() const
{
    return m_totalCode4xxHasBeenSet;
}

uint64_t DescribePlayErrorCodeSumInfoListResponse::GetTotalCode5xx() const
{
    return m_totalCode5xx;
}

bool DescribePlayErrorCodeSumInfoListResponse::TotalCode5xxHasBeenSet() const
{
    return m_totalCode5xxHasBeenSet;
}

vector<PlayCodeTotalInfo> DescribePlayErrorCodeSumInfoListResponse::GetTotalCodeList() const
{
    return m_totalCodeList;
}

bool DescribePlayErrorCodeSumInfoListResponse::TotalCodeListHasBeenSet() const
{
    return m_totalCodeListHasBeenSet;
}

uint64_t DescribePlayErrorCodeSumInfoListResponse::GetPageNum() const
{
    return m_pageNum;
}

bool DescribePlayErrorCodeSumInfoListResponse::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

uint64_t DescribePlayErrorCodeSumInfoListResponse::GetPageSize() const
{
    return m_pageSize;
}

bool DescribePlayErrorCodeSumInfoListResponse::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

uint64_t DescribePlayErrorCodeSumInfoListResponse::GetTotalPage() const
{
    return m_totalPage;
}

bool DescribePlayErrorCodeSumInfoListResponse::TotalPageHasBeenSet() const
{
    return m_totalPageHasBeenSet;
}

uint64_t DescribePlayErrorCodeSumInfoListResponse::GetTotalNum() const
{
    return m_totalNum;
}

bool DescribePlayErrorCodeSumInfoListResponse::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}

uint64_t DescribePlayErrorCodeSumInfoListResponse::GetTotalCode2xx() const
{
    return m_totalCode2xx;
}

bool DescribePlayErrorCodeSumInfoListResponse::TotalCode2xxHasBeenSet() const
{
    return m_totalCode2xxHasBeenSet;
}

uint64_t DescribePlayErrorCodeSumInfoListResponse::GetTotalCode3xx() const
{
    return m_totalCode3xx;
}

bool DescribePlayErrorCodeSumInfoListResponse::TotalCode3xxHasBeenSet() const
{
    return m_totalCode3xxHasBeenSet;
}


