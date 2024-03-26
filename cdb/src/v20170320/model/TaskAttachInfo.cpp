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

#include <tencentcloud/cdb/v20170320/model/TaskAttachInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

TaskAttachInfo::TaskAttachInfo() :
    m_attachKeyHasBeenSet(false),
    m_attachValueHasBeenSet(false)
{
}

CoreInternalOutcome TaskAttachInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AttachKey") && !value["AttachKey"].IsNull())
    {
        if (!value["AttachKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAttachInfo.AttachKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attachKey = string(value["AttachKey"].GetString());
        m_attachKeyHasBeenSet = true;
    }

    if (value.HasMember("AttachValue") && !value["AttachValue"].IsNull())
    {
        if (!value["AttachValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAttachInfo.AttachValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attachValue = string(value["AttachValue"].GetString());
        m_attachValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskAttachInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_attachKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attachKey.c_str(), allocator).Move(), allocator);
    }

    if (m_attachValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attachValue.c_str(), allocator).Move(), allocator);
    }

}


string TaskAttachInfo::GetAttachKey() const
{
    return m_attachKey;
}

void TaskAttachInfo::SetAttachKey(const string& _attachKey)
{
    m_attachKey = _attachKey;
    m_attachKeyHasBeenSet = true;
}

bool TaskAttachInfo::AttachKeyHasBeenSet() const
{
    return m_attachKeyHasBeenSet;
}

string TaskAttachInfo::GetAttachValue() const
{
    return m_attachValue;
}

void TaskAttachInfo::SetAttachValue(const string& _attachValue)
{
    m_attachValue = _attachValue;
    m_attachValueHasBeenSet = true;
}

bool TaskAttachInfo::AttachValueHasBeenSet() const
{
    return m_attachValueHasBeenSet;
}

