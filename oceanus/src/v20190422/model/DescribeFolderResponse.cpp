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

#include <tencentcloud/oceanus/v20190422/model/DescribeFolderResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

DescribeFolderResponse::DescribeFolderResponse() :
    m_folderIdHasBeenSet(false),
    m_folderNameHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_folderTypeHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false),
    m_subFolderInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeFolderResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FolderId") && !rsp["FolderId"].IsNull())
    {
        if (!rsp["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(rsp["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (rsp.HasMember("FolderName") && !rsp["FolderName"].IsNull())
    {
        if (!rsp["FolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderName = string(rsp["FolderName"].GetString());
        m_folderNameHasBeenSet = true;
    }

    if (rsp.HasMember("ParentId") && !rsp["ParentId"].IsNull())
    {
        if (!rsp["ParentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = string(rsp["ParentId"].GetString());
        m_parentIdHasBeenSet = true;
    }

    if (rsp.HasMember("FolderType") && !rsp["FolderType"].IsNull())
    {
        if (!rsp["FolderType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FolderType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_folderType = rsp["FolderType"].GetInt64();
        m_folderTypeHasBeenSet = true;
    }

    if (rsp.HasMember("WorkSpaceId") && !rsp["WorkSpaceId"].IsNull())
    {
        if (!rsp["WorkSpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkSpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workSpaceId = string(rsp["WorkSpaceId"].GetString());
        m_workSpaceIdHasBeenSet = true;
    }

    if (rsp.HasMember("SubFolderInfo") && !rsp["SubFolderInfo"].IsNull())
    {
        if (!rsp["SubFolderInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubFolderInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SubFolderInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SubFolderInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subFolderInfo.push_back(item);
        }
        m_subFolderInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeFolderResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_folderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderName.c_str(), allocator).Move(), allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentId.c_str(), allocator).Move(), allocator);
    }

    if (m_folderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_folderType, allocator);
    }

    if (m_workSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workSpaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_subFolderInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubFolderInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subFolderInfo.begin(); itr != m_subFolderInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string DescribeFolderResponse::GetFolderId() const
{
    return m_folderId;
}

bool DescribeFolderResponse::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string DescribeFolderResponse::GetFolderName() const
{
    return m_folderName;
}

bool DescribeFolderResponse::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

string DescribeFolderResponse::GetParentId() const
{
    return m_parentId;
}

bool DescribeFolderResponse::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

int64_t DescribeFolderResponse::GetFolderType() const
{
    return m_folderType;
}

bool DescribeFolderResponse::FolderTypeHasBeenSet() const
{
    return m_folderTypeHasBeenSet;
}

string DescribeFolderResponse::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

bool DescribeFolderResponse::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}

vector<SubFolderInfo> DescribeFolderResponse::GetSubFolderInfo() const
{
    return m_subFolderInfo;
}

bool DescribeFolderResponse::SubFolderInfoHasBeenSet() const
{
    return m_subFolderInfoHasBeenSet;
}


