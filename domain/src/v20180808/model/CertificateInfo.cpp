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

#include <tencentcloud/domain/v20180808/model/CertificateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

CertificateInfo::CertificateInfo() :
    m_certificateCodeHasBeenSet(false),
    m_certificateTypeHasBeenSet(false),
    m_imgUrlHasBeenSet(false)
{
}

CoreInternalOutcome CertificateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CertificateCode") && !value["CertificateCode"].IsNull())
    {
        if (!value["CertificateCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateInfo.CertificateCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateCode = string(value["CertificateCode"].GetString());
        m_certificateCodeHasBeenSet = true;
    }

    if (value.HasMember("CertificateType") && !value["CertificateType"].IsNull())
    {
        if (!value["CertificateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateInfo.CertificateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateType = string(value["CertificateType"].GetString());
        m_certificateTypeHasBeenSet = true;
    }

    if (value.HasMember("ImgUrl") && !value["ImgUrl"].IsNull())
    {
        if (!value["ImgUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateInfo.ImgUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imgUrl = string(value["ImgUrl"].GetString());
        m_imgUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CertificateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_certificateCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateCode.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateType.c_str(), allocator).Move(), allocator);
    }

    if (m_imgUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImgUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imgUrl.c_str(), allocator).Move(), allocator);
    }

}


string CertificateInfo::GetCertificateCode() const
{
    return m_certificateCode;
}

void CertificateInfo::SetCertificateCode(const string& _certificateCode)
{
    m_certificateCode = _certificateCode;
    m_certificateCodeHasBeenSet = true;
}

bool CertificateInfo::CertificateCodeHasBeenSet() const
{
    return m_certificateCodeHasBeenSet;
}

string CertificateInfo::GetCertificateType() const
{
    return m_certificateType;
}

void CertificateInfo::SetCertificateType(const string& _certificateType)
{
    m_certificateType = _certificateType;
    m_certificateTypeHasBeenSet = true;
}

bool CertificateInfo::CertificateTypeHasBeenSet() const
{
    return m_certificateTypeHasBeenSet;
}

string CertificateInfo::GetImgUrl() const
{
    return m_imgUrl;
}

void CertificateInfo::SetImgUrl(const string& _imgUrl)
{
    m_imgUrl = _imgUrl;
    m_imgUrlHasBeenSet = true;
}

bool CertificateInfo::ImgUrlHasBeenSet() const
{
    return m_imgUrlHasBeenSet;
}

