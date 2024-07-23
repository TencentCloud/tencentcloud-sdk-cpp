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

#include <tencentcloud/mongodb/v20190725/model/DescribeDBInstanceParamTplRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

DescribeDBInstanceParamTplRequest::DescribeDBInstanceParamTplRequest() :
    m_tplIdsHasBeenSet(false),
    m_tplNamesHasBeenSet(false),
    m_mongoVersionHasBeenSet(false),
    m_tplTypeHasBeenSet(false)
{
}

string DescribeDBInstanceParamTplRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tplIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TplIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tplIds.begin(); itr != m_tplIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tplNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TplNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tplNames.begin(); itr != m_tplNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_mongoVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mongoVersion.begin(); itr != m_mongoVersion.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tplTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TplType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tplType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeDBInstanceParamTplRequest::GetTplIds() const
{
    return m_tplIds;
}

void DescribeDBInstanceParamTplRequest::SetTplIds(const vector<string>& _tplIds)
{
    m_tplIds = _tplIds;
    m_tplIdsHasBeenSet = true;
}

bool DescribeDBInstanceParamTplRequest::TplIdsHasBeenSet() const
{
    return m_tplIdsHasBeenSet;
}

vector<string> DescribeDBInstanceParamTplRequest::GetTplNames() const
{
    return m_tplNames;
}

void DescribeDBInstanceParamTplRequest::SetTplNames(const vector<string>& _tplNames)
{
    m_tplNames = _tplNames;
    m_tplNamesHasBeenSet = true;
}

bool DescribeDBInstanceParamTplRequest::TplNamesHasBeenSet() const
{
    return m_tplNamesHasBeenSet;
}

vector<string> DescribeDBInstanceParamTplRequest::GetMongoVersion() const
{
    return m_mongoVersion;
}

void DescribeDBInstanceParamTplRequest::SetMongoVersion(const vector<string>& _mongoVersion)
{
    m_mongoVersion = _mongoVersion;
    m_mongoVersionHasBeenSet = true;
}

bool DescribeDBInstanceParamTplRequest::MongoVersionHasBeenSet() const
{
    return m_mongoVersionHasBeenSet;
}

string DescribeDBInstanceParamTplRequest::GetTplType() const
{
    return m_tplType;
}

void DescribeDBInstanceParamTplRequest::SetTplType(const string& _tplType)
{
    m_tplType = _tplType;
    m_tplTypeHasBeenSet = true;
}

bool DescribeDBInstanceParamTplRequest::TplTypeHasBeenSet() const
{
    return m_tplTypeHasBeenSet;
}


