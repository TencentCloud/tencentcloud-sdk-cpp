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

#include <tencentcloud/aca/v20210323/model/SmartPredictReqData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

SmartPredictReqData::SmartPredictReqData() :
    m_requestCaseHasBeenSet(false),
    m_requestTypeHasBeenSet(false)
{
}

CoreInternalOutcome SmartPredictReqData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RequestCase") && !value["RequestCase"].IsNull())
    {
        if (!value["RequestCase"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartPredictReqData.RequestCase` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_requestCase.Deserialize(value["RequestCase"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_requestCaseHasBeenSet = true;
    }

    if (value.HasMember("RequestType") && !value["RequestType"].IsNull())
    {
        if (!value["RequestType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SmartPredictReqData.RequestType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_requestType = value["RequestType"].GetInt64();
        m_requestTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartPredictReqData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_requestCaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestCase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_requestCase.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_requestTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestType, allocator);
    }

}


RequestCase SmartPredictReqData::GetRequestCase() const
{
    return m_requestCase;
}

void SmartPredictReqData::SetRequestCase(const RequestCase& _requestCase)
{
    m_requestCase = _requestCase;
    m_requestCaseHasBeenSet = true;
}

bool SmartPredictReqData::RequestCaseHasBeenSet() const
{
    return m_requestCaseHasBeenSet;
}

int64_t SmartPredictReqData::GetRequestType() const
{
    return m_requestType;
}

void SmartPredictReqData::SetRequestType(const int64_t& _requestType)
{
    m_requestType = _requestType;
    m_requestTypeHasBeenSet = true;
}

bool SmartPredictReqData::RequestTypeHasBeenSet() const
{
    return m_requestTypeHasBeenSet;
}

