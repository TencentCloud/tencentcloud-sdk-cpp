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

#include <tencentcloud/mongodb/v20190725/model/DbURL.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

DbURL::DbURL() :
    m_uRLTypeHasBeenSet(false),
    m_addressHasBeenSet(false)
{
}

CoreInternalOutcome DbURL::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("URLType") && !value["URLType"].IsNull())
    {
        if (!value["URLType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbURL.URLType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uRLType = string(value["URLType"].GetString());
        m_uRLTypeHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbURL.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DbURL::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uRLTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URLType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uRLType.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

}


string DbURL::GetURLType() const
{
    return m_uRLType;
}

void DbURL::SetURLType(const string& _uRLType)
{
    m_uRLType = _uRLType;
    m_uRLTypeHasBeenSet = true;
}

bool DbURL::URLTypeHasBeenSet() const
{
    return m_uRLTypeHasBeenSet;
}

string DbURL::GetAddress() const
{
    return m_address;
}

void DbURL::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool DbURL::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

