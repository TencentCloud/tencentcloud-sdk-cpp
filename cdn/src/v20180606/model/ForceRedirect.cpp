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

#include <tencentcloud/cdn/v20180606/model/ForceRedirect.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

ForceRedirect::ForceRedirect() :
    m_switchHasBeenSet(false),
    m_redirectTypeHasBeenSet(false),
    m_redirectStatusCodeHasBeenSet(false)
{
}

CoreInternalOutcome ForceRedirect::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Error("response `ForceRedirect.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("RedirectType") && !value["RedirectType"].IsNull())
    {
        if (!value["RedirectType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ForceRedirect.RedirectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redirectType = string(value["RedirectType"].GetString());
        m_redirectTypeHasBeenSet = true;
    }

    if (value.HasMember("RedirectStatusCode") && !value["RedirectStatusCode"].IsNull())
    {
        if (!value["RedirectStatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ForceRedirect.RedirectStatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_redirectStatusCode = value["RedirectStatusCode"].GetInt64();
        m_redirectStatusCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ForceRedirect::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RedirectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_redirectType.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectStatusCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RedirectStatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redirectStatusCode, allocator);
    }

}


string ForceRedirect::GetSwitch() const
{
    return m_switch;
}

void ForceRedirect::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool ForceRedirect::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string ForceRedirect::GetRedirectType() const
{
    return m_redirectType;
}

void ForceRedirect::SetRedirectType(const string& _redirectType)
{
    m_redirectType = _redirectType;
    m_redirectTypeHasBeenSet = true;
}

bool ForceRedirect::RedirectTypeHasBeenSet() const
{
    return m_redirectTypeHasBeenSet;
}

int64_t ForceRedirect::GetRedirectStatusCode() const
{
    return m_redirectStatusCode;
}

void ForceRedirect::SetRedirectStatusCode(const int64_t& _redirectStatusCode)
{
    m_redirectStatusCode = _redirectStatusCode;
    m_redirectStatusCodeHasBeenSet = true;
}

bool ForceRedirect::RedirectStatusCodeHasBeenSet() const
{
    return m_redirectStatusCodeHasBeenSet;
}

