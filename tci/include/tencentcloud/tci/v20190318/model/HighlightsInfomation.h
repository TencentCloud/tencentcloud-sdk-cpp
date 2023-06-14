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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_HIGHLIGHTSINFOMATION_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_HIGHLIGHTSINFOMATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/TimeType.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 精彩集锦信息
                */
                class HighlightsInfomation : public AbstractModel
                {
                public:
                    HighlightsInfomation();
                    ~HighlightsInfomation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取专注的起始与终止时间信息。
                     * @return Concentration 专注的起始与终止时间信息。
                     * 
                     */
                    std::vector<TimeType> GetConcentration() const;

                    /**
                     * 设置专注的起始与终止时间信息。
                     * @param _concentration 专注的起始与终止时间信息。
                     * 
                     */
                    void SetConcentration(const std::vector<TimeType>& _concentration);

                    /**
                     * 判断参数 Concentration 是否已赋值
                     * @return Concentration 是否已赋值
                     * 
                     */
                    bool ConcentrationHasBeenSet() const;

                    /**
                     * 获取微笑的起始与终止时间信息。
                     * @return Smile 微笑的起始与终止时间信息。
                     * 
                     */
                    std::vector<TimeType> GetSmile() const;

                    /**
                     * 设置微笑的起始与终止时间信息。
                     * @param _smile 微笑的起始与终止时间信息。
                     * 
                     */
                    void SetSmile(const std::vector<TimeType>& _smile);

                    /**
                     * 判断参数 Smile 是否已赋值
                     * @return Smile 是否已赋值
                     * 
                     */
                    bool SmileHasBeenSet() const;

                    /**
                     * 获取高光集锦视频地址，保存剪辑好的视频地址。
                     * @return HighlightsUrl 高光集锦视频地址，保存剪辑好的视频地址。
                     * 
                     */
                    std::string GetHighlightsUrl() const;

                    /**
                     * 设置高光集锦视频地址，保存剪辑好的视频地址。
                     * @param _highlightsUrl 高光集锦视频地址，保存剪辑好的视频地址。
                     * 
                     */
                    void SetHighlightsUrl(const std::string& _highlightsUrl);

                    /**
                     * 判断参数 HighlightsUrl 是否已赋值
                     * @return HighlightsUrl 是否已赋值
                     * 
                     */
                    bool HighlightsUrlHasBeenSet() const;

                    /**
                     * 获取片段中识别出来的人脸ID。
                     * @return PersonId 片段中识别出来的人脸ID。
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置片段中识别出来的人脸ID。
                     * @param _personId 片段中识别出来的人脸ID。
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                private:

                    /**
                     * 专注的起始与终止时间信息。
                     */
                    std::vector<TimeType> m_concentration;
                    bool m_concentrationHasBeenSet;

                    /**
                     * 微笑的起始与终止时间信息。
                     */
                    std::vector<TimeType> m_smile;
                    bool m_smileHasBeenSet;

                    /**
                     * 高光集锦视频地址，保存剪辑好的视频地址。
                     */
                    std::string m_highlightsUrl;
                    bool m_highlightsUrlHasBeenSet;

                    /**
                     * 片段中识别出来的人脸ID。
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_HIGHLIGHTSINFOMATION_H_
