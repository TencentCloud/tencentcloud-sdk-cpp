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

#include <tencentcloud/ses/v20201002/model/ReceiverInputData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

ReceiverInputData::ReceiverInputData() :
    m_emailHasBeenSet(false),
    m_templateDataHasBeenSet(false)
{
}

CoreInternalOutcome ReceiverInputData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverInputData.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("TemplateData") && !value["TemplateData"].IsNull())
    {
        if (!value["TemplateData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverInputData.TemplateData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateData = string(value["TemplateData"].GetString());
        m_templateDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReceiverInputData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_templateDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateData.c_str(), allocator).Move(), allocator);
    }

}


string ReceiverInputData::GetEmail() const
{
    return m_email;
}

void ReceiverInputData::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool ReceiverInputData::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string ReceiverInputData::GetTemplateData() const
{
    return m_templateData;
}

void ReceiverInputData::SetTemplateData(const string& _templateData)
{
    m_templateData = _templateData;
    m_templateDataHasBeenSet = true;
}

bool ReceiverInputData::TemplateDataHasBeenSet() const
{
    return m_templateDataHasBeenSet;
}

