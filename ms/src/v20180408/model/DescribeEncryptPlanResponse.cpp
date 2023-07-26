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

#include <tencentcloud/ms/v20180408/model/DescribeEncryptPlanResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

DescribeEncryptPlanResponse::DescribeEncryptPlanResponse() :
    m_platformTypeHasBeenSet(false),
    m_platformTypeDescHasBeenSet(false),
    m_encryptOpTypeHasBeenSet(false),
    m_encryptOpTypeDescHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_orderTypeDescHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_androidPlanHasBeenSet(false),
    m_appletPlanHasBeenSet(false),
    m_iOSPlanHasBeenSet(false),
    m_sDKPlanHasBeenSet(false)
{
}

CoreInternalOutcome DescribeEncryptPlanResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PlatformType") && !rsp["PlatformType"].IsNull())
    {
        if (!rsp["PlatformType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_platformType = rsp["PlatformType"].GetInt64();
        m_platformTypeHasBeenSet = true;
    }

    if (rsp.HasMember("PlatformTypeDesc") && !rsp["PlatformTypeDesc"].IsNull())
    {
        if (!rsp["PlatformTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platformTypeDesc = string(rsp["PlatformTypeDesc"].GetString());
        m_platformTypeDescHasBeenSet = true;
    }

    if (rsp.HasMember("EncryptOpType") && !rsp["EncryptOpType"].IsNull())
    {
        if (!rsp["EncryptOpType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptOpType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptOpType = rsp["EncryptOpType"].GetInt64();
        m_encryptOpTypeHasBeenSet = true;
    }

    if (rsp.HasMember("EncryptOpTypeDesc") && !rsp["EncryptOpTypeDesc"].IsNull())
    {
        if (!rsp["EncryptOpTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptOpTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptOpTypeDesc = string(rsp["EncryptOpTypeDesc"].GetString());
        m_encryptOpTypeDescHasBeenSet = true;
    }

    if (rsp.HasMember("OrderType") && !rsp["OrderType"].IsNull())
    {
        if (!rsp["OrderType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrderType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderType = rsp["OrderType"].GetInt64();
        m_orderTypeHasBeenSet = true;
    }

    if (rsp.HasMember("OrderTypeDesc") && !rsp["OrderTypeDesc"].IsNull())
    {
        if (!rsp["OrderTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderTypeDesc = string(rsp["OrderTypeDesc"].GetString());
        m_orderTypeDescHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceId") && !rsp["ResourceId"].IsNull())
    {
        if (!rsp["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(rsp["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (rsp.HasMember("AndroidPlan") && !rsp["AndroidPlan"].IsNull())
    {
        if (!rsp["AndroidPlan"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidPlan` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_androidPlan.Deserialize(rsp["AndroidPlan"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_androidPlanHasBeenSet = true;
    }

    if (rsp.HasMember("AppletPlan") && !rsp["AppletPlan"].IsNull())
    {
        if (!rsp["AppletPlan"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppletPlan` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_appletPlan.Deserialize(rsp["AppletPlan"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_appletPlanHasBeenSet = true;
    }

    if (rsp.HasMember("IOSPlan") && !rsp["IOSPlan"].IsNull())
    {
        if (!rsp["IOSPlan"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IOSPlan` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_iOSPlan.Deserialize(rsp["IOSPlan"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_iOSPlanHasBeenSet = true;
    }

    if (rsp.HasMember("SDKPlan") && !rsp["SDKPlan"].IsNull())
    {
        if (!rsp["SDKPlan"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SDKPlan` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sDKPlan.Deserialize(rsp["SDKPlan"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sDKPlanHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeEncryptPlanResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_platformTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_platformType, allocator);
    }

    if (m_platformTypeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformTypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platformTypeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptOpTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptOpType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryptOpType, allocator);
    }

    if (m_encryptOpTypeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptOpTypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptOpTypeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderType, allocator);
    }

    if (m_orderTypeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderTypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderTypeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_androidPlanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidPlan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_androidPlan.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_appletPlanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppletPlan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_appletPlan.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_iOSPlanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IOSPlan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iOSPlan.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sDKPlanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SDKPlan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sDKPlan.ToJsonObject(value[key.c_str()], allocator);
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


int64_t DescribeEncryptPlanResponse::GetPlatformType() const
{
    return m_platformType;
}

bool DescribeEncryptPlanResponse::PlatformTypeHasBeenSet() const
{
    return m_platformTypeHasBeenSet;
}

string DescribeEncryptPlanResponse::GetPlatformTypeDesc() const
{
    return m_platformTypeDesc;
}

bool DescribeEncryptPlanResponse::PlatformTypeDescHasBeenSet() const
{
    return m_platformTypeDescHasBeenSet;
}

int64_t DescribeEncryptPlanResponse::GetEncryptOpType() const
{
    return m_encryptOpType;
}

bool DescribeEncryptPlanResponse::EncryptOpTypeHasBeenSet() const
{
    return m_encryptOpTypeHasBeenSet;
}

string DescribeEncryptPlanResponse::GetEncryptOpTypeDesc() const
{
    return m_encryptOpTypeDesc;
}

bool DescribeEncryptPlanResponse::EncryptOpTypeDescHasBeenSet() const
{
    return m_encryptOpTypeDescHasBeenSet;
}

int64_t DescribeEncryptPlanResponse::GetOrderType() const
{
    return m_orderType;
}

bool DescribeEncryptPlanResponse::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

string DescribeEncryptPlanResponse::GetOrderTypeDesc() const
{
    return m_orderTypeDesc;
}

bool DescribeEncryptPlanResponse::OrderTypeDescHasBeenSet() const
{
    return m_orderTypeDescHasBeenSet;
}

string DescribeEncryptPlanResponse::GetResourceId() const
{
    return m_resourceId;
}

bool DescribeEncryptPlanResponse::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

AndroidPlan DescribeEncryptPlanResponse::GetAndroidPlan() const
{
    return m_androidPlan;
}

bool DescribeEncryptPlanResponse::AndroidPlanHasBeenSet() const
{
    return m_androidPlanHasBeenSet;
}

AppletPlan DescribeEncryptPlanResponse::GetAppletPlan() const
{
    return m_appletPlan;
}

bool DescribeEncryptPlanResponse::AppletPlanHasBeenSet() const
{
    return m_appletPlanHasBeenSet;
}

IOSPlan DescribeEncryptPlanResponse::GetIOSPlan() const
{
    return m_iOSPlan;
}

bool DescribeEncryptPlanResponse::IOSPlanHasBeenSet() const
{
    return m_iOSPlanHasBeenSet;
}

SDKPlan DescribeEncryptPlanResponse::GetSDKPlan() const
{
    return m_sDKPlan;
}

bool DescribeEncryptPlanResponse::SDKPlanHasBeenSet() const
{
    return m_sDKPlanHasBeenSet;
}


