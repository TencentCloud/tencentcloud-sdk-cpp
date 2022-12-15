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

#include <tencentcloud/postgres/v20170312/model/DescribeDefaultParametersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

DescribeDefaultParametersRequest::DescribeDefaultParametersRequest() :
    m_dBMajorVersionHasBeenSet(false),
    m_dBEngineHasBeenSet(false)
{
}

string DescribeDefaultParametersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBMajorVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBMajorVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBMajorVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_dBEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBEngine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBEngine.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDefaultParametersRequest::GetDBMajorVersion() const
{
    return m_dBMajorVersion;
}

void DescribeDefaultParametersRequest::SetDBMajorVersion(const string& _dBMajorVersion)
{
    m_dBMajorVersion = _dBMajorVersion;
    m_dBMajorVersionHasBeenSet = true;
}

bool DescribeDefaultParametersRequest::DBMajorVersionHasBeenSet() const
{
    return m_dBMajorVersionHasBeenSet;
}

string DescribeDefaultParametersRequest::GetDBEngine() const
{
    return m_dBEngine;
}

void DescribeDefaultParametersRequest::SetDBEngine(const string& _dBEngine)
{
    m_dBEngine = _dBEngine;
    m_dBEngineHasBeenSet = true;
}

bool DescribeDefaultParametersRequest::DBEngineHasBeenSet() const
{
    return m_dBEngineHasBeenSet;
}


