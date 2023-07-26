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

#include <tencentcloud/ms/v20180408/model/EncryptResults.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

EncryptResults::EncryptResults() :
    m_platformTypeHasBeenSet(false),
    m_platformDescHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_orderTypeDescHasBeenSet(false),
    m_encryptOpTypeHasBeenSet(false),
    m_encryptOpTypeDescHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_androidResultHasBeenSet(false),
    m_iOSResultHasBeenSet(false),
    m_sDKResultHasBeenSet(false),
    m_appletResultHasBeenSet(false)
{
}

CoreInternalOutcome EncryptResults::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlatformType") && !value["PlatformType"].IsNull())
    {
        if (!value["PlatformType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptResults.PlatformType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_platformType = value["PlatformType"].GetInt64();
        m_platformTypeHasBeenSet = true;
    }

    if (value.HasMember("PlatformDesc") && !value["PlatformDesc"].IsNull())
    {
        if (!value["PlatformDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptResults.PlatformDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platformDesc = string(value["PlatformDesc"].GetString());
        m_platformDescHasBeenSet = true;
    }

    if (value.HasMember("OrderType") && !value["OrderType"].IsNull())
    {
        if (!value["OrderType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptResults.OrderType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderType = value["OrderType"].GetInt64();
        m_orderTypeHasBeenSet = true;
    }

    if (value.HasMember("OrderTypeDesc") && !value["OrderTypeDesc"].IsNull())
    {
        if (!value["OrderTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptResults.OrderTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderTypeDesc = string(value["OrderTypeDesc"].GetString());
        m_orderTypeDescHasBeenSet = true;
    }

    if (value.HasMember("EncryptOpType") && !value["EncryptOpType"].IsNull())
    {
        if (!value["EncryptOpType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptResults.EncryptOpType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptOpType = value["EncryptOpType"].GetInt64();
        m_encryptOpTypeHasBeenSet = true;
    }

    if (value.HasMember("EncryptOpTypeDesc") && !value["EncryptOpTypeDesc"].IsNull())
    {
        if (!value["EncryptOpTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptResults.EncryptOpTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptOpTypeDesc = string(value["EncryptOpTypeDesc"].GetString());
        m_encryptOpTypeDescHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptResults.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptResults.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("AndroidResult") && !value["AndroidResult"].IsNull())
    {
        if (!value["AndroidResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptResults.AndroidResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_androidResult.Deserialize(value["AndroidResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_androidResultHasBeenSet = true;
    }

    if (value.HasMember("IOSResult") && !value["IOSResult"].IsNull())
    {
        if (!value["IOSResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptResults.IOSResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_iOSResult.Deserialize(value["IOSResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_iOSResultHasBeenSet = true;
    }

    if (value.HasMember("SDKResult") && !value["SDKResult"].IsNull())
    {
        if (!value["SDKResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptResults.SDKResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sDKResult.Deserialize(value["SDKResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sDKResultHasBeenSet = true;
    }

    if (value.HasMember("AppletResult") && !value["AppletResult"].IsNull())
    {
        if (!value["AppletResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptResults.AppletResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_appletResult.Deserialize(value["AppletResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_appletResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EncryptResults::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_platformTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_platformType, allocator);
    }

    if (m_platformDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platformDesc.c_str(), allocator).Move(), allocator);
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

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_androidResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_androidResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_iOSResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IOSResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iOSResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sDKResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SDKResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sDKResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_appletResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppletResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_appletResult.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t EncryptResults::GetPlatformType() const
{
    return m_platformType;
}

void EncryptResults::SetPlatformType(const int64_t& _platformType)
{
    m_platformType = _platformType;
    m_platformTypeHasBeenSet = true;
}

bool EncryptResults::PlatformTypeHasBeenSet() const
{
    return m_platformTypeHasBeenSet;
}

string EncryptResults::GetPlatformDesc() const
{
    return m_platformDesc;
}

void EncryptResults::SetPlatformDesc(const string& _platformDesc)
{
    m_platformDesc = _platformDesc;
    m_platformDescHasBeenSet = true;
}

bool EncryptResults::PlatformDescHasBeenSet() const
{
    return m_platformDescHasBeenSet;
}

int64_t EncryptResults::GetOrderType() const
{
    return m_orderType;
}

void EncryptResults::SetOrderType(const int64_t& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool EncryptResults::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

string EncryptResults::GetOrderTypeDesc() const
{
    return m_orderTypeDesc;
}

void EncryptResults::SetOrderTypeDesc(const string& _orderTypeDesc)
{
    m_orderTypeDesc = _orderTypeDesc;
    m_orderTypeDescHasBeenSet = true;
}

bool EncryptResults::OrderTypeDescHasBeenSet() const
{
    return m_orderTypeDescHasBeenSet;
}

int64_t EncryptResults::GetEncryptOpType() const
{
    return m_encryptOpType;
}

void EncryptResults::SetEncryptOpType(const int64_t& _encryptOpType)
{
    m_encryptOpType = _encryptOpType;
    m_encryptOpTypeHasBeenSet = true;
}

bool EncryptResults::EncryptOpTypeHasBeenSet() const
{
    return m_encryptOpTypeHasBeenSet;
}

string EncryptResults::GetEncryptOpTypeDesc() const
{
    return m_encryptOpTypeDesc;
}

void EncryptResults::SetEncryptOpTypeDesc(const string& _encryptOpTypeDesc)
{
    m_encryptOpTypeDesc = _encryptOpTypeDesc;
    m_encryptOpTypeDescHasBeenSet = true;
}

bool EncryptResults::EncryptOpTypeDescHasBeenSet() const
{
    return m_encryptOpTypeDescHasBeenSet;
}

string EncryptResults::GetResourceId() const
{
    return m_resourceId;
}

void EncryptResults::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool EncryptResults::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string EncryptResults::GetOrderId() const
{
    return m_orderId;
}

void EncryptResults::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool EncryptResults::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

AndroidResult EncryptResults::GetAndroidResult() const
{
    return m_androidResult;
}

void EncryptResults::SetAndroidResult(const AndroidResult& _androidResult)
{
    m_androidResult = _androidResult;
    m_androidResultHasBeenSet = true;
}

bool EncryptResults::AndroidResultHasBeenSet() const
{
    return m_androidResultHasBeenSet;
}

IOSResult EncryptResults::GetIOSResult() const
{
    return m_iOSResult;
}

void EncryptResults::SetIOSResult(const IOSResult& _iOSResult)
{
    m_iOSResult = _iOSResult;
    m_iOSResultHasBeenSet = true;
}

bool EncryptResults::IOSResultHasBeenSet() const
{
    return m_iOSResultHasBeenSet;
}

SDKResult EncryptResults::GetSDKResult() const
{
    return m_sDKResult;
}

void EncryptResults::SetSDKResult(const SDKResult& _sDKResult)
{
    m_sDKResult = _sDKResult;
    m_sDKResultHasBeenSet = true;
}

bool EncryptResults::SDKResultHasBeenSet() const
{
    return m_sDKResultHasBeenSet;
}

AppletResult EncryptResults::GetAppletResult() const
{
    return m_appletResult;
}

void EncryptResults::SetAppletResult(const AppletResult& _appletResult)
{
    m_appletResult = _appletResult;
    m_appletResultHasBeenSet = true;
}

bool EncryptResults::AppletResultHasBeenSet() const
{
    return m_appletResultHasBeenSet;
}

