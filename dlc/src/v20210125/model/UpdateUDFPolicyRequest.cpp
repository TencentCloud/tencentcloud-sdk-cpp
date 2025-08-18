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

#include <tencentcloud/dlc/v20210125/model/UpdateUDFPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

UpdateUDFPolicyRequest::UpdateUDFPolicyRequest() :
    m_nameHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_catalogNameHasBeenSet(false),
    m_uDFPolicyInfosHasBeenSet(false)
{
}

string UpdateUDFPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalogName.c_str(), allocator).Move(), allocator);
    }

    if (m_uDFPolicyInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UDFPolicyInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_uDFPolicyInfos.begin(); itr != m_uDFPolicyInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateUDFPolicyRequest::GetName() const
{
    return m_name;
}

void UpdateUDFPolicyRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateUDFPolicyRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateUDFPolicyRequest::GetDatabaseName() const
{
    return m_databaseName;
}

void UpdateUDFPolicyRequest::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool UpdateUDFPolicyRequest::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string UpdateUDFPolicyRequest::GetCatalogName() const
{
    return m_catalogName;
}

void UpdateUDFPolicyRequest::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool UpdateUDFPolicyRequest::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

vector<UDFPolicyInfo> UpdateUDFPolicyRequest::GetUDFPolicyInfos() const
{
    return m_uDFPolicyInfos;
}

void UpdateUDFPolicyRequest::SetUDFPolicyInfos(const vector<UDFPolicyInfo>& _uDFPolicyInfos)
{
    m_uDFPolicyInfos = _uDFPolicyInfos;
    m_uDFPolicyInfosHasBeenSet = true;
}

bool UpdateUDFPolicyRequest::UDFPolicyInfosHasBeenSet() const
{
    return m_uDFPolicyInfosHasBeenSet;
}


