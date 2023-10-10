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

#include <tencentcloud/cwp/v20180228/model/WebHookEventKv.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

WebHookEventKv::WebHookEventKv() :
    m_typeHasBeenSet(false),
    m_controlBitHasBeenSet(false)
{
}

CoreInternalOutcome WebHookEventKv::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookEventKv.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ControlBit") && !value["ControlBit"].IsNull())
    {
        if (!value["ControlBit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookEventKv.ControlBit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_controlBit = string(value["ControlBit"].GetString());
        m_controlBitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebHookEventKv::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_controlBitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ControlBit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_controlBit.c_str(), allocator).Move(), allocator);
    }

}


int64_t WebHookEventKv::GetType() const
{
    return m_type;
}

void WebHookEventKv::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool WebHookEventKv::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string WebHookEventKv::GetControlBit() const
{
    return m_controlBit;
}

void WebHookEventKv::SetControlBit(const string& _controlBit)
{
    m_controlBit = _controlBit;
    m_controlBitHasBeenSet = true;
}

bool WebHookEventKv::ControlBitHasBeenSet() const
{
    return m_controlBitHasBeenSet;
}

