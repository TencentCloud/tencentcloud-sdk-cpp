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

#include <tencentcloud/cme/v20191029/model/VideoEditTemplateMaterial.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

VideoEditTemplateMaterial::VideoEditTemplateMaterial() :
    m_aspectRatioHasBeenSet(false),
    m_slotSetHasBeenSet(false)
{
}

CoreInternalOutcome VideoEditTemplateMaterial::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("AspectRatio") && !value["AspectRatio"].IsNull())
    {
        if (!value["AspectRatio"].IsString())
        {
            return CoreInternalOutcome(Error("response `VideoEditTemplateMaterial.AspectRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aspectRatio = string(value["AspectRatio"].GetString());
        m_aspectRatioHasBeenSet = true;
    }

    if (value.HasMember("SlotSet") && !value["SlotSet"].IsNull())
    {
        if (!value["SlotSet"].IsArray())
            return CoreInternalOutcome(Error("response `VideoEditTemplateMaterial.SlotSet` is not array type"));

        const Value &tmpValue = value["SlotSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SlotInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_slotSet.push_back(item);
        }
        m_slotSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoEditTemplateMaterial::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_aspectRatioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AspectRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_aspectRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_slotSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SlotSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_slotSet.begin(); itr != m_slotSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string VideoEditTemplateMaterial::GetAspectRatio() const
{
    return m_aspectRatio;
}

void VideoEditTemplateMaterial::SetAspectRatio(const string& _aspectRatio)
{
    m_aspectRatio = _aspectRatio;
    m_aspectRatioHasBeenSet = true;
}

bool VideoEditTemplateMaterial::AspectRatioHasBeenSet() const
{
    return m_aspectRatioHasBeenSet;
}

vector<SlotInfo> VideoEditTemplateMaterial::GetSlotSet() const
{
    return m_slotSet;
}

void VideoEditTemplateMaterial::SetSlotSet(const vector<SlotInfo>& _slotSet)
{
    m_slotSet = _slotSet;
    m_slotSetHasBeenSet = true;
}

bool VideoEditTemplateMaterial::SlotSetHasBeenSet() const
{
    return m_slotSetHasBeenSet;
}

