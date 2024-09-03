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

#include <tencentcloud/asr/v20190614/model/KeyWordLibIdData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

KeyWordLibIdData::KeyWordLibIdData() :
    m_keyWordLibIdHasBeenSet(false)
{
}

CoreInternalOutcome KeyWordLibIdData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyWordLibId") && !value["KeyWordLibId"].IsNull())
    {
        if (!value["KeyWordLibId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyWordLibIdData.KeyWordLibId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyWordLibId = string(value["KeyWordLibId"].GetString());
        m_keyWordLibIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KeyWordLibIdData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyWordLibIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWordLibId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyWordLibId.c_str(), allocator).Move(), allocator);
    }

}


string KeyWordLibIdData::GetKeyWordLibId() const
{
    return m_keyWordLibId;
}

void KeyWordLibIdData::SetKeyWordLibId(const string& _keyWordLibId)
{
    m_keyWordLibId = _keyWordLibId;
    m_keyWordLibIdHasBeenSet = true;
}

bool KeyWordLibIdData::KeyWordLibIdHasBeenSet() const
{
    return m_keyWordLibIdHasBeenSet;
}

