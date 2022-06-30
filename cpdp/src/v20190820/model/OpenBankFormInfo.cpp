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

#include <tencentcloud/cpdp/v20190820/model/OpenBankFormInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

OpenBankFormInfo::OpenBankFormInfo() :
    m_formHtmlHasBeenSet(false),
    m_formEncodingHasBeenSet(false)
{
}

CoreInternalOutcome OpenBankFormInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FormHtml") && !value["FormHtml"].IsNull())
    {
        if (!value["FormHtml"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankFormInfo.FormHtml` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formHtml = string(value["FormHtml"].GetString());
        m_formHtmlHasBeenSet = true;
    }

    if (value.HasMember("FormEncoding") && !value["FormEncoding"].IsNull())
    {
        if (!value["FormEncoding"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankFormInfo.FormEncoding` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formEncoding = string(value["FormEncoding"].GetString());
        m_formEncodingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpenBankFormInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_formHtmlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormHtml";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formHtml.c_str(), allocator).Move(), allocator);
    }

    if (m_formEncodingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormEncoding";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formEncoding.c_str(), allocator).Move(), allocator);
    }

}


string OpenBankFormInfo::GetFormHtml() const
{
    return m_formHtml;
}

void OpenBankFormInfo::SetFormHtml(const string& _formHtml)
{
    m_formHtml = _formHtml;
    m_formHtmlHasBeenSet = true;
}

bool OpenBankFormInfo::FormHtmlHasBeenSet() const
{
    return m_formHtmlHasBeenSet;
}

string OpenBankFormInfo::GetFormEncoding() const
{
    return m_formEncoding;
}

void OpenBankFormInfo::SetFormEncoding(const string& _formEncoding)
{
    m_formEncoding = _formEncoding;
    m_formEncodingHasBeenSet = true;
}

bool OpenBankFormInfo::FormEncodingHasBeenSet() const
{
    return m_formEncodingHasBeenSet;
}

