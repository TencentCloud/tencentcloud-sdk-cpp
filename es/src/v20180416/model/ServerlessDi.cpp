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

#include <tencentcloud/es/v20180416/model/ServerlessDi.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

ServerlessDi::ServerlessDi() :
    m_diSourceTypeHasBeenSet(false),
    m_diSourceCvmHasBeenSet(false),
    m_diSourceTkeHasBeenSet(false)
{
}

CoreInternalOutcome ServerlessDi::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiSourceType") && !value["DiSourceType"].IsNull())
    {
        if (!value["DiSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessDi.DiSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diSourceType = string(value["DiSourceType"].GetString());
        m_diSourceTypeHasBeenSet = true;
    }

    if (value.HasMember("DiSourceCvm") && !value["DiSourceCvm"].IsNull())
    {
        if (!value["DiSourceCvm"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessDi.DiSourceCvm` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_diSourceCvm.Deserialize(value["DiSourceCvm"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diSourceCvmHasBeenSet = true;
    }

    if (value.HasMember("DiSourceTke") && !value["DiSourceTke"].IsNull())
    {
        if (!value["DiSourceTke"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessDi.DiSourceTke` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_diSourceTke.Deserialize(value["DiSourceTke"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diSourceTkeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerlessDi::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiSourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_diSourceCvmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiSourceCvm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diSourceCvm.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_diSourceTkeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiSourceTke";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diSourceTke.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ServerlessDi::GetDiSourceType() const
{
    return m_diSourceType;
}

void ServerlessDi::SetDiSourceType(const string& _diSourceType)
{
    m_diSourceType = _diSourceType;
    m_diSourceTypeHasBeenSet = true;
}

bool ServerlessDi::DiSourceTypeHasBeenSet() const
{
    return m_diSourceTypeHasBeenSet;
}

DiSourceCvm ServerlessDi::GetDiSourceCvm() const
{
    return m_diSourceCvm;
}

void ServerlessDi::SetDiSourceCvm(const DiSourceCvm& _diSourceCvm)
{
    m_diSourceCvm = _diSourceCvm;
    m_diSourceCvmHasBeenSet = true;
}

bool ServerlessDi::DiSourceCvmHasBeenSet() const
{
    return m_diSourceCvmHasBeenSet;
}

DiSourceTke ServerlessDi::GetDiSourceTke() const
{
    return m_diSourceTke;
}

void ServerlessDi::SetDiSourceTke(const DiSourceTke& _diSourceTke)
{
    m_diSourceTke = _diSourceTke;
    m_diSourceTkeHasBeenSet = true;
}

bool ServerlessDi::DiSourceTkeHasBeenSet() const
{
    return m_diSourceTkeHasBeenSet;
}

