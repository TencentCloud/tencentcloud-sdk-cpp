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

#include <tencentcloud/ssl/v20191205/model/SupportDownloadType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

SupportDownloadType::SupportDownloadType() :
    m_nGINXHasBeenSet(false),
    m_aPACHEHasBeenSet(false),
    m_tOMCATHasBeenSet(false),
    m_iISHasBeenSet(false),
    m_jKSHasBeenSet(false),
    m_oTHERHasBeenSet(false),
    m_rOOTHasBeenSet(false)
{
}

CoreInternalOutcome SupportDownloadType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NGINX") && !value["NGINX"].IsNull())
    {
        if (!value["NGINX"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SupportDownloadType.NGINX` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_nGINX = value["NGINX"].GetBool();
        m_nGINXHasBeenSet = true;
    }

    if (value.HasMember("APACHE") && !value["APACHE"].IsNull())
    {
        if (!value["APACHE"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SupportDownloadType.APACHE` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_aPACHE = value["APACHE"].GetBool();
        m_aPACHEHasBeenSet = true;
    }

    if (value.HasMember("TOMCAT") && !value["TOMCAT"].IsNull())
    {
        if (!value["TOMCAT"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SupportDownloadType.TOMCAT` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_tOMCAT = value["TOMCAT"].GetBool();
        m_tOMCATHasBeenSet = true;
    }

    if (value.HasMember("IIS") && !value["IIS"].IsNull())
    {
        if (!value["IIS"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SupportDownloadType.IIS` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_iIS = value["IIS"].GetBool();
        m_iISHasBeenSet = true;
    }

    if (value.HasMember("JKS") && !value["JKS"].IsNull())
    {
        if (!value["JKS"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SupportDownloadType.JKS` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_jKS = value["JKS"].GetBool();
        m_jKSHasBeenSet = true;
    }

    if (value.HasMember("OTHER") && !value["OTHER"].IsNull())
    {
        if (!value["OTHER"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SupportDownloadType.OTHER` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_oTHER = value["OTHER"].GetBool();
        m_oTHERHasBeenSet = true;
    }

    if (value.HasMember("ROOT") && !value["ROOT"].IsNull())
    {
        if (!value["ROOT"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SupportDownloadType.ROOT` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_rOOT = value["ROOT"].GetBool();
        m_rOOTHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SupportDownloadType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nGINXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NGINX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nGINX, allocator);
    }

    if (m_aPACHEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APACHE";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aPACHE, allocator);
    }

    if (m_tOMCATHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TOMCAT";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tOMCAT, allocator);
    }

    if (m_iISHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IIS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iIS, allocator);
    }

    if (m_jKSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JKS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jKS, allocator);
    }

    if (m_oTHERHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OTHER";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oTHER, allocator);
    }

    if (m_rOOTHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ROOT";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rOOT, allocator);
    }

}


bool SupportDownloadType::GetNGINX() const
{
    return m_nGINX;
}

void SupportDownloadType::SetNGINX(const bool& _nGINX)
{
    m_nGINX = _nGINX;
    m_nGINXHasBeenSet = true;
}

bool SupportDownloadType::NGINXHasBeenSet() const
{
    return m_nGINXHasBeenSet;
}

bool SupportDownloadType::GetAPACHE() const
{
    return m_aPACHE;
}

void SupportDownloadType::SetAPACHE(const bool& _aPACHE)
{
    m_aPACHE = _aPACHE;
    m_aPACHEHasBeenSet = true;
}

bool SupportDownloadType::APACHEHasBeenSet() const
{
    return m_aPACHEHasBeenSet;
}

bool SupportDownloadType::GetTOMCAT() const
{
    return m_tOMCAT;
}

void SupportDownloadType::SetTOMCAT(const bool& _tOMCAT)
{
    m_tOMCAT = _tOMCAT;
    m_tOMCATHasBeenSet = true;
}

bool SupportDownloadType::TOMCATHasBeenSet() const
{
    return m_tOMCATHasBeenSet;
}

bool SupportDownloadType::GetIIS() const
{
    return m_iIS;
}

void SupportDownloadType::SetIIS(const bool& _iIS)
{
    m_iIS = _iIS;
    m_iISHasBeenSet = true;
}

bool SupportDownloadType::IISHasBeenSet() const
{
    return m_iISHasBeenSet;
}

bool SupportDownloadType::GetJKS() const
{
    return m_jKS;
}

void SupportDownloadType::SetJKS(const bool& _jKS)
{
    m_jKS = _jKS;
    m_jKSHasBeenSet = true;
}

bool SupportDownloadType::JKSHasBeenSet() const
{
    return m_jKSHasBeenSet;
}

bool SupportDownloadType::GetOTHER() const
{
    return m_oTHER;
}

void SupportDownloadType::SetOTHER(const bool& _oTHER)
{
    m_oTHER = _oTHER;
    m_oTHERHasBeenSet = true;
}

bool SupportDownloadType::OTHERHasBeenSet() const
{
    return m_oTHERHasBeenSet;
}

bool SupportDownloadType::GetROOT() const
{
    return m_rOOT;
}

void SupportDownloadType::SetROOT(const bool& _rOOT)
{
    m_rOOT = _rOOT;
    m_rOOTHasBeenSet = true;
}

bool SupportDownloadType::ROOTHasBeenSet() const
{
    return m_rOOTHasBeenSet;
}

