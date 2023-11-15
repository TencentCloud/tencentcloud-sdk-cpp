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

#include <tencentcloud/weilingwith/v20230427/model/ProductSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

ProductSet::ProductSet() :
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_totalPageHasBeenSet(false),
    m_totalRowHasBeenSet(false),
    m_productHasBeenSet(false)
{
}

CoreInternalOutcome ProductSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PageNumber") && !value["PageNumber"].IsNull())
    {
        if (!value["PageNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSet.PageNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNumber = value["PageNumber"].GetInt64();
        m_pageNumberHasBeenSet = true;
    }

    if (value.HasMember("PageSize") && !value["PageSize"].IsNull())
    {
        if (!value["PageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSet.PageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = value["PageSize"].GetInt64();
        m_pageSizeHasBeenSet = true;
    }

    if (value.HasMember("TotalPage") && !value["TotalPage"].IsNull())
    {
        if (!value["TotalPage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSet.TotalPage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPage = value["TotalPage"].GetInt64();
        m_totalPageHasBeenSet = true;
    }

    if (value.HasMember("TotalRow") && !value["TotalRow"].IsNull())
    {
        if (!value["TotalRow"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSet.TotalRow` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRow = value["TotalRow"].GetInt64();
        m_totalRowHasBeenSet = true;
    }

    if (value.HasMember("Product") && !value["Product"].IsNull())
    {
        if (!value["Product"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProductSet.Product` is not array type"));

        const rapidjson::Value &tmpValue = value["Product"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProductInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_product.push_back(item);
        }
        m_productHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_product.begin(); itr != m_product.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t ProductSet::GetPageNumber() const
{
    return m_pageNumber;
}

void ProductSet::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ProductSet::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t ProductSet::GetPageSize() const
{
    return m_pageSize;
}

void ProductSet::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ProductSet::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t ProductSet::GetTotalPage() const
{
    return m_totalPage;
}

void ProductSet::SetTotalPage(const int64_t& _totalPage)
{
    m_totalPage = _totalPage;
    m_totalPageHasBeenSet = true;
}

bool ProductSet::TotalPageHasBeenSet() const
{
    return m_totalPageHasBeenSet;
}

int64_t ProductSet::GetTotalRow() const
{
    return m_totalRow;
}

void ProductSet::SetTotalRow(const int64_t& _totalRow)
{
    m_totalRow = _totalRow;
    m_totalRowHasBeenSet = true;
}

bool ProductSet::TotalRowHasBeenSet() const
{
    return m_totalRowHasBeenSet;
}

vector<ProductInfo> ProductSet::GetProduct() const
{
    return m_product;
}

void ProductSet::SetProduct(const vector<ProductInfo>& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool ProductSet::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

