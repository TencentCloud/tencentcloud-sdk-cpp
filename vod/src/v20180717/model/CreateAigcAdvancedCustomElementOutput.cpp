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

#include <tencentcloud/vod/v20180717/model/CreateAigcAdvancedCustomElementOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateAigcAdvancedCustomElementOutput::CreateAigcAdvancedCustomElementOutput() :
    m_infoListHasBeenSet(false)
{
}

CoreInternalOutcome CreateAigcAdvancedCustomElementOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InfoList") && !value["InfoList"].IsNull())
    {
        if (!value["InfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateAigcAdvancedCustomElementOutput.InfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["InfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AdvancedElementInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_infoList.push_back(item);
        }
        m_infoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateAigcAdvancedCustomElementOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_infoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_infoList.begin(); itr != m_infoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<AdvancedElementInfo> CreateAigcAdvancedCustomElementOutput::GetInfoList() const
{
    return m_infoList;
}

void CreateAigcAdvancedCustomElementOutput::SetInfoList(const vector<AdvancedElementInfo>& _infoList)
{
    m_infoList = _infoList;
    m_infoListHasBeenSet = true;
}

bool CreateAigcAdvancedCustomElementOutput::InfoListHasBeenSet() const
{
    return m_infoListHasBeenSet;
}

