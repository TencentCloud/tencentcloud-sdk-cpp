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

#include <tencentcloud/vpc/v20170312/model/AlgType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

AlgType::AlgType() :
    m_ftpHasBeenSet(false),
    m_sipHasBeenSet(false)
{
}

CoreInternalOutcome AlgType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ftp") && !value["Ftp"].IsNull())
    {
        if (!value["Ftp"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AlgType.Ftp` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ftp = value["Ftp"].GetBool();
        m_ftpHasBeenSet = true;
    }

    if (value.HasMember("Sip") && !value["Sip"].IsNull())
    {
        if (!value["Sip"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AlgType.Sip` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sip = value["Sip"].GetBool();
        m_sipHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlgType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ftpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ftp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ftp, allocator);
    }

    if (m_sipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sip, allocator);
    }

}


bool AlgType::GetFtp() const
{
    return m_ftp;
}

void AlgType::SetFtp(const bool& _ftp)
{
    m_ftp = _ftp;
    m_ftpHasBeenSet = true;
}

bool AlgType::FtpHasBeenSet() const
{
    return m_ftpHasBeenSet;
}

bool AlgType::GetSip() const
{
    return m_sip;
}

void AlgType::SetSip(const bool& _sip)
{
    m_sip = _sip;
    m_sipHasBeenSet = true;
}

bool AlgType::SipHasBeenSet() const
{
    return m_sipHasBeenSet;
}

