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

#include <tencentcloud/vclm/v20240523/model/VideoEditParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

VideoEditParam::VideoEditParam() :
    m_magicHasBeenSet(false)
{
}

CoreInternalOutcome VideoEditParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Magic") && !value["Magic"].IsNull())
    {
        if (!value["Magic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEditParam.Magic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_magic = string(value["Magic"].GetString());
        m_magicHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoEditParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_magicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Magic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_magic.c_str(), allocator).Move(), allocator);
    }

}


string VideoEditParam::GetMagic() const
{
    return m_magic;
}

void VideoEditParam::SetMagic(const string& _magic)
{
    m_magic = _magic;
    m_magicHasBeenSet = true;
}

bool VideoEditParam::MagicHasBeenSet() const
{
    return m_magicHasBeenSet;
}

