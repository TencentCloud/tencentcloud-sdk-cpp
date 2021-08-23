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

#include <tencentcloud/iotvideo/v20191126/model/DeviceCertificate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

DeviceCertificate::DeviceCertificate() :
    m_tidHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_whiteBoxSoUrlHasBeenSet(false)
{
}

CoreInternalOutcome DeviceCertificate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Tid") && !value["Tid"].IsNull())
    {
        if (!value["Tid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificate.Tid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tid = string(value["Tid"].GetString());
        m_tidHasBeenSet = true;
    }

    if (value.HasMember("Certificate") && !value["Certificate"].IsNull())
    {
        if (!value["Certificate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificate.Certificate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificate = string(value["Certificate"].GetString());
        m_certificateHasBeenSet = true;
    }

    if (value.HasMember("WhiteBoxSoUrl") && !value["WhiteBoxSoUrl"].IsNull())
    {
        if (!value["WhiteBoxSoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificate.WhiteBoxSoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_whiteBoxSoUrl = string(value["WhiteBoxSoUrl"].GetString());
        m_whiteBoxSoUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceCertificate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tid.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Certificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificate.c_str(), allocator).Move(), allocator);
    }

    if (m_whiteBoxSoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteBoxSoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_whiteBoxSoUrl.c_str(), allocator).Move(), allocator);
    }

}


string DeviceCertificate::GetTid() const
{
    return m_tid;
}

void DeviceCertificate::SetTid(const string& _tid)
{
    m_tid = _tid;
    m_tidHasBeenSet = true;
}

bool DeviceCertificate::TidHasBeenSet() const
{
    return m_tidHasBeenSet;
}

string DeviceCertificate::GetCertificate() const
{
    return m_certificate;
}

void DeviceCertificate::SetCertificate(const string& _certificate)
{
    m_certificate = _certificate;
    m_certificateHasBeenSet = true;
}

bool DeviceCertificate::CertificateHasBeenSet() const
{
    return m_certificateHasBeenSet;
}

string DeviceCertificate::GetWhiteBoxSoUrl() const
{
    return m_whiteBoxSoUrl;
}

void DeviceCertificate::SetWhiteBoxSoUrl(const string& _whiteBoxSoUrl)
{
    m_whiteBoxSoUrl = _whiteBoxSoUrl;
    m_whiteBoxSoUrlHasBeenSet = true;
}

bool DeviceCertificate::WhiteBoxSoUrlHasBeenSet() const
{
    return m_whiteBoxSoUrlHasBeenSet;
}

