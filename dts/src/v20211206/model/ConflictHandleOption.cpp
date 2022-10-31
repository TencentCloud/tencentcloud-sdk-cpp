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

#include <tencentcloud/dts/v20211206/model/ConflictHandleOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

ConflictHandleOption::ConflictHandleOption() :
    m_conditionColumnHasBeenSet(false),
    m_conditionOperatorHasBeenSet(false),
    m_conditionOrderInSrcAndDstHasBeenSet(false)
{
}

CoreInternalOutcome ConflictHandleOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConditionColumn") && !value["ConditionColumn"].IsNull())
    {
        if (!value["ConditionColumn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConflictHandleOption.ConditionColumn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conditionColumn = string(value["ConditionColumn"].GetString());
        m_conditionColumnHasBeenSet = true;
    }

    if (value.HasMember("ConditionOperator") && !value["ConditionOperator"].IsNull())
    {
        if (!value["ConditionOperator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConflictHandleOption.ConditionOperator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conditionOperator = string(value["ConditionOperator"].GetString());
        m_conditionOperatorHasBeenSet = true;
    }

    if (value.HasMember("ConditionOrderInSrcAndDst") && !value["ConditionOrderInSrcAndDst"].IsNull())
    {
        if (!value["ConditionOrderInSrcAndDst"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConflictHandleOption.ConditionOrderInSrcAndDst` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conditionOrderInSrcAndDst = string(value["ConditionOrderInSrcAndDst"].GetString());
        m_conditionOrderInSrcAndDstHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConflictHandleOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_conditionColumnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionColumn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conditionColumn.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionOperator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conditionOperator.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionOrderInSrcAndDstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionOrderInSrcAndDst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conditionOrderInSrcAndDst.c_str(), allocator).Move(), allocator);
    }

}


string ConflictHandleOption::GetConditionColumn() const
{
    return m_conditionColumn;
}

void ConflictHandleOption::SetConditionColumn(const string& _conditionColumn)
{
    m_conditionColumn = _conditionColumn;
    m_conditionColumnHasBeenSet = true;
}

bool ConflictHandleOption::ConditionColumnHasBeenSet() const
{
    return m_conditionColumnHasBeenSet;
}

string ConflictHandleOption::GetConditionOperator() const
{
    return m_conditionOperator;
}

void ConflictHandleOption::SetConditionOperator(const string& _conditionOperator)
{
    m_conditionOperator = _conditionOperator;
    m_conditionOperatorHasBeenSet = true;
}

bool ConflictHandleOption::ConditionOperatorHasBeenSet() const
{
    return m_conditionOperatorHasBeenSet;
}

string ConflictHandleOption::GetConditionOrderInSrcAndDst() const
{
    return m_conditionOrderInSrcAndDst;
}

void ConflictHandleOption::SetConditionOrderInSrcAndDst(const string& _conditionOrderInSrcAndDst)
{
    m_conditionOrderInSrcAndDst = _conditionOrderInSrcAndDst;
    m_conditionOrderInSrcAndDstHasBeenSet = true;
}

bool ConflictHandleOption::ConditionOrderInSrcAndDstHasBeenSet() const
{
    return m_conditionOrderInSrcAndDstHasBeenSet;
}

