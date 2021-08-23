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

#include <tencentcloud/cme/v20191029/model/VODExportInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

VODExportInfo::VODExportInfo() :
    m_nameHasBeenSet(false),
    m_classIdHasBeenSet(false),
    m_thirdPartyPublishInfosHasBeenSet(false)
{
}

CoreInternalOutcome VODExportInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VODExportInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ClassId") && !value["ClassId"].IsNull())
    {
        if (!value["ClassId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VODExportInfo.ClassId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_classId = value["ClassId"].GetUint64();
        m_classIdHasBeenSet = true;
    }

    if (value.HasMember("ThirdPartyPublishInfos") && !value["ThirdPartyPublishInfos"].IsNull())
    {
        if (!value["ThirdPartyPublishInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VODExportInfo.ThirdPartyPublishInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["ThirdPartyPublishInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ThirdPartyPublishInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_thirdPartyPublishInfos.push_back(item);
        }
        m_thirdPartyPublishInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VODExportInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_classIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_classId, allocator);
    }

    if (m_thirdPartyPublishInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirdPartyPublishInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_thirdPartyPublishInfos.begin(); itr != m_thirdPartyPublishInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string VODExportInfo::GetName() const
{
    return m_name;
}

void VODExportInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VODExportInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t VODExportInfo::GetClassId() const
{
    return m_classId;
}

void VODExportInfo::SetClassId(const uint64_t& _classId)
{
    m_classId = _classId;
    m_classIdHasBeenSet = true;
}

bool VODExportInfo::ClassIdHasBeenSet() const
{
    return m_classIdHasBeenSet;
}

vector<ThirdPartyPublishInfo> VODExportInfo::GetThirdPartyPublishInfos() const
{
    return m_thirdPartyPublishInfos;
}

void VODExportInfo::SetThirdPartyPublishInfos(const vector<ThirdPartyPublishInfo>& _thirdPartyPublishInfos)
{
    m_thirdPartyPublishInfos = _thirdPartyPublishInfos;
    m_thirdPartyPublishInfosHasBeenSet = true;
}

bool VODExportInfo::ThirdPartyPublishInfosHasBeenSet() const
{
    return m_thirdPartyPublishInfosHasBeenSet;
}

