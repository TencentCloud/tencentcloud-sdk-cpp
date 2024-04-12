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

#include <tencentcloud/lke/v20231130/model/AttrLabelRefer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AttrLabelRefer::AttrLabelRefer() :
    m_sourceHasBeenSet(false),
    m_attributeBizIdHasBeenSet(false),
    m_labelBizIdsHasBeenSet(false)
{
}

CoreInternalOutcome AttrLabelRefer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AttrLabelRefer.Source` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetUint64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("AttributeBizId") && !value["AttributeBizId"].IsNull())
    {
        if (!value["AttributeBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttrLabelRefer.AttributeBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attributeBizId = string(value["AttributeBizId"].GetString());
        m_attributeBizIdHasBeenSet = true;
    }

    if (value.HasMember("LabelBizIds") && !value["LabelBizIds"].IsNull())
    {
        if (!value["LabelBizIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AttrLabelRefer.LabelBizIds` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelBizIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labelBizIds.push_back((*itr).GetString());
        }
        m_labelBizIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttrLabelRefer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_attributeBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attributeBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_labelBizIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelBizIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelBizIds.begin(); itr != m_labelBizIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t AttrLabelRefer::GetSource() const
{
    return m_source;
}

void AttrLabelRefer::SetSource(const uint64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool AttrLabelRefer::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string AttrLabelRefer::GetAttributeBizId() const
{
    return m_attributeBizId;
}

void AttrLabelRefer::SetAttributeBizId(const string& _attributeBizId)
{
    m_attributeBizId = _attributeBizId;
    m_attributeBizIdHasBeenSet = true;
}

bool AttrLabelRefer::AttributeBizIdHasBeenSet() const
{
    return m_attributeBizIdHasBeenSet;
}

vector<string> AttrLabelRefer::GetLabelBizIds() const
{
    return m_labelBizIds;
}

void AttrLabelRefer::SetLabelBizIds(const vector<string>& _labelBizIds)
{
    m_labelBizIds = _labelBizIds;
    m_labelBizIdsHasBeenSet = true;
}

bool AttrLabelRefer::LabelBizIdsHasBeenSet() const
{
    return m_labelBizIdsHasBeenSet;
}

