/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tcb/v20180608/model/RunCommandsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

RunCommandsRequest::RunCommandsRequest() :
    m_mgoCommandsHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_mongoConnectorHasBeenSet(false)
{
}

string RunCommandsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mgoCommandsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MgoCommands";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mgoCommands.begin(); itr != m_mgoCommands.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_mongoConnectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoConnector";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mongoConnector.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<MgoCommandParam> RunCommandsRequest::GetMgoCommands() const
{
    return m_mgoCommands;
}

void RunCommandsRequest::SetMgoCommands(const vector<MgoCommandParam>& _mgoCommands)
{
    m_mgoCommands = _mgoCommands;
    m_mgoCommandsHasBeenSet = true;
}

bool RunCommandsRequest::MgoCommandsHasBeenSet() const
{
    return m_mgoCommandsHasBeenSet;
}

string RunCommandsRequest::GetTag() const
{
    return m_tag;
}

void RunCommandsRequest::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool RunCommandsRequest::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string RunCommandsRequest::GetEnvId() const
{
    return m_envId;
}

void RunCommandsRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool RunCommandsRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

MongoConnector RunCommandsRequest::GetMongoConnector() const
{
    return m_mongoConnector;
}

void RunCommandsRequest::SetMongoConnector(const MongoConnector& _mongoConnector)
{
    m_mongoConnector = _mongoConnector;
    m_mongoConnectorHasBeenSet = true;
}

bool RunCommandsRequest::MongoConnectorHasBeenSet() const
{
    return m_mongoConnectorHasBeenSet;
}


