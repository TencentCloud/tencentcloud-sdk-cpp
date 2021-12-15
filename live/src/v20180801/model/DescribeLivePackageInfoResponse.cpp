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

#include <tencentcloud/live/v20180801/model/DescribeLivePackageInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeLivePackageInfoResponse::DescribeLivePackageInfoResponse() :
    m_livePackageInfoListHasBeenSet(false),
    m_packageBillModeHasBeenSet(false),
    m_totalPageHasBeenSet(false),
    m_totalNumHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_fluxPackageBillModeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLivePackageInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LivePackageInfoList") && !rsp["LivePackageInfoList"].IsNull())
    {
        if (!rsp["LivePackageInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LivePackageInfoList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LivePackageInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LivePackageInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_livePackageInfoList.push_back(item);
        }
        m_livePackageInfoListHasBeenSet = true;
    }

    if (rsp.HasMember("PackageBillMode") && !rsp["PackageBillMode"].IsNull())
    {
        if (!rsp["PackageBillMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageBillMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_packageBillMode = rsp["PackageBillMode"].GetInt64();
        m_packageBillModeHasBeenSet = true;
    }

    if (rsp.HasMember("TotalPage") && !rsp["TotalPage"].IsNull())
    {
        if (!rsp["TotalPage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalPage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPage = rsp["TotalPage"].GetInt64();
        m_totalPageHasBeenSet = true;
    }

    if (rsp.HasMember("TotalNum") && !rsp["TotalNum"].IsNull())
    {
        if (!rsp["TotalNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = rsp["TotalNum"].GetInt64();
        m_totalNumHasBeenSet = true;
    }

    if (rsp.HasMember("PageNum") && !rsp["PageNum"].IsNull())
    {
        if (!rsp["PageNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PageNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNum = rsp["PageNum"].GetInt64();
        m_pageNumHasBeenSet = true;
    }

    if (rsp.HasMember("PageSize") && !rsp["PageSize"].IsNull())
    {
        if (!rsp["PageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = rsp["PageSize"].GetInt64();
        m_pageSizeHasBeenSet = true;
    }

    if (rsp.HasMember("FluxPackageBillMode") && !rsp["FluxPackageBillMode"].IsNull())
    {
        if (!rsp["FluxPackageBillMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FluxPackageBillMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fluxPackageBillMode = string(rsp["FluxPackageBillMode"].GetString());
        m_fluxPackageBillModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeLivePackageInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_livePackageInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LivePackageInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_livePackageInfoList.begin(); itr != m_livePackageInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_packageBillModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageBillMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageBillMode, allocator);
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

    if (m_fluxPackageBillModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FluxPackageBillMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fluxPackageBillMode.c_str(), allocator).Move(), allocator);
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


vector<LivePackageInfo> DescribeLivePackageInfoResponse::GetLivePackageInfoList() const
{
    return m_livePackageInfoList;
}

bool DescribeLivePackageInfoResponse::LivePackageInfoListHasBeenSet() const
{
    return m_livePackageInfoListHasBeenSet;
}

int64_t DescribeLivePackageInfoResponse::GetPackageBillMode() const
{
    return m_packageBillMode;
}

bool DescribeLivePackageInfoResponse::PackageBillModeHasBeenSet() const
{
    return m_packageBillModeHasBeenSet;
}

int64_t DescribeLivePackageInfoResponse::GetTotalPage() const
{
    return m_totalPage;
}

bool DescribeLivePackageInfoResponse::TotalPageHasBeenSet() const
{
    return m_totalPageHasBeenSet;
}

int64_t DescribeLivePackageInfoResponse::GetTotalNum() const
{
    return m_totalNum;
}

bool DescribeLivePackageInfoResponse::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}

int64_t DescribeLivePackageInfoResponse::GetPageNum() const
{
    return m_pageNum;
}

bool DescribeLivePackageInfoResponse::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

int64_t DescribeLivePackageInfoResponse::GetPageSize() const
{
    return m_pageSize;
}

bool DescribeLivePackageInfoResponse::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeLivePackageInfoResponse::GetFluxPackageBillMode() const
{
    return m_fluxPackageBillMode;
}

bool DescribeLivePackageInfoResponse::FluxPackageBillModeHasBeenSet() const
{
    return m_fluxPackageBillModeHasBeenSet;
}


