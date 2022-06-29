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

#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryRegistryDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeAssetImageRegistryRegistryDetailResponse::DescribeAssetImageRegistryRegistryDetailResponse() :
    m_nameHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_registryTypeHasBeenSet(false),
    m_registryVersionHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_registryRegionHasBeenSet(false),
    m_speedLimitHasBeenSet(false),
    m_insecureHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAssetImageRegistryRegistryDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Username") && !rsp["Username"].IsNull())
    {
        if (!rsp["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(rsp["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (rsp.HasMember("Password") && !rsp["Password"].IsNull())
    {
        if (!rsp["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(rsp["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (rsp.HasMember("Url") && !rsp["Url"].IsNull())
    {
        if (!rsp["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(rsp["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (rsp.HasMember("RegistryType") && !rsp["RegistryType"].IsNull())
    {
        if (!rsp["RegistryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegistryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryType = string(rsp["RegistryType"].GetString());
        m_registryTypeHasBeenSet = true;
    }

    if (rsp.HasMember("RegistryVersion") && !rsp["RegistryVersion"].IsNull())
    {
        if (!rsp["RegistryVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegistryVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryVersion = string(rsp["RegistryVersion"].GetString());
        m_registryVersionHasBeenSet = true;
    }

    if (rsp.HasMember("NetType") && !rsp["NetType"].IsNull())
    {
        if (!rsp["NetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netType = string(rsp["NetType"].GetString());
        m_netTypeHasBeenSet = true;
    }

    if (rsp.HasMember("RegistryRegion") && !rsp["RegistryRegion"].IsNull())
    {
        if (!rsp["RegistryRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegistryRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryRegion = string(rsp["RegistryRegion"].GetString());
        m_registryRegionHasBeenSet = true;
    }

    if (rsp.HasMember("SpeedLimit") && !rsp["SpeedLimit"].IsNull())
    {
        if (!rsp["SpeedLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_speedLimit = rsp["SpeedLimit"].GetUint64();
        m_speedLimitHasBeenSet = true;
    }

    if (rsp.HasMember("Insecure") && !rsp["Insecure"].IsNull())
    {
        if (!rsp["Insecure"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Insecure` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_insecure = rsp["Insecure"].GetUint64();
        m_insecureHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAssetImageRegistryRegistryDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_registryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryType.c_str(), allocator).Move(), allocator);
    }

    if (m_registryVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netType.c_str(), allocator).Move(), allocator);
    }

    if (m_registryRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_speedLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeedLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_speedLimit, allocator);
    }

    if (m_insecureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Insecure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_insecure, allocator);
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


string DescribeAssetImageRegistryRegistryDetailResponse::GetName() const
{
    return m_name;
}

bool DescribeAssetImageRegistryRegistryDetailResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeAssetImageRegistryRegistryDetailResponse::GetUsername() const
{
    return m_username;
}

bool DescribeAssetImageRegistryRegistryDetailResponse::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string DescribeAssetImageRegistryRegistryDetailResponse::GetPassword() const
{
    return m_password;
}

bool DescribeAssetImageRegistryRegistryDetailResponse::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string DescribeAssetImageRegistryRegistryDetailResponse::GetUrl() const
{
    return m_url;
}

bool DescribeAssetImageRegistryRegistryDetailResponse::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string DescribeAssetImageRegistryRegistryDetailResponse::GetRegistryType() const
{
    return m_registryType;
}

bool DescribeAssetImageRegistryRegistryDetailResponse::RegistryTypeHasBeenSet() const
{
    return m_registryTypeHasBeenSet;
}

string DescribeAssetImageRegistryRegistryDetailResponse::GetRegistryVersion() const
{
    return m_registryVersion;
}

bool DescribeAssetImageRegistryRegistryDetailResponse::RegistryVersionHasBeenSet() const
{
    return m_registryVersionHasBeenSet;
}

string DescribeAssetImageRegistryRegistryDetailResponse::GetNetType() const
{
    return m_netType;
}

bool DescribeAssetImageRegistryRegistryDetailResponse::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string DescribeAssetImageRegistryRegistryDetailResponse::GetRegistryRegion() const
{
    return m_registryRegion;
}

bool DescribeAssetImageRegistryRegistryDetailResponse::RegistryRegionHasBeenSet() const
{
    return m_registryRegionHasBeenSet;
}

uint64_t DescribeAssetImageRegistryRegistryDetailResponse::GetSpeedLimit() const
{
    return m_speedLimit;
}

bool DescribeAssetImageRegistryRegistryDetailResponse::SpeedLimitHasBeenSet() const
{
    return m_speedLimitHasBeenSet;
}

uint64_t DescribeAssetImageRegistryRegistryDetailResponse::GetInsecure() const
{
    return m_insecure;
}

bool DescribeAssetImageRegistryRegistryDetailResponse::InsecureHasBeenSet() const
{
    return m_insecureHasBeenSet;
}


