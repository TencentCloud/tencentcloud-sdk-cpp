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

#include <tencentcloud/mrs/v20200910/model/Check.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Check::Check() :
    m_descHasBeenSet(false),
    m_summaryHasBeenSet(false)
{
}

CoreInternalOutcome Check::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Check.Desc` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_desc.Deserialize(value["Desc"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_descHasBeenSet = true;
    }

    if (value.HasMember("Summary") && !value["Summary"].IsNull())
    {
        if (!value["Summary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Check.Summary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_summary.Deserialize(value["Summary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_summaryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Check::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_desc.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_summaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Summary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_summary.ToJsonObject(value[key.c_str()], allocator);
    }

}


Desc Check::GetDesc() const
{
    return m_desc;
}

void Check::SetDesc(const Desc& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool Check::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

Summary Check::GetSummary() const
{
    return m_summary;
}

void Check::SetSummary(const Summary& _summary)
{
    m_summary = _summary;
    m_summaryHasBeenSet = true;
}

bool Check::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

