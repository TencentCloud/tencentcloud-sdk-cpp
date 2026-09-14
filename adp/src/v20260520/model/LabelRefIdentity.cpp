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

#include <tencentcloud/adp/v20260520/model/LabelRefIdentity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

LabelRefIdentity::LabelRefIdentity() :
    m_labelIdHasBeenSet(false),
    m_labelTermIdListHasBeenSet(false)
{
}

CoreInternalOutcome LabelRefIdentity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LabelId") && !value["LabelId"].IsNull())
    {
        if (!value["LabelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelRefIdentity.LabelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelId = string(value["LabelId"].GetString());
        m_labelIdHasBeenSet = true;
    }

    if (value.HasMember("LabelTermIdList") && !value["LabelTermIdList"].IsNull())
    {
        if (!value["LabelTermIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LabelRefIdentity.LabelTermIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelTermIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labelTermIdList.push_back((*itr).GetString());
        }
        m_labelTermIdListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LabelRefIdentity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelId.c_str(), allocator).Move(), allocator);
    }

    if (m_labelTermIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelTermIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelTermIdList.begin(); itr != m_labelTermIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string LabelRefIdentity::GetLabelId() const
{
    return m_labelId;
}

void LabelRefIdentity::SetLabelId(const string& _labelId)
{
    m_labelId = _labelId;
    m_labelIdHasBeenSet = true;
}

bool LabelRefIdentity::LabelIdHasBeenSet() const
{
    return m_labelIdHasBeenSet;
}

vector<string> LabelRefIdentity::GetLabelTermIdList() const
{
    return m_labelTermIdList;
}

void LabelRefIdentity::SetLabelTermIdList(const vector<string>& _labelTermIdList)
{
    m_labelTermIdList = _labelTermIdList;
    m_labelTermIdListHasBeenSet = true;
}

bool LabelRefIdentity::LabelTermIdListHasBeenSet() const
{
    return m_labelTermIdListHasBeenSet;
}

