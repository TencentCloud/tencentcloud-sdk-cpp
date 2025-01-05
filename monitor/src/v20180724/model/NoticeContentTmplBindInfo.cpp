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

#include <tencentcloud/monitor/v20180724/model/NoticeContentTmplBindInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

NoticeContentTmplBindInfo::NoticeContentTmplBindInfo() :
    m_contentTmplIDHasBeenSet(false),
    m_noticeIDHasBeenSet(false)
{
}

CoreInternalOutcome NoticeContentTmplBindInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContentTmplID") && !value["ContentTmplID"].IsNull())
    {
        if (!value["ContentTmplID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContentTmplBindInfo.ContentTmplID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentTmplID = string(value["ContentTmplID"].GetString());
        m_contentTmplIDHasBeenSet = true;
    }

    if (value.HasMember("NoticeID") && !value["NoticeID"].IsNull())
    {
        if (!value["NoticeID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContentTmplBindInfo.NoticeID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_noticeID = string(value["NoticeID"].GetString());
        m_noticeIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NoticeContentTmplBindInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentTmplIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentTmplID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentTmplID.c_str(), allocator).Move(), allocator);
    }

    if (m_noticeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_noticeID.c_str(), allocator).Move(), allocator);
    }

}


string NoticeContentTmplBindInfo::GetContentTmplID() const
{
    return m_contentTmplID;
}

void NoticeContentTmplBindInfo::SetContentTmplID(const string& _contentTmplID)
{
    m_contentTmplID = _contentTmplID;
    m_contentTmplIDHasBeenSet = true;
}

bool NoticeContentTmplBindInfo::ContentTmplIDHasBeenSet() const
{
    return m_contentTmplIDHasBeenSet;
}

string NoticeContentTmplBindInfo::GetNoticeID() const
{
    return m_noticeID;
}

void NoticeContentTmplBindInfo::SetNoticeID(const string& _noticeID)
{
    m_noticeID = _noticeID;
    m_noticeIDHasBeenSet = true;
}

bool NoticeContentTmplBindInfo::NoticeIDHasBeenSet() const
{
    return m_noticeIDHasBeenSet;
}

