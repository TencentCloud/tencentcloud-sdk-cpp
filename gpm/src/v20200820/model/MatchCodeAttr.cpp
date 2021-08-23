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

#include <tencentcloud/gpm/v20200820/model/MatchCodeAttr.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gpm::V20200820::Model;
using namespace std;

MatchCodeAttr::MatchCodeAttr() :
    m_matchCodeHasBeenSet(false)
{
}

CoreInternalOutcome MatchCodeAttr::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MatchCode") && !value["MatchCode"].IsNull())
    {
        if (!value["MatchCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchCodeAttr.MatchCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchCode = string(value["MatchCode"].GetString());
        m_matchCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MatchCodeAttr::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_matchCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchCode.c_str(), allocator).Move(), allocator);
    }

}


string MatchCodeAttr::GetMatchCode() const
{
    return m_matchCode;
}

void MatchCodeAttr::SetMatchCode(const string& _matchCode)
{
    m_matchCode = _matchCode;
    m_matchCodeHasBeenSet = true;
}

bool MatchCodeAttr::MatchCodeHasBeenSet() const
{
    return m_matchCodeHasBeenSet;
}

