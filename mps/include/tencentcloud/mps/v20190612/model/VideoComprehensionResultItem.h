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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOCOMPREHENSIONRESULTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOCOMPREHENSIONRESULTITEM_H_

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
                * 视频分镜理解结果
                */
                class VideoComprehensionResultItem : public AbstractModel
                {
                public:
                    VideoComprehensionResultItem();
                    ~VideoComprehensionResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分镜片段起始时间（单位：秒）

                     * @return StartTime 分镜片段起始时间（单位：秒）

                     * 
                     */
                    double GetStartTime() const;

                    /**
                     * 设置分镜片段起始时间（单位：秒）

                     * @param _startTime 分镜片段起始时间（单位：秒）

                     * 
                     */
                    void SetStartTime(const double& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取分镜片段结束时间（单位：秒）
                     * @return EndTime 分镜片段结束时间（单位：秒）
                     * 
                     */
                    double GetEndTime() const;

                    /**
                     * 设置分镜片段结束时间（单位：秒）
                     * @param _endTime 分镜片段结束时间（单位：秒）
                     * 
                     */
                    void SetEndTime(const double& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取分镜片段标题
                     * @return Title 分镜片段标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置分镜片段标题
                     * @param _title 分镜片段标题
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取分镜片段信息描述
                     * @return Description 分镜片段信息描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置分镜片段信息描述
                     * @param _description 分镜片段信息描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取分镜片段关键词
                     * @return Keywords 分镜片段关键词
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置分镜片段关键词
                     * @param _keywords 分镜片段关键词
                     * 
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                private:

                    /**
                     * 分镜片段起始时间（单位：秒）

                     */
                    double m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 分镜片段结束时间（单位：秒）
                     */
                    double m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分镜片段标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 分镜片段信息描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 分镜片段关键词
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOCOMPREHENSIONRESULTITEM_H_
