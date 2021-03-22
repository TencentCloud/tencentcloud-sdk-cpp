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

#include <tencentcloud/cme/v20191029/model/MediaReplacementInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

MediaReplacementInfo::MediaReplacementInfo() :
    m_materialIdHasBeenSet(false),
    m_startTimeOffsetHasBeenSet(false)
{
}

CoreInternalOutcome MediaReplacementInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("MaterialId") && !value["MaterialId"].IsNull())
    {
        if (!value["MaterialId"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaReplacementInfo.MaterialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialId = string(value["MaterialId"].GetString());
        m_materialIdHasBeenSet = true;
    }

    if (value.HasMember("StartTimeOffset") && !value["StartTimeOffset"].IsNull())
    {
        if (!value["StartTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `MediaReplacementInfo.StartTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeOffset = value["StartTimeOffset"].GetDouble();
        m_startTimeOffsetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaReplacementInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_materialIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaterialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_materialId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeOffsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimeOffset, allocator);
    }

}


string MediaReplacementInfo::GetMaterialId() const
{
    return m_materialId;
}

void MediaReplacementInfo::SetMaterialId(const string& _materialId)
{
    m_materialId = _materialId;
    m_materialIdHasBeenSet = true;
}

bool MediaReplacementInfo::MaterialIdHasBeenSet() const
{
    return m_materialIdHasBeenSet;
}

double MediaReplacementInfo::GetStartTimeOffset() const
{
    return m_startTimeOffset;
}

void MediaReplacementInfo::SetStartTimeOffset(const double& _startTimeOffset)
{
    m_startTimeOffset = _startTimeOffset;
    m_startTimeOffsetHasBeenSet = true;
}

bool MediaReplacementInfo::StartTimeOffsetHasBeenSet() const
{
    return m_startTimeOffsetHasBeenSet;
}

