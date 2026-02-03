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

#include <tencentcloud/tcb/v20180608/model/CloudBaseGWAPIQPSPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudBaseGWAPIQPSPolicy::CloudBaseGWAPIQPSPolicy() :
    m_qPSTotalHasBeenSet(false),
    m_qPSPerClientHasBeenSet(false)
{
}

CoreInternalOutcome CloudBaseGWAPIQPSPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QPSTotal") && !value["QPSTotal"].IsNull())
    {
        if (!value["QPSTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWAPIQPSPolicy.QPSTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qPSTotal = value["QPSTotal"].GetInt64();
        m_qPSTotalHasBeenSet = true;
    }

    if (value.HasMember("QPSPerClient") && !value["QPSPerClient"].IsNull())
    {
        if (!value["QPSPerClient"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWAPIQPSPolicy.QPSPerClient` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_qPSPerClient.Deserialize(value["QPSPerClient"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_qPSPerClientHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudBaseGWAPIQPSPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_qPSTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QPSTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qPSTotal, allocator);
    }

    if (m_qPSPerClientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QPSPerClient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qPSPerClient.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t CloudBaseGWAPIQPSPolicy::GetQPSTotal() const
{
    return m_qPSTotal;
}

void CloudBaseGWAPIQPSPolicy::SetQPSTotal(const int64_t& _qPSTotal)
{
    m_qPSTotal = _qPSTotal;
    m_qPSTotalHasBeenSet = true;
}

bool CloudBaseGWAPIQPSPolicy::QPSTotalHasBeenSet() const
{
    return m_qPSTotalHasBeenSet;
}

CloudBaseClientQPSPolicy CloudBaseGWAPIQPSPolicy::GetQPSPerClient() const
{
    return m_qPSPerClient;
}

void CloudBaseGWAPIQPSPolicy::SetQPSPerClient(const CloudBaseClientQPSPolicy& _qPSPerClient)
{
    m_qPSPerClient = _qPSPerClient;
    m_qPSPerClientHasBeenSet = true;
}

bool CloudBaseGWAPIQPSPolicy::QPSPerClientHasBeenSet() const
{
    return m_qPSPerClientHasBeenSet;
}

