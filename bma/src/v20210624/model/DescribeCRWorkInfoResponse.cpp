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

#include <tencentcloud/bma/v20210624/model/DescribeCRWorkInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

DescribeCRWorkInfoResponse::DescribeCRWorkInfoResponse() :
    m_workNameHasBeenSet(false),
    m_monitorStatusHasBeenSet(false),
    m_authStatusHasBeenSet(false),
    m_commStatusHasBeenSet(false),
    m_isProducerHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCRWorkInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("WorkName") && !rsp["WorkName"].IsNull())
    {
        if (!rsp["WorkName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workName = string(rsp["WorkName"].GetString());
        m_workNameHasBeenSet = true;
    }

    if (rsp.HasMember("MonitorStatus") && !rsp["MonitorStatus"].IsNull())
    {
        if (!rsp["MonitorStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorStatus = rsp["MonitorStatus"].GetInt64();
        m_monitorStatusHasBeenSet = true;
    }

    if (rsp.HasMember("AuthStatus") && !rsp["AuthStatus"].IsNull())
    {
        if (!rsp["AuthStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authStatus = rsp["AuthStatus"].GetInt64();
        m_authStatusHasBeenSet = true;
    }

    if (rsp.HasMember("CommStatus") && !rsp["CommStatus"].IsNull())
    {
        if (!rsp["CommStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CommStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_commStatus = rsp["CommStatus"].GetInt64();
        m_commStatusHasBeenSet = true;
    }

    if (rsp.HasMember("IsProducer") && !rsp["IsProducer"].IsNull())
    {
        if (!rsp["IsProducer"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsProducer` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isProducer = rsp["IsProducer"].GetInt64();
        m_isProducerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCRWorkInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_workNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workName.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorStatus, allocator);
    }

    if (m_authStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authStatus, allocator);
    }

    if (m_commStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_commStatus, allocator);
    }

    if (m_isProducerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsProducer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isProducer, allocator);
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


string DescribeCRWorkInfoResponse::GetWorkName() const
{
    return m_workName;
}

bool DescribeCRWorkInfoResponse::WorkNameHasBeenSet() const
{
    return m_workNameHasBeenSet;
}

int64_t DescribeCRWorkInfoResponse::GetMonitorStatus() const
{
    return m_monitorStatus;
}

bool DescribeCRWorkInfoResponse::MonitorStatusHasBeenSet() const
{
    return m_monitorStatusHasBeenSet;
}

int64_t DescribeCRWorkInfoResponse::GetAuthStatus() const
{
    return m_authStatus;
}

bool DescribeCRWorkInfoResponse::AuthStatusHasBeenSet() const
{
    return m_authStatusHasBeenSet;
}

int64_t DescribeCRWorkInfoResponse::GetCommStatus() const
{
    return m_commStatus;
}

bool DescribeCRWorkInfoResponse::CommStatusHasBeenSet() const
{
    return m_commStatusHasBeenSet;
}

int64_t DescribeCRWorkInfoResponse::GetIsProducer() const
{
    return m_isProducer;
}

bool DescribeCRWorkInfoResponse::IsProducerHasBeenSet() const
{
    return m_isProducerHasBeenSet;
}


