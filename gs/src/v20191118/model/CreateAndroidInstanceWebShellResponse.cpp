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

#include <tencentcloud/gs/v20191118/model/CreateAndroidInstanceWebShellResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

CreateAndroidInstanceWebShellResponse::CreateAndroidInstanceWebShellResponse() :
    m_keyHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_connectUrlHasBeenSet(false)
{
}

CoreInternalOutcome CreateAndroidInstanceWebShellResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Key") && !rsp["Key"].IsNull())
    {
        if (!rsp["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(rsp["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (rsp.HasMember("Address") && !rsp["Address"].IsNull())
    {
        if (!rsp["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(rsp["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (rsp.HasMember("Zone") && !rsp["Zone"].IsNull())
    {
        if (!rsp["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(rsp["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (rsp.HasMember("ConnectUrl") && !rsp["ConnectUrl"].IsNull())
    {
        if (!rsp["ConnectUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectUrl = string(rsp["ConnectUrl"].GetString());
        m_connectUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateAndroidInstanceWebShellResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_connectUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectUrl.c_str(), allocator).Move(), allocator);
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


string CreateAndroidInstanceWebShellResponse::GetKey() const
{
    return m_key;
}

bool CreateAndroidInstanceWebShellResponse::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string CreateAndroidInstanceWebShellResponse::GetAddress() const
{
    return m_address;
}

bool CreateAndroidInstanceWebShellResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string CreateAndroidInstanceWebShellResponse::GetZone() const
{
    return m_zone;
}

bool CreateAndroidInstanceWebShellResponse::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CreateAndroidInstanceWebShellResponse::GetConnectUrl() const
{
    return m_connectUrl;
}

bool CreateAndroidInstanceWebShellResponse::ConnectUrlHasBeenSet() const
{
    return m_connectUrlHasBeenSet;
}


