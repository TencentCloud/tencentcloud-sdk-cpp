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

#include <tencentcloud/tse/v20201207/model/AIGWModelRewriteRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AIGWModelRewriteRule::AIGWModelRewriteRule() :
    m_sourceModelHasBeenSet(false),
    m_targetModelHasBeenSet(false)
{
}

CoreInternalOutcome AIGWModelRewriteRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceModel") && !value["SourceModel"].IsNull())
    {
        if (!value["SourceModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWModelRewriteRule.SourceModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceModel = string(value["SourceModel"].GetString());
        m_sourceModelHasBeenSet = true;
    }

    if (value.HasMember("TargetModel") && !value["TargetModel"].IsNull())
    {
        if (!value["TargetModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWModelRewriteRule.TargetModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetModel = string(value["TargetModel"].GetString());
        m_targetModelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWModelRewriteRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceModel.c_str(), allocator).Move(), allocator);
    }

    if (m_targetModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetModel.c_str(), allocator).Move(), allocator);
    }

}


string AIGWModelRewriteRule::GetSourceModel() const
{
    return m_sourceModel;
}

void AIGWModelRewriteRule::SetSourceModel(const string& _sourceModel)
{
    m_sourceModel = _sourceModel;
    m_sourceModelHasBeenSet = true;
}

bool AIGWModelRewriteRule::SourceModelHasBeenSet() const
{
    return m_sourceModelHasBeenSet;
}

string AIGWModelRewriteRule::GetTargetModel() const
{
    return m_targetModel;
}

void AIGWModelRewriteRule::SetTargetModel(const string& _targetModel)
{
    m_targetModel = _targetModel;
    m_targetModelHasBeenSet = true;
}

bool AIGWModelRewriteRule::TargetModelHasBeenSet() const
{
    return m_targetModelHasBeenSet;
}

