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

#include <tencentcloud/ie/v20200304/model/FaceProtect.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

FaceProtect::FaceProtect() :
    m_faceUsmRatioHasBeenSet(false)
{
}

CoreInternalOutcome FaceProtect::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FaceUsmRatio") && !value["FaceUsmRatio"].IsNull())
    {
        if (!value["FaceUsmRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FaceProtect.FaceUsmRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_faceUsmRatio = value["FaceUsmRatio"].GetDouble();
        m_faceUsmRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FaceProtect::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_faceUsmRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceUsmRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_faceUsmRatio, allocator);
    }

}


double FaceProtect::GetFaceUsmRatio() const
{
    return m_faceUsmRatio;
}

void FaceProtect::SetFaceUsmRatio(const double& _faceUsmRatio)
{
    m_faceUsmRatio = _faceUsmRatio;
    m_faceUsmRatioHasBeenSet = true;
}

bool FaceProtect::FaceUsmRatioHasBeenSet() const
{
    return m_faceUsmRatioHasBeenSet;
}

