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

#include <tencentcloud/tione/v20211111/model/OperatorInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

OperatorInfo::OperatorInfo() :
    m_subUinHasBeenSet(false),
    m_subUinNameHasBeenSet(false),
    m_isPlatformOperatorHasBeenSet(false),
    m_operationTypeHasBeenSet(false)
{
}

CoreInternalOutcome OperatorInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperatorInfo.SubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = string(value["SubUin"].GetString());
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("SubUinName") && !value["SubUinName"].IsNull())
    {
        if (!value["SubUinName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperatorInfo.SubUinName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUinName = string(value["SubUinName"].GetString());
        m_subUinNameHasBeenSet = true;
    }

    if (value.HasMember("IsPlatformOperator") && !value["IsPlatformOperator"].IsNull())
    {
        if (!value["IsPlatformOperator"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OperatorInfo.IsPlatformOperator` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPlatformOperator = value["IsPlatformOperator"].GetBool();
        m_isPlatformOperatorHasBeenSet = true;
    }

    if (value.HasMember("OperationType") && !value["OperationType"].IsNull())
    {
        if (!value["OperationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperatorInfo.OperationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationType = string(value["OperationType"].GetString());
        m_operationTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OperatorInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUin.c_str(), allocator).Move(), allocator);
    }

    if (m_subUinNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUinName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUinName.c_str(), allocator).Move(), allocator);
    }

    if (m_isPlatformOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPlatformOperator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPlatformOperator, allocator);
    }

    if (m_operationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationType.c_str(), allocator).Move(), allocator);
    }

}


string OperatorInfo::GetSubUin() const
{
    return m_subUin;
}

void OperatorInfo::SetSubUin(const string& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool OperatorInfo::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

string OperatorInfo::GetSubUinName() const
{
    return m_subUinName;
}

void OperatorInfo::SetSubUinName(const string& _subUinName)
{
    m_subUinName = _subUinName;
    m_subUinNameHasBeenSet = true;
}

bool OperatorInfo::SubUinNameHasBeenSet() const
{
    return m_subUinNameHasBeenSet;
}

bool OperatorInfo::GetIsPlatformOperator() const
{
    return m_isPlatformOperator;
}

void OperatorInfo::SetIsPlatformOperator(const bool& _isPlatformOperator)
{
    m_isPlatformOperator = _isPlatformOperator;
    m_isPlatformOperatorHasBeenSet = true;
}

bool OperatorInfo::IsPlatformOperatorHasBeenSet() const
{
    return m_isPlatformOperatorHasBeenSet;
}

string OperatorInfo::GetOperationType() const
{
    return m_operationType;
}

void OperatorInfo::SetOperationType(const string& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool OperatorInfo::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

