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

#include <tencentcloud/iss/v20230517/model/PlayRecordData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

PlayRecordData::PlayRecordData() :
    m_flvHasBeenSet(false)
{
}

CoreInternalOutcome PlayRecordData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Flv") && !value["Flv"].IsNull())
    {
        if (!value["Flv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayRecordData.Flv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flv = string(value["Flv"].GetString());
        m_flvHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlayRecordData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flv.c_str(), allocator).Move(), allocator);
    }

}


string PlayRecordData::GetFlv() const
{
    return m_flv;
}

void PlayRecordData::SetFlv(const string& _flv)
{
    m_flv = _flv;
    m_flvHasBeenSet = true;
}

bool PlayRecordData::FlvHasBeenSet() const
{
    return m_flvHasBeenSet;
}

