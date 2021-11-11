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

#include <tencentcloud/tcm/v20210413/model/ActiveOperation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

ActiveOperation::ActiveOperation() :
    m_operationIdHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome ActiveOperation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OperationId") && !value["OperationId"].IsNull())
    {
        if (!value["OperationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActiveOperation.OperationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationId = string(value["OperationId"].GetString());
        m_operationIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActiveOperation.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActiveOperation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_operationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


string ActiveOperation::GetOperationId() const
{
    return m_operationId;
}

void ActiveOperation::SetOperationId(const string& _operationId)
{
    m_operationId = _operationId;
    m_operationIdHasBeenSet = true;
}

bool ActiveOperation::OperationIdHasBeenSet() const
{
    return m_operationIdHasBeenSet;
}

string ActiveOperation::GetType() const
{
    return m_type;
}

void ActiveOperation::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ActiveOperation::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

