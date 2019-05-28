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

#ifndef TENCENTCLOUD_FACEFUSION_V20181201_MODEL_FUSEFACEREVIEWRESULT_H_
#define TENCENTCLOUD_FACEFUSION_V20181201_MODEL_FUSEFACEREVIEWRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/facefusion/v20181201/model/FuseFaceReviewDetail.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20181201
        {
            namespace Model
            {
                /**
                * 人脸融合鉴黄鉴政返回参数item
                */
                class FuseFaceReviewResult : public AbstractModel
                {
                public:
                    FuseFaceReviewResult();
                    ~FuseFaceReviewResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对应的类别名称 porn, politics, terror
                     * @return Category 对应的类别名称 porn, politics, terror
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置对应的类别名称 porn, politics, terror
                     * @param Category 对应的类别名称 porn, politics, terror
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取对应子类别状态码
                     * @return Code 对应子类别状态码
                     */
                    std::string GetCode() const;

                    /**
                     * 设置对应子类别状态码
                     * @param Code 对应子类别状态码
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取对应子类别状态码信息描述
                     * @return CodeDescription 对应子类别状态码信息描述
                     */
                    std::string GetCodeDescription() const;

                    /**
                     * 设置对应子类别状态码信息描述
                     * @param CodeDescription 对应子类别状态码信息描述
                     */
                    void SetCodeDescription(const std::string& _codeDescription);

                    /**
                     * 判断参数 CodeDescription 是否已赋值
                     * @return CodeDescription 是否已赋值
                     */
                    bool CodeDescriptionHasBeenSet() const;

                    /**
                     * 获取对应识别种类的置信度
                     * @return Confidence 对应识别种类的置信度
                     */
                    double GetConfidence() const;

                    /**
                     * 设置对应识别种类的置信度
                     * @param Confidence 对应识别种类的置信度
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取此字段为保留字段，目前统一返回pass。
                     * @return Suggestion 此字段为保留字段，目前统一返回pass。
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置此字段为保留字段，目前统一返回pass。
                     * @param Suggestion 此字段为保留字段，目前统一返回pass。
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取审核详细内容
                     * @return DetailSet 审核详细内容
                     */
                    std::vector<FuseFaceReviewDetail> GetDetailSet() const;

                    /**
                     * 设置审核详细内容
                     * @param DetailSet 审核详细内容
                     */
                    void SetDetailSet(const std::vector<FuseFaceReviewDetail>& _detailSet);

                    /**
                     * 判断参数 DetailSet 是否已赋值
                     * @return DetailSet 是否已赋值
                     */
                    bool DetailSetHasBeenSet() const;

                private:

                    /**
                     * 对应的类别名称 porn, politics, terror
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 对应子类别状态码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 对应子类别状态码信息描述
                     */
                    std::string m_codeDescription;
                    bool m_codeDescriptionHasBeenSet;

                    /**
                     * 对应识别种类的置信度
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 此字段为保留字段，目前统一返回pass。
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 审核详细内容
                     */
                    std::vector<FuseFaceReviewDetail> m_detailSet;
                    bool m_detailSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20181201_MODEL_FUSEFACEREVIEWRESULT_H_
