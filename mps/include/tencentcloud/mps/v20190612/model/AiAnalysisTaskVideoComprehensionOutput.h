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
#include <tencentcloud/mps/v20190612/model/VideoComprehensionResultItem.h>


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

                    /**
                     * 获取视频（音频）理解扩展信息
                     * @return VideoComprehensionExtInfo 视频（音频）理解扩展信息
                     * 
                     */
                    std::string GetVideoComprehensionExtInfo() const;

                    /**
                     * 设置视频（音频）理解扩展信息
                     * @param _videoComprehensionExtInfo 视频（音频）理解扩展信息
                     * 
                     */
                    void SetVideoComprehensionExtInfo(const std::string& _videoComprehensionExtInfo);

                    /**
                     * 判断参数 VideoComprehensionExtInfo 是否已赋值
                     * @return VideoComprehensionExtInfo 是否已赋值
                     * 
                     */
                    bool VideoComprehensionExtInfoHasBeenSet() const;

                    /**
                     * 获取视频分镜理解结果
                     * @return VideoComprehensionResultList 视频分镜理解结果
                     * 
                     */
                    std::vector<VideoComprehensionResultItem> GetVideoComprehensionResultList() const;

                    /**
                     * 设置视频分镜理解结果
                     * @param _videoComprehensionResultList 视频分镜理解结果
                     * 
                     */
                    void SetVideoComprehensionResultList(const std::vector<VideoComprehensionResultItem>& _videoComprehensionResultList);

                    /**
                     * 判断参数 VideoComprehensionResultList 是否已赋值
                     * @return VideoComprehensionResultList 是否已赋值
                     * 
                     */
                    bool VideoComprehensionResultListHasBeenSet() const;

                private:

                    /**
                     * 视频（音频）理解内容详情
                     */
                    std::string m_videoComprehensionAnalysisResult;
                    bool m_videoComprehensionAnalysisResultHasBeenSet;

                    /**
                     * 视频（音频）理解扩展信息
                     */
                    std::string m_videoComprehensionExtInfo;
                    bool m_videoComprehensionExtInfoHasBeenSet;

                    /**
                     * 视频分镜理解结果
                     */
                    std::vector<VideoComprehensionResultItem> m_videoComprehensionResultList;
                    bool m_videoComprehensionResultListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKVIDEOCOMPREHENSIONOUTPUT_H_
