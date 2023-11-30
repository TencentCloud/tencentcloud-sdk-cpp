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

#include <tencentcloud/keewidb/v20220308/model/DescribeConnectionConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Keewidb::V20220308::Model;
using namespace std;

DescribeConnectionConfigResponse::DescribeConnectionConfigResponse() :
    m_inNetLimitHasBeenSet(false),
    m_outNetLimitHasBeenSet(false),
    m_clientLimitHasBeenSet(false),
    m_clientLimitMinHasBeenSet(false),
    m_clientLimitMaxHasBeenSet(false)
{
}

CoreInternalOutcome DescribeConnectionConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InNetLimit") && !rsp["InNetLimit"].IsNull())
    {
        if (!rsp["InNetLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InNetLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inNetLimit = rsp["InNetLimit"].GetInt64();
        m_inNetLimitHasBeenSet = true;
    }

    if (rsp.HasMember("OutNetLimit") && !rsp["OutNetLimit"].IsNull())
    {
        if (!rsp["OutNetLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutNetLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outNetLimit = rsp["OutNetLimit"].GetInt64();
        m_outNetLimitHasBeenSet = true;
    }

    if (rsp.HasMember("ClientLimit") && !rsp["ClientLimit"].IsNull())
    {
        if (!rsp["ClientLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClientLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clientLimit = rsp["ClientLimit"].GetInt64();
        m_clientLimitHasBeenSet = true;
    }

    if (rsp.HasMember("ClientLimitMin") && !rsp["ClientLimitMin"].IsNull())
    {
        if (!rsp["ClientLimitMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClientLimitMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clientLimitMin = rsp["ClientLimitMin"].GetInt64();
        m_clientLimitMinHasBeenSet = true;
    }

    if (rsp.HasMember("ClientLimitMax") && !rsp["ClientLimitMax"].IsNull())
    {
        if (!rsp["ClientLimitMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClientLimitMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clientLimitMax = rsp["ClientLimitMax"].GetInt64();
        m_clientLimitMaxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeConnectionConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_inNetLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InNetLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inNetLimit, allocator);
    }

    if (m_outNetLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutNetLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outNetLimit, allocator);
    }

    if (m_clientLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientLimit, allocator);
    }

    if (m_clientLimitMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientLimitMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientLimitMin, allocator);
    }

    if (m_clientLimitMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientLimitMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientLimitMax, allocator);
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


int64_t DescribeConnectionConfigResponse::GetInNetLimit() const
{
    return m_inNetLimit;
}

bool DescribeConnectionConfigResponse::InNetLimitHasBeenSet() const
{
    return m_inNetLimitHasBeenSet;
}

int64_t DescribeConnectionConfigResponse::GetOutNetLimit() const
{
    return m_outNetLimit;
}

bool DescribeConnectionConfigResponse::OutNetLimitHasBeenSet() const
{
    return m_outNetLimitHasBeenSet;
}

int64_t DescribeConnectionConfigResponse::GetClientLimit() const
{
    return m_clientLimit;
}

bool DescribeConnectionConfigResponse::ClientLimitHasBeenSet() const
{
    return m_clientLimitHasBeenSet;
}

int64_t DescribeConnectionConfigResponse::GetClientLimitMin() const
{
    return m_clientLimitMin;
}

bool DescribeConnectionConfigResponse::ClientLimitMinHasBeenSet() const
{
    return m_clientLimitMinHasBeenSet;
}

int64_t DescribeConnectionConfigResponse::GetClientLimitMax() const
{
    return m_clientLimitMax;
}

bool DescribeConnectionConfigResponse::ClientLimitMaxHasBeenSet() const
{
    return m_clientLimitMaxHasBeenSet;
}


