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

#include <tencentcloud/cpdp/v20190820/model/QueryAcctInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryAcctInfoResponse::QueryAcctInfoResponse() :
    m_subAppIdHasBeenSet(false),
    m_subMchNameHasBeenSet(false),
    m_subMchTypeHasBeenSet(false),
    m_shortNameHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_contactHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_subMchIdHasBeenSet(false),
    m_subAcctNoHasBeenSet(false),
    m_subMerchantMemberTypeHasBeenSet(false)
{
}

CoreInternalOutcome QueryAcctInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SubAppId") && !rsp["SubAppId"].IsNull())
    {
        if (!rsp["SubAppId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAppId = string(rsp["SubAppId"].GetString());
        m_subAppIdHasBeenSet = true;
    }

    if (rsp.HasMember("SubMchName") && !rsp["SubMchName"].IsNull())
    {
        if (!rsp["SubMchName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubMchName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subMchName = string(rsp["SubMchName"].GetString());
        m_subMchNameHasBeenSet = true;
    }

    if (rsp.HasMember("SubMchType") && !rsp["SubMchType"].IsNull())
    {
        if (!rsp["SubMchType"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubMchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subMchType = string(rsp["SubMchType"].GetString());
        m_subMchTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ShortName") && !rsp["ShortName"].IsNull())
    {
        if (!rsp["ShortName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ShortName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shortName = string(rsp["ShortName"].GetString());
        m_shortNameHasBeenSet = true;
    }

    if (rsp.HasMember("Address") && !rsp["Address"].IsNull())
    {
        if (!rsp["Address"].IsString())
        {
            return CoreInternalOutcome(Error("response `Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(rsp["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (rsp.HasMember("Contact") && !rsp["Contact"].IsNull())
    {
        if (!rsp["Contact"].IsString())
        {
            return CoreInternalOutcome(Error("response `Contact` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contact = string(rsp["Contact"].GetString());
        m_contactHasBeenSet = true;
    }

    if (rsp.HasMember("Mobile") && !rsp["Mobile"].IsNull())
    {
        if (!rsp["Mobile"].IsString())
        {
            return CoreInternalOutcome(Error("response `Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(rsp["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (rsp.HasMember("Email") && !rsp["Email"].IsNull())
    {
        if (!rsp["Email"].IsString())
        {
            return CoreInternalOutcome(Error("response `Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(rsp["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (rsp.HasMember("SubMchId") && !rsp["SubMchId"].IsNull())
    {
        if (!rsp["SubMchId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubMchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subMchId = string(rsp["SubMchId"].GetString());
        m_subMchIdHasBeenSet = true;
    }

    if (rsp.HasMember("SubAcctNo") && !rsp["SubAcctNo"].IsNull())
    {
        if (!rsp["SubAcctNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubAcctNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAcctNo = string(rsp["SubAcctNo"].GetString());
        m_subAcctNoHasBeenSet = true;
    }

    if (rsp.HasMember("SubMerchantMemberType") && !rsp["SubMerchantMemberType"].IsNull())
    {
        if (!rsp["SubMerchantMemberType"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubMerchantMemberType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subMerchantMemberType = string(rsp["SubMerchantMemberType"].GetString());
        m_subMerchantMemberTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string QueryAcctInfoResponse::GetSubAppId() const
{
    return m_subAppId;
}

bool QueryAcctInfoResponse::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string QueryAcctInfoResponse::GetSubMchName() const
{
    return m_subMchName;
}

bool QueryAcctInfoResponse::SubMchNameHasBeenSet() const
{
    return m_subMchNameHasBeenSet;
}

string QueryAcctInfoResponse::GetSubMchType() const
{
    return m_subMchType;
}

bool QueryAcctInfoResponse::SubMchTypeHasBeenSet() const
{
    return m_subMchTypeHasBeenSet;
}

string QueryAcctInfoResponse::GetShortName() const
{
    return m_shortName;
}

bool QueryAcctInfoResponse::ShortNameHasBeenSet() const
{
    return m_shortNameHasBeenSet;
}

string QueryAcctInfoResponse::GetAddress() const
{
    return m_address;
}

bool QueryAcctInfoResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string QueryAcctInfoResponse::GetContact() const
{
    return m_contact;
}

bool QueryAcctInfoResponse::ContactHasBeenSet() const
{
    return m_contactHasBeenSet;
}

string QueryAcctInfoResponse::GetMobile() const
{
    return m_mobile;
}

bool QueryAcctInfoResponse::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string QueryAcctInfoResponse::GetEmail() const
{
    return m_email;
}

bool QueryAcctInfoResponse::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string QueryAcctInfoResponse::GetSubMchId() const
{
    return m_subMchId;
}

bool QueryAcctInfoResponse::SubMchIdHasBeenSet() const
{
    return m_subMchIdHasBeenSet;
}

string QueryAcctInfoResponse::GetSubAcctNo() const
{
    return m_subAcctNo;
}

bool QueryAcctInfoResponse::SubAcctNoHasBeenSet() const
{
    return m_subAcctNoHasBeenSet;
}

string QueryAcctInfoResponse::GetSubMerchantMemberType() const
{
    return m_subMerchantMemberType;
}

bool QueryAcctInfoResponse::SubMerchantMemberTypeHasBeenSet() const
{
    return m_subMerchantMemberTypeHasBeenSet;
}


