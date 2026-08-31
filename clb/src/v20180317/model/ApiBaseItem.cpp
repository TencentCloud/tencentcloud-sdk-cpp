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

#include <tencentcloud/clb/v20180317/model/ApiBaseItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ApiBaseItem::ApiBaseItem() :
    m_protocolHasBeenSet(false),
    m_apiBaseHasBeenSet(false)
{
}

CoreInternalOutcome ApiBaseItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiBaseItem.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("ApiBase") && !value["ApiBase"].IsNull())
    {
        if (!value["ApiBase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiBaseItem.ApiBase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiBase = string(value["ApiBase"].GetString());
        m_apiBaseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiBaseItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_apiBaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiBase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiBase.c_str(), allocator).Move(), allocator);
    }

}


string ApiBaseItem::GetProtocol() const
{
    return m_protocol;
}

void ApiBaseItem::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ApiBaseItem::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string ApiBaseItem::GetApiBase() const
{
    return m_apiBase;
}

void ApiBaseItem::SetApiBase(const string& _apiBase)
{
    m_apiBase = _apiBase;
    m_apiBaseHasBeenSet = true;
}

bool ApiBaseItem::ApiBaseHasBeenSet() const
{
    return m_apiBaseHasBeenSet;
}

