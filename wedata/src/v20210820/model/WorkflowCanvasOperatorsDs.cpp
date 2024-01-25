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

#include <tencentcloud/wedata/v20210820/model/WorkflowCanvasOperatorsDs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

WorkflowCanvasOperatorsDs::WorkflowCanvasOperatorsDs() :
    m_operatorIdHasBeenSet(false),
    m_operatorNameHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowCanvasOperatorsDs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OperatorId") && !value["OperatorId"].IsNull())
    {
        if (!value["OperatorId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOperatorsDs.OperatorId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operatorId = value["OperatorId"].GetUint64();
        m_operatorIdHasBeenSet = true;
    }

    if (value.HasMember("OperatorName") && !value["OperatorName"].IsNull())
    {
        if (!value["OperatorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOperatorsDs.OperatorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorName = string(value["OperatorName"].GetString());
        m_operatorNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowCanvasOperatorsDs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_operatorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operatorId, allocator);
    }

    if (m_operatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t WorkflowCanvasOperatorsDs::GetOperatorId() const
{
    return m_operatorId;
}

void WorkflowCanvasOperatorsDs::SetOperatorId(const uint64_t& _operatorId)
{
    m_operatorId = _operatorId;
    m_operatorIdHasBeenSet = true;
}

bool WorkflowCanvasOperatorsDs::OperatorIdHasBeenSet() const
{
    return m_operatorIdHasBeenSet;
}

string WorkflowCanvasOperatorsDs::GetOperatorName() const
{
    return m_operatorName;
}

void WorkflowCanvasOperatorsDs::SetOperatorName(const string& _operatorName)
{
    m_operatorName = _operatorName;
    m_operatorNameHasBeenSet = true;
}

bool WorkflowCanvasOperatorsDs::OperatorNameHasBeenSet() const
{
    return m_operatorNameHasBeenSet;
}

