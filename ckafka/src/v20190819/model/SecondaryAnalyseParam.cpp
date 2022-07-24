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

#include <tencentcloud/ckafka/v20190819/model/SecondaryAnalyseParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

SecondaryAnalyseParam::SecondaryAnalyseParam() :
    m_regexHasBeenSet(false)
{
}

CoreInternalOutcome SecondaryAnalyseParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Regex") && !value["Regex"].IsNull())
    {
        if (!value["Regex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecondaryAnalyseParam.Regex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regex = string(value["Regex"].GetString());
        m_regexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecondaryAnalyseParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regex.c_str(), allocator).Move(), allocator);
    }

}


string SecondaryAnalyseParam::GetRegex() const
{
    return m_regex;
}

void SecondaryAnalyseParam::SetRegex(const string& _regex)
{
    m_regex = _regex;
    m_regexHasBeenSet = true;
}

bool SecondaryAnalyseParam::RegexHasBeenSet() const
{
    return m_regexHasBeenSet;
}

