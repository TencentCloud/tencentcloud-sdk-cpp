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

#include <tencentcloud/weilingwith/v20230427/model/AdministrativeDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

AdministrativeDetail::AdministrativeDetail() :
    m_administrativeTypeCodeHasBeenSet(false),
    m_administrativeCodeHasBeenSet(false),
    m_administrativeNameHasBeenSet(false)
{
}

CoreInternalOutcome AdministrativeDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AdministrativeTypeCode") && !value["AdministrativeTypeCode"].IsNull())
    {
        if (!value["AdministrativeTypeCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdministrativeDetail.AdministrativeTypeCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_administrativeTypeCode = string(value["AdministrativeTypeCode"].GetString());
        m_administrativeTypeCodeHasBeenSet = true;
    }

    if (value.HasMember("AdministrativeCode") && !value["AdministrativeCode"].IsNull())
    {
        if (!value["AdministrativeCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdministrativeDetail.AdministrativeCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_administrativeCode = string(value["AdministrativeCode"].GetString());
        m_administrativeCodeHasBeenSet = true;
    }

    if (value.HasMember("AdministrativeName") && !value["AdministrativeName"].IsNull())
    {
        if (!value["AdministrativeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdministrativeDetail.AdministrativeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_administrativeName = string(value["AdministrativeName"].GetString());
        m_administrativeNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdministrativeDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_administrativeTypeCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdministrativeTypeCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_administrativeTypeCode.c_str(), allocator).Move(), allocator);
    }

    if (m_administrativeCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdministrativeCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_administrativeCode.c_str(), allocator).Move(), allocator);
    }

    if (m_administrativeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdministrativeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_administrativeName.c_str(), allocator).Move(), allocator);
    }

}


string AdministrativeDetail::GetAdministrativeTypeCode() const
{
    return m_administrativeTypeCode;
}

void AdministrativeDetail::SetAdministrativeTypeCode(const string& _administrativeTypeCode)
{
    m_administrativeTypeCode = _administrativeTypeCode;
    m_administrativeTypeCodeHasBeenSet = true;
}

bool AdministrativeDetail::AdministrativeTypeCodeHasBeenSet() const
{
    return m_administrativeTypeCodeHasBeenSet;
}

string AdministrativeDetail::GetAdministrativeCode() const
{
    return m_administrativeCode;
}

void AdministrativeDetail::SetAdministrativeCode(const string& _administrativeCode)
{
    m_administrativeCode = _administrativeCode;
    m_administrativeCodeHasBeenSet = true;
}

bool AdministrativeDetail::AdministrativeCodeHasBeenSet() const
{
    return m_administrativeCodeHasBeenSet;
}

string AdministrativeDetail::GetAdministrativeName() const
{
    return m_administrativeName;
}

void AdministrativeDetail::SetAdministrativeName(const string& _administrativeName)
{
    m_administrativeName = _administrativeName;
    m_administrativeNameHasBeenSet = true;
}

bool AdministrativeDetail::AdministrativeNameHasBeenSet() const
{
    return m_administrativeNameHasBeenSet;
}

