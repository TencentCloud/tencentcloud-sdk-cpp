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

#include <tencentcloud/ess/v20201111/model/ExtractionTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ExtractionTaskResult::ExtractionTaskResult() :
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_extractionFieldResultsHasBeenSet(false)
{
}

CoreInternalOutcome ExtractionTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractionTaskResult.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractionTaskResult.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("ExtractionFieldResults") && !value["ExtractionFieldResults"].IsNull())
    {
        if (!value["ExtractionFieldResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExtractionTaskResult.ExtractionFieldResults` is not array type"));

        const rapidjson::Value &tmpValue = value["ExtractionFieldResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExtractionFieldResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_extractionFieldResults.push_back(item);
        }
        m_extractionFieldResultsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtractionTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_extractionFieldResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtractionFieldResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extractionFieldResults.begin(); itr != m_extractionFieldResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ExtractionTaskResult::GetResourceId() const
{
    return m_resourceId;
}

void ExtractionTaskResult::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ExtractionTaskResult::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ExtractionTaskResult::GetResourceName() const
{
    return m_resourceName;
}

void ExtractionTaskResult::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool ExtractionTaskResult::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

vector<ExtractionFieldResult> ExtractionTaskResult::GetExtractionFieldResults() const
{
    return m_extractionFieldResults;
}

void ExtractionTaskResult::SetExtractionFieldResults(const vector<ExtractionFieldResult>& _extractionFieldResults)
{
    m_extractionFieldResults = _extractionFieldResults;
    m_extractionFieldResultsHasBeenSet = true;
}

bool ExtractionTaskResult::ExtractionFieldResultsHasBeenSet() const
{
    return m_extractionFieldResultsHasBeenSet;
}

