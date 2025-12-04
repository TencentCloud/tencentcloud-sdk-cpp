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

#include <tencentcloud/dts/v20211206/model/OpFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

OpFilter::OpFilter() :
    m_opTypesHasBeenSet(false),
    m_ddlOptionsHasBeenSet(false)
{
}

CoreInternalOutcome OpFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OpTypes") && !value["OpTypes"].IsNull())
    {
        if (!value["OpTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OpFilter.OpTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["OpTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_opTypes.push_back((*itr).GetString());
        }
        m_opTypesHasBeenSet = true;
    }

    if (value.HasMember("DdlOptions") && !value["DdlOptions"].IsNull())
    {
        if (!value["DdlOptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OpFilter.DdlOptions` is not array type"));

        const rapidjson::Value &tmpValue = value["DdlOptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DdlOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ddlOptions.push_back(item);
        }
        m_ddlOptionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_opTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_opTypes.begin(); itr != m_opTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ddlOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DdlOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ddlOptions.begin(); itr != m_ddlOptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<string> OpFilter::GetOpTypes() const
{
    return m_opTypes;
}

void OpFilter::SetOpTypes(const vector<string>& _opTypes)
{
    m_opTypes = _opTypes;
    m_opTypesHasBeenSet = true;
}

bool OpFilter::OpTypesHasBeenSet() const
{
    return m_opTypesHasBeenSet;
}

vector<DdlOption> OpFilter::GetDdlOptions() const
{
    return m_ddlOptions;
}

void OpFilter::SetDdlOptions(const vector<DdlOption>& _ddlOptions)
{
    m_ddlOptions = _ddlOptions;
    m_ddlOptionsHasBeenSet = true;
}

bool OpFilter::DdlOptionsHasBeenSet() const
{
    return m_ddlOptionsHasBeenSet;
}

