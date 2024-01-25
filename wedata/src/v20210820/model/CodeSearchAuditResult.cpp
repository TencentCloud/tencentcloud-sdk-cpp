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

#include <tencentcloud/wedata/v20210820/model/CodeSearchAuditResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CodeSearchAuditResult::CodeSearchAuditResult() :
    m_codeSearchAuditInfoHasBeenSet(false)
{
}

CoreInternalOutcome CodeSearchAuditResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CodeSearchAuditInfo") && !value["CodeSearchAuditInfo"].IsNull())
    {
        if (!value["CodeSearchAuditInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CodeSearchAuditResult.CodeSearchAuditInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["CodeSearchAuditInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CodeSearchAuditInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_codeSearchAuditInfo.push_back(item);
        }
        m_codeSearchAuditInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CodeSearchAuditResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeSearchAuditInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeSearchAuditInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_codeSearchAuditInfo.begin(); itr != m_codeSearchAuditInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<CodeSearchAuditInfo> CodeSearchAuditResult::GetCodeSearchAuditInfo() const
{
    return m_codeSearchAuditInfo;
}

void CodeSearchAuditResult::SetCodeSearchAuditInfo(const vector<CodeSearchAuditInfo>& _codeSearchAuditInfo)
{
    m_codeSearchAuditInfo = _codeSearchAuditInfo;
    m_codeSearchAuditInfoHasBeenSet = true;
}

bool CodeSearchAuditResult::CodeSearchAuditInfoHasBeenSet() const
{
    return m_codeSearchAuditInfoHasBeenSet;
}

