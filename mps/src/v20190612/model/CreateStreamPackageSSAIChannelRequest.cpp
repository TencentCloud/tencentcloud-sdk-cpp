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

#include <tencentcloud/mps/v20190612/model/CreateStreamPackageSSAIChannelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CreateStreamPackageSSAIChannelRequest::CreateStreamPackageSSAIChannelRequest() :
    m_nameHasBeenSet(false),
    m_contentSourceHasBeenSet(false),
    m_sSAIInfoHasBeenSet(false)
{
}

string CreateStreamPackageSSAIChannelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_contentSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contentSource.c_str(), allocator).Move(), allocator);
    }

    if (m_sSAIInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSAIInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sSAIInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateStreamPackageSSAIChannelRequest::GetName() const
{
    return m_name;
}

void CreateStreamPackageSSAIChannelRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateStreamPackageSSAIChannelRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateStreamPackageSSAIChannelRequest::GetContentSource() const
{
    return m_contentSource;
}

void CreateStreamPackageSSAIChannelRequest::SetContentSource(const string& _contentSource)
{
    m_contentSource = _contentSource;
    m_contentSourceHasBeenSet = true;
}

bool CreateStreamPackageSSAIChannelRequest::ContentSourceHasBeenSet() const
{
    return m_contentSourceHasBeenSet;
}

SSAIConf CreateStreamPackageSSAIChannelRequest::GetSSAIInfo() const
{
    return m_sSAIInfo;
}

void CreateStreamPackageSSAIChannelRequest::SetSSAIInfo(const SSAIConf& _sSAIInfo)
{
    m_sSAIInfo = _sSAIInfo;
    m_sSAIInfoHasBeenSet = true;
}

bool CreateStreamPackageSSAIChannelRequest::SSAIInfoHasBeenSet() const
{
    return m_sSAIInfoHasBeenSet;
}


