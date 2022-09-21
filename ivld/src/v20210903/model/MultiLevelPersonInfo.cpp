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

#include <tencentcloud/ivld/v20210903/model/MultiLevelPersonInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

MultiLevelPersonInfo::MultiLevelPersonInfo() :
    m_l1ClassifyNameHasBeenSet(false),
    m_l2ClassifiedPersonInfoSetHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

CoreInternalOutcome MultiLevelPersonInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("L1ClassifyName") && !value["L1ClassifyName"].IsNull())
    {
        if (!value["L1ClassifyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiLevelPersonInfo.L1ClassifyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_l1ClassifyName = string(value["L1ClassifyName"].GetString());
        m_l1ClassifyNameHasBeenSet = true;
    }

    if (value.HasMember("L2ClassifiedPersonInfoSet") && !value["L2ClassifiedPersonInfoSet"].IsNull())
    {
        if (!value["L2ClassifiedPersonInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MultiLevelPersonInfo.L2ClassifiedPersonInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["L2ClassifiedPersonInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClassifiedPersonInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_l2ClassifiedPersonInfoSet.push_back(item);
        }
        m_l2ClassifiedPersonInfoSetHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MultiLevelPersonInfo.Source` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetUint64();
        m_sourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MultiLevelPersonInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_l1ClassifyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L1ClassifyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_l1ClassifyName.c_str(), allocator).Move(), allocator);
    }

    if (m_l2ClassifiedPersonInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L2ClassifiedPersonInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_l2ClassifiedPersonInfoSet.begin(); itr != m_l2ClassifiedPersonInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

}


string MultiLevelPersonInfo::GetL1ClassifyName() const
{
    return m_l1ClassifyName;
}

void MultiLevelPersonInfo::SetL1ClassifyName(const string& _l1ClassifyName)
{
    m_l1ClassifyName = _l1ClassifyName;
    m_l1ClassifyNameHasBeenSet = true;
}

bool MultiLevelPersonInfo::L1ClassifyNameHasBeenSet() const
{
    return m_l1ClassifyNameHasBeenSet;
}

vector<ClassifiedPersonInfo> MultiLevelPersonInfo::GetL2ClassifiedPersonInfoSet() const
{
    return m_l2ClassifiedPersonInfoSet;
}

void MultiLevelPersonInfo::SetL2ClassifiedPersonInfoSet(const vector<ClassifiedPersonInfo>& _l2ClassifiedPersonInfoSet)
{
    m_l2ClassifiedPersonInfoSet = _l2ClassifiedPersonInfoSet;
    m_l2ClassifiedPersonInfoSetHasBeenSet = true;
}

bool MultiLevelPersonInfo::L2ClassifiedPersonInfoSetHasBeenSet() const
{
    return m_l2ClassifiedPersonInfoSetHasBeenSet;
}

uint64_t MultiLevelPersonInfo::GetSource() const
{
    return m_source;
}

void MultiLevelPersonInfo::SetSource(const uint64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool MultiLevelPersonInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

