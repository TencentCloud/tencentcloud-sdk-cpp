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

#include <tencentcloud/emr/v20190103/model/ComputeResourceAdvanceParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ComputeResourceAdvanceParams::ComputeResourceAdvanceParams() :
    m_labelsHasBeenSet(false),
    m_taintsHasBeenSet(false),
    m_preStartUserScriptHasBeenSet(false),
    m_userScriptHasBeenSet(false)
{
}

CoreInternalOutcome ComputeResourceAdvanceParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComputeResourceAdvanceParams.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TkeLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }

    if (value.HasMember("Taints") && !value["Taints"].IsNull())
    {
        if (!value["Taints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComputeResourceAdvanceParams.Taints` is not array type"));

        const rapidjson::Value &tmpValue = value["Taints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Taint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taints.push_back(item);
        }
        m_taintsHasBeenSet = true;
    }

    if (value.HasMember("PreStartUserScript") && !value["PreStartUserScript"].IsNull())
    {
        if (!value["PreStartUserScript"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeResourceAdvanceParams.PreStartUserScript` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preStartUserScript = string(value["PreStartUserScript"].GetString());
        m_preStartUserScriptHasBeenSet = true;
    }

    if (value.HasMember("UserScript") && !value["UserScript"].IsNull())
    {
        if (!value["UserScript"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeResourceAdvanceParams.UserScript` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userScript = string(value["UserScript"].GetString());
        m_userScriptHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComputeResourceAdvanceParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taintsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Taints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taints.begin(); itr != m_taints.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_preStartUserScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreStartUserScript";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preStartUserScript.c_str(), allocator).Move(), allocator);
    }

    if (m_userScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserScript";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userScript.c_str(), allocator).Move(), allocator);
    }

}


vector<TkeLabel> ComputeResourceAdvanceParams::GetLabels() const
{
    return m_labels;
}

void ComputeResourceAdvanceParams::SetLabels(const vector<TkeLabel>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool ComputeResourceAdvanceParams::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<Taint> ComputeResourceAdvanceParams::GetTaints() const
{
    return m_taints;
}

void ComputeResourceAdvanceParams::SetTaints(const vector<Taint>& _taints)
{
    m_taints = _taints;
    m_taintsHasBeenSet = true;
}

bool ComputeResourceAdvanceParams::TaintsHasBeenSet() const
{
    return m_taintsHasBeenSet;
}

string ComputeResourceAdvanceParams::GetPreStartUserScript() const
{
    return m_preStartUserScript;
}

void ComputeResourceAdvanceParams::SetPreStartUserScript(const string& _preStartUserScript)
{
    m_preStartUserScript = _preStartUserScript;
    m_preStartUserScriptHasBeenSet = true;
}

bool ComputeResourceAdvanceParams::PreStartUserScriptHasBeenSet() const
{
    return m_preStartUserScriptHasBeenSet;
}

string ComputeResourceAdvanceParams::GetUserScript() const
{
    return m_userScript;
}

void ComputeResourceAdvanceParams::SetUserScript(const string& _userScript)
{
    m_userScript = _userScript;
    m_userScriptHasBeenSet = true;
}

bool ComputeResourceAdvanceParams::UserScriptHasBeenSet() const
{
    return m_userScriptHasBeenSet;
}

