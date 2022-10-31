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

#include <tencentcloud/ckafka/v20190819/model/UrlDecodeParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

UrlDecodeParam::UrlDecodeParam() :
    m_charsetNameHasBeenSet(false)
{
}

CoreInternalOutcome UrlDecodeParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CharsetName") && !value["CharsetName"].IsNull())
    {
        if (!value["CharsetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UrlDecodeParam.CharsetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_charsetName = string(value["CharsetName"].GetString());
        m_charsetNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UrlDecodeParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_charsetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CharsetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_charsetName.c_str(), allocator).Move(), allocator);
    }

}


string UrlDecodeParam::GetCharsetName() const
{
    return m_charsetName;
}

void UrlDecodeParam::SetCharsetName(const string& _charsetName)
{
    m_charsetName = _charsetName;
    m_charsetNameHasBeenSet = true;
}

bool UrlDecodeParam::CharsetNameHasBeenSet() const
{
    return m_charsetNameHasBeenSet;
}

