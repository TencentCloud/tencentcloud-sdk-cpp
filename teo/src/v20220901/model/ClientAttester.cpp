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

#include <tencentcloud/teo/v20220901/model/ClientAttester.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ClientAttester::ClientAttester() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_attesterSourceHasBeenSet(false),
    m_attesterDurationHasBeenSet(false),
    m_tCRCEOptionHasBeenSet(false),
    m_tCCaptchaOptionHasBeenSet(false)
{
}

CoreInternalOutcome ClientAttester::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientAttester.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientAttester.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientAttester.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AttesterSource") && !value["AttesterSource"].IsNull())
    {
        if (!value["AttesterSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientAttester.AttesterSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attesterSource = string(value["AttesterSource"].GetString());
        m_attesterSourceHasBeenSet = true;
    }

    if (value.HasMember("AttesterDuration") && !value["AttesterDuration"].IsNull())
    {
        if (!value["AttesterDuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientAttester.AttesterDuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attesterDuration = string(value["AttesterDuration"].GetString());
        m_attesterDurationHasBeenSet = true;
    }

    if (value.HasMember("TCRCEOption") && !value["TCRCEOption"].IsNull())
    {
        if (!value["TCRCEOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClientAttester.TCRCEOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tCRCEOption.Deserialize(value["TCRCEOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tCRCEOptionHasBeenSet = true;
    }

    if (value.HasMember("TCCaptchaOption") && !value["TCCaptchaOption"].IsNull())
    {
        if (!value["TCCaptchaOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClientAttester.TCCaptchaOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tCCaptchaOption.Deserialize(value["TCCaptchaOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tCCaptchaOptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClientAttester::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_attesterSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttesterSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attesterSource.c_str(), allocator).Move(), allocator);
    }

    if (m_attesterDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttesterDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attesterDuration.c_str(), allocator).Move(), allocator);
    }

    if (m_tCRCEOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TCRCEOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tCRCEOption.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tCCaptchaOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TCCaptchaOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tCCaptchaOption.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ClientAttester::GetId() const
{
    return m_id;
}

void ClientAttester::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ClientAttester::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ClientAttester::GetName() const
{
    return m_name;
}

void ClientAttester::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ClientAttester::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ClientAttester::GetType() const
{
    return m_type;
}

void ClientAttester::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ClientAttester::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ClientAttester::GetAttesterSource() const
{
    return m_attesterSource;
}

void ClientAttester::SetAttesterSource(const string& _attesterSource)
{
    m_attesterSource = _attesterSource;
    m_attesterSourceHasBeenSet = true;
}

bool ClientAttester::AttesterSourceHasBeenSet() const
{
    return m_attesterSourceHasBeenSet;
}

string ClientAttester::GetAttesterDuration() const
{
    return m_attesterDuration;
}

void ClientAttester::SetAttesterDuration(const string& _attesterDuration)
{
    m_attesterDuration = _attesterDuration;
    m_attesterDurationHasBeenSet = true;
}

bool ClientAttester::AttesterDurationHasBeenSet() const
{
    return m_attesterDurationHasBeenSet;
}

TCRCEOption ClientAttester::GetTCRCEOption() const
{
    return m_tCRCEOption;
}

void ClientAttester::SetTCRCEOption(const TCRCEOption& _tCRCEOption)
{
    m_tCRCEOption = _tCRCEOption;
    m_tCRCEOptionHasBeenSet = true;
}

bool ClientAttester::TCRCEOptionHasBeenSet() const
{
    return m_tCRCEOptionHasBeenSet;
}

TCCaptchaOption ClientAttester::GetTCCaptchaOption() const
{
    return m_tCCaptchaOption;
}

void ClientAttester::SetTCCaptchaOption(const TCCaptchaOption& _tCCaptchaOption)
{
    m_tCCaptchaOption = _tCCaptchaOption;
    m_tCCaptchaOptionHasBeenSet = true;
}

bool ClientAttester::TCCaptchaOptionHasBeenSet() const
{
    return m_tCCaptchaOptionHasBeenSet;
}

