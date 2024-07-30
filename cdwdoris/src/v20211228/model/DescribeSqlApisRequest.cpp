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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeSqlApisRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeSqlApisRequest::DescribeSqlApisRequest() :
    m_whiteHostHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_catalogsHasBeenSet(false)
{
}

string DescribeSqlApisRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_whiteHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_whiteHost.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalogs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_catalogs.begin(); itr != m_catalogs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSqlApisRequest::GetWhiteHost() const
{
    return m_whiteHost;
}

void DescribeSqlApisRequest::SetWhiteHost(const string& _whiteHost)
{
    m_whiteHost = _whiteHost;
    m_whiteHostHasBeenSet = true;
}

bool DescribeSqlApisRequest::WhiteHostHasBeenSet() const
{
    return m_whiteHostHasBeenSet;
}

string DescribeSqlApisRequest::GetCatalog() const
{
    return m_catalog;
}

void DescribeSqlApisRequest::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool DescribeSqlApisRequest::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

vector<string> DescribeSqlApisRequest::GetCatalogs() const
{
    return m_catalogs;
}

void DescribeSqlApisRequest::SetCatalogs(const vector<string>& _catalogs)
{
    m_catalogs = _catalogs;
    m_catalogsHasBeenSet = true;
}

bool DescribeSqlApisRequest::CatalogsHasBeenSet() const
{
    return m_catalogsHasBeenSet;
}


