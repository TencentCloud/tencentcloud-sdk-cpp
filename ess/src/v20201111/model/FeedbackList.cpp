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

#include <tencentcloud/ess/v20201111/model/FeedbackList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

FeedbackList::FeedbackList() :
    m_idHasBeenSet(false),
    m_infoHasBeenSet(false)
{
}

CoreInternalOutcome FeedbackList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedbackList.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Info") && !value["Info"].IsNull())
    {
        if (!value["Info"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FeedbackList.Info` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_info.Deserialize(value["Info"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_infoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FeedbackList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_infoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Info";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_info.ToJsonObject(value[key.c_str()], allocator);
    }

}


string FeedbackList::GetId() const
{
    return m_id;
}

void FeedbackList::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool FeedbackList::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

FeedbackInfo FeedbackList::GetInfo() const
{
    return m_info;
}

void FeedbackList::SetInfo(const FeedbackInfo& _info)
{
    m_info = _info;
    m_infoHasBeenSet = true;
}

bool FeedbackList::InfoHasBeenSet() const
{
    return m_infoHasBeenSet;
}

