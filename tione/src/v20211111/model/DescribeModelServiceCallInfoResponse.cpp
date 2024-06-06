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

#include <tencentcloud/tione/v20211111/model/DescribeModelServiceCallInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DescribeModelServiceCallInfoResponse::DescribeModelServiceCallInfoResponse() :
    m_serviceCallInfoHasBeenSet(false),
    m_inferGatewayCallInfoHasBeenSet(false),
    m_defaultNginxGatewayCallInfoHasBeenSet(false),
    m_tJCallInfoHasBeenSet(false),
    m_intranetCallInfoHasBeenSet(false),
    m_serviceCallInfoV2HasBeenSet(false)
{
}

CoreInternalOutcome DescribeModelServiceCallInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ServiceCallInfo") && !rsp["ServiceCallInfo"].IsNull())
    {
        if (!rsp["ServiceCallInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceCallInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_serviceCallInfo.Deserialize(rsp["ServiceCallInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceCallInfoHasBeenSet = true;
    }

    if (rsp.HasMember("InferGatewayCallInfo") && !rsp["InferGatewayCallInfo"].IsNull())
    {
        if (!rsp["InferGatewayCallInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InferGatewayCallInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inferGatewayCallInfo.Deserialize(rsp["InferGatewayCallInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inferGatewayCallInfoHasBeenSet = true;
    }

    if (rsp.HasMember("DefaultNginxGatewayCallInfo") && !rsp["DefaultNginxGatewayCallInfo"].IsNull())
    {
        if (!rsp["DefaultNginxGatewayCallInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultNginxGatewayCallInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_defaultNginxGatewayCallInfo.Deserialize(rsp["DefaultNginxGatewayCallInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_defaultNginxGatewayCallInfoHasBeenSet = true;
    }

    if (rsp.HasMember("TJCallInfo") && !rsp["TJCallInfo"].IsNull())
    {
        if (!rsp["TJCallInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TJCallInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tJCallInfo.Deserialize(rsp["TJCallInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tJCallInfoHasBeenSet = true;
    }

    if (rsp.HasMember("IntranetCallInfo") && !rsp["IntranetCallInfo"].IsNull())
    {
        if (!rsp["IntranetCallInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IntranetCallInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_intranetCallInfo.Deserialize(rsp["IntranetCallInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_intranetCallInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceCallInfoV2") && !rsp["ServiceCallInfoV2"].IsNull())
    {
        if (!rsp["ServiceCallInfoV2"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceCallInfoV2` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_serviceCallInfoV2.Deserialize(rsp["ServiceCallInfoV2"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceCallInfoV2HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeModelServiceCallInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_serviceCallInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCallInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceCallInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_inferGatewayCallInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InferGatewayCallInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inferGatewayCallInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_defaultNginxGatewayCallInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultNginxGatewayCallInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_defaultNginxGatewayCallInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tJCallInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TJCallInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tJCallInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_intranetCallInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetCallInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_intranetCallInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_serviceCallInfoV2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCallInfoV2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceCallInfoV2.ToJsonObject(value[key.c_str()], allocator);
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


ServiceCallInfo DescribeModelServiceCallInfoResponse::GetServiceCallInfo() const
{
    return m_serviceCallInfo;
}

bool DescribeModelServiceCallInfoResponse::ServiceCallInfoHasBeenSet() const
{
    return m_serviceCallInfoHasBeenSet;
}

InferGatewayCallInfo DescribeModelServiceCallInfoResponse::GetInferGatewayCallInfo() const
{
    return m_inferGatewayCallInfo;
}

bool DescribeModelServiceCallInfoResponse::InferGatewayCallInfoHasBeenSet() const
{
    return m_inferGatewayCallInfoHasBeenSet;
}

DefaultNginxGatewayCallInfo DescribeModelServiceCallInfoResponse::GetDefaultNginxGatewayCallInfo() const
{
    return m_defaultNginxGatewayCallInfo;
}

bool DescribeModelServiceCallInfoResponse::DefaultNginxGatewayCallInfoHasBeenSet() const
{
    return m_defaultNginxGatewayCallInfoHasBeenSet;
}

TJCallInfo DescribeModelServiceCallInfoResponse::GetTJCallInfo() const
{
    return m_tJCallInfo;
}

bool DescribeModelServiceCallInfoResponse::TJCallInfoHasBeenSet() const
{
    return m_tJCallInfoHasBeenSet;
}

IntranetCallInfo DescribeModelServiceCallInfoResponse::GetIntranetCallInfo() const
{
    return m_intranetCallInfo;
}

bool DescribeModelServiceCallInfoResponse::IntranetCallInfoHasBeenSet() const
{
    return m_intranetCallInfoHasBeenSet;
}

ServiceCallInfoV2 DescribeModelServiceCallInfoResponse::GetServiceCallInfoV2() const
{
    return m_serviceCallInfoV2;
}

bool DescribeModelServiceCallInfoResponse::ServiceCallInfoV2HasBeenSet() const
{
    return m_serviceCallInfoV2HasBeenSet;
}


