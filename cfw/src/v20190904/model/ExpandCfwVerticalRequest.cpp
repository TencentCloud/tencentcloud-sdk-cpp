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

#include <tencentcloud/cfw/v20190904/model/ExpandCfwVerticalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ExpandCfwVerticalRequest::ExpandCfwVerticalRequest() :
    m_fwTypeHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_cfwInstanceHasBeenSet(false),
    m_elasticSwitchHasBeenSet(false),
    m_elasticBandwidthHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string ExpandCfwVerticalRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fwTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fwType.c_str(), allocator).Move(), allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_width, allocator);
    }

    if (m_cfwInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfwInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cfwInstance.c_str(), allocator).Move(), allocator);
    }

    if (m_elasticSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_elasticSwitch, allocator);
    }

    if (m_elasticBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticBandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_elasticBandwidth, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExpandCfwVerticalRequest::GetFwType() const
{
    return m_fwType;
}

void ExpandCfwVerticalRequest::SetFwType(const string& _fwType)
{
    m_fwType = _fwType;
    m_fwTypeHasBeenSet = true;
}

bool ExpandCfwVerticalRequest::FwTypeHasBeenSet() const
{
    return m_fwTypeHasBeenSet;
}

uint64_t ExpandCfwVerticalRequest::GetWidth() const
{
    return m_width;
}

void ExpandCfwVerticalRequest::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool ExpandCfwVerticalRequest::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

string ExpandCfwVerticalRequest::GetCfwInstance() const
{
    return m_cfwInstance;
}

void ExpandCfwVerticalRequest::SetCfwInstance(const string& _cfwInstance)
{
    m_cfwInstance = _cfwInstance;
    m_cfwInstanceHasBeenSet = true;
}

bool ExpandCfwVerticalRequest::CfwInstanceHasBeenSet() const
{
    return m_cfwInstanceHasBeenSet;
}

int64_t ExpandCfwVerticalRequest::GetElasticSwitch() const
{
    return m_elasticSwitch;
}

void ExpandCfwVerticalRequest::SetElasticSwitch(const int64_t& _elasticSwitch)
{
    m_elasticSwitch = _elasticSwitch;
    m_elasticSwitchHasBeenSet = true;
}

bool ExpandCfwVerticalRequest::ElasticSwitchHasBeenSet() const
{
    return m_elasticSwitchHasBeenSet;
}

int64_t ExpandCfwVerticalRequest::GetElasticBandwidth() const
{
    return m_elasticBandwidth;
}

void ExpandCfwVerticalRequest::SetElasticBandwidth(const int64_t& _elasticBandwidth)
{
    m_elasticBandwidth = _elasticBandwidth;
    m_elasticBandwidthHasBeenSet = true;
}

bool ExpandCfwVerticalRequest::ElasticBandwidthHasBeenSet() const
{
    return m_elasticBandwidthHasBeenSet;
}

vector<TagInfo> ExpandCfwVerticalRequest::GetTags() const
{
    return m_tags;
}

void ExpandCfwVerticalRequest::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ExpandCfwVerticalRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


