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

#ifndef TENCENTCLOUD_FACEFUSION_V20181201_MODEL_FUSEFACEREVIEWDETAIL_H_
#define TENCENTCLOUD_FACEFUSION_V20181201_MODEL_FUSEFACEREVIEWDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20181201
        {
            namespace Model
            {
                /**
                * 人脸融合不适宜内容识别人脸信息
                */
                class FuseFaceReviewDetail : public AbstractModel
                {
                public:
                    FuseFaceReviewDetail();
                    ~FuseFaceReviewDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取保留字段
                     * @return Field 保留字段
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置保留字段
                     * @param _field 保留字段
                     * 
                     */
                    void SetField(const std::string& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     * 
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取人员名称
                     * @return Label 人员名称
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置人员名称
                     * @param _label 人员名称
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取对应识别label的置信度，分数越高意味违法违规可能性越大。 
0到70，Suggestion建议为PASS； 
70到80，Suggestion建议为REVIEW； 
80到100，Suggestion建议为BLOCK。
                     * @return Confidence 对应识别label的置信度，分数越高意味违法违规可能性越大。 
0到70，Suggestion建议为PASS； 
70到80，Suggestion建议为REVIEW； 
80到100，Suggestion建议为BLOCK。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置对应识别label的置信度，分数越高意味违法违规可能性越大。 
0到70，Suggestion建议为PASS； 
70到80，Suggestion建议为REVIEW； 
80到100，Suggestion建议为BLOCK。
                     * @param _confidence 对应识别label的置信度，分数越高意味违法违规可能性越大。 
0到70，Suggestion建议为PASS； 
70到80，Suggestion建议为REVIEW； 
80到100，Suggestion建议为BLOCK。
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
                     * 获取识别场景的审核结论：  
PASS：正常 
REVIEW：疑似  
BLOCK：违规
                     * @return Suggestion 识别场景的审核结论：  
PASS：正常 
REVIEW：疑似  
BLOCK：违规
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置识别场景的审核结论：  
PASS：正常 
REVIEW：疑似  
BLOCK：违规
                     * @param _suggestion 识别场景的审核结论：  
PASS：正常 
REVIEW：疑似  
BLOCK：违规
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                private:

                    /**
                     * 保留字段
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * 人员名称
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 对应识别label的置信度，分数越高意味违法违规可能性越大。 
0到70，Suggestion建议为PASS； 
70到80，Suggestion建议为REVIEW； 
80到100，Suggestion建议为BLOCK。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 识别场景的审核结论：  
PASS：正常 
REVIEW：疑似  
BLOCK：违规
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20181201_MODEL_FUSEFACEREVIEWDETAIL_H_
