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

#include <tencentcloud/config/v20220802/model/DescribeAggregatorResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

DescribeAggregatorResponse::DescribeAggregatorResponse() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_aggregatorAccountsHasBeenSet(false),
    m_aggregatorStatusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAggregatorResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("AggregatorAccounts") && !rsp["AggregatorAccounts"].IsNull())
    {
        if (!rsp["AggregatorAccounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AggregatorAccounts` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AggregatorAccounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AggregatorAccount item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aggregatorAccounts.push_back(item);
        }
        m_aggregatorAccountsHasBeenSet = true;
    }

    if (rsp.HasMember("AggregatorStatus") && !rsp["AggregatorStatus"].IsNull())
    {
        if (!rsp["AggregatorStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AggregatorStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aggregatorStatus = rsp["AggregatorStatus"].GetUint64();
        m_aggregatorStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAggregatorResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_aggregatorAccountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AggregatorAccounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aggregatorAccounts.begin(); itr != m_aggregatorAccounts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_aggregatorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AggregatorStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aggregatorStatus, allocator);
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


string DescribeAggregatorResponse::GetName() const
{
    return m_name;
}

bool DescribeAggregatorResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeAggregatorResponse::GetDescription() const
{
    return m_description;
}

bool DescribeAggregatorResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeAggregatorResponse::GetType() const
{
    return m_type;
}

bool DescribeAggregatorResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<AggregatorAccount> DescribeAggregatorResponse::GetAggregatorAccounts() const
{
    return m_aggregatorAccounts;
}

bool DescribeAggregatorResponse::AggregatorAccountsHasBeenSet() const
{
    return m_aggregatorAccountsHasBeenSet;
}

uint64_t DescribeAggregatorResponse::GetAggregatorStatus() const
{
    return m_aggregatorStatus;
}

bool DescribeAggregatorResponse::AggregatorStatusHasBeenSet() const
{
    return m_aggregatorStatusHasBeenSet;
}


