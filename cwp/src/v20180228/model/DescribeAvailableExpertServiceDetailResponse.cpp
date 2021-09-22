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

#include <tencentcloud/cwp/v20180228/model/DescribeAvailableExpertServiceDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeAvailableExpertServiceDetailResponse::DescribeAvailableExpertServiceDetailResponse() :
    m_expertServiceHasBeenSet(false),
    m_emergencyResponseHasBeenSet(false),
    m_protectNetHasBeenSet(false),
    m_expertServiceBuyHasBeenSet(false),
    m_emergencyResponseBuyHasBeenSet(false),
    m_protectNetBuyHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAvailableExpertServiceDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ExpertService") && !rsp["ExpertService"].IsNull())
    {
        if (!rsp["ExpertService"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExpertService` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ExpertService"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExpertServiceOrderInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_expertService.push_back(item);
        }
        m_expertServiceHasBeenSet = true;
    }

    if (rsp.HasMember("EmergencyResponse") && !rsp["EmergencyResponse"].IsNull())
    {
        if (!rsp["EmergencyResponse"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyResponse` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_emergencyResponse = rsp["EmergencyResponse"].GetUint64();
        m_emergencyResponseHasBeenSet = true;
    }

    if (rsp.HasMember("ProtectNet") && !rsp["ProtectNet"].IsNull())
    {
        if (!rsp["ProtectNet"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectNet` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectNet = rsp["ProtectNet"].GetUint64();
        m_protectNetHasBeenSet = true;
    }

    if (rsp.HasMember("ExpertServiceBuy") && !rsp["ExpertServiceBuy"].IsNull())
    {
        if (!rsp["ExpertServiceBuy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExpertServiceBuy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_expertServiceBuy = rsp["ExpertServiceBuy"].GetBool();
        m_expertServiceBuyHasBeenSet = true;
    }

    if (rsp.HasMember("EmergencyResponseBuy") && !rsp["EmergencyResponseBuy"].IsNull())
    {
        if (!rsp["EmergencyResponseBuy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyResponseBuy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_emergencyResponseBuy = rsp["EmergencyResponseBuy"].GetBool();
        m_emergencyResponseBuyHasBeenSet = true;
    }

    if (rsp.HasMember("ProtectNetBuy") && !rsp["ProtectNetBuy"].IsNull())
    {
        if (!rsp["ProtectNetBuy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectNetBuy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_protectNetBuy = rsp["ProtectNetBuy"].GetBool();
        m_protectNetBuyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAvailableExpertServiceDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_expertServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpertService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_expertService.begin(); itr != m_expertService.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_emergencyResponseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmergencyResponse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_emergencyResponse, allocator);
    }

    if (m_protectNetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectNet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectNet, allocator);
    }

    if (m_expertServiceBuyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpertServiceBuy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expertServiceBuy, allocator);
    }

    if (m_emergencyResponseBuyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmergencyResponseBuy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_emergencyResponseBuy, allocator);
    }

    if (m_protectNetBuyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectNetBuy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectNetBuy, allocator);
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


vector<ExpertServiceOrderInfo> DescribeAvailableExpertServiceDetailResponse::GetExpertService() const
{
    return m_expertService;
}

bool DescribeAvailableExpertServiceDetailResponse::ExpertServiceHasBeenSet() const
{
    return m_expertServiceHasBeenSet;
}

uint64_t DescribeAvailableExpertServiceDetailResponse::GetEmergencyResponse() const
{
    return m_emergencyResponse;
}

bool DescribeAvailableExpertServiceDetailResponse::EmergencyResponseHasBeenSet() const
{
    return m_emergencyResponseHasBeenSet;
}

uint64_t DescribeAvailableExpertServiceDetailResponse::GetProtectNet() const
{
    return m_protectNet;
}

bool DescribeAvailableExpertServiceDetailResponse::ProtectNetHasBeenSet() const
{
    return m_protectNetHasBeenSet;
}

bool DescribeAvailableExpertServiceDetailResponse::GetExpertServiceBuy() const
{
    return m_expertServiceBuy;
}

bool DescribeAvailableExpertServiceDetailResponse::ExpertServiceBuyHasBeenSet() const
{
    return m_expertServiceBuyHasBeenSet;
}

bool DescribeAvailableExpertServiceDetailResponse::GetEmergencyResponseBuy() const
{
    return m_emergencyResponseBuy;
}

bool DescribeAvailableExpertServiceDetailResponse::EmergencyResponseBuyHasBeenSet() const
{
    return m_emergencyResponseBuyHasBeenSet;
}

bool DescribeAvailableExpertServiceDetailResponse::GetProtectNetBuy() const
{
    return m_protectNetBuy;
}

bool DescribeAvailableExpertServiceDetailResponse::ProtectNetBuyHasBeenSet() const
{
    return m_protectNetBuyHasBeenSet;
}


