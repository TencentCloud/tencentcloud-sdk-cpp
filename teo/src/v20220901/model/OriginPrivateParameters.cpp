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

#include <tencentcloud/teo/v20220901/model/OriginPrivateParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

OriginPrivateParameters::OriginPrivateParameters() :
    m_accessKeyIdHasBeenSet(false),
    m_secretAccessKeyHasBeenSet(false),
    m_signatureVersionHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

CoreInternalOutcome OriginPrivateParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessKeyId") && !value["AccessKeyId"].IsNull())
    {
        if (!value["AccessKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginPrivateParameters.AccessKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKeyId = string(value["AccessKeyId"].GetString());
        m_accessKeyIdHasBeenSet = true;
    }

    if (value.HasMember("SecretAccessKey") && !value["SecretAccessKey"].IsNull())
    {
        if (!value["SecretAccessKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginPrivateParameters.SecretAccessKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretAccessKey = string(value["SecretAccessKey"].GetString());
        m_secretAccessKeyHasBeenSet = true;
    }

    if (value.HasMember("SignatureVersion") && !value["SignatureVersion"].IsNull())
    {
        if (!value["SignatureVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginPrivateParameters.SignatureVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signatureVersion = string(value["SignatureVersion"].GetString());
        m_signatureVersionHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginPrivateParameters.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OriginPrivateParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_secretAccessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretAccessKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretAccessKey.c_str(), allocator).Move(), allocator);
    }

    if (m_signatureVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignatureVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signatureVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

}


string OriginPrivateParameters::GetAccessKeyId() const
{
    return m_accessKeyId;
}

void OriginPrivateParameters::SetAccessKeyId(const string& _accessKeyId)
{
    m_accessKeyId = _accessKeyId;
    m_accessKeyIdHasBeenSet = true;
}

bool OriginPrivateParameters::AccessKeyIdHasBeenSet() const
{
    return m_accessKeyIdHasBeenSet;
}

string OriginPrivateParameters::GetSecretAccessKey() const
{
    return m_secretAccessKey;
}

void OriginPrivateParameters::SetSecretAccessKey(const string& _secretAccessKey)
{
    m_secretAccessKey = _secretAccessKey;
    m_secretAccessKeyHasBeenSet = true;
}

bool OriginPrivateParameters::SecretAccessKeyHasBeenSet() const
{
    return m_secretAccessKeyHasBeenSet;
}

string OriginPrivateParameters::GetSignatureVersion() const
{
    return m_signatureVersion;
}

void OriginPrivateParameters::SetSignatureVersion(const string& _signatureVersion)
{
    m_signatureVersion = _signatureVersion;
    m_signatureVersionHasBeenSet = true;
}

bool OriginPrivateParameters::SignatureVersionHasBeenSet() const
{
    return m_signatureVersionHasBeenSet;
}

string OriginPrivateParameters::GetRegion() const
{
    return m_region;
}

void OriginPrivateParameters::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool OriginPrivateParameters::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

