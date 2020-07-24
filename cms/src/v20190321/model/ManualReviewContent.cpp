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

#include <tencentcloud/cms/v20190321/model/ManualReviewContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace rapidjson;
using namespace std;

ManualReviewContent::ManualReviewContent() :
    m_batchIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_contentIdHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_userInfoHasBeenSet(false),
    m_autoDetailCodeHasBeenSet(false),
    m_autoResultHasBeenSet(false),
    m_callBackInfoHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

CoreInternalOutcome ManualReviewContent::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("BatchId") && !value["BatchId"].IsNull())
    {
        if (!value["BatchId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ManualReviewContent.BatchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchId = string(value["BatchId"].GetString());
        m_batchIdHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Error("response `ManualReviewContent.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("ContentId") && !value["ContentId"].IsNull())
    {
        if (!value["ContentId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ManualReviewContent.ContentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentId = string(value["ContentId"].GetString());
        m_contentIdHasBeenSet = true;
    }

    if (value.HasMember("ContentType") && !value["ContentType"].IsNull())
    {
        if (!value["ContentType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ManualReviewContent.ContentType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_contentType = value["ContentType"].GetInt64();
        m_contentTypeHasBeenSet = true;
    }

    if (value.HasMember("UserInfo") && !value["UserInfo"].IsNull())
    {
        if (!value["UserInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ManualReviewContent.UserInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userInfo.Deserialize(value["UserInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userInfoHasBeenSet = true;
    }

    if (value.HasMember("AutoDetailCode") && !value["AutoDetailCode"].IsNull())
    {
        if (!value["AutoDetailCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ManualReviewContent.AutoDetailCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoDetailCode = value["AutoDetailCode"].GetInt64();
        m_autoDetailCodeHasBeenSet = true;
    }

    if (value.HasMember("AutoResult") && !value["AutoResult"].IsNull())
    {
        if (!value["AutoResult"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ManualReviewContent.AutoResult` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoResult = value["AutoResult"].GetInt64();
        m_autoResultHasBeenSet = true;
    }

    if (value.HasMember("CallBackInfo") && !value["CallBackInfo"].IsNull())
    {
        if (!value["CallBackInfo"].IsString())
        {
            return CoreInternalOutcome(Error("response `ManualReviewContent.CallBackInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callBackInfo = string(value["CallBackInfo"].GetString());
        m_callBackInfoHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ManualReviewContent.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ManualReviewContent.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Error("response `ManualReviewContent.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ManualReviewContent::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_batchIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_contentIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ContentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_contentId.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contentType, allocator);
    }

    if (m_userInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_userInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_autoDetailCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoDetailCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoDetailCode, allocator);
    }

    if (m_autoResultHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoResult, allocator);
    }

    if (m_callBackInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CallBackInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_callBackInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_titleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_title.c_str(), allocator).Move(), allocator);
    }

}


string ManualReviewContent::GetBatchId() const
{
    return m_batchId;
}

void ManualReviewContent::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool ManualReviewContent::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

string ManualReviewContent::GetContent() const
{
    return m_content;
}

void ManualReviewContent::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ManualReviewContent::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string ManualReviewContent::GetContentId() const
{
    return m_contentId;
}

void ManualReviewContent::SetContentId(const string& _contentId)
{
    m_contentId = _contentId;
    m_contentIdHasBeenSet = true;
}

bool ManualReviewContent::ContentIdHasBeenSet() const
{
    return m_contentIdHasBeenSet;
}

int64_t ManualReviewContent::GetContentType() const
{
    return m_contentType;
}

void ManualReviewContent::SetContentType(const int64_t& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool ManualReviewContent::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

User ManualReviewContent::GetUserInfo() const
{
    return m_userInfo;
}

void ManualReviewContent::SetUserInfo(const User& _userInfo)
{
    m_userInfo = _userInfo;
    m_userInfoHasBeenSet = true;
}

bool ManualReviewContent::UserInfoHasBeenSet() const
{
    return m_userInfoHasBeenSet;
}

int64_t ManualReviewContent::GetAutoDetailCode() const
{
    return m_autoDetailCode;
}

void ManualReviewContent::SetAutoDetailCode(const int64_t& _autoDetailCode)
{
    m_autoDetailCode = _autoDetailCode;
    m_autoDetailCodeHasBeenSet = true;
}

bool ManualReviewContent::AutoDetailCodeHasBeenSet() const
{
    return m_autoDetailCodeHasBeenSet;
}

int64_t ManualReviewContent::GetAutoResult() const
{
    return m_autoResult;
}

void ManualReviewContent::SetAutoResult(const int64_t& _autoResult)
{
    m_autoResult = _autoResult;
    m_autoResultHasBeenSet = true;
}

bool ManualReviewContent::AutoResultHasBeenSet() const
{
    return m_autoResultHasBeenSet;
}

string ManualReviewContent::GetCallBackInfo() const
{
    return m_callBackInfo;
}

void ManualReviewContent::SetCallBackInfo(const string& _callBackInfo)
{
    m_callBackInfo = _callBackInfo;
    m_callBackInfoHasBeenSet = true;
}

bool ManualReviewContent::CallBackInfoHasBeenSet() const
{
    return m_callBackInfoHasBeenSet;
}

string ManualReviewContent::GetCreateTime() const
{
    return m_createTime;
}

void ManualReviewContent::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ManualReviewContent::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t ManualReviewContent::GetPriority() const
{
    return m_priority;
}

void ManualReviewContent::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool ManualReviewContent::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string ManualReviewContent::GetTitle() const
{
    return m_title;
}

void ManualReviewContent::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool ManualReviewContent::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

