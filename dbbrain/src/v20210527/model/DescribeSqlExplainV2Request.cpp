/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dbbrain/v20210527/model/DescribeSqlExplainV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeSqlExplainV2Request::DescribeSqlExplainV2Request() :
    m_productHasBeenSet(false),
    m_sqlTextHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_visualHasBeenSet(false)
{
}

string DescribeSqlExplainV2Request::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sqlText.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schema";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schema.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_visualHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Visual";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_visual, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSqlExplainV2Request::GetProduct() const
{
    return m_product;
}

void DescribeSqlExplainV2Request::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeSqlExplainV2Request::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string DescribeSqlExplainV2Request::GetSqlText() const
{
    return m_sqlText;
}

void DescribeSqlExplainV2Request::SetSqlText(const string& _sqlText)
{
    m_sqlText = _sqlText;
    m_sqlTextHasBeenSet = true;
}

bool DescribeSqlExplainV2Request::SqlTextHasBeenSet() const
{
    return m_sqlTextHasBeenSet;
}

string DescribeSqlExplainV2Request::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeSqlExplainV2Request::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeSqlExplainV2Request::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeSqlExplainV2Request::GetSchema() const
{
    return m_schema;
}

void DescribeSqlExplainV2Request::SetSchema(const string& _schema)
{
    m_schema = _schema;
    m_schemaHasBeenSet = true;
}

bool DescribeSqlExplainV2Request::SchemaHasBeenSet() const
{
    return m_schemaHasBeenSet;
}

string DescribeSqlExplainV2Request::GetClusterId() const
{
    return m_clusterId;
}

void DescribeSqlExplainV2Request::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeSqlExplainV2Request::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

bool DescribeSqlExplainV2Request::GetVisual() const
{
    return m_visual;
}

void DescribeSqlExplainV2Request::SetVisual(const bool& _visual)
{
    m_visual = _visual;
    m_visualHasBeenSet = true;
}

bool DescribeSqlExplainV2Request::VisualHasBeenSet() const
{
    return m_visualHasBeenSet;
}


