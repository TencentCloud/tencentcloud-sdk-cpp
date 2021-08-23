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

#include <tencentcloud/cfw/v20190904/model/DescribeNatFwInfoCountResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeNatFwInfoCountResponse::DescribeNatFwInfoCountResponse() :
    m_returnMsgHasBeenSet(false),
    m_natFwInsCountHasBeenSet(false),
    m_subnetCountHasBeenSet(false),
    m_openSwitchCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNatFwInfoCountResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ReturnMsg") && !rsp["ReturnMsg"].IsNull())
    {
        if (!rsp["ReturnMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReturnMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_returnMsg = string(rsp["ReturnMsg"].GetString());
        m_returnMsgHasBeenSet = true;
    }

    if (rsp.HasMember("NatFwInsCount") && !rsp["NatFwInsCount"].IsNull())
    {
        if (!rsp["NatFwInsCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwInsCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_natFwInsCount = rsp["NatFwInsCount"].GetInt64();
        m_natFwInsCountHasBeenSet = true;
    }

    if (rsp.HasMember("SubnetCount") && !rsp["SubnetCount"].IsNull())
    {
        if (!rsp["SubnetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subnetCount = rsp["SubnetCount"].GetInt64();
        m_subnetCountHasBeenSet = true;
    }

    if (rsp.HasMember("OpenSwitchCount") && !rsp["OpenSwitchCount"].IsNull())
    {
        if (!rsp["OpenSwitchCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OpenSwitchCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_openSwitchCount = rsp["OpenSwitchCount"].GetInt64();
        m_openSwitchCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeNatFwInfoCountResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_returnMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_returnMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_natFwInsCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatFwInsCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_natFwInsCount, allocator);
    }

    if (m_subnetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subnetCount, allocator);
    }

    if (m_openSwitchCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenSwitchCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openSwitchCount, allocator);
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


string DescribeNatFwInfoCountResponse::GetReturnMsg() const
{
    return m_returnMsg;
}

bool DescribeNatFwInfoCountResponse::ReturnMsgHasBeenSet() const
{
    return m_returnMsgHasBeenSet;
}

int64_t DescribeNatFwInfoCountResponse::GetNatFwInsCount() const
{
    return m_natFwInsCount;
}

bool DescribeNatFwInfoCountResponse::NatFwInsCountHasBeenSet() const
{
    return m_natFwInsCountHasBeenSet;
}

int64_t DescribeNatFwInfoCountResponse::GetSubnetCount() const
{
    return m_subnetCount;
}

bool DescribeNatFwInfoCountResponse::SubnetCountHasBeenSet() const
{
    return m_subnetCountHasBeenSet;
}

int64_t DescribeNatFwInfoCountResponse::GetOpenSwitchCount() const
{
    return m_openSwitchCount;
}

bool DescribeNatFwInfoCountResponse::OpenSwitchCountHasBeenSet() const
{
    return m_openSwitchCountHasBeenSet;
}


