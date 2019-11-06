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

#include <tencentcloud/cms/v20190321/model/CodeDetect.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace rapidjson;
using namespace std;

CodeDetect::CodeDetect() :
    m_moderationDetailHasBeenSet(false),
    m_moderationCodeHasBeenSet(false)
{
}

CoreInternalOutcome CodeDetect::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ModerationDetail") && !value["ModerationDetail"].IsNull())
    {
        if (!value["ModerationDetail"].IsArray())
            return CoreInternalOutcome(Error("response `CodeDetect.ModerationDetail` is not array type"));

        const Value &tmpValue = value["ModerationDetail"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CodeDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_moderationDetail.push_back(item);
        }
        m_moderationDetailHasBeenSet = true;
    }

    if (value.HasMember("ModerationCode") && !value["ModerationCode"].IsNull())
    {
        if (!value["ModerationCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CodeDetect.ModerationCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_moderationCode = value["ModerationCode"].GetInt64();
        m_moderationCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CodeDetect::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_moderationDetailHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModerationDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_moderationDetail.begin(); itr != m_moderationDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_moderationCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModerationCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_moderationCode, allocator);
    }

}


vector<CodeDetail> CodeDetect::GetModerationDetail() const
{
    return m_moderationDetail;
}

void CodeDetect::SetModerationDetail(const vector<CodeDetail>& _moderationDetail)
{
    m_moderationDetail = _moderationDetail;
    m_moderationDetailHasBeenSet = true;
}

bool CodeDetect::ModerationDetailHasBeenSet() const
{
    return m_moderationDetailHasBeenSet;
}

int64_t CodeDetect::GetModerationCode() const
{
    return m_moderationCode;
}

void CodeDetect::SetModerationCode(const int64_t& _moderationCode)
{
    m_moderationCode = _moderationCode;
    m_moderationCodeHasBeenSet = true;
}

bool CodeDetect::ModerationCodeHasBeenSet() const
{
    return m_moderationCodeHasBeenSet;
}

