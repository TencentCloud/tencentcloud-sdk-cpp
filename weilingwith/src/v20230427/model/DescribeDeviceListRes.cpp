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

#include <tencentcloud/weilingwith/v20230427/model/DescribeDeviceListRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DescribeDeviceListRes::DescribeDeviceListRes() :
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_totalPageHasBeenSet(false),
    m_totalRowHasBeenSet(false),
    m_deviceDataSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDeviceListRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PageNumber") && !value["PageNumber"].IsNull())
    {
        if (!value["PageNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceListRes.PageNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNumber = value["PageNumber"].GetInt64();
        m_pageNumberHasBeenSet = true;
    }

    if (value.HasMember("PageSize") && !value["PageSize"].IsNull())
    {
        if (!value["PageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceListRes.PageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = value["PageSize"].GetInt64();
        m_pageSizeHasBeenSet = true;
    }

    if (value.HasMember("TotalPage") && !value["TotalPage"].IsNull())
    {
        if (!value["TotalPage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceListRes.TotalPage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPage = value["TotalPage"].GetInt64();
        m_totalPageHasBeenSet = true;
    }

    if (value.HasMember("TotalRow") && !value["TotalRow"].IsNull())
    {
        if (!value["TotalRow"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceListRes.TotalRow` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRow = value["TotalRow"].GetInt64();
        m_totalRowHasBeenSet = true;
    }

    if (value.HasMember("DeviceDataSet") && !value["DeviceDataSet"].IsNull())
    {
        if (!value["DeviceDataSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceListRes.DeviceDataSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DeviceDataSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceDataInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deviceDataSet.push_back(item);
        }
        m_deviceDataSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDeviceListRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageNumber, allocator);
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

    if (m_totalRowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRow, allocator);
    }

    if (m_deviceDataSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceDataSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deviceDataSet.begin(); itr != m_deviceDataSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t DescribeDeviceListRes::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeDeviceListRes::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeDeviceListRes::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeDeviceListRes::GetPageSize() const
{
    return m_pageSize;
}

void DescribeDeviceListRes::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeDeviceListRes::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeDeviceListRes::GetTotalPage() const
{
    return m_totalPage;
}

void DescribeDeviceListRes::SetTotalPage(const int64_t& _totalPage)
{
    m_totalPage = _totalPage;
    m_totalPageHasBeenSet = true;
}

bool DescribeDeviceListRes::TotalPageHasBeenSet() const
{
    return m_totalPageHasBeenSet;
}

int64_t DescribeDeviceListRes::GetTotalRow() const
{
    return m_totalRow;
}

void DescribeDeviceListRes::SetTotalRow(const int64_t& _totalRow)
{
    m_totalRow = _totalRow;
    m_totalRowHasBeenSet = true;
}

bool DescribeDeviceListRes::TotalRowHasBeenSet() const
{
    return m_totalRowHasBeenSet;
}

vector<DeviceDataInfo> DescribeDeviceListRes::GetDeviceDataSet() const
{
    return m_deviceDataSet;
}

void DescribeDeviceListRes::SetDeviceDataSet(const vector<DeviceDataInfo>& _deviceDataSet)
{
    m_deviceDataSet = _deviceDataSet;
    m_deviceDataSetHasBeenSet = true;
}

bool DescribeDeviceListRes::DeviceDataSetHasBeenSet() const
{
    return m_deviceDataSetHasBeenSet;
}

