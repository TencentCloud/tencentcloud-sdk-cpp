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

#include <tencentcloud/cr/v20180321/model/SingleBlackApply.h>

using namespace TencentCloud;
using namespace TencentCloud::Cr::V20180321;
using namespace TencentCloud::Cr::V20180321::Model;
using namespace rapidjson;
using namespace std;

SingleBlackApply::SingleBlackApply() :
    m_blackTypeHasBeenSet(false),
    m_operationTypeHasBeenSet(false),
    m_blackValueHasBeenSet(false),
    m_blackDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome SingleBlackApply::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("BlackType") && !value["BlackType"].IsNull())
    {
        if (!value["BlackType"].IsString())
        {
            return CoreInternalOutcome(Error("response `SingleBlackApply.BlackType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blackType = string(value["BlackType"].GetString());
        m_blackTypeHasBeenSet = true;
    }

    if (value.HasMember("OperationType") && !value["OperationType"].IsNull())
    {
        if (!value["OperationType"].IsString())
        {
            return CoreInternalOutcome(Error("response `SingleBlackApply.OperationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationType = string(value["OperationType"].GetString());
        m_operationTypeHasBeenSet = true;
    }

    if (value.HasMember("BlackValue") && !value["BlackValue"].IsNull())
    {
        if (!value["BlackValue"].IsString())
        {
            return CoreInternalOutcome(Error("response `SingleBlackApply.BlackValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blackValue = string(value["BlackValue"].GetString());
        m_blackValueHasBeenSet = true;
    }

    if (value.HasMember("BlackDescription") && !value["BlackDescription"].IsNull())
    {
        if (!value["BlackDescription"].IsString())
        {
            return CoreInternalOutcome(Error("response `SingleBlackApply.BlackDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blackDescription = string(value["BlackDescription"].GetString());
        m_blackDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SingleBlackApply::ToJsonObject(Value &value, Document::AllocatorType& allocator)
{

    if (m_blackTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BlackType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_blackType.c_str(), allocator).Move(), allocator);
    }

    if (m_operationTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_operationType.c_str(), allocator).Move(), allocator);
    }

    if (m_blackValueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BlackValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_blackValue.c_str(), allocator).Move(), allocator);
    }

    if (m_blackDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BlackDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_blackDescription.c_str(), allocator).Move(), allocator);
    }

}


string SingleBlackApply::GetBlackType() const
{
    return m_blackType;
}

void SingleBlackApply::SetBlackType(const string& blackType)
{
    m_blackType = blackType;
    m_blackTypeHasBeenSet = true;
}

bool SingleBlackApply::BlackTypeHasBeenSet() const
{
    return m_blackTypeHasBeenSet;
}

string SingleBlackApply::GetOperationType() const
{
    return m_operationType;
}

void SingleBlackApply::SetOperationType(const string& operationType)
{
    m_operationType = operationType;
    m_operationTypeHasBeenSet = true;
}

bool SingleBlackApply::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

string SingleBlackApply::GetBlackValue() const
{
    return m_blackValue;
}

void SingleBlackApply::SetBlackValue(const string& blackValue)
{
    m_blackValue = blackValue;
    m_blackValueHasBeenSet = true;
}

bool SingleBlackApply::BlackValueHasBeenSet() const
{
    return m_blackValueHasBeenSet;
}

string SingleBlackApply::GetBlackDescription() const
{
    return m_blackDescription;
}

void SingleBlackApply::SetBlackDescription(const string& blackDescription)
{
    m_blackDescription = blackDescription;
    m_blackDescriptionHasBeenSet = true;
}

bool SingleBlackApply::BlackDescriptionHasBeenSet() const
{
    return m_blackDescriptionHasBeenSet;
}

