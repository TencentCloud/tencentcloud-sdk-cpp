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

#include <tencentcloud/dlc/v20210125/model/SparkSessionBatchLogOperate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

SparkSessionBatchLogOperate::SparkSessionBatchLogOperate() :
    m_textHasBeenSet(false),
    m_operateHasBeenSet(false),
    m_supplementHasBeenSet(false)
{
}

CoreInternalOutcome SparkSessionBatchLogOperate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkSessionBatchLogOperate.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Operate") && !value["Operate"].IsNull())
    {
        if (!value["Operate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkSessionBatchLogOperate.Operate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operate = string(value["Operate"].GetString());
        m_operateHasBeenSet = true;
    }

    if (value.HasMember("Supplement") && !value["Supplement"].IsNull())
    {
        if (!value["Supplement"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SparkSessionBatchLogOperate.Supplement` is not array type"));

        const rapidjson::Value &tmpValue = value["Supplement"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_supplement.push_back(item);
        }
        m_supplementHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SparkSessionBatchLogOperate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_operateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operate.c_str(), allocator).Move(), allocator);
    }

    if (m_supplementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Supplement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_supplement.begin(); itr != m_supplement.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SparkSessionBatchLogOperate::GetText() const
{
    return m_text;
}

void SparkSessionBatchLogOperate::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool SparkSessionBatchLogOperate::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string SparkSessionBatchLogOperate::GetOperate() const
{
    return m_operate;
}

void SparkSessionBatchLogOperate::SetOperate(const string& _operate)
{
    m_operate = _operate;
    m_operateHasBeenSet = true;
}

bool SparkSessionBatchLogOperate::OperateHasBeenSet() const
{
    return m_operateHasBeenSet;
}

vector<KVPair> SparkSessionBatchLogOperate::GetSupplement() const
{
    return m_supplement;
}

void SparkSessionBatchLogOperate::SetSupplement(const vector<KVPair>& _supplement)
{
    m_supplement = _supplement;
    m_supplementHasBeenSet = true;
}

bool SparkSessionBatchLogOperate::SupplementHasBeenSet() const
{
    return m_supplementHasBeenSet;
}

