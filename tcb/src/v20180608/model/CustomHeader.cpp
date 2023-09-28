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

#include <tencentcloud/tcb/v20180608/model/CustomHeader.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CustomHeader::CustomHeader() :
    m_requestToAddListHasBeenSet(false)
{
}

CoreInternalOutcome CustomHeader::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RequestToAddList") && !value["RequestToAddList"].IsNull())
    {
        if (!value["RequestToAddList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomHeader.RequestToAddList` is not array type"));

        const rapidjson::Value &tmpValue = value["RequestToAddList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomRequestToAdd item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_requestToAddList.push_back(item);
        }
        m_requestToAddListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomHeader::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_requestToAddListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestToAddList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_requestToAddList.begin(); itr != m_requestToAddList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<CustomRequestToAdd> CustomHeader::GetRequestToAddList() const
{
    return m_requestToAddList;
}

void CustomHeader::SetRequestToAddList(const vector<CustomRequestToAdd>& _requestToAddList)
{
    m_requestToAddList = _requestToAddList;
    m_requestToAddListHasBeenSet = true;
}

bool CustomHeader::RequestToAddListHasBeenSet() const
{
    return m_requestToAddListHasBeenSet;
}

