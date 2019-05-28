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

#include <tencentcloud/vod/v20180717/model/MediaKeyFrameDescInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

MediaKeyFrameDescInfo::MediaKeyFrameDescInfo() :
    m_keyFrameDescSetHasBeenSet(false)
{
}

CoreInternalOutcome MediaKeyFrameDescInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyFrameDescSet") && !value["KeyFrameDescSet"].IsNull())
    {
        if (!value["KeyFrameDescSet"].IsArray())
            return CoreInternalOutcome(Error("response `MediaKeyFrameDescInfo.KeyFrameDescSet` is not array type"));

        const Value &tmpValue = value["KeyFrameDescSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaKeyFrameDescItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_keyFrameDescSet.push_back(item);
        }
        m_keyFrameDescSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaKeyFrameDescInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_keyFrameDescSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "KeyFrameDescSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_keyFrameDescSet.begin(); itr != m_keyFrameDescSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MediaKeyFrameDescItem> MediaKeyFrameDescInfo::GetKeyFrameDescSet() const
{
    return m_keyFrameDescSet;
}

void MediaKeyFrameDescInfo::SetKeyFrameDescSet(const vector<MediaKeyFrameDescItem>& _keyFrameDescSet)
{
    m_keyFrameDescSet = _keyFrameDescSet;
    m_keyFrameDescSetHasBeenSet = true;
}

bool MediaKeyFrameDescInfo::KeyFrameDescSetHasBeenSet() const
{
    return m_keyFrameDescSetHasBeenSet;
}

