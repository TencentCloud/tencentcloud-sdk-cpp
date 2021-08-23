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

#include <tencentcloud/sslpod/v20190605/model/NoticeInfoResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sslpod::V20190605::Model;
using namespace std;

NoticeInfoResult::NoticeInfoResult() :
    m_idHasBeenSet(false),
    m_noticeTypeHasBeenSet(false),
    m_limitInfosHasBeenSet(false)
{
}

CoreInternalOutcome NoticeInfoResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeInfoResult.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("NoticeType") && !value["NoticeType"].IsNull())
    {
        if (!value["NoticeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeInfoResult.NoticeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_noticeType = value["NoticeType"].GetInt64();
        m_noticeTypeHasBeenSet = true;
    }

    if (value.HasMember("LimitInfos") && !value["LimitInfos"].IsNull())
    {
        if (!value["LimitInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NoticeInfoResult.LimitInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["LimitInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LimitInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_limitInfos.push_back(item);
        }
        m_limitInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NoticeInfoResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_noticeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noticeType, allocator);
    }

    if (m_limitInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_limitInfos.begin(); itr != m_limitInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t NoticeInfoResult::GetId() const
{
    return m_id;
}

void NoticeInfoResult::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool NoticeInfoResult::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t NoticeInfoResult::GetNoticeType() const
{
    return m_noticeType;
}

void NoticeInfoResult::SetNoticeType(const int64_t& _noticeType)
{
    m_noticeType = _noticeType;
    m_noticeTypeHasBeenSet = true;
}

bool NoticeInfoResult::NoticeTypeHasBeenSet() const
{
    return m_noticeTypeHasBeenSet;
}

vector<LimitInfo> NoticeInfoResult::GetLimitInfos() const
{
    return m_limitInfos;
}

void NoticeInfoResult::SetLimitInfos(const vector<LimitInfo>& _limitInfos)
{
    m_limitInfos = _limitInfos;
    m_limitInfosHasBeenSet = true;
}

bool NoticeInfoResult::LimitInfosHasBeenSet() const
{
    return m_limitInfosHasBeenSet;
}

