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

#include <tencentcloud/cpdp/v20190820/model/MerchantClassificationId.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

MerchantClassificationId::MerchantClassificationId() :
    m_codeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_parentHasBeenSet(false)
{
}

CoreInternalOutcome MerchantClassificationId::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantClassificationId.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantClassificationId.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Parent") && !value["Parent"].IsNull())
    {
        if (!value["Parent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantClassificationId.Parent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parent = string(value["Parent"].GetString());
        m_parentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MerchantClassificationId::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_parentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parent.c_str(), allocator).Move(), allocator);
    }

}


string MerchantClassificationId::GetCode() const
{
    return m_code;
}

void MerchantClassificationId::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool MerchantClassificationId::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string MerchantClassificationId::GetName() const
{
    return m_name;
}

void MerchantClassificationId::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MerchantClassificationId::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MerchantClassificationId::GetParent() const
{
    return m_parent;
}

void MerchantClassificationId::SetParent(const string& _parent)
{
    m_parent = _parent;
    m_parentHasBeenSet = true;
}

bool MerchantClassificationId::ParentHasBeenSet() const
{
    return m_parentHasBeenSet;
}

