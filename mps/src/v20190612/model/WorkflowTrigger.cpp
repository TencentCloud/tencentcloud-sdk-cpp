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

#include <tencentcloud/mps/v20190612/model/WorkflowTrigger.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

WorkflowTrigger::WorkflowTrigger() :
    m_typeHasBeenSet(false),
    m_cosFileUploadTriggerHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowTrigger::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `WorkflowTrigger.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CosFileUploadTrigger") && !value["CosFileUploadTrigger"].IsNull())
    {
        if (!value["CosFileUploadTrigger"].IsObject())
        {
            return CoreInternalOutcome(Error("response `WorkflowTrigger.CosFileUploadTrigger` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cosFileUploadTrigger.Deserialize(value["CosFileUploadTrigger"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosFileUploadTriggerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowTrigger::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_cosFileUploadTriggerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CosFileUploadTrigger";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_cosFileUploadTrigger.ToJsonObject(value[key.c_str()], allocator);
    }

}


string WorkflowTrigger::GetType() const
{
    return m_type;
}

void WorkflowTrigger::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool WorkflowTrigger::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

CosFileUploadTrigger WorkflowTrigger::GetCosFileUploadTrigger() const
{
    return m_cosFileUploadTrigger;
}

void WorkflowTrigger::SetCosFileUploadTrigger(const CosFileUploadTrigger& _cosFileUploadTrigger)
{
    m_cosFileUploadTrigger = _cosFileUploadTrigger;
    m_cosFileUploadTriggerHasBeenSet = true;
}

bool WorkflowTrigger::CosFileUploadTriggerHasBeenSet() const
{
    return m_cosFileUploadTriggerHasBeenSet;
}

