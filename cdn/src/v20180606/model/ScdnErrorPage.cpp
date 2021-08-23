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

#include <tencentcloud/cdn/v20180606/model/ScdnErrorPage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

ScdnErrorPage::ScdnErrorPage() :
    m_redirectCodeHasBeenSet(false),
    m_redirectUrlHasBeenSet(false)
{
}

CoreInternalOutcome ScdnErrorPage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RedirectCode") && !value["RedirectCode"].IsNull())
    {
        if (!value["RedirectCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnErrorPage.RedirectCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_redirectCode = value["RedirectCode"].GetInt64();
        m_redirectCodeHasBeenSet = true;
    }

    if (value.HasMember("RedirectUrl") && !value["RedirectUrl"].IsNull())
    {
        if (!value["RedirectUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnErrorPage.RedirectUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redirectUrl = string(value["RedirectUrl"].GetString());
        m_redirectUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScdnErrorPage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_redirectCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redirectCode, allocator);
    }

    if (m_redirectUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_redirectUrl.c_str(), allocator).Move(), allocator);
    }

}


int64_t ScdnErrorPage::GetRedirectCode() const
{
    return m_redirectCode;
}

void ScdnErrorPage::SetRedirectCode(const int64_t& _redirectCode)
{
    m_redirectCode = _redirectCode;
    m_redirectCodeHasBeenSet = true;
}

bool ScdnErrorPage::RedirectCodeHasBeenSet() const
{
    return m_redirectCodeHasBeenSet;
}

string ScdnErrorPage::GetRedirectUrl() const
{
    return m_redirectUrl;
}

void ScdnErrorPage::SetRedirectUrl(const string& _redirectUrl)
{
    m_redirectUrl = _redirectUrl;
    m_redirectUrlHasBeenSet = true;
}

bool ScdnErrorPage::RedirectUrlHasBeenSet() const
{
    return m_redirectUrlHasBeenSet;
}

