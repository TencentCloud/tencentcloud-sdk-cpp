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

#include <tencentcloud/scf/v20180416/model/NamespaceResourceEnv.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

NamespaceResourceEnv::NamespaceResourceEnv() :
    m_tKEHasBeenSet(false),
    m_oFFLINEHasBeenSet(false)
{
}

CoreInternalOutcome NamespaceResourceEnv::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TKE") && !value["TKE"].IsNull())
    {
        if (!value["TKE"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceResourceEnv.TKE` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tKE.Deserialize(value["TKE"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tKEHasBeenSet = true;
    }

    if (value.HasMember("OFFLINE") && !value["OFFLINE"].IsNull())
    {
        if (!value["OFFLINE"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceResourceEnv.OFFLINE` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_oFFLINE = value["OFFLINE"].GetBool();
        m_oFFLINEHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NamespaceResourceEnv::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tKEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TKE";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tKE.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_oFFLINEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OFFLINE";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oFFLINE, allocator);
    }

}


NamespaceResourceEnvTKE NamespaceResourceEnv::GetTKE() const
{
    return m_tKE;
}

void NamespaceResourceEnv::SetTKE(const NamespaceResourceEnvTKE& _tKE)
{
    m_tKE = _tKE;
    m_tKEHasBeenSet = true;
}

bool NamespaceResourceEnv::TKEHasBeenSet() const
{
    return m_tKEHasBeenSet;
}

bool NamespaceResourceEnv::GetOFFLINE() const
{
    return m_oFFLINE;
}

void NamespaceResourceEnv::SetOFFLINE(const bool& _oFFLINE)
{
    m_oFFLINE = _oFFLINE;
    m_oFFLINEHasBeenSet = true;
}

bool NamespaceResourceEnv::OFFLINEHasBeenSet() const
{
    return m_oFFLINEHasBeenSet;
}

