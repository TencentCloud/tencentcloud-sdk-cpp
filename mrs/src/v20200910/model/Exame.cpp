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

#include <tencentcloud/mrs/v20200910/model/Exame.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Exame::Exame() :
    m_overViewHasBeenSet(false),
    m_abnormalityHasBeenSet(false)
{
}

CoreInternalOutcome Exame::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OverView") && !value["OverView"].IsNull())
    {
        if (!value["OverView"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Exame.OverView` is not array type"));

        const rapidjson::Value &tmpValue = value["OverView"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResultInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_overView.push_back(item);
        }
        m_overViewHasBeenSet = true;
    }

    if (value.HasMember("Abnormality") && !value["Abnormality"].IsNull())
    {
        if (!value["Abnormality"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Exame.Abnormality` is not array type"));

        const rapidjson::Value &tmpValue = value["Abnormality"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResultInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_abnormality.push_back(item);
        }
        m_abnormalityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Exame::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_overViewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverView";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_overView.begin(); itr != m_overView.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_abnormalityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Abnormality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_abnormality.begin(); itr != m_abnormality.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<ResultInfo> Exame::GetOverView() const
{
    return m_overView;
}

void Exame::SetOverView(const vector<ResultInfo>& _overView)
{
    m_overView = _overView;
    m_overViewHasBeenSet = true;
}

bool Exame::OverViewHasBeenSet() const
{
    return m_overViewHasBeenSet;
}

vector<ResultInfo> Exame::GetAbnormality() const
{
    return m_abnormality;
}

void Exame::SetAbnormality(const vector<ResultInfo>& _abnormality)
{
    m_abnormality = _abnormality;
    m_abnormalityHasBeenSet = true;
}

bool Exame::AbnormalityHasBeenSet() const
{
    return m_abnormalityHasBeenSet;
}

