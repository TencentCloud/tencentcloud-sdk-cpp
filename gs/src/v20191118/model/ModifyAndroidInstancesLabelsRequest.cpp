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

#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstancesLabelsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

ModifyAndroidInstancesLabelsRequest::ModifyAndroidInstancesLabelsRequest() :
    m_androidInstanceIdsHasBeenSet(false),
    m_androidInstanceLabelsHasBeenSet(false),
    m_operationHasBeenSet(false)
{
}

string ModifyAndroidInstancesLabelsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_androidInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_androidInstanceIds.begin(); itr != m_androidInstanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_androidInstanceLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceLabels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_androidInstanceLabels.begin(); itr != m_androidInstanceLabels.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyAndroidInstancesLabelsRequest::GetAndroidInstanceIds() const
{
    return m_androidInstanceIds;
}

void ModifyAndroidInstancesLabelsRequest::SetAndroidInstanceIds(const vector<string>& _androidInstanceIds)
{
    m_androidInstanceIds = _androidInstanceIds;
    m_androidInstanceIdsHasBeenSet = true;
}

bool ModifyAndroidInstancesLabelsRequest::AndroidInstanceIdsHasBeenSet() const
{
    return m_androidInstanceIdsHasBeenSet;
}

vector<AndroidInstanceLabel> ModifyAndroidInstancesLabelsRequest::GetAndroidInstanceLabels() const
{
    return m_androidInstanceLabels;
}

void ModifyAndroidInstancesLabelsRequest::SetAndroidInstanceLabels(const vector<AndroidInstanceLabel>& _androidInstanceLabels)
{
    m_androidInstanceLabels = _androidInstanceLabels;
    m_androidInstanceLabelsHasBeenSet = true;
}

bool ModifyAndroidInstancesLabelsRequest::AndroidInstanceLabelsHasBeenSet() const
{
    return m_androidInstanceLabelsHasBeenSet;
}

string ModifyAndroidInstancesLabelsRequest::GetOperation() const
{
    return m_operation;
}

void ModifyAndroidInstancesLabelsRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool ModifyAndroidInstancesLabelsRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}


