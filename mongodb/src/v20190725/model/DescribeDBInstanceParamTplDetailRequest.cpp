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

#include <tencentcloud/mongodb/v20190725/model/DescribeDBInstanceParamTplDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

DescribeDBInstanceParamTplDetailRequest::DescribeDBInstanceParamTplDetailRequest() :
    m_tplIdHasBeenSet(false),
    m_paramNameHasBeenSet(false)
{
}

string DescribeDBInstanceParamTplDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tplIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TplId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tplId.c_str(), allocator).Move(), allocator);
    }

    if (m_paramNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paramName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDBInstanceParamTplDetailRequest::GetTplId() const
{
    return m_tplId;
}

void DescribeDBInstanceParamTplDetailRequest::SetTplId(const string& _tplId)
{
    m_tplId = _tplId;
    m_tplIdHasBeenSet = true;
}

bool DescribeDBInstanceParamTplDetailRequest::TplIdHasBeenSet() const
{
    return m_tplIdHasBeenSet;
}

string DescribeDBInstanceParamTplDetailRequest::GetParamName() const
{
    return m_paramName;
}

void DescribeDBInstanceParamTplDetailRequest::SetParamName(const string& _paramName)
{
    m_paramName = _paramName;
    m_paramNameHasBeenSet = true;
}

bool DescribeDBInstanceParamTplDetailRequest::ParamNameHasBeenSet() const
{
    return m_paramNameHasBeenSet;
}


