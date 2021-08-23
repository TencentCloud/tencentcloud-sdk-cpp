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

#include <tencentcloud/iotvideo/v20191126/model/RegisteredStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

RegisteredStatus::RegisteredStatus() :
    m_cunionIdHasBeenSet(false),
    m_isRegistedHasBeenSet(false)
{
}

CoreInternalOutcome RegisteredStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CunionId") && !value["CunionId"].IsNull())
    {
        if (!value["CunionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisteredStatus.CunionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cunionId = string(value["CunionId"].GetString());
        m_cunionIdHasBeenSet = true;
    }

    if (value.HasMember("IsRegisted") && !value["IsRegisted"].IsNull())
    {
        if (!value["IsRegisted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RegisteredStatus.IsRegisted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRegisted = value["IsRegisted"].GetBool();
        m_isRegistedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegisteredStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cunionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CunionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cunionId.c_str(), allocator).Move(), allocator);
    }

    if (m_isRegistedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRegisted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRegisted, allocator);
    }

}


string RegisteredStatus::GetCunionId() const
{
    return m_cunionId;
}

void RegisteredStatus::SetCunionId(const string& _cunionId)
{
    m_cunionId = _cunionId;
    m_cunionIdHasBeenSet = true;
}

bool RegisteredStatus::CunionIdHasBeenSet() const
{
    return m_cunionIdHasBeenSet;
}

bool RegisteredStatus::GetIsRegisted() const
{
    return m_isRegisted;
}

void RegisteredStatus::SetIsRegisted(const bool& _isRegisted)
{
    m_isRegisted = _isRegisted;
    m_isRegistedHasBeenSet = true;
}

bool RegisteredStatus::IsRegistedHasBeenSet() const
{
    return m_isRegistedHasBeenSet;
}

