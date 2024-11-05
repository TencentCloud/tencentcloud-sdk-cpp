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

#include <tencentcloud/vod/v20180717/model/ComplexAdaptiveDynamicStreamingTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ComplexAdaptiveDynamicStreamingTaskInput::ComplexAdaptiveDynamicStreamingTaskInput() :
    m_streamParaHasBeenSet(false)
{
}

CoreInternalOutcome ComplexAdaptiveDynamicStreamingTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StreamPara") && !value["StreamPara"].IsNull())
    {
        if (!value["StreamPara"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComplexAdaptiveDynamicStreamingTaskInput.StreamPara` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_streamPara.Deserialize(value["StreamPara"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_streamParaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplexAdaptiveDynamicStreamingTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_streamParaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamPara";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_streamPara.ToJsonObject(value[key.c_str()], allocator);
    }

}


ComplexAdaptiveDynamicStreamingTaskStreamPara ComplexAdaptiveDynamicStreamingTaskInput::GetStreamPara() const
{
    return m_streamPara;
}

void ComplexAdaptiveDynamicStreamingTaskInput::SetStreamPara(const ComplexAdaptiveDynamicStreamingTaskStreamPara& _streamPara)
{
    m_streamPara = _streamPara;
    m_streamParaHasBeenSet = true;
}

bool ComplexAdaptiveDynamicStreamingTaskInput::StreamParaHasBeenSet() const
{
    return m_streamParaHasBeenSet;
}

