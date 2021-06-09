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

#include <tencentcloud/faceid/v20180301/model/EidInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

EidInfo::EidInfo() :
    m_eidCodeHasBeenSet(false),
    m_eidSignHasBeenSet(false)
{
}

CoreInternalOutcome EidInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EidCode") && !value["EidCode"].IsNull())
    {
        if (!value["EidCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `EidInfo.EidCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eidCode = string(value["EidCode"].GetString());
        m_eidCodeHasBeenSet = true;
    }

    if (value.HasMember("EidSign") && !value["EidSign"].IsNull())
    {
        if (!value["EidSign"].IsString())
        {
            return CoreInternalOutcome(Error("response `EidInfo.EidSign` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eidSign = string(value["EidSign"].GetString());
        m_eidSignHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EidInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eidCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EidCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eidCode.c_str(), allocator).Move(), allocator);
    }

    if (m_eidSignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EidSign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eidSign.c_str(), allocator).Move(), allocator);
    }

}


string EidInfo::GetEidCode() const
{
    return m_eidCode;
}

void EidInfo::SetEidCode(const string& _eidCode)
{
    m_eidCode = _eidCode;
    m_eidCodeHasBeenSet = true;
}

bool EidInfo::EidCodeHasBeenSet() const
{
    return m_eidCodeHasBeenSet;
}

string EidInfo::GetEidSign() const
{
    return m_eidSign;
}

void EidInfo::SetEidSign(const string& _eidSign)
{
    m_eidSign = _eidSign;
    m_eidSignHasBeenSet = true;
}

bool EidInfo::EidSignHasBeenSet() const
{
    return m_eidSignHasBeenSet;
}

