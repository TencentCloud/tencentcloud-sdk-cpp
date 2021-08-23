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

#include <tencentcloud/ds/v20180523/model/SignInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ds::V20180523::Model;
using namespace std;

SignInfo::SignInfo() :
    m_accountResIdHasBeenSet(false),
    m_authorizationTimeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_sealIdHasBeenSet(false),
    m_imageDataHasBeenSet(false),
    m_certTypeHasBeenSet(false),
    m_signLocationHasBeenSet(false)
{
}

CoreInternalOutcome SignInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountResId") && !value["AccountResId"].IsNull())
    {
        if (!value["AccountResId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignInfo.AccountResId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountResId = string(value["AccountResId"].GetString());
        m_accountResIdHasBeenSet = true;
    }

    if (value.HasMember("AuthorizationTime") && !value["AuthorizationTime"].IsNull())
    {
        if (!value["AuthorizationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignInfo.AuthorizationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationTime = string(value["AuthorizationTime"].GetString());
        m_authorizationTimeHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignInfo.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("SealId") && !value["SealId"].IsNull())
    {
        if (!value["SealId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignInfo.SealId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sealId = string(value["SealId"].GetString());
        m_sealIdHasBeenSet = true;
    }

    if (value.HasMember("ImageData") && !value["ImageData"].IsNull())
    {
        if (!value["ImageData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignInfo.ImageData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageData = string(value["ImageData"].GetString());
        m_imageDataHasBeenSet = true;
    }

    if (value.HasMember("CertType") && !value["CertType"].IsNull())
    {
        if (!value["CertType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SignInfo.CertType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_certType = value["CertType"].GetInt64();
        m_certTypeHasBeenSet = true;
    }

    if (value.HasMember("SignLocation") && !value["SignLocation"].IsNull())
    {
        if (!value["SignLocation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignInfo.SignLocation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signLocation = string(value["SignLocation"].GetString());
        m_signLocationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SignInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountResIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountResId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountResId.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_sealIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sealId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageData.c_str(), allocator).Move(), allocator);
    }

    if (m_certTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certType, allocator);
    }

    if (m_signLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signLocation.c_str(), allocator).Move(), allocator);
    }

}


string SignInfo::GetAccountResId() const
{
    return m_accountResId;
}

void SignInfo::SetAccountResId(const string& _accountResId)
{
    m_accountResId = _accountResId;
    m_accountResIdHasBeenSet = true;
}

bool SignInfo::AccountResIdHasBeenSet() const
{
    return m_accountResIdHasBeenSet;
}

string SignInfo::GetAuthorizationTime() const
{
    return m_authorizationTime;
}

void SignInfo::SetAuthorizationTime(const string& _authorizationTime)
{
    m_authorizationTime = _authorizationTime;
    m_authorizationTimeHasBeenSet = true;
}

bool SignInfo::AuthorizationTimeHasBeenSet() const
{
    return m_authorizationTimeHasBeenSet;
}

string SignInfo::GetLocation() const
{
    return m_location;
}

void SignInfo::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool SignInfo::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string SignInfo::GetSealId() const
{
    return m_sealId;
}

void SignInfo::SetSealId(const string& _sealId)
{
    m_sealId = _sealId;
    m_sealIdHasBeenSet = true;
}

bool SignInfo::SealIdHasBeenSet() const
{
    return m_sealIdHasBeenSet;
}

string SignInfo::GetImageData() const
{
    return m_imageData;
}

void SignInfo::SetImageData(const string& _imageData)
{
    m_imageData = _imageData;
    m_imageDataHasBeenSet = true;
}

bool SignInfo::ImageDataHasBeenSet() const
{
    return m_imageDataHasBeenSet;
}

int64_t SignInfo::GetCertType() const
{
    return m_certType;
}

void SignInfo::SetCertType(const int64_t& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool SignInfo::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

string SignInfo::GetSignLocation() const
{
    return m_signLocation;
}

void SignInfo::SetSignLocation(const string& _signLocation)
{
    m_signLocation = _signLocation;
    m_signLocationHasBeenSet = true;
}

bool SignInfo::SignLocationHasBeenSet() const
{
    return m_signLocationHasBeenSet;
}

