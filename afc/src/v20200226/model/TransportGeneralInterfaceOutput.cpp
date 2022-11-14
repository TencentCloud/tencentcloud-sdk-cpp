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

#include <tencentcloud/afc/v20200226/model/TransportGeneralInterfaceOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Afc::V20200226::Model;
using namespace std;

TransportGeneralInterfaceOutput::TransportGeneralInterfaceOutput() :
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_notarizationDataHasBeenSet(false)
{
}

CoreInternalOutcome TransportGeneralInterfaceOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransportGeneralInterfaceOutput.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransportGeneralInterfaceOutput.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("NotarizationData") && !value["NotarizationData"].IsNull())
    {
        if (!value["NotarizationData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransportGeneralInterfaceOutput.NotarizationData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notarizationData = string(value["NotarizationData"].GetString());
        m_notarizationDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TransportGeneralInterfaceOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_notarizationDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotarizationData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notarizationData.c_str(), allocator).Move(), allocator);
    }

}


string TransportGeneralInterfaceOutput::GetCode() const
{
    return m_code;
}

void TransportGeneralInterfaceOutput::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool TransportGeneralInterfaceOutput::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string TransportGeneralInterfaceOutput::GetMessage() const
{
    return m_message;
}

void TransportGeneralInterfaceOutput::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool TransportGeneralInterfaceOutput::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string TransportGeneralInterfaceOutput::GetNotarizationData() const
{
    return m_notarizationData;
}

void TransportGeneralInterfaceOutput::SetNotarizationData(const string& _notarizationData)
{
    m_notarizationData = _notarizationData;
    m_notarizationDataHasBeenSet = true;
}

bool TransportGeneralInterfaceOutput::NotarizationDataHasBeenSet() const
{
    return m_notarizationDataHasBeenSet;
}

