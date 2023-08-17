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

#include <tencentcloud/faceid/v20180301/model/IntentionActionResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

IntentionActionResult::IntentionActionResult() :
    m_finalResultDetailCodeHasBeenSet(false),
    m_finalResultMessageHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

CoreInternalOutcome IntentionActionResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FinalResultDetailCode") && !value["FinalResultDetailCode"].IsNull())
    {
        if (!value["FinalResultDetailCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntentionActionResult.FinalResultDetailCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_finalResultDetailCode = value["FinalResultDetailCode"].GetInt64();
        m_finalResultDetailCodeHasBeenSet = true;
    }

    if (value.HasMember("FinalResultMessage") && !value["FinalResultMessage"].IsNull())
    {
        if (!value["FinalResultMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntentionActionResult.FinalResultMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finalResultMessage = string(value["FinalResultMessage"].GetString());
        m_finalResultMessageHasBeenSet = true;
    }

    if (value.HasMember("Details") && !value["Details"].IsNull())
    {
        if (!value["Details"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntentionActionResult.Details` is not array type"));

        const rapidjson::Value &tmpValue = value["Details"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IntentionActionResultDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_details.push_back(item);
        }
        m_detailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntentionActionResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_finalResultDetailCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinalResultDetailCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_finalResultDetailCode, allocator);
    }

    if (m_finalResultMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinalResultMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finalResultMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_detailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Details";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_details.begin(); itr != m_details.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t IntentionActionResult::GetFinalResultDetailCode() const
{
    return m_finalResultDetailCode;
}

void IntentionActionResult::SetFinalResultDetailCode(const int64_t& _finalResultDetailCode)
{
    m_finalResultDetailCode = _finalResultDetailCode;
    m_finalResultDetailCodeHasBeenSet = true;
}

bool IntentionActionResult::FinalResultDetailCodeHasBeenSet() const
{
    return m_finalResultDetailCodeHasBeenSet;
}

string IntentionActionResult::GetFinalResultMessage() const
{
    return m_finalResultMessage;
}

void IntentionActionResult::SetFinalResultMessage(const string& _finalResultMessage)
{
    m_finalResultMessage = _finalResultMessage;
    m_finalResultMessageHasBeenSet = true;
}

bool IntentionActionResult::FinalResultMessageHasBeenSet() const
{
    return m_finalResultMessageHasBeenSet;
}

vector<IntentionActionResultDetail> IntentionActionResult::GetDetails() const
{
    return m_details;
}

void IntentionActionResult::SetDetails(const vector<IntentionActionResultDetail>& _details)
{
    m_details = _details;
    m_detailsHasBeenSet = true;
}

bool IntentionActionResult::DetailsHasBeenSet() const
{
    return m_detailsHasBeenSet;
}

