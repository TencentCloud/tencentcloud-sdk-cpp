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

#include <tencentcloud/tcss/v20201101/model/NamespaceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

NamespaceInfo::NamespaceInfo() :
    m_namespaceHasBeenSet(false),
    m_registryCntHasBeenSet(false),
    m_imageCntHasBeenSet(false),
    m_riskImageCntHasBeenSet(false)
{
}

CoreInternalOutcome NamespaceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("RegistryCnt") && !value["RegistryCnt"].IsNull())
    {
        if (!value["RegistryCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.RegistryCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_registryCnt = value["RegistryCnt"].GetInt64();
        m_registryCntHasBeenSet = true;
    }

    if (value.HasMember("ImageCnt") && !value["ImageCnt"].IsNull())
    {
        if (!value["ImageCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.ImageCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageCnt = value["ImageCnt"].GetInt64();
        m_imageCntHasBeenSet = true;
    }

    if (value.HasMember("RiskImageCnt") && !value["RiskImageCnt"].IsNull())
    {
        if (!value["RiskImageCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.RiskImageCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskImageCnt = value["RiskImageCnt"].GetInt64();
        m_riskImageCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NamespaceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_registryCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registryCnt, allocator);
    }

    if (m_imageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageCnt, allocator);
    }

    if (m_riskImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskImageCnt, allocator);
    }

}


string NamespaceInfo::GetNamespace() const
{
    return m_namespace;
}

void NamespaceInfo::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool NamespaceInfo::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

int64_t NamespaceInfo::GetRegistryCnt() const
{
    return m_registryCnt;
}

void NamespaceInfo::SetRegistryCnt(const int64_t& _registryCnt)
{
    m_registryCnt = _registryCnt;
    m_registryCntHasBeenSet = true;
}

bool NamespaceInfo::RegistryCntHasBeenSet() const
{
    return m_registryCntHasBeenSet;
}

int64_t NamespaceInfo::GetImageCnt() const
{
    return m_imageCnt;
}

void NamespaceInfo::SetImageCnt(const int64_t& _imageCnt)
{
    m_imageCnt = _imageCnt;
    m_imageCntHasBeenSet = true;
}

bool NamespaceInfo::ImageCntHasBeenSet() const
{
    return m_imageCntHasBeenSet;
}

int64_t NamespaceInfo::GetRiskImageCnt() const
{
    return m_riskImageCnt;
}

void NamespaceInfo::SetRiskImageCnt(const int64_t& _riskImageCnt)
{
    m_riskImageCnt = _riskImageCnt;
    m_riskImageCntHasBeenSet = true;
}

bool NamespaceInfo::RiskImageCntHasBeenSet() const
{
    return m_riskImageCntHasBeenSet;
}

