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

#include <tencentcloud/iai/v20200303/model/GetGroupInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

GetGroupInfoResponse::GetGroupInfoResponse() :
    m_groupNameHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupExDescriptionsHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_faceModelVersionHasBeenSet(false),
    m_creationTimestampHasBeenSet(false)
{
}

CoreInternalOutcome GetGroupInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("GroupName") && !rsp["GroupName"].IsNull())
    {
        if (!rsp["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(rsp["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (rsp.HasMember("GroupId") && !rsp["GroupId"].IsNull())
    {
        if (!rsp["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(rsp["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (rsp.HasMember("GroupExDescriptions") && !rsp["GroupExDescriptions"].IsNull())
    {
        if (!rsp["GroupExDescriptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupExDescriptions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["GroupExDescriptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groupExDescriptions.push_back((*itr).GetString());
        }
        m_groupExDescriptionsHasBeenSet = true;
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

    if (rsp.HasMember("FaceModelVersion") && !rsp["FaceModelVersion"].IsNull())
    {
        if (!rsp["FaceModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faceModelVersion = string(rsp["FaceModelVersion"].GetString());
        m_faceModelVersionHasBeenSet = true;
    }

    if (rsp.HasMember("CreationTimestamp") && !rsp["CreationTimestamp"].IsNull())
    {
        if (!rsp["CreationTimestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreationTimestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_creationTimestamp = rsp["CreationTimestamp"].GetUint64();
        m_creationTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetGroupInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupExDescriptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupExDescriptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupExDescriptions.begin(); itr != m_groupExDescriptions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_faceModelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_faceModelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creationTimestamp, allocator);
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


string GetGroupInfoResponse::GetGroupName() const
{
    return m_groupName;
}

bool GetGroupInfoResponse::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string GetGroupInfoResponse::GetGroupId() const
{
    return m_groupId;
}

bool GetGroupInfoResponse::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

vector<string> GetGroupInfoResponse::GetGroupExDescriptions() const
{
    return m_groupExDescriptions;
}

bool GetGroupInfoResponse::GroupExDescriptionsHasBeenSet() const
{
    return m_groupExDescriptionsHasBeenSet;
}

string GetGroupInfoResponse::GetTag() const
{
    return m_tag;
}

bool GetGroupInfoResponse::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string GetGroupInfoResponse::GetFaceModelVersion() const
{
    return m_faceModelVersion;
}

bool GetGroupInfoResponse::FaceModelVersionHasBeenSet() const
{
    return m_faceModelVersionHasBeenSet;
}

uint64_t GetGroupInfoResponse::GetCreationTimestamp() const
{
    return m_creationTimestamp;
}

bool GetGroupInfoResponse::CreationTimestampHasBeenSet() const
{
    return m_creationTimestampHasBeenSet;
}


