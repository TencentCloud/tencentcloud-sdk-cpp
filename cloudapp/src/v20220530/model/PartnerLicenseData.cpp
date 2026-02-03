/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cloudapp/v20220530/model/PartnerLicenseData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudapp::V20220530::Model;
using namespace std;

PartnerLicenseData::PartnerLicenseData() :
    m_textHasBeenSet(false),
    m_extraDataHasBeenSet(false)
{
}

CoreInternalOutcome PartnerLicenseData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartnerLicenseData.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("ExtraData") && !value["ExtraData"].IsNull())
    {
        if (!value["ExtraData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartnerLicenseData.ExtraData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraData = string(value["ExtraData"].GetString());
        m_extraDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PartnerLicenseData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_extraDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraData.c_str(), allocator).Move(), allocator);
    }

}


string PartnerLicenseData::GetText() const
{
    return m_text;
}

void PartnerLicenseData::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool PartnerLicenseData::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string PartnerLicenseData::GetExtraData() const
{
    return m_extraData;
}

void PartnerLicenseData::SetExtraData(const string& _extraData)
{
    m_extraData = _extraData;
    m_extraDataHasBeenSet = true;
}

bool PartnerLicenseData::ExtraDataHasBeenSet() const
{
    return m_extraDataHasBeenSet;
}

