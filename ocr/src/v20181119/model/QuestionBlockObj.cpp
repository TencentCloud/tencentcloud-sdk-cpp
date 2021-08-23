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

#include <tencentcloud/ocr/v20181119/model/QuestionBlockObj.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

QuestionBlockObj::QuestionBlockObj() :
    m_questionArrHasBeenSet(false),
    m_questionBboxCoordHasBeenSet(false)
{
}

CoreInternalOutcome QuestionBlockObj::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QuestionArr") && !value["QuestionArr"].IsNull())
    {
        if (!value["QuestionArr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QuestionBlockObj.QuestionArr` is not array type"));

        const rapidjson::Value &tmpValue = value["QuestionArr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QuestionObj item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_questionArr.push_back(item);
        }
        m_questionArrHasBeenSet = true;
    }

    if (value.HasMember("QuestionBboxCoord") && !value["QuestionBboxCoord"].IsNull())
    {
        if (!value["QuestionBboxCoord"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QuestionBlockObj.QuestionBboxCoord` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_questionBboxCoord.Deserialize(value["QuestionBboxCoord"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_questionBboxCoordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuestionBlockObj::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_questionArrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuestionArr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_questionArr.begin(); itr != m_questionArr.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_questionBboxCoordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuestionBboxCoord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_questionBboxCoord.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<QuestionObj> QuestionBlockObj::GetQuestionArr() const
{
    return m_questionArr;
}

void QuestionBlockObj::SetQuestionArr(const vector<QuestionObj>& _questionArr)
{
    m_questionArr = _questionArr;
    m_questionArrHasBeenSet = true;
}

bool QuestionBlockObj::QuestionArrHasBeenSet() const
{
    return m_questionArrHasBeenSet;
}

Rect QuestionBlockObj::GetQuestionBboxCoord() const
{
    return m_questionBboxCoord;
}

void QuestionBlockObj::SetQuestionBboxCoord(const Rect& _questionBboxCoord)
{
    m_questionBboxCoord = _questionBboxCoord;
    m_questionBboxCoordHasBeenSet = true;
}

bool QuestionBlockObj::QuestionBboxCoordHasBeenSet() const
{
    return m_questionBboxCoordHasBeenSet;
}

