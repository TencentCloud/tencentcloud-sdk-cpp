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

#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberEmailBindResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

DescribeOrganizationMemberEmailBindResponse::DescribeOrganizationMemberEmailBindResponse() :
    m_bindIdHasBeenSet(false),
    m_applyTimeHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_bindStatusHasBeenSet(false),
    m_bindTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_phoneBindHasBeenSet(false),
    m_countryCodeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeOrganizationMemberEmailBindResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BindId") && !rsp["BindId"].IsNull())
    {
        if (!rsp["BindId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BindId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bindId = rsp["BindId"].GetUint64();
        m_bindIdHasBeenSet = true;
    }

    if (rsp.HasMember("ApplyTime") && !rsp["ApplyTime"].IsNull())
    {
        if (!rsp["ApplyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyTime = string(rsp["ApplyTime"].GetString());
        m_applyTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Email") && !rsp["Email"].IsNull())
    {
        if (!rsp["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(rsp["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (rsp.HasMember("Phone") && !rsp["Phone"].IsNull())
    {
        if (!rsp["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(rsp["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (rsp.HasMember("BindStatus") && !rsp["BindStatus"].IsNull())
    {
        if (!rsp["BindStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindStatus = string(rsp["BindStatus"].GetString());
        m_bindStatusHasBeenSet = true;
    }

    if (rsp.HasMember("BindTime") && !rsp["BindTime"].IsNull())
    {
        if (!rsp["BindTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindTime = string(rsp["BindTime"].GetString());
        m_bindTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("PhoneBind") && !rsp["PhoneBind"].IsNull())
    {
        if (!rsp["PhoneBind"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneBind` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_phoneBind = rsp["PhoneBind"].GetUint64();
        m_phoneBindHasBeenSet = true;
    }

    if (rsp.HasMember("CountryCode") && !rsp["CountryCode"].IsNull())
    {
        if (!rsp["CountryCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CountryCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countryCode = string(rsp["CountryCode"].GetString());
        m_countryCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeOrganizationMemberEmailBindResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_bindIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindId, allocator);
    }

    if (m_applyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_bindStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_bindTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneBindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneBind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_phoneBind, allocator);
    }

    if (m_countryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countryCode.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeOrganizationMemberEmailBindResponse::GetBindId() const
{
    return m_bindId;
}

bool DescribeOrganizationMemberEmailBindResponse::BindIdHasBeenSet() const
{
    return m_bindIdHasBeenSet;
}

string DescribeOrganizationMemberEmailBindResponse::GetApplyTime() const
{
    return m_applyTime;
}

bool DescribeOrganizationMemberEmailBindResponse::ApplyTimeHasBeenSet() const
{
    return m_applyTimeHasBeenSet;
}

string DescribeOrganizationMemberEmailBindResponse::GetEmail() const
{
    return m_email;
}

bool DescribeOrganizationMemberEmailBindResponse::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string DescribeOrganizationMemberEmailBindResponse::GetPhone() const
{
    return m_phone;
}

bool DescribeOrganizationMemberEmailBindResponse::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string DescribeOrganizationMemberEmailBindResponse::GetBindStatus() const
{
    return m_bindStatus;
}

bool DescribeOrganizationMemberEmailBindResponse::BindStatusHasBeenSet() const
{
    return m_bindStatusHasBeenSet;
}

string DescribeOrganizationMemberEmailBindResponse::GetBindTime() const
{
    return m_bindTime;
}

bool DescribeOrganizationMemberEmailBindResponse::BindTimeHasBeenSet() const
{
    return m_bindTimeHasBeenSet;
}

string DescribeOrganizationMemberEmailBindResponse::GetDescription() const
{
    return m_description;
}

bool DescribeOrganizationMemberEmailBindResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t DescribeOrganizationMemberEmailBindResponse::GetPhoneBind() const
{
    return m_phoneBind;
}

bool DescribeOrganizationMemberEmailBindResponse::PhoneBindHasBeenSet() const
{
    return m_phoneBindHasBeenSet;
}

string DescribeOrganizationMemberEmailBindResponse::GetCountryCode() const
{
    return m_countryCode;
}

bool DescribeOrganizationMemberEmailBindResponse::CountryCodeHasBeenSet() const
{
    return m_countryCodeHasBeenSet;
}


