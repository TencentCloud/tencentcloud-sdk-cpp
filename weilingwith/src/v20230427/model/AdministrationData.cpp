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

#include <tencentcloud/weilingwith/v20230427/model/AdministrationData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

AdministrationData::AdministrationData() :
    m_administrationCodeHasBeenSet(false),
    m_administrationNameHasBeenSet(false)
{
}

CoreInternalOutcome AdministrationData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AdministrationCode") && !value["AdministrationCode"].IsNull())
    {
        if (!value["AdministrationCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdministrationData.AdministrationCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_administrationCode = string(value["AdministrationCode"].GetString());
        m_administrationCodeHasBeenSet = true;
    }

    if (value.HasMember("AdministrationName") && !value["AdministrationName"].IsNull())
    {
        if (!value["AdministrationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdministrationData.AdministrationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_administrationName = string(value["AdministrationName"].GetString());
        m_administrationNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdministrationData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_administrationCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdministrationCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_administrationCode.c_str(), allocator).Move(), allocator);
    }

    if (m_administrationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdministrationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_administrationName.c_str(), allocator).Move(), allocator);
    }

}


string AdministrationData::GetAdministrationCode() const
{
    return m_administrationCode;
}

void AdministrationData::SetAdministrationCode(const string& _administrationCode)
{
    m_administrationCode = _administrationCode;
    m_administrationCodeHasBeenSet = true;
}

bool AdministrationData::AdministrationCodeHasBeenSet() const
{
    return m_administrationCodeHasBeenSet;
}

string AdministrationData::GetAdministrationName() const
{
    return m_administrationName;
}

void AdministrationData::SetAdministrationName(const string& _administrationName)
{
    m_administrationName = _administrationName;
    m_administrationNameHasBeenSet = true;
}

bool AdministrationData::AdministrationNameHasBeenSet() const
{
    return m_administrationNameHasBeenSet;
}

