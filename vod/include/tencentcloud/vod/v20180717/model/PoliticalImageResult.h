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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_POLITICALIMAGERESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_POLITICALIMAGERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 图片画面审核涉及令人不适宜信息的任务结果类型
                */
                class PoliticalImageResult : public AbstractModel
                {
                public:
                    PoliticalImageResult();
                    ~PoliticalImageResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取鉴别涉及令人不适宜信息的评分，分值为0到100。
                     * @return Confidence 鉴别涉及令人不适宜信息的评分，分值为0到100。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置鉴别涉及令人不适宜信息的评分，分值为0到100。
                     * @param _confidence 鉴别涉及令人不适宜信息的评分，分值为0到100。
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取鉴别涉及令人不适宜信息的结果建议，取值范围：
<li>pass；</li>
<li>review；</li>
<li>block。</li>
                     * @return Suggestion 鉴别涉及令人不适宜信息的结果建议，取值范围：
<li>pass；</li>
<li>review；</li>
<li>block。</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置鉴别涉及令人不适宜信息的结果建议，取值范围：
<li>pass；</li>
<li>review；</li>
<li>block。</li>
                     * @param _suggestion 鉴别涉及令人不适宜信息的结果建议，取值范围：
<li>pass；</li>
<li>review；</li>
<li>block。</li>
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取涉及令人不适宜的信息、违规图标名字。
                     * @return Name 涉及令人不适宜的信息、违规图标名字。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置涉及令人不适宜的信息、违规图标名字。
                     * @param _name 涉及令人不适宜的信息、违规图标名字。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取涉及令人不适宜的信息、违规图标出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
                     * @return AreaCoordSet 涉及令人不适宜的信息、违规图标出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置涉及令人不适宜的信息、违规图标出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
                     * @param _areaCoordSet 涉及令人不适宜的信息、违规图标出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
                     * 
                     */
                    void SetAreaCoordSet(const std::vector<int64_t>& _areaCoordSet);

                    /**
                     * 判断参数 AreaCoordSet 是否已赋值
                     * @return AreaCoordSet 是否已赋值
                     * 
                     */
                    bool AreaCoordSetHasBeenSet() const;

                private:

                    /**
                     * 鉴别涉及令人不适宜信息的评分，分值为0到100。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 鉴别涉及令人不适宜信息的结果建议，取值范围：
<li>pass；</li>
<li>review；</li>
<li>block。</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 涉及令人不适宜的信息、违规图标名字。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 涉及令人不适宜的信息、违规图标出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_POLITICALIMAGERESULT_H_
