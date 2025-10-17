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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKVIDEOCOMPREHENSIONOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKVIDEOCOMPREHENSIONOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 视频（音频）理解输出内容结果信息
                */
                class AiAnalysisTaskVideoComprehensionOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskVideoComprehensionOutput();
                    ~AiAnalysisTaskVideoComprehensionOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频（音频）理解内容详情
                     * @return VideoComprehensionAnalysisResult 视频（音频）理解内容详情
                     * 
                     */
                    std::string GetVideoComprehensionAnalysisResult() const;

                    /**
                     * 设置视频（音频）理解内容详情
                     * @param _videoComprehensionAnalysisResult 视频（音频）理解内容详情
                     * 
                     */
                    void SetVideoComprehensionAnalysisResult(const std::string& _videoComprehensionAnalysisResult);

                    /**
                     * 判断参数 VideoComprehensionAnalysisResult 是否已赋值
                     * @return VideoComprehensionAnalysisResult 是否已赋值
                     * 
                     */
                    bool VideoComprehensionAnalysisResultHasBeenSet() const;

                private:

                    /**
                     * 视频（音频）理解内容详情
                     */
                    std::string m_videoComprehensionAnalysisResult;
                    bool m_videoComprehensionAnalysisResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKVIDEOCOMPREHENSIONOUTPUT_H_
