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

#include <tencentcloud/dts/v20211206/model/SubscribeCheckStepTip.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

SubscribeCheckStepTip::SubscribeCheckStepTip() :
    m_messageHasBeenSet(false),
    m_helpDocHasBeenSet(false)
{
}

CoreInternalOutcome SubscribeCheckStepTip::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubscribeCheckStepTip.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("HelpDoc") && !value["HelpDoc"].IsNull())
    {
        if (!value["HelpDoc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubscribeCheckStepTip.HelpDoc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_helpDoc = string(value["HelpDoc"].GetString());
        m_helpDocHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubscribeCheckStepTip::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_helpDocHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HelpDoc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_helpDoc.c_str(), allocator).Move(), allocator);
    }

}


string SubscribeCheckStepTip::GetMessage() const
{
    return m_message;
}

void SubscribeCheckStepTip::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool SubscribeCheckStepTip::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string SubscribeCheckStepTip::GetHelpDoc() const
{
    return m_helpDoc;
}

void SubscribeCheckStepTip::SetHelpDoc(const string& _helpDoc)
{
    m_helpDoc = _helpDoc;
    m_helpDocHasBeenSet = true;
}

bool SubscribeCheckStepTip::HelpDocHasBeenSet() const
{
    return m_helpDocHasBeenSet;
}

