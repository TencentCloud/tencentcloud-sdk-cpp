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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MPSRESULT_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MPSRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 媒体处理结果，包含智能语音识别、智能文字识别结果
                */
                class MPSResult : public AbstractModel
                {
                public:
                    MPSResult();
                    ~MPSResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取智能语音识别结果。
                     * @return AiAsrResults 智能语音识别结果。
                     * 
                     */
                    std::vector<std::string> GetAiAsrResults() const;

                    /**
                     * 设置智能语音识别结果。
                     * @param _aiAsrResults 智能语音识别结果。
                     * 
                     */
                    void SetAiAsrResults(const std::vector<std::string>& _aiAsrResults);

                    /**
                     * 判断参数 AiAsrResults 是否已赋值
                     * @return AiAsrResults 是否已赋值
                     * 
                     */
                    bool AiAsrResultsHasBeenSet() const;

                    /**
                     * 获取智能文字识别结果。
                     * @return AiOcrResults 智能文字识别结果。
                     * 
                     */
                    std::vector<std::string> GetAiOcrResults() const;

                    /**
                     * 设置智能文字识别结果。
                     * @param _aiOcrResults 智能文字识别结果。
                     * 
                     */
                    void SetAiOcrResults(const std::vector<std::string>& _aiOcrResults);

                    /**
                     * 判断参数 AiOcrResults 是否已赋值
                     * @return AiOcrResults 是否已赋值
                     * 
                     */
                    bool AiOcrResultsHasBeenSet() const;

                    /**
                     * 获取内容质检结果。
                     * @return StreamQuaCtrlResults 内容质检结果。
                     * 
                     */
                    std::vector<std::string> GetStreamQuaCtrlResults() const;

                    /**
                     * 设置内容质检结果。
                     * @param _streamQuaCtrlResults 内容质检结果。
                     * 
                     */
                    void SetStreamQuaCtrlResults(const std::vector<std::string>& _streamQuaCtrlResults);

                    /**
                     * 判断参数 StreamQuaCtrlResults 是否已赋值
                     * @return StreamQuaCtrlResults 是否已赋值
                     * 
                     */
                    bool StreamQuaCtrlResultsHasBeenSet() const;

                private:

                    /**
                     * 智能语音识别结果。
                     */
                    std::vector<std::string> m_aiAsrResults;
                    bool m_aiAsrResultsHasBeenSet;

                    /**
                     * 智能文字识别结果。
                     */
                    std::vector<std::string> m_aiOcrResults;
                    bool m_aiOcrResultsHasBeenSet;

                    /**
                     * 内容质检结果。
                     */
                    std::vector<std::string> m_streamQuaCtrlResults;
                    bool m_streamQuaCtrlResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MPSRESULT_H_
