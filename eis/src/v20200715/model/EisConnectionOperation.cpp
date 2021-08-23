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

#include <tencentcloud/eis/v20200715/model/EisConnectionOperation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eis::V20200715::Model;
using namespace std;

EisConnectionOperation::EisConnectionOperation() :
    m_operationNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_isTriggerHasBeenSet(false)
{
}

CoreInternalOutcome EisConnectionOperation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OperationName") && !value["OperationName"].IsNull())
    {
        if (!value["OperationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EisConnectionOperation.OperationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationName = string(value["OperationName"].GetString());
        m_operationNameHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EisConnectionOperation.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("IsTrigger") && !value["IsTrigger"].IsNull())
    {
        if (!value["IsTrigger"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EisConnectionOperation.IsTrigger` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isTrigger = value["IsTrigger"].GetBool();
        m_isTriggerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EisConnectionOperation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_operationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationName.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_isTriggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTrigger";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTrigger, allocator);
    }

}


string EisConnectionOperation::GetOperationName() const
{
    return m_operationName;
}

void EisConnectionOperation::SetOperationName(const string& _operationName)
{
    m_operationName = _operationName;
    m_operationNameHasBeenSet = true;
}

bool EisConnectionOperation::OperationNameHasBeenSet() const
{
    return m_operationNameHasBeenSet;
}

string EisConnectionOperation::GetDisplayName() const
{
    return m_displayName;
}

void EisConnectionOperation::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool EisConnectionOperation::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

bool EisConnectionOperation::GetIsTrigger() const
{
    return m_isTrigger;
}

void EisConnectionOperation::SetIsTrigger(const bool& _isTrigger)
{
    m_isTrigger = _isTrigger;
    m_isTriggerHasBeenSet = true;
}

bool EisConnectionOperation::IsTriggerHasBeenSet() const
{
    return m_isTriggerHasBeenSet;
}

