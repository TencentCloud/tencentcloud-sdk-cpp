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

#include <tencentcloud/tci/v20190318/model/DoubleVideoFunction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

DoubleVideoFunction::DoubleVideoFunction() :
    m_enableCoverPicturesHasBeenSet(false)
{
}

CoreInternalOutcome DoubleVideoFunction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableCoverPictures") && !value["EnableCoverPictures"].IsNull())
    {
        if (!value["EnableCoverPictures"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DoubleVideoFunction.EnableCoverPictures` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableCoverPictures = value["EnableCoverPictures"].GetBool();
        m_enableCoverPicturesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DoubleVideoFunction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableCoverPicturesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCoverPictures";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableCoverPictures, allocator);
    }

}


bool DoubleVideoFunction::GetEnableCoverPictures() const
{
    return m_enableCoverPictures;
}

void DoubleVideoFunction::SetEnableCoverPictures(const bool& _enableCoverPictures)
{
    m_enableCoverPictures = _enableCoverPictures;
    m_enableCoverPicturesHasBeenSet = true;
}

bool DoubleVideoFunction::EnableCoverPicturesHasBeenSet() const
{
    return m_enableCoverPicturesHasBeenSet;
}

