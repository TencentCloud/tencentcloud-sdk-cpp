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

#include <tencentcloud/monitor/v20180724/model/AlarmHierarchicalNotice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

AlarmHierarchicalNotice::AlarmHierarchicalNotice() :
    m_noticeIdHasBeenSet(false),
    m_classificationHasBeenSet(false),
    m_policyIdHasBeenSet(false)
{
}

CoreInternalOutcome AlarmHierarchicalNotice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NoticeId") && !value["NoticeId"].IsNull())
    {
        if (!value["NoticeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHierarchicalNotice.NoticeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_noticeId = string(value["NoticeId"].GetString());
        m_noticeIdHasBeenSet = true;
    }

    if (value.HasMember("Classification") && !value["Classification"].IsNull())
    {
        if (!value["Classification"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmHierarchicalNotice.Classification` is not array type"));

        const rapidjson::Value &tmpValue = value["Classification"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_classification.push_back((*itr).GetString());
        }
        m_classificationHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHierarchicalNotice.PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(value["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmHierarchicalNotice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_noticeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_noticeId.c_str(), allocator).Move(), allocator);
    }

    if (m_classificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Classification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_classification.begin(); itr != m_classification.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

}


string AlarmHierarchicalNotice::GetNoticeId() const
{
    return m_noticeId;
}

void AlarmHierarchicalNotice::SetNoticeId(const string& _noticeId)
{
    m_noticeId = _noticeId;
    m_noticeIdHasBeenSet = true;
}

bool AlarmHierarchicalNotice::NoticeIdHasBeenSet() const
{
    return m_noticeIdHasBeenSet;
}

vector<string> AlarmHierarchicalNotice::GetClassification() const
{
    return m_classification;
}

void AlarmHierarchicalNotice::SetClassification(const vector<string>& _classification)
{
    m_classification = _classification;
    m_classificationHasBeenSet = true;
}

bool AlarmHierarchicalNotice::ClassificationHasBeenSet() const
{
    return m_classificationHasBeenSet;
}

string AlarmHierarchicalNotice::GetPolicyId() const
{
    return m_policyId;
}

void AlarmHierarchicalNotice::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool AlarmHierarchicalNotice::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

