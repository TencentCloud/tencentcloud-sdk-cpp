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

#include <tencentcloud/ame/v20190916/model/Artist.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

Artist::Artist() :
    m_artistNameHasBeenSet(false)
{
}

CoreInternalOutcome Artist::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ArtistName") && !value["ArtistName"].IsNull())
    {
        if (!value["ArtistName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Artist.ArtistName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_artistName = string(value["ArtistName"].GetString());
        m_artistNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Artist::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_artistNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArtistName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_artistName.c_str(), allocator).Move(), allocator);
    }

}


string Artist::GetArtistName() const
{
    return m_artistName;
}

void Artist::SetArtistName(const string& _artistName)
{
    m_artistName = _artistName;
    m_artistNameHasBeenSet = true;
}

bool Artist::ArtistNameHasBeenSet() const
{
    return m_artistNameHasBeenSet;
}

