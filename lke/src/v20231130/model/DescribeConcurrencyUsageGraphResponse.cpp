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

#include <tencentcloud/lke/v20231130/model/DescribeConcurrencyUsageGraphResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

DescribeConcurrencyUsageGraphResponse::DescribeConcurrencyUsageGraphResponse() :
    m_xHasBeenSet(false),
    m_availableYHasBeenSet(false),
    m_successCallYHasBeenSet(false)
{
}

CoreInternalOutcome DescribeConcurrencyUsageGraphResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("X") && !rsp["X"].IsNull())
    {
        if (!rsp["X"].IsArray())
            return CoreInternalOutcome(Core::Error("response `X` is not array type"));

        const rapidjson::Value &tmpValue = rsp["X"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_x.push_back((*itr).GetString());
        }
        m_xHasBeenSet = true;
    }

    if (rsp.HasMember("AvailableY") && !rsp["AvailableY"].IsNull())
    {
        if (!rsp["AvailableY"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AvailableY` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AvailableY"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_availableY.push_back((*itr).GetInt64());
        }
        m_availableYHasBeenSet = true;
    }

    if (rsp.HasMember("SuccessCallY") && !rsp["SuccessCallY"].IsNull())
    {
        if (!rsp["SuccessCallY"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SuccessCallY` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SuccessCallY"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_successCallY.push_back((*itr).GetInt64());
        }
        m_successCallYHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeConcurrencyUsageGraphResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_xHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "X";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_x.begin(); itr != m_x.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_availableYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_availableY.begin(); itr != m_availableY.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_successCallYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCallY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_successCallY.begin(); itr != m_successCallY.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
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


vector<string> DescribeConcurrencyUsageGraphResponse::GetX() const
{
    return m_x;
}

bool DescribeConcurrencyUsageGraphResponse::XHasBeenSet() const
{
    return m_xHasBeenSet;
}

vector<int64_t> DescribeConcurrencyUsageGraphResponse::GetAvailableY() const
{
    return m_availableY;
}

bool DescribeConcurrencyUsageGraphResponse::AvailableYHasBeenSet() const
{
    return m_availableYHasBeenSet;
}

vector<int64_t> DescribeConcurrencyUsageGraphResponse::GetSuccessCallY() const
{
    return m_successCallY;
}

bool DescribeConcurrencyUsageGraphResponse::SuccessCallYHasBeenSet() const
{
    return m_successCallYHasBeenSet;
}


