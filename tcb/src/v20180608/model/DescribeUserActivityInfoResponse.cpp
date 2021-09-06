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

#include <tencentcloud/tcb/v20180608/model/DescribeUserActivityInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeUserActivityInfoResponse::DescribeUserActivityInfoResponse() :
    m_tagHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_activityTimeLeftHasBeenSet(false),
    m_groupTimeLeftHasBeenSet(false),
    m_nickNameListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUserActivityInfoResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Tag") && !rsp["Tag"].IsNull())
    {
        if (!rsp["Tag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(rsp["Tag"].GetString());
        m_tagHasBeenSet = true;
    }

    if (rsp.HasMember("Notes") && !rsp["Notes"].IsNull())
    {
        if (!rsp["Notes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Notes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notes = string(rsp["Notes"].GetString());
        m_notesHasBeenSet = true;
    }

    if (rsp.HasMember("ActivityTimeLeft") && !rsp["ActivityTimeLeft"].IsNull())
    {
        if (!rsp["ActivityTimeLeft"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityTimeLeft` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activityTimeLeft = rsp["ActivityTimeLeft"].GetInt64();
        m_activityTimeLeftHasBeenSet = true;
    }

    if (rsp.HasMember("GroupTimeLeft") && !rsp["GroupTimeLeft"].IsNull())
    {
        if (!rsp["GroupTimeLeft"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupTimeLeft` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupTimeLeft = rsp["GroupTimeLeft"].GetInt64();
        m_groupTimeLeftHasBeenSet = true;
    }

    if (rsp.HasMember("NickNameList") && !rsp["NickNameList"].IsNull())
    {
        if (!rsp["NickNameList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NickNameList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickNameList = string(rsp["NickNameList"].GetString());
        m_nickNameListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUserActivityInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_notesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notes.c_str(), allocator).Move(), allocator);
    }

    if (m_activityTimeLeftHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityTimeLeft";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activityTimeLeft, allocator);
    }

    if (m_groupTimeLeftHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupTimeLeft";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupTimeLeft, allocator);
    }

    if (m_nickNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickNameList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickNameList.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeUserActivityInfoResponse::GetTag() const
{
    return m_tag;
}

bool DescribeUserActivityInfoResponse::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string DescribeUserActivityInfoResponse::GetNotes() const
{
    return m_notes;
}

bool DescribeUserActivityInfoResponse::NotesHasBeenSet() const
{
    return m_notesHasBeenSet;
}

int64_t DescribeUserActivityInfoResponse::GetActivityTimeLeft() const
{
    return m_activityTimeLeft;
}

bool DescribeUserActivityInfoResponse::ActivityTimeLeftHasBeenSet() const
{
    return m_activityTimeLeftHasBeenSet;
}

int64_t DescribeUserActivityInfoResponse::GetGroupTimeLeft() const
{
    return m_groupTimeLeft;
}

bool DescribeUserActivityInfoResponse::GroupTimeLeftHasBeenSet() const
{
    return m_groupTimeLeftHasBeenSet;
}

string DescribeUserActivityInfoResponse::GetNickNameList() const
{
    return m_nickNameList;
}

bool DescribeUserActivityInfoResponse::NickNameListHasBeenSet() const
{
    return m_nickNameListHasBeenSet;
}


