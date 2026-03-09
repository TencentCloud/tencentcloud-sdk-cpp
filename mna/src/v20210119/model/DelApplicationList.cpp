/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/mna/v20210119/model/DelApplicationList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

DelApplicationList::DelApplicationList() :
    m_mpApplicationIdHasBeenSet(false)
{
}

CoreInternalOutcome DelApplicationList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MpApplicationId") && !value["MpApplicationId"].IsNull())
    {
        if (!value["MpApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DelApplicationList.MpApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mpApplicationId = string(value["MpApplicationId"].GetString());
        m_mpApplicationIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DelApplicationList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mpApplicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MpApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mpApplicationId.c_str(), allocator).Move(), allocator);
    }

}


string DelApplicationList::GetMpApplicationId() const
{
    return m_mpApplicationId;
}

void DelApplicationList::SetMpApplicationId(const string& _mpApplicationId)
{
    m_mpApplicationId = _mpApplicationId;
    m_mpApplicationIdHasBeenSet = true;
}

bool DelApplicationList::MpApplicationIdHasBeenSet() const
{
    return m_mpApplicationIdHasBeenSet;
}

