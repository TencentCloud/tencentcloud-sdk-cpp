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

#include <tencentcloud/cpdp/v20190820/model/OpenBankApprovalGuideInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

OpenBankApprovalGuideInfo::OpenBankApprovalGuideInfo() :
    m_pcGuideUrlHasBeenSet(false),
    m_mobileGuideUrlHasBeenSet(false)
{
}

CoreInternalOutcome OpenBankApprovalGuideInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PcGuideUrl") && !value["PcGuideUrl"].IsNull())
    {
        if (!value["PcGuideUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankApprovalGuideInfo.PcGuideUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pcGuideUrl = string(value["PcGuideUrl"].GetString());
        m_pcGuideUrlHasBeenSet = true;
    }

    if (value.HasMember("MobileGuideUrl") && !value["MobileGuideUrl"].IsNull())
    {
        if (!value["MobileGuideUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankApprovalGuideInfo.MobileGuideUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobileGuideUrl = string(value["MobileGuideUrl"].GetString());
        m_mobileGuideUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpenBankApprovalGuideInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pcGuideUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PcGuideUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pcGuideUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileGuideUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MobileGuideUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobileGuideUrl.c_str(), allocator).Move(), allocator);
    }

}


string OpenBankApprovalGuideInfo::GetPcGuideUrl() const
{
    return m_pcGuideUrl;
}

void OpenBankApprovalGuideInfo::SetPcGuideUrl(const string& _pcGuideUrl)
{
    m_pcGuideUrl = _pcGuideUrl;
    m_pcGuideUrlHasBeenSet = true;
}

bool OpenBankApprovalGuideInfo::PcGuideUrlHasBeenSet() const
{
    return m_pcGuideUrlHasBeenSet;
}

string OpenBankApprovalGuideInfo::GetMobileGuideUrl() const
{
    return m_mobileGuideUrl;
}

void OpenBankApprovalGuideInfo::SetMobileGuideUrl(const string& _mobileGuideUrl)
{
    m_mobileGuideUrl = _mobileGuideUrl;
    m_mobileGuideUrlHasBeenSet = true;
}

bool OpenBankApprovalGuideInfo::MobileGuideUrlHasBeenSet() const
{
    return m_mobileGuideUrlHasBeenSet;
}

