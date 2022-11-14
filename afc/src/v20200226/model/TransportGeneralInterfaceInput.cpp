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

#include <tencentcloud/afc/v20200226/model/TransportGeneralInterfaceInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Afc::V20200226::Model;
using namespace std;

TransportGeneralInterfaceInput::TransportGeneralInterfaceInput() :
    m_interfaceNameHasBeenSet(false),
    m_notarizationInputHasBeenSet(false),
    m_notarizationSignHasBeenSet(false)
{
}

CoreInternalOutcome TransportGeneralInterfaceInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InterfaceName") && !value["InterfaceName"].IsNull())
    {
        if (!value["InterfaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransportGeneralInterfaceInput.InterfaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_interfaceName = string(value["InterfaceName"].GetString());
        m_interfaceNameHasBeenSet = true;
    }

    if (value.HasMember("NotarizationInput") && !value["NotarizationInput"].IsNull())
    {
        if (!value["NotarizationInput"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransportGeneralInterfaceInput.NotarizationInput` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notarizationInput = string(value["NotarizationInput"].GetString());
        m_notarizationInputHasBeenSet = true;
    }

    if (value.HasMember("NotarizationSign") && !value["NotarizationSign"].IsNull())
    {
        if (!value["NotarizationSign"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransportGeneralInterfaceInput.NotarizationSign` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notarizationSign = string(value["NotarizationSign"].GetString());
        m_notarizationSignHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TransportGeneralInterfaceInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_interfaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterfaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_interfaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_notarizationInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotarizationInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notarizationInput.c_str(), allocator).Move(), allocator);
    }

    if (m_notarizationSignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotarizationSign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notarizationSign.c_str(), allocator).Move(), allocator);
    }

}


string TransportGeneralInterfaceInput::GetInterfaceName() const
{
    return m_interfaceName;
}

void TransportGeneralInterfaceInput::SetInterfaceName(const string& _interfaceName)
{
    m_interfaceName = _interfaceName;
    m_interfaceNameHasBeenSet = true;
}

bool TransportGeneralInterfaceInput::InterfaceNameHasBeenSet() const
{
    return m_interfaceNameHasBeenSet;
}

string TransportGeneralInterfaceInput::GetNotarizationInput() const
{
    return m_notarizationInput;
}

void TransportGeneralInterfaceInput::SetNotarizationInput(const string& _notarizationInput)
{
    m_notarizationInput = _notarizationInput;
    m_notarizationInputHasBeenSet = true;
}

bool TransportGeneralInterfaceInput::NotarizationInputHasBeenSet() const
{
    return m_notarizationInputHasBeenSet;
}

string TransportGeneralInterfaceInput::GetNotarizationSign() const
{
    return m_notarizationSign;
}

void TransportGeneralInterfaceInput::SetNotarizationSign(const string& _notarizationSign)
{
    m_notarizationSign = _notarizationSign;
    m_notarizationSignHasBeenSet = true;
}

bool TransportGeneralInterfaceInput::NotarizationSignHasBeenSet() const
{
    return m_notarizationSignHasBeenSet;
}

