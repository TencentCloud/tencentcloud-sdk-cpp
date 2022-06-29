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

#include <tencentcloud/iecp/v20210914/model/DescribeYeheResourceLimitResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeYeheResourceLimitResponse::DescribeYeheResourceLimitResponse() :
    m_uinHasBeenSet(false),
    m_createNodeLimitHasBeenSet(false),
    m_createClusterLimitHasBeenSet(false),
    m_enablePermMonitorHasBeenSet(false),
    m_enablePermAdminNodeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeYeheResourceLimitResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Uin") && !rsp["Uin"].IsNull())
    {
        if (!rsp["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(rsp["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (rsp.HasMember("CreateNodeLimit") && !rsp["CreateNodeLimit"].IsNull())
    {
        if (!rsp["CreateNodeLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateNodeLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createNodeLimit = rsp["CreateNodeLimit"].GetUint64();
        m_createNodeLimitHasBeenSet = true;
    }

    if (rsp.HasMember("CreateClusterLimit") && !rsp["CreateClusterLimit"].IsNull())
    {
        if (!rsp["CreateClusterLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateClusterLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createClusterLimit = rsp["CreateClusterLimit"].GetUint64();
        m_createClusterLimitHasBeenSet = true;
    }

    if (rsp.HasMember("EnablePermMonitor") && !rsp["EnablePermMonitor"].IsNull())
    {
        if (!rsp["EnablePermMonitor"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnablePermMonitor` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enablePermMonitor = rsp["EnablePermMonitor"].GetBool();
        m_enablePermMonitorHasBeenSet = true;
    }

    if (rsp.HasMember("EnablePermAdminNode") && !rsp["EnablePermAdminNode"].IsNull())
    {
        if (!rsp["EnablePermAdminNode"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnablePermAdminNode` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enablePermAdminNode = rsp["EnablePermAdminNode"].GetBool();
        m_enablePermAdminNodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeYeheResourceLimitResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_createNodeLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateNodeLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createNodeLimit, allocator);
    }

    if (m_createClusterLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateClusterLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createClusterLimit, allocator);
    }

    if (m_enablePermMonitorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePermMonitor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enablePermMonitor, allocator);
    }

    if (m_enablePermAdminNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePermAdminNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enablePermAdminNode, allocator);
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


string DescribeYeheResourceLimitResponse::GetUin() const
{
    return m_uin;
}

bool DescribeYeheResourceLimitResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

uint64_t DescribeYeheResourceLimitResponse::GetCreateNodeLimit() const
{
    return m_createNodeLimit;
}

bool DescribeYeheResourceLimitResponse::CreateNodeLimitHasBeenSet() const
{
    return m_createNodeLimitHasBeenSet;
}

uint64_t DescribeYeheResourceLimitResponse::GetCreateClusterLimit() const
{
    return m_createClusterLimit;
}

bool DescribeYeheResourceLimitResponse::CreateClusterLimitHasBeenSet() const
{
    return m_createClusterLimitHasBeenSet;
}

bool DescribeYeheResourceLimitResponse::GetEnablePermMonitor() const
{
    return m_enablePermMonitor;
}

bool DescribeYeheResourceLimitResponse::EnablePermMonitorHasBeenSet() const
{
    return m_enablePermMonitorHasBeenSet;
}

bool DescribeYeheResourceLimitResponse::GetEnablePermAdminNode() const
{
    return m_enablePermAdminNode;
}

bool DescribeYeheResourceLimitResponse::EnablePermAdminNodeHasBeenSet() const
{
    return m_enablePermAdminNodeHasBeenSet;
}


