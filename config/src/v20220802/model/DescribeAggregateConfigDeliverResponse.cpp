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

#include <tencentcloud/config/v20220802/model/DescribeAggregateConfigDeliverResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

DescribeAggregateConfigDeliverResponse::DescribeAggregateConfigDeliverResponse() :
    m_deliverNameHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_deliverPrefixHasBeenSet(false),
    m_deliverTypeHasBeenSet(false),
    m_deliverUinHasBeenSet(false),
    m_deliverContentTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAggregateConfigDeliverResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DeliverName") && !rsp["DeliverName"].IsNull())
    {
        if (!rsp["DeliverName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliverName = string(rsp["DeliverName"].GetString());
        m_deliverNameHasBeenSet = true;
    }

    if (rsp.HasMember("TargetArn") && !rsp["TargetArn"].IsNull())
    {
        if (!rsp["TargetArn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetArn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetArn = string(rsp["TargetArn"].GetString());
        m_targetArnHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("DeliverPrefix") && !rsp["DeliverPrefix"].IsNull())
    {
        if (!rsp["DeliverPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliverPrefix = string(rsp["DeliverPrefix"].GetString());
        m_deliverPrefixHasBeenSet = true;
    }

    if (rsp.HasMember("DeliverType") && !rsp["DeliverType"].IsNull())
    {
        if (!rsp["DeliverType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliverType = string(rsp["DeliverType"].GetString());
        m_deliverTypeHasBeenSet = true;
    }

    if (rsp.HasMember("DeliverUin") && !rsp["DeliverUin"].IsNull())
    {
        if (!rsp["DeliverUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deliverUin = rsp["DeliverUin"].GetInt64();
        m_deliverUinHasBeenSet = true;
    }

    if (rsp.HasMember("DeliverContentType") && !rsp["DeliverContentType"].IsNull())
    {
        if (!rsp["DeliverContentType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverContentType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deliverContentType = rsp["DeliverContentType"].GetUint64();
        m_deliverContentTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAggregateConfigDeliverResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_deliverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliverName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetArnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetArn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetArn.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deliverPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliverPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_deliverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliverType.c_str(), allocator).Move(), allocator);
    }

    if (m_deliverUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deliverUin, allocator);
    }

    if (m_deliverContentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deliverContentType, allocator);
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


string DescribeAggregateConfigDeliverResponse::GetDeliverName() const
{
    return m_deliverName;
}

bool DescribeAggregateConfigDeliverResponse::DeliverNameHasBeenSet() const
{
    return m_deliverNameHasBeenSet;
}

string DescribeAggregateConfigDeliverResponse::GetTargetArn() const
{
    return m_targetArn;
}

bool DescribeAggregateConfigDeliverResponse::TargetArnHasBeenSet() const
{
    return m_targetArnHasBeenSet;
}

uint64_t DescribeAggregateConfigDeliverResponse::GetStatus() const
{
    return m_status;
}

bool DescribeAggregateConfigDeliverResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeAggregateConfigDeliverResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeAggregateConfigDeliverResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeAggregateConfigDeliverResponse::GetDeliverPrefix() const
{
    return m_deliverPrefix;
}

bool DescribeAggregateConfigDeliverResponse::DeliverPrefixHasBeenSet() const
{
    return m_deliverPrefixHasBeenSet;
}

string DescribeAggregateConfigDeliverResponse::GetDeliverType() const
{
    return m_deliverType;
}

bool DescribeAggregateConfigDeliverResponse::DeliverTypeHasBeenSet() const
{
    return m_deliverTypeHasBeenSet;
}

int64_t DescribeAggregateConfigDeliverResponse::GetDeliverUin() const
{
    return m_deliverUin;
}

bool DescribeAggregateConfigDeliverResponse::DeliverUinHasBeenSet() const
{
    return m_deliverUinHasBeenSet;
}

uint64_t DescribeAggregateConfigDeliverResponse::GetDeliverContentType() const
{
    return m_deliverContentType;
}

bool DescribeAggregateConfigDeliverResponse::DeliverContentTypeHasBeenSet() const
{
    return m_deliverContentTypeHasBeenSet;
}


