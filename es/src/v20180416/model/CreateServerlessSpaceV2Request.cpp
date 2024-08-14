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

#include <tencentcloud/es/v20180416/model/CreateServerlessSpaceV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

CreateServerlessSpaceV2Request::CreateServerlessSpaceV2Request() :
    m_vpcInfoHasBeenSet(false),
    m_spaceNameHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_kibanaWhiteIpListHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

string CreateServerlessSpaceV2Request::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcInfo.begin(); itr != m_vpcInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_spaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_kibanaWhiteIpListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaWhiteIpList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_kibanaWhiteIpList.begin(); itr != m_kibanaWhiteIpList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
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


vector<VpcInfo> CreateServerlessSpaceV2Request::GetVpcInfo() const
{
    return m_vpcInfo;
}

void CreateServerlessSpaceV2Request::SetVpcInfo(const vector<VpcInfo>& _vpcInfo)
{
    m_vpcInfo = _vpcInfo;
    m_vpcInfoHasBeenSet = true;
}

bool CreateServerlessSpaceV2Request::VpcInfoHasBeenSet() const
{
    return m_vpcInfoHasBeenSet;
}

string CreateServerlessSpaceV2Request::GetSpaceName() const
{
    return m_spaceName;
}

void CreateServerlessSpaceV2Request::SetSpaceName(const string& _spaceName)
{
    m_spaceName = _spaceName;
    m_spaceNameHasBeenSet = true;
}

bool CreateServerlessSpaceV2Request::SpaceNameHasBeenSet() const
{
    return m_spaceNameHasBeenSet;
}

string CreateServerlessSpaceV2Request::GetZone() const
{
    return m_zone;
}

void CreateServerlessSpaceV2Request::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateServerlessSpaceV2Request::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

vector<string> CreateServerlessSpaceV2Request::GetKibanaWhiteIpList() const
{
    return m_kibanaWhiteIpList;
}

void CreateServerlessSpaceV2Request::SetKibanaWhiteIpList(const vector<string>& _kibanaWhiteIpList)
{
    m_kibanaWhiteIpList = _kibanaWhiteIpList;
    m_kibanaWhiteIpListHasBeenSet = true;
}

bool CreateServerlessSpaceV2Request::KibanaWhiteIpListHasBeenSet() const
{
    return m_kibanaWhiteIpListHasBeenSet;
}

uint64_t CreateServerlessSpaceV2Request::GetZoneId() const
{
    return m_zoneId;
}

void CreateServerlessSpaceV2Request::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateServerlessSpaceV2Request::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<TagInfo> CreateServerlessSpaceV2Request::GetTagList() const
{
    return m_tagList;
}

void CreateServerlessSpaceV2Request::SetTagList(const vector<TagInfo>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool CreateServerlessSpaceV2Request::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}


