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

#include <tencentcloud/yinsuda/v20220527/model/MusicAlbumInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

MusicAlbumInfo::MusicAlbumInfo() :
    m_nameHasBeenSet(false),
    m_coverInfoSetHasBeenSet(false)
{
}

CoreInternalOutcome MusicAlbumInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MusicAlbumInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CoverInfoSet") && !value["CoverInfoSet"].IsNull())
    {
        if (!value["CoverInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MusicAlbumInfo.CoverInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["CoverInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MusicAlbumCoverInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_coverInfoSet.push_back(item);
        }
        m_coverInfoSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MusicAlbumInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_coverInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_coverInfoSet.begin(); itr != m_coverInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MusicAlbumInfo::GetName() const
{
    return m_name;
}

void MusicAlbumInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MusicAlbumInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<MusicAlbumCoverInfo> MusicAlbumInfo::GetCoverInfoSet() const
{
    return m_coverInfoSet;
}

void MusicAlbumInfo::SetCoverInfoSet(const vector<MusicAlbumCoverInfo>& _coverInfoSet)
{
    m_coverInfoSet = _coverInfoSet;
    m_coverInfoSetHasBeenSet = true;
}

bool MusicAlbumInfo::CoverInfoSetHasBeenSet() const
{
    return m_coverInfoSetHasBeenSet;
}

