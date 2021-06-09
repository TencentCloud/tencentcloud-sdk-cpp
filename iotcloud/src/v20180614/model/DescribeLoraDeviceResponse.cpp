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

#include <tencentcloud/iotcloud/v20180614/model/DescribeLoraDeviceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace std;

DescribeLoraDeviceResponse::DescribeLoraDeviceResponse() :
    m_deviceNameHasBeenSet(false),
    m_appEuiHasBeenSet(false),
    m_deviceEuiHasBeenSet(false),
    m_appKeyHasBeenSet(false),
    m_classTypeHasBeenSet(false),
    m_productIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLoraDeviceResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("DeviceName") && !rsp["DeviceName"].IsNull())
    {
        if (!rsp["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(rsp["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (rsp.HasMember("AppEui") && !rsp["AppEui"].IsNull())
    {
        if (!rsp["AppEui"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppEui` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appEui = string(rsp["AppEui"].GetString());
        m_appEuiHasBeenSet = true;
    }

    if (rsp.HasMember("DeviceEui") && !rsp["DeviceEui"].IsNull())
    {
        if (!rsp["DeviceEui"].IsString())
        {
            return CoreInternalOutcome(Error("response `DeviceEui` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceEui = string(rsp["DeviceEui"].GetString());
        m_deviceEuiHasBeenSet = true;
    }

    if (rsp.HasMember("AppKey") && !rsp["AppKey"].IsNull())
    {
        if (!rsp["AppKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appKey = string(rsp["AppKey"].GetString());
        m_appKeyHasBeenSet = true;
    }

    if (rsp.HasMember("ClassType") && !rsp["ClassType"].IsNull())
    {
        if (!rsp["ClassType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClassType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classType = string(rsp["ClassType"].GetString());
        m_classTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ProductId") && !rsp["ProductId"].IsNull())
    {
        if (!rsp["ProductId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(rsp["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeLoraDeviceResponse::GetDeviceName() const
{
    return m_deviceName;
}

bool DescribeLoraDeviceResponse::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string DescribeLoraDeviceResponse::GetAppEui() const
{
    return m_appEui;
}

bool DescribeLoraDeviceResponse::AppEuiHasBeenSet() const
{
    return m_appEuiHasBeenSet;
}

string DescribeLoraDeviceResponse::GetDeviceEui() const
{
    return m_deviceEui;
}

bool DescribeLoraDeviceResponse::DeviceEuiHasBeenSet() const
{
    return m_deviceEuiHasBeenSet;
}

string DescribeLoraDeviceResponse::GetAppKey() const
{
    return m_appKey;
}

bool DescribeLoraDeviceResponse::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

string DescribeLoraDeviceResponse::GetClassType() const
{
    return m_classType;
}

bool DescribeLoraDeviceResponse::ClassTypeHasBeenSet() const
{
    return m_classTypeHasBeenSet;
}

string DescribeLoraDeviceResponse::GetProductId() const
{
    return m_productId;
}

bool DescribeLoraDeviceResponse::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}


