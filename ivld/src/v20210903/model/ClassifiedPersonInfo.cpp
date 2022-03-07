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

#include <tencentcloud/ivld/v20210903/model/ClassifiedPersonInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

ClassifiedPersonInfo::ClassifiedPersonInfo() :
    m_classifyNameHasBeenSet(false),
    m_personInfoSetHasBeenSet(false)
{
}

CoreInternalOutcome ClassifiedPersonInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClassifyName") && !value["ClassifyName"].IsNull())
    {
        if (!value["ClassifyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClassifiedPersonInfo.ClassifyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classifyName = string(value["ClassifyName"].GetString());
        m_classifyNameHasBeenSet = true;
    }

    if (value.HasMember("PersonInfoSet") && !value["PersonInfoSet"].IsNull())
    {
        if (!value["PersonInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClassifiedPersonInfo.PersonInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PersonInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PersonInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_personInfoSet.push_back(item);
        }
        m_personInfoSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClassifiedPersonInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_classifyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassifyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classifyName.c_str(), allocator).Move(), allocator);
    }

    if (m_personInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_personInfoSet.begin(); itr != m_personInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ClassifiedPersonInfo::GetClassifyName() const
{
    return m_classifyName;
}

void ClassifiedPersonInfo::SetClassifyName(const string& _classifyName)
{
    m_classifyName = _classifyName;
    m_classifyNameHasBeenSet = true;
}

bool ClassifiedPersonInfo::ClassifyNameHasBeenSet() const
{
    return m_classifyNameHasBeenSet;
}

vector<PersonInfo> ClassifiedPersonInfo::GetPersonInfoSet() const
{
    return m_personInfoSet;
}

void ClassifiedPersonInfo::SetPersonInfoSet(const vector<PersonInfo>& _personInfoSet)
{
    m_personInfoSet = _personInfoSet;
    m_personInfoSetHasBeenSet = true;
}

bool ClassifiedPersonInfo::PersonInfoSetHasBeenSet() const
{
    return m_personInfoSetHasBeenSet;
}

