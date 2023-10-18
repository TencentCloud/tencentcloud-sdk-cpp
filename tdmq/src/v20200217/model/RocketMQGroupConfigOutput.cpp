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

#include <tencentcloud/tdmq/v20200217/model/RocketMQGroupConfigOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RocketMQGroupConfigOutput::RocketMQGroupConfigOutput() :
    m_namespaceHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_importedHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome RocketMQGroupConfigOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroupConfigOutput.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroupConfigOutput.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("Imported") && !value["Imported"].IsNull())
    {
        if (!value["Imported"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroupConfigOutput.Imported` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_imported = value["Imported"].GetBool();
        m_importedHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroupConfigOutput.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RocketMQGroupConfigOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_importedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Imported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imported, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string RocketMQGroupConfigOutput::GetNamespace() const
{
    return m_namespace;
}

void RocketMQGroupConfigOutput::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool RocketMQGroupConfigOutput::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string RocketMQGroupConfigOutput::GetGroupName() const
{
    return m_groupName;
}

void RocketMQGroupConfigOutput::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool RocketMQGroupConfigOutput::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

bool RocketMQGroupConfigOutput::GetImported() const
{
    return m_imported;
}

void RocketMQGroupConfigOutput::SetImported(const bool& _imported)
{
    m_imported = _imported;
    m_importedHasBeenSet = true;
}

bool RocketMQGroupConfigOutput::ImportedHasBeenSet() const
{
    return m_importedHasBeenSet;
}

string RocketMQGroupConfigOutput::GetRemark() const
{
    return m_remark;
}

void RocketMQGroupConfigOutput::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RocketMQGroupConfigOutput::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

