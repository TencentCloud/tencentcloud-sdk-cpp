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

#include <tencentcloud/aca/v20210323/model/EmrDiagnosises.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

EmrDiagnosises::EmrDiagnosises() :
    m_diagnosisNameHasBeenSet(false),
    m_icdCodeHasBeenSet(false)
{
}

CoreInternalOutcome EmrDiagnosises::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiagnosisName") && !value["DiagnosisName"].IsNull())
    {
        if (!value["DiagnosisName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrDiagnosises.DiagnosisName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diagnosisName = string(value["DiagnosisName"].GetString());
        m_diagnosisNameHasBeenSet = true;
    }

    if (value.HasMember("IcdCode") && !value["IcdCode"].IsNull())
    {
        if (!value["IcdCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrDiagnosises.IcdCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_icdCode = string(value["IcdCode"].GetString());
        m_icdCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmrDiagnosises::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diagnosisNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiagnosisName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diagnosisName.c_str(), allocator).Move(), allocator);
    }

    if (m_icdCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IcdCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_icdCode.c_str(), allocator).Move(), allocator);
    }

}


string EmrDiagnosises::GetDiagnosisName() const
{
    return m_diagnosisName;
}

void EmrDiagnosises::SetDiagnosisName(const string& _diagnosisName)
{
    m_diagnosisName = _diagnosisName;
    m_diagnosisNameHasBeenSet = true;
}

bool EmrDiagnosises::DiagnosisNameHasBeenSet() const
{
    return m_diagnosisNameHasBeenSet;
}

string EmrDiagnosises::GetIcdCode() const
{
    return m_icdCode;
}

void EmrDiagnosises::SetIcdCode(const string& _icdCode)
{
    m_icdCode = _icdCode;
    m_icdCodeHasBeenSet = true;
}

bool EmrDiagnosises::IcdCodeHasBeenSet() const
{
    return m_icdCodeHasBeenSet;
}

