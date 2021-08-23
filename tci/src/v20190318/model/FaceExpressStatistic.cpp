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

#include <tencentcloud/tci/v20190318/model/FaceExpressStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

FaceExpressStatistic::FaceExpressStatistic() :
    m_personIdHasBeenSet(false),
    m_expressRatioHasBeenSet(false)
{
}

CoreInternalOutcome FaceExpressStatistic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceExpressStatistic.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }

    if (value.HasMember("ExpressRatio") && !value["ExpressRatio"].IsNull())
    {
        if (!value["ExpressRatio"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FaceExpressStatistic.ExpressRatio` is not array type"));

        const rapidjson::Value &tmpValue = value["ExpressRatio"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExpressRatioStatistic item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_expressRatio.push_back(item);
        }
        m_expressRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FaceExpressStatistic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_expressRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpressRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_expressRatio.begin(); itr != m_expressRatio.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string FaceExpressStatistic::GetPersonId() const
{
    return m_personId;
}

void FaceExpressStatistic::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool FaceExpressStatistic::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

vector<ExpressRatioStatistic> FaceExpressStatistic::GetExpressRatio() const
{
    return m_expressRatio;
}

void FaceExpressStatistic::SetExpressRatio(const vector<ExpressRatioStatistic>& _expressRatio)
{
    m_expressRatio = _expressRatio;
    m_expressRatioHasBeenSet = true;
}

bool FaceExpressStatistic::ExpressRatioHasBeenSet() const
{
    return m_expressRatioHasBeenSet;
}

