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

#include <tencentcloud/privatedns/v20201028/model/EndPointInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

EndPointInfo::EndPointInfo() :
    m_endPointIdHasBeenSet(false),
    m_endPointNameHasBeenSet(false),
    m_endPointServiceIdHasBeenSet(false),
    m_endPointVipSetHasBeenSet(false),
    m_regionCodeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome EndPointInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EndPointId") && !value["EndPointId"].IsNull())
    {
        if (!value["EndPointId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointInfo.EndPointId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointId = string(value["EndPointId"].GetString());
        m_endPointIdHasBeenSet = true;
    }

    if (value.HasMember("EndPointName") && !value["EndPointName"].IsNull())
    {
        if (!value["EndPointName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointInfo.EndPointName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointName = string(value["EndPointName"].GetString());
        m_endPointNameHasBeenSet = true;
    }

    if (value.HasMember("EndPointServiceId") && !value["EndPointServiceId"].IsNull())
    {
        if (!value["EndPointServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointInfo.EndPointServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointServiceId = string(value["EndPointServiceId"].GetString());
        m_endPointServiceIdHasBeenSet = true;
    }

    if (value.HasMember("EndPointVipSet") && !value["EndPointVipSet"].IsNull())
    {
        if (!value["EndPointVipSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EndPointInfo.EndPointVipSet` is not array type"));

        const rapidjson::Value &tmpValue = value["EndPointVipSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_endPointVipSet.push_back((*itr).GetString());
        }
        m_endPointVipSetHasBeenSet = true;
    }

    if (value.HasMember("RegionCode") && !value["RegionCode"].IsNull())
    {
        if (!value["RegionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointInfo.RegionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionCode = string(value["RegionCode"].GetString());
        m_regionCodeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EndPointInfo.Tags` is not array type"));

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


    return CoreInternalOutcome(true);
}

void EndPointInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endPointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointId.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointName.c_str(), allocator).Move(), allocator);
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

    if (m_regionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionCode.c_str(), allocator).Move(), allocator);
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

}


string EndPointInfo::GetEndPointId() const
{
    return m_endPointId;
}

void EndPointInfo::SetEndPointId(const string& _endPointId)
{
    m_endPointId = _endPointId;
    m_endPointIdHasBeenSet = true;
}

bool EndPointInfo::EndPointIdHasBeenSet() const
{
    return m_endPointIdHasBeenSet;
}

string EndPointInfo::GetEndPointName() const
{
    return m_endPointName;
}

void EndPointInfo::SetEndPointName(const string& _endPointName)
{
    m_endPointName = _endPointName;
    m_endPointNameHasBeenSet = true;
}

bool EndPointInfo::EndPointNameHasBeenSet() const
{
    return m_endPointNameHasBeenSet;
}

string EndPointInfo::GetEndPointServiceId() const
{
    return m_endPointServiceId;
}

void EndPointInfo::SetEndPointServiceId(const string& _endPointServiceId)
{
    m_endPointServiceId = _endPointServiceId;
    m_endPointServiceIdHasBeenSet = true;
}

bool EndPointInfo::EndPointServiceIdHasBeenSet() const
{
    return m_endPointServiceIdHasBeenSet;
}

vector<string> EndPointInfo::GetEndPointVipSet() const
{
    return m_endPointVipSet;
}

void EndPointInfo::SetEndPointVipSet(const vector<string>& _endPointVipSet)
{
    m_endPointVipSet = _endPointVipSet;
    m_endPointVipSetHasBeenSet = true;
}

bool EndPointInfo::EndPointVipSetHasBeenSet() const
{
    return m_endPointVipSetHasBeenSet;
}

string EndPointInfo::GetRegionCode() const
{
    return m_regionCode;
}

void EndPointInfo::SetRegionCode(const string& _regionCode)
{
    m_regionCode = _regionCode;
    m_regionCodeHasBeenSet = true;
}

bool EndPointInfo::RegionCodeHasBeenSet() const
{
    return m_regionCodeHasBeenSet;
}

vector<TagInfo> EndPointInfo::GetTags() const
{
    return m_tags;
}

void EndPointInfo::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool EndPointInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

