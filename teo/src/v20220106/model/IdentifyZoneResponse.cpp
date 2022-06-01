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

#include <tencentcloud/teo/v20220106/model/IdentifyZoneResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

IdentifyZoneResponse::IdentifyZoneResponse() :
    m_nameHasBeenSet(false),
    m_subdomainHasBeenSet(false),
    m_recordTypeHasBeenSet(false),
    m_recordValueHasBeenSet(false)
{
}

CoreInternalOutcome IdentifyZoneResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("Subdomain") && !rsp["Subdomain"].IsNull())
    {
        if (!rsp["Subdomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subdomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subdomain = string(rsp["Subdomain"].GetString());
        m_subdomainHasBeenSet = true;
    }

    if (rsp.HasMember("RecordType") && !rsp["RecordType"].IsNull())
    {
        if (!rsp["RecordType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordType = string(rsp["RecordType"].GetString());
        m_recordTypeHasBeenSet = true;
    }

    if (rsp.HasMember("RecordValue") && !rsp["RecordValue"].IsNull())
    {
        if (!rsp["RecordValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordValue = string(rsp["RecordValue"].GetString());
        m_recordValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string IdentifyZoneResponse::ToJsonString() const
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

    if (m_subdomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subdomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subdomain.c_str(), allocator).Move(), allocator);
    }

    if (m_recordTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordType.c_str(), allocator).Move(), allocator);
    }

    if (m_recordValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordValue.c_str(), allocator).Move(), allocator);
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


string IdentifyZoneResponse::GetName() const
{
    return m_name;
}

bool IdentifyZoneResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string IdentifyZoneResponse::GetSubdomain() const
{
    return m_subdomain;
}

bool IdentifyZoneResponse::SubdomainHasBeenSet() const
{
    return m_subdomainHasBeenSet;
}

string IdentifyZoneResponse::GetRecordType() const
{
    return m_recordType;
}

bool IdentifyZoneResponse::RecordTypeHasBeenSet() const
{
    return m_recordTypeHasBeenSet;
}

string IdentifyZoneResponse::GetRecordValue() const
{
    return m_recordValue;
}

bool IdentifyZoneResponse::RecordValueHasBeenSet() const
{
    return m_recordValueHasBeenSet;
}


