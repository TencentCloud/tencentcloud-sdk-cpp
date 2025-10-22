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

#include <tencentcloud/wedata/v20250806/model/CodeFileConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CodeFileConfig::CodeFileConfig() :
    m_paramsHasBeenSet(false),
    m_notebookSessionInfoHasBeenSet(false)
{
}

CoreInternalOutcome CodeFileConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeFileConfig.Params` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_params = string(value["Params"].GetString());
        m_paramsHasBeenSet = true;
    }

    if (value.HasMember("NotebookSessionInfo") && !value["NotebookSessionInfo"].IsNull())
    {
        if (!value["NotebookSessionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CodeFileConfig.NotebookSessionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_notebookSessionInfo.Deserialize(value["NotebookSessionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_notebookSessionInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CodeFileConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_params.c_str(), allocator).Move(), allocator);
    }

    if (m_notebookSessionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotebookSessionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_notebookSessionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CodeFileConfig::GetParams() const
{
    return m_params;
}

void CodeFileConfig::SetParams(const string& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool CodeFileConfig::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

NotebookSessionInfo CodeFileConfig::GetNotebookSessionInfo() const
{
    return m_notebookSessionInfo;
}

void CodeFileConfig::SetNotebookSessionInfo(const NotebookSessionInfo& _notebookSessionInfo)
{
    m_notebookSessionInfo = _notebookSessionInfo;
    m_notebookSessionInfoHasBeenSet = true;
}

bool CodeFileConfig::NotebookSessionInfoHasBeenSet() const
{
    return m_notebookSessionInfoHasBeenSet;
}

