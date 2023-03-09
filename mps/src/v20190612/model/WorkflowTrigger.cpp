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
using namespace std;

WorkflowTrigger::WorkflowTrigger() :
    m_typeHasBeenSet(false),
    m_cosFileUploadTriggerHasBeenSet(false),
    m_awsS3FileUploadTriggerHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowTrigger::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTrigger.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CosFileUploadTrigger") && !value["CosFileUploadTrigger"].IsNull())
    {
        if (!value["CosFileUploadTrigger"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTrigger.CosFileUploadTrigger` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cosFileUploadTrigger.Deserialize(value["CosFileUploadTrigger"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosFileUploadTriggerHasBeenSet = true;
    }

    if (value.HasMember("AwsS3FileUploadTrigger") && !value["AwsS3FileUploadTrigger"].IsNull())
    {
        if (!value["AwsS3FileUploadTrigger"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTrigger.AwsS3FileUploadTrigger` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_awsS3FileUploadTrigger.Deserialize(value["AwsS3FileUploadTrigger"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_awsS3FileUploadTriggerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowTrigger::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_cosFileUploadTriggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosFileUploadTrigger";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosFileUploadTrigger.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_awsS3FileUploadTriggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AwsS3FileUploadTrigger";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_awsS3FileUploadTrigger.ToJsonObject(value[key.c_str()], allocator);
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

AwsS3FileUploadTrigger WorkflowTrigger::GetAwsS3FileUploadTrigger() const
{
    return m_awsS3FileUploadTrigger;
}

void WorkflowTrigger::SetAwsS3FileUploadTrigger(const AwsS3FileUploadTrigger& _awsS3FileUploadTrigger)
{
    m_awsS3FileUploadTrigger = _awsS3FileUploadTrigger;
    m_awsS3FileUploadTriggerHasBeenSet = true;
}

bool WorkflowTrigger::AwsS3FileUploadTriggerHasBeenSet() const
{
    return m_awsS3FileUploadTriggerHasBeenSet;
}

