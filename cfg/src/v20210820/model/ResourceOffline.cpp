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

#include <tencentcloud/cfg/v20210820/model/ResourceOffline.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

ResourceOffline::ResourceOffline() :
    m_resourceIdHasBeenSet(false),
    m_resourceDeleteTimeHasBeenSet(false),
    m_resourceDeleteMessageHasBeenSet(false)
{
}

CoreInternalOutcome ResourceOffline::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceOffline.ResourceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = value["ResourceId"].GetInt64();
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceDeleteTime") && !value["ResourceDeleteTime"].IsNull())
    {
        if (!value["ResourceDeleteTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceOffline.ResourceDeleteTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceDeleteTime = string(value["ResourceDeleteTime"].GetString());
        m_resourceDeleteTimeHasBeenSet = true;
    }

    if (value.HasMember("ResourceDeleteMessage") && !value["ResourceDeleteMessage"].IsNull())
    {
        if (!value["ResourceDeleteMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceOffline.ResourceDeleteMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceDeleteMessage = string(value["ResourceDeleteMessage"].GetString());
        m_resourceDeleteMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceOffline::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceId, allocator);
    }

    if (m_resourceDeleteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceDeleteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceDeleteTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceDeleteMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceDeleteMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceDeleteMessage.c_str(), allocator).Move(), allocator);
    }

}


int64_t ResourceOffline::GetResourceId() const
{
    return m_resourceId;
}

void ResourceOffline::SetResourceId(const int64_t& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ResourceOffline::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ResourceOffline::GetResourceDeleteTime() const
{
    return m_resourceDeleteTime;
}

void ResourceOffline::SetResourceDeleteTime(const string& _resourceDeleteTime)
{
    m_resourceDeleteTime = _resourceDeleteTime;
    m_resourceDeleteTimeHasBeenSet = true;
}

bool ResourceOffline::ResourceDeleteTimeHasBeenSet() const
{
    return m_resourceDeleteTimeHasBeenSet;
}

string ResourceOffline::GetResourceDeleteMessage() const
{
    return m_resourceDeleteMessage;
}

void ResourceOffline::SetResourceDeleteMessage(const string& _resourceDeleteMessage)
{
    m_resourceDeleteMessage = _resourceDeleteMessage;
    m_resourceDeleteMessageHasBeenSet = true;
}

bool ResourceOffline::ResourceDeleteMessageHasBeenSet() const
{
    return m_resourceDeleteMessageHasBeenSet;
}

