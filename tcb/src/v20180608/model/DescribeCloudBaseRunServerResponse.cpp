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

#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseRunServerResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeCloudBaseRunServerResponse::DescribeCloudBaseRunServerResponse() :
    m_totalCountHasBeenSet(false),
    m_versionItemsHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_isPublicHasBeenSet(false),
    m_imageRepoHasBeenSet(false),
    m_trafficTypeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_tagHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCloudBaseRunServerResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("VersionItems") && !rsp["VersionItems"].IsNull())
    {
        if (!rsp["VersionItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VersionItems` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VersionItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudBaseRunServerVersionItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_versionItems.push_back(item);
        }
        m_versionItemsHasBeenSet = true;
    }

    if (rsp.HasMember("ServerName") && !rsp["ServerName"].IsNull())
    {
        if (!rsp["ServerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverName = string(rsp["ServerName"].GetString());
        m_serverNameHasBeenSet = true;
    }

    if (rsp.HasMember("IsPublic") && !rsp["IsPublic"].IsNull())
    {
        if (!rsp["IsPublic"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsPublic` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPublic = rsp["IsPublic"].GetBool();
        m_isPublicHasBeenSet = true;
    }

    if (rsp.HasMember("ImageRepo") && !rsp["ImageRepo"].IsNull())
    {
        if (!rsp["ImageRepo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageRepo = string(rsp["ImageRepo"].GetString());
        m_imageRepoHasBeenSet = true;
    }

    if (rsp.HasMember("TrafficType") && !rsp["TrafficType"].IsNull())
    {
        if (!rsp["TrafficType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficType = string(rsp["TrafficType"].GetString());
        m_trafficTypeHasBeenSet = true;
    }

    if (rsp.HasMember("SourceType") && !rsp["SourceType"].IsNull())
    {
        if (!rsp["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(rsp["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string DescribeCloudBaseRunServerResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_versionItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_versionItems.begin(); itr != m_versionItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_serverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverName.c_str(), allocator).Move(), allocator);
    }

    if (m_isPublicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPublic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPublic, allocator);
    }

    if (m_imageRepoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRepo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageRepo.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trafficType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
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


int64_t DescribeCloudBaseRunServerResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeCloudBaseRunServerResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<CloudBaseRunServerVersionItem> DescribeCloudBaseRunServerResponse::GetVersionItems() const
{
    return m_versionItems;
}

bool DescribeCloudBaseRunServerResponse::VersionItemsHasBeenSet() const
{
    return m_versionItemsHasBeenSet;
}

string DescribeCloudBaseRunServerResponse::GetServerName() const
{
    return m_serverName;
}

bool DescribeCloudBaseRunServerResponse::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

bool DescribeCloudBaseRunServerResponse::GetIsPublic() const
{
    return m_isPublic;
}

bool DescribeCloudBaseRunServerResponse::IsPublicHasBeenSet() const
{
    return m_isPublicHasBeenSet;
}

string DescribeCloudBaseRunServerResponse::GetImageRepo() const
{
    return m_imageRepo;
}

bool DescribeCloudBaseRunServerResponse::ImageRepoHasBeenSet() const
{
    return m_imageRepoHasBeenSet;
}

string DescribeCloudBaseRunServerResponse::GetTrafficType() const
{
    return m_trafficType;
}

bool DescribeCloudBaseRunServerResponse::TrafficTypeHasBeenSet() const
{
    return m_trafficTypeHasBeenSet;
}

string DescribeCloudBaseRunServerResponse::GetSourceType() const
{
    return m_sourceType;
}

bool DescribeCloudBaseRunServerResponse::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string DescribeCloudBaseRunServerResponse::GetTag() const
{
    return m_tag;
}

bool DescribeCloudBaseRunServerResponse::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}


