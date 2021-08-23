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

#include <tencentcloud/ms/v20180408/model/DescribeShieldPlanInstanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

DescribeShieldPlanInstanceResponse::DescribeShieldPlanInstanceResponse() :
    m_bindInfoHasBeenSet(false),
    m_shieldPlanInfoHasBeenSet(false),
    m_resourceServiceInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeShieldPlanInstanceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BindInfo") && !rsp["BindInfo"].IsNull())
    {
        if (!rsp["BindInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BindInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bindInfo.Deserialize(rsp["BindInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bindInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ShieldPlanInfo") && !rsp["ShieldPlanInfo"].IsNull())
    {
        if (!rsp["ShieldPlanInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldPlanInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_shieldPlanInfo.Deserialize(rsp["ShieldPlanInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_shieldPlanInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceServiceInfo") && !rsp["ResourceServiceInfo"].IsNull())
    {
        if (!rsp["ResourceServiceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceServiceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceServiceInfo.Deserialize(rsp["ResourceServiceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceServiceInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeShieldPlanInstanceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_bindInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bindInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_shieldPlanInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldPlanInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_shieldPlanInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resourceServiceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceServiceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceServiceInfo.ToJsonObject(value[key.c_str()], allocator);
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


BindInfo DescribeShieldPlanInstanceResponse::GetBindInfo() const
{
    return m_bindInfo;
}

bool DescribeShieldPlanInstanceResponse::BindInfoHasBeenSet() const
{
    return m_bindInfoHasBeenSet;
}

ShieldPlanInfo DescribeShieldPlanInstanceResponse::GetShieldPlanInfo() const
{
    return m_shieldPlanInfo;
}

bool DescribeShieldPlanInstanceResponse::ShieldPlanInfoHasBeenSet() const
{
    return m_shieldPlanInfoHasBeenSet;
}

ResourceServiceInfo DescribeShieldPlanInstanceResponse::GetResourceServiceInfo() const
{
    return m_resourceServiceInfo;
}

bool DescribeShieldPlanInstanceResponse::ResourceServiceInfoHasBeenSet() const
{
    return m_resourceServiceInfoHasBeenSet;
}


