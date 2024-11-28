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

#include <tencentcloud/config/v20220802/model/DescribeDiscoveredResourceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

DescribeDiscoveredResourceResponse::DescribeDiscoveredResourceResponse() :
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceZoneHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_resourceCreateTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDiscoveredResourceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ResourceId") && !rsp["ResourceId"].IsNull())
    {
        if (!rsp["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(rsp["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceType") && !rsp["ResourceType"].IsNull())
    {
        if (!rsp["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(rsp["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceName") && !rsp["ResourceName"].IsNull())
    {
        if (!rsp["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(rsp["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceRegion") && !rsp["ResourceRegion"].IsNull())
    {
        if (!rsp["ResourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceRegion = string(rsp["ResourceRegion"].GetString());
        m_resourceRegionHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceZone") && !rsp["ResourceZone"].IsNull())
    {
        if (!rsp["ResourceZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceZone = string(rsp["ResourceZone"].GetString());
        m_resourceZoneHasBeenSet = true;
    }

    if (rsp.HasMember("Configuration") && !rsp["Configuration"].IsNull())
    {
        if (!rsp["Configuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Configuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configuration = string(rsp["Configuration"].GetString());
        m_configurationHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceCreateTime") && !rsp["ResourceCreateTime"].IsNull())
    {
        if (!rsp["ResourceCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceCreateTime = string(rsp["ResourceCreateTime"].GetString());
        m_resourceCreateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDiscoveredResourceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceZone.c_str(), allocator).Move(), allocator);
    }

    if (m_configurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Configuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configuration.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
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


string DescribeDiscoveredResourceResponse::GetResourceId() const
{
    return m_resourceId;
}

bool DescribeDiscoveredResourceResponse::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DescribeDiscoveredResourceResponse::GetResourceType() const
{
    return m_resourceType;
}

bool DescribeDiscoveredResourceResponse::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string DescribeDiscoveredResourceResponse::GetResourceName() const
{
    return m_resourceName;
}

bool DescribeDiscoveredResourceResponse::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string DescribeDiscoveredResourceResponse::GetResourceRegion() const
{
    return m_resourceRegion;
}

bool DescribeDiscoveredResourceResponse::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

string DescribeDiscoveredResourceResponse::GetResourceZone() const
{
    return m_resourceZone;
}

bool DescribeDiscoveredResourceResponse::ResourceZoneHasBeenSet() const
{
    return m_resourceZoneHasBeenSet;
}

string DescribeDiscoveredResourceResponse::GetConfiguration() const
{
    return m_configuration;
}

bool DescribeDiscoveredResourceResponse::ConfigurationHasBeenSet() const
{
    return m_configurationHasBeenSet;
}

string DescribeDiscoveredResourceResponse::GetResourceCreateTime() const
{
    return m_resourceCreateTime;
}

bool DescribeDiscoveredResourceResponse::ResourceCreateTimeHasBeenSet() const
{
    return m_resourceCreateTimeHasBeenSet;
}

vector<Tag> DescribeDiscoveredResourceResponse::GetTags() const
{
    return m_tags;
}

bool DescribeDiscoveredResourceResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string DescribeDiscoveredResourceResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeDiscoveredResourceResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}


