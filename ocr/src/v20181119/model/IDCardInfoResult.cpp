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

#include <tencentcloud/ocr/v20181119/model/IDCardInfoResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

IDCardInfoResult::IDCardInfoResult() :
    m_warnCodesHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_authorityHasBeenSet(false),
    m_birthHasBeenSet(false),
    m_idNumHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_nationHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_validDateHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_portraitUrlHasBeenSet(false),
    m_intErrorCodeHasBeenSet(false)
{
}

CoreInternalOutcome IDCardInfoResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WarnCodes") && !value["WarnCodes"].IsNull())
    {
        if (!value["WarnCodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IDCardInfoResult.WarnCodes` is not array type"));

        const rapidjson::Value &tmpValue = value["WarnCodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_warnCodes.push_back((*itr).GetInt64());
        }
        m_warnCodesHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardInfoResult.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Authority") && !value["Authority"].IsNull())
    {
        if (!value["Authority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardInfoResult.Authority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authority = string(value["Authority"].GetString());
        m_authorityHasBeenSet = true;
    }

    if (value.HasMember("Birth") && !value["Birth"].IsNull())
    {
        if (!value["Birth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardInfoResult.Birth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birth = string(value["Birth"].GetString());
        m_birthHasBeenSet = true;
    }

    if (value.HasMember("IdNum") && !value["IdNum"].IsNull())
    {
        if (!value["IdNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardInfoResult.IdNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idNum = string(value["IdNum"].GetString());
        m_idNumHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardInfoResult.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Nation") && !value["Nation"].IsNull())
    {
        if (!value["Nation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardInfoResult.Nation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nation = string(value["Nation"].GetString());
        m_nationHasBeenSet = true;
    }

    if (value.HasMember("Sex") && !value["Sex"].IsNull())
    {
        if (!value["Sex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardInfoResult.Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(value["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (value.HasMember("ValidDate") && !value["ValidDate"].IsNull())
    {
        if (!value["ValidDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardInfoResult.ValidDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validDate = string(value["ValidDate"].GetString());
        m_validDateHasBeenSet = true;
    }

    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardInfoResult.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }

    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardInfoResult.ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(value["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardInfoResult.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("ImageUrl") && !value["ImageUrl"].IsNull())
    {
        if (!value["ImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardInfoResult.ImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrl = string(value["ImageUrl"].GetString());
        m_imageUrlHasBeenSet = true;
    }

    if (value.HasMember("PortraitUrl") && !value["PortraitUrl"].IsNull())
    {
        if (!value["PortraitUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardInfoResult.PortraitUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portraitUrl = string(value["PortraitUrl"].GetString());
        m_portraitUrlHasBeenSet = true;
    }

    if (value.HasMember("IntErrorCode") && !value["IntErrorCode"].IsNull())
    {
        if (!value["IntErrorCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardInfoResult.IntErrorCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intErrorCode = value["IntErrorCode"].GetInt64();
        m_intErrorCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IDCardInfoResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_warnCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarnCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_warnCodes.begin(); itr != m_warnCodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_authorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authority.c_str(), allocator).Move(), allocator);
    }

    if (m_birthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birth.c_str(), allocator).Move(), allocator);
    }

    if (m_idNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idNum.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_nationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nation.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_validDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validDate.c_str(), allocator).Move(), allocator);
    }

    if (m_requestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestId.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_portraitUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortraitUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_portraitUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_intErrorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intErrorCode, allocator);
    }

}


vector<int64_t> IDCardInfoResult::GetWarnCodes() const
{
    return m_warnCodes;
}

void IDCardInfoResult::SetWarnCodes(const vector<int64_t>& _warnCodes)
{
    m_warnCodes = _warnCodes;
    m_warnCodesHasBeenSet = true;
}

bool IDCardInfoResult::WarnCodesHasBeenSet() const
{
    return m_warnCodesHasBeenSet;
}

string IDCardInfoResult::GetAddress() const
{
    return m_address;
}

void IDCardInfoResult::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool IDCardInfoResult::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string IDCardInfoResult::GetAuthority() const
{
    return m_authority;
}

void IDCardInfoResult::SetAuthority(const string& _authority)
{
    m_authority = _authority;
    m_authorityHasBeenSet = true;
}

bool IDCardInfoResult::AuthorityHasBeenSet() const
{
    return m_authorityHasBeenSet;
}

string IDCardInfoResult::GetBirth() const
{
    return m_birth;
}

void IDCardInfoResult::SetBirth(const string& _birth)
{
    m_birth = _birth;
    m_birthHasBeenSet = true;
}

bool IDCardInfoResult::BirthHasBeenSet() const
{
    return m_birthHasBeenSet;
}

string IDCardInfoResult::GetIdNum() const
{
    return m_idNum;
}

void IDCardInfoResult::SetIdNum(const string& _idNum)
{
    m_idNum = _idNum;
    m_idNumHasBeenSet = true;
}

bool IDCardInfoResult::IdNumHasBeenSet() const
{
    return m_idNumHasBeenSet;
}

string IDCardInfoResult::GetName() const
{
    return m_name;
}

void IDCardInfoResult::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool IDCardInfoResult::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string IDCardInfoResult::GetNation() const
{
    return m_nation;
}

void IDCardInfoResult::SetNation(const string& _nation)
{
    m_nation = _nation;
    m_nationHasBeenSet = true;
}

bool IDCardInfoResult::NationHasBeenSet() const
{
    return m_nationHasBeenSet;
}

string IDCardInfoResult::GetSex() const
{
    return m_sex;
}

void IDCardInfoResult::SetSex(const string& _sex)
{
    m_sex = _sex;
    m_sexHasBeenSet = true;
}

bool IDCardInfoResult::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string IDCardInfoResult::GetValidDate() const
{
    return m_validDate;
}

void IDCardInfoResult::SetValidDate(const string& _validDate)
{
    m_validDate = _validDate;
    m_validDateHasBeenSet = true;
}

bool IDCardInfoResult::ValidDateHasBeenSet() const
{
    return m_validDateHasBeenSet;
}

string IDCardInfoResult::GetRequestId() const
{
    return m_requestId;
}

void IDCardInfoResult::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool IDCardInfoResult::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

string IDCardInfoResult::GetErrorCode() const
{
    return m_errorCode;
}

void IDCardInfoResult::SetErrorCode(const string& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool IDCardInfoResult::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string IDCardInfoResult::GetErrorMessage() const
{
    return m_errorMessage;
}

void IDCardInfoResult::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool IDCardInfoResult::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string IDCardInfoResult::GetImageUrl() const
{
    return m_imageUrl;
}

void IDCardInfoResult::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool IDCardInfoResult::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string IDCardInfoResult::GetPortraitUrl() const
{
    return m_portraitUrl;
}

void IDCardInfoResult::SetPortraitUrl(const string& _portraitUrl)
{
    m_portraitUrl = _portraitUrl;
    m_portraitUrlHasBeenSet = true;
}

bool IDCardInfoResult::PortraitUrlHasBeenSet() const
{
    return m_portraitUrlHasBeenSet;
}

int64_t IDCardInfoResult::GetIntErrorCode() const
{
    return m_intErrorCode;
}

void IDCardInfoResult::SetIntErrorCode(const int64_t& _intErrorCode)
{
    m_intErrorCode = _intErrorCode;
    m_intErrorCodeHasBeenSet = true;
}

bool IDCardInfoResult::IntErrorCodeHasBeenSet() const
{
    return m_intErrorCodeHasBeenSet;
}

