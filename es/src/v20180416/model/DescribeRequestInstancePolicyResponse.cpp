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

#include <tencentcloud/es/v20180416/model/DescribeRequestInstancePolicyResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DescribeRequestInstancePolicyResponse::DescribeRequestInstancePolicyResponse() :
    m_getPathsHasBeenSet(false),
    m_postPathsHasBeenSet(false),
    m_putPathsHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRequestInstancePolicyResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("GetPaths") && !rsp["GetPaths"].IsNull())
    {
        if (!rsp["GetPaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GetPaths` is not array type"));

        const rapidjson::Value &tmpValue = rsp["GetPaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_getPaths.push_back((*itr).GetString());
        }
        m_getPathsHasBeenSet = true;
    }

    if (rsp.HasMember("PostPaths") && !rsp["PostPaths"].IsNull())
    {
        if (!rsp["PostPaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PostPaths` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PostPaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_postPaths.push_back((*itr).GetString());
        }
        m_postPathsHasBeenSet = true;
    }

    if (rsp.HasMember("PutPaths") && !rsp["PutPaths"].IsNull())
    {
        if (!rsp["PutPaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PutPaths` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PutPaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_putPaths.push_back((*itr).GetString());
        }
        m_putPathsHasBeenSet = true;
    }

    if (rsp.HasMember("IsDefault") && !rsp["IsDefault"].IsNull())
    {
        if (!rsp["IsDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = rsp["IsDefault"].GetBool();
        m_isDefaultHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Operator") && !rsp["Operator"].IsNull())
    {
        if (!rsp["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(rsp["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRequestInstancePolicyResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_getPathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GetPaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_getPaths.begin(); itr != m_getPaths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_postPathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostPaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_postPaths.begin(); itr != m_postPaths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_putPathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PutPaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_putPaths.begin(); itr != m_putPaths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
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


vector<string> DescribeRequestInstancePolicyResponse::GetGetPaths() const
{
    return m_getPaths;
}

bool DescribeRequestInstancePolicyResponse::GetPathsHasBeenSet() const
{
    return m_getPathsHasBeenSet;
}

vector<string> DescribeRequestInstancePolicyResponse::GetPostPaths() const
{
    return m_postPaths;
}

bool DescribeRequestInstancePolicyResponse::PostPathsHasBeenSet() const
{
    return m_postPathsHasBeenSet;
}

vector<string> DescribeRequestInstancePolicyResponse::GetPutPaths() const
{
    return m_putPaths;
}

bool DescribeRequestInstancePolicyResponse::PutPathsHasBeenSet() const
{
    return m_putPathsHasBeenSet;
}

bool DescribeRequestInstancePolicyResponse::GetIsDefault() const
{
    return m_isDefault;
}

bool DescribeRequestInstancePolicyResponse::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

string DescribeRequestInstancePolicyResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeRequestInstancePolicyResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DescribeRequestInstancePolicyResponse::GetOperator() const
{
    return m_operator;
}

bool DescribeRequestInstancePolicyResponse::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


