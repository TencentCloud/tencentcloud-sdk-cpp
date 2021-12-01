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

#include <tencentcloud/ivld/v20210903/model/Data.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

Data::Data() :
    m_showInfoHasBeenSet(false)
{
}

CoreInternalOutcome Data::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ShowInfo") && !value["ShowInfo"].IsNull())
    {
        if (!value["ShowInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Data.ShowInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_showInfo.Deserialize(value["ShowInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_showInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Data::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_showInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_showInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


ShowInfo Data::GetShowInfo() const
{
    return m_showInfo;
}

void Data::SetShowInfo(const ShowInfo& _showInfo)
{
    m_showInfo = _showInfo;
    m_showInfoHasBeenSet = true;
}

bool Data::ShowInfoHasBeenSet() const
{
    return m_showInfoHasBeenSet;
}

