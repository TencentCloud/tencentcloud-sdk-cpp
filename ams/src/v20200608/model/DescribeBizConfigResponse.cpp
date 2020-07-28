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

#include <tencentcloud/ams/v20200608/model/DescribeBizConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ams::V20200608::Model;
using namespace rapidjson;
using namespace std;

DescribeBizConfigResponse::DescribeBizConfigResponse() :
    m_bizTypeHasBeenSet(false),
    m_bizNameHasBeenSet(false),
    m_moderationCategoriesHasBeenSet(false),
    m_mediaModerationHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBizConfigResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("BizType") && !rsp["BizType"].IsNull())
    {
        if (!rsp["BizType"].IsString())
        {
            return CoreInternalOutcome(Error("response `BizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizType = string(rsp["BizType"].GetString());
        m_bizTypeHasBeenSet = true;
    }

    if (rsp.HasMember("BizName") && !rsp["BizName"].IsNull())
    {
        if (!rsp["BizName"].IsString())
        {
            return CoreInternalOutcome(Error("response `BizName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizName = string(rsp["BizName"].GetString());
        m_bizNameHasBeenSet = true;
    }

    if (rsp.HasMember("ModerationCategories") && !rsp["ModerationCategories"].IsNull())
    {
        if (!rsp["ModerationCategories"].IsArray())
            return CoreInternalOutcome(Error("response `ModerationCategories` is not array type"));

        const Value &tmpValue = rsp["ModerationCategories"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_moderationCategories.push_back((*itr).GetString());
        }
        m_moderationCategoriesHasBeenSet = true;
    }

    if (rsp.HasMember("MediaModeration") && !rsp["MediaModeration"].IsNull())
    {
        if (!rsp["MediaModeration"].IsObject())
        {
            return CoreInternalOutcome(Error("response `MediaModeration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mediaModeration.Deserialize(rsp["MediaModeration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mediaModerationHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedAt") && !rsp["CreatedAt"].IsNull())
    {
        if (!rsp["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(rsp["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (rsp.HasMember("UpdatedAt") && !rsp["UpdatedAt"].IsNull())
    {
        if (!rsp["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Error("response `UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(rsp["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeBizConfigResponse::GetBizType() const
{
    return m_bizType;
}

bool DescribeBizConfigResponse::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string DescribeBizConfigResponse::GetBizName() const
{
    return m_bizName;
}

bool DescribeBizConfigResponse::BizNameHasBeenSet() const
{
    return m_bizNameHasBeenSet;
}

vector<string> DescribeBizConfigResponse::GetModerationCategories() const
{
    return m_moderationCategories;
}

bool DescribeBizConfigResponse::ModerationCategoriesHasBeenSet() const
{
    return m_moderationCategoriesHasBeenSet;
}

MediaModerationConfig DescribeBizConfigResponse::GetMediaModeration() const
{
    return m_mediaModeration;
}

bool DescribeBizConfigResponse::MediaModerationHasBeenSet() const
{
    return m_mediaModerationHasBeenSet;
}

string DescribeBizConfigResponse::GetCreatedAt() const
{
    return m_createdAt;
}

bool DescribeBizConfigResponse::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string DescribeBizConfigResponse::GetUpdatedAt() const
{
    return m_updatedAt;
}

bool DescribeBizConfigResponse::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}


