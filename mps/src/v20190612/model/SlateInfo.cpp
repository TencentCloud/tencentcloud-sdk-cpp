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

#include <tencentcloud/mps/v20190612/model/SlateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SlateInfo::SlateInfo() :
    m_sourceLocationIdHasBeenSet(false),
    m_vodSourceNameHasBeenSet(false)
{
}

CoreInternalOutcome SlateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceLocationId") && !value["SourceLocationId"].IsNull())
    {
        if (!value["SourceLocationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlateInfo.SourceLocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceLocationId = string(value["SourceLocationId"].GetString());
        m_sourceLocationIdHasBeenSet = true;
    }

    if (value.HasMember("VodSourceName") && !value["VodSourceName"].IsNull())
    {
        if (!value["VodSourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlateInfo.VodSourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vodSourceName = string(value["VodSourceName"].GetString());
        m_vodSourceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceLocationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceLocationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceLocationId.c_str(), allocator).Move(), allocator);
    }

    if (m_vodSourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VodSourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vodSourceName.c_str(), allocator).Move(), allocator);
    }

}


string SlateInfo::GetSourceLocationId() const
{
    return m_sourceLocationId;
}

void SlateInfo::SetSourceLocationId(const string& _sourceLocationId)
{
    m_sourceLocationId = _sourceLocationId;
    m_sourceLocationIdHasBeenSet = true;
}

bool SlateInfo::SourceLocationIdHasBeenSet() const
{
    return m_sourceLocationIdHasBeenSet;
}

string SlateInfo::GetVodSourceName() const
{
    return m_vodSourceName;
}

void SlateInfo::SetVodSourceName(const string& _vodSourceName)
{
    m_vodSourceName = _vodSourceName;
    m_vodSourceNameHasBeenSet = true;
}

bool SlateInfo::VodSourceNameHasBeenSet() const
{
    return m_vodSourceNameHasBeenSet;
}

