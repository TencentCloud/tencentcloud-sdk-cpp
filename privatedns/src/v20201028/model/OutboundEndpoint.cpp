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

#include <tencentcloud/privatedns/v20201028/model/OutboundEndpoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

OutboundEndpoint::OutboundEndpoint() :
    m_endpointIdHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_endpointServiceSetHasBeenSet(false),
    m_forwardLinkArchHasBeenSet(false),
    m_endPointServiceIdHasBeenSet(false),
    m_endPointVipSetHasBeenSet(false)
{
}

CoreInternalOutcome OutboundEndpoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EndpointId") && !value["EndpointId"].IsNull())
    {
        if (!value["EndpointId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutboundEndpoint.EndpointId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointId = string(value["EndpointId"].GetString());
        m_endpointIdHasBeenSet = true;
    }

    if (value.HasMember("EndpointName") && !value["EndpointName"].IsNull())
    {
        if (!value["EndpointName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutboundEndpoint.EndpointName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointName = string(value["EndpointName"].GetString());
        m_endpointNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutboundEndpoint.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OutboundEndpoint.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
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

    if (value.HasMember("EndpointServiceSet") && !value["EndpointServiceSet"].IsNull())
    {
        if (!value["EndpointServiceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OutboundEndpoint.EndpointServiceSet` is not array type"));

        const rapidjson::Value &tmpValue = value["EndpointServiceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EndpointService item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_endpointServiceSet.push_back(item);
        }
        m_endpointServiceSetHasBeenSet = true;
    }

    if (value.HasMember("ForwardLinkArch") && !value["ForwardLinkArch"].IsNull())
    {
        if (!value["ForwardLinkArch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutboundEndpoint.ForwardLinkArch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardLinkArch = string(value["ForwardLinkArch"].GetString());
        m_forwardLinkArchHasBeenSet = true;
    }

    if (value.HasMember("EndPointServiceId") && !value["EndPointServiceId"].IsNull())
    {
        if (!value["EndPointServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutboundEndpoint.EndPointServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointServiceId = string(value["EndPointServiceId"].GetString());
        m_endPointServiceIdHasBeenSet = true;
    }

    if (value.HasMember("EndPointVipSet") && !value["EndPointVipSet"].IsNull())
    {
        if (!value["EndPointVipSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OutboundEndpoint.EndPointVipSet` is not array type"));

        const rapidjson::Value &tmpValue = value["EndPointVipSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_endPointVipSet.push_back((*itr).GetString());
        }
        m_endPointVipSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutboundEndpoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endpointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointId.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
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

    if (m_endpointServiceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointServiceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_endpointServiceSet.begin(); itr != m_endpointServiceSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_forwardLinkArchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardLinkArch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardLinkArch.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointVipSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointVipSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_endPointVipSet.begin(); itr != m_endPointVipSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string OutboundEndpoint::GetEndpointId() const
{
    return m_endpointId;
}

void OutboundEndpoint::SetEndpointId(const string& _endpointId)
{
    m_endpointId = _endpointId;
    m_endpointIdHasBeenSet = true;
}

bool OutboundEndpoint::EndpointIdHasBeenSet() const
{
    return m_endpointIdHasBeenSet;
}

string OutboundEndpoint::GetEndpointName() const
{
    return m_endpointName;
}

void OutboundEndpoint::SetEndpointName(const string& _endpointName)
{
    m_endpointName = _endpointName;
    m_endpointNameHasBeenSet = true;
}

bool OutboundEndpoint::EndpointNameHasBeenSet() const
{
    return m_endpointNameHasBeenSet;
}

string OutboundEndpoint::GetRegion() const
{
    return m_region;
}

void OutboundEndpoint::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool OutboundEndpoint::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<TagInfo> OutboundEndpoint::GetTags() const
{
    return m_tags;
}

void OutboundEndpoint::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool OutboundEndpoint::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<EndpointService> OutboundEndpoint::GetEndpointServiceSet() const
{
    return m_endpointServiceSet;
}

void OutboundEndpoint::SetEndpointServiceSet(const vector<EndpointService>& _endpointServiceSet)
{
    m_endpointServiceSet = _endpointServiceSet;
    m_endpointServiceSetHasBeenSet = true;
}

bool OutboundEndpoint::EndpointServiceSetHasBeenSet() const
{
    return m_endpointServiceSetHasBeenSet;
}

string OutboundEndpoint::GetForwardLinkArch() const
{
    return m_forwardLinkArch;
}

void OutboundEndpoint::SetForwardLinkArch(const string& _forwardLinkArch)
{
    m_forwardLinkArch = _forwardLinkArch;
    m_forwardLinkArchHasBeenSet = true;
}

bool OutboundEndpoint::ForwardLinkArchHasBeenSet() const
{
    return m_forwardLinkArchHasBeenSet;
}

string OutboundEndpoint::GetEndPointServiceId() const
{
    return m_endPointServiceId;
}

void OutboundEndpoint::SetEndPointServiceId(const string& _endPointServiceId)
{
    m_endPointServiceId = _endPointServiceId;
    m_endPointServiceIdHasBeenSet = true;
}

bool OutboundEndpoint::EndPointServiceIdHasBeenSet() const
{
    return m_endPointServiceIdHasBeenSet;
}

vector<string> OutboundEndpoint::GetEndPointVipSet() const
{
    return m_endPointVipSet;
}

void OutboundEndpoint::SetEndPointVipSet(const vector<string>& _endPointVipSet)
{
    m_endPointVipSet = _endPointVipSet;
    m_endPointVipSetHasBeenSet = true;
}

bool OutboundEndpoint::EndPointVipSetHasBeenSet() const
{
    return m_endPointVipSetHasBeenSet;
}

