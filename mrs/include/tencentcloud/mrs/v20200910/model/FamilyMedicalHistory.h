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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_FAMILYMEDICALHISTORY_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_FAMILYMEDICALHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 家族疾病史
                */
                class FamilyMedicalHistory : public AbstractModel
                {
                public:
                    FamilyMedicalHistory();
                    ~FamilyMedicalHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取家族成员史
                     * @return RelativeHistory 家族成员史
                     * 
                     */
                    std::string GetRelativeHistory() const;

                    /**
                     * 设置家族成员史
                     * @param _relativeHistory 家族成员史
                     * 
                     */
                    void SetRelativeHistory(const std::string& _relativeHistory);

                    /**
                     * 判断参数 RelativeHistory 是否已赋值
                     * @return RelativeHistory 是否已赋值
                     * 
                     */
                    bool RelativeHistoryHasBeenSet() const;

                    /**
                     * 获取家族肿瘤史
                     * @return RelativeCancerHistory 家族肿瘤史
                     * 
                     */
                    std::string GetRelativeCancerHistory() const;

                    /**
                     * 设置家族肿瘤史
                     * @param _relativeCancerHistory 家族肿瘤史
                     * 
                     */
                    void SetRelativeCancerHistory(const std::string& _relativeCancerHistory);

                    /**
                     * 判断参数 RelativeCancerHistory 是否已赋值
                     * @return RelativeCancerHistory 是否已赋值
                     * 
                     */
                    bool RelativeCancerHistoryHasBeenSet() const;

                    /**
                     * 获取家族遗传史
                     * @return GeneticHistory 家族遗传史
                     * 
                     */
                    std::string GetGeneticHistory() const;

                    /**
                     * 设置家族遗传史
                     * @param _geneticHistory 家族遗传史
                     * 
                     */
                    void SetGeneticHistory(const std::string& _geneticHistory);

                    /**
                     * 判断参数 GeneticHistory 是否已赋值
                     * @return GeneticHistory 是否已赋值
                     * 
                     */
                    bool GeneticHistoryHasBeenSet() const;

                private:

                    /**
                     * 家族成员史
                     */
                    std::string m_relativeHistory;
                    bool m_relativeHistoryHasBeenSet;

                    /**
                     * 家族肿瘤史
                     */
                    std::string m_relativeCancerHistory;
                    bool m_relativeCancerHistoryHasBeenSet;

                    /**
                     * 家族遗传史
                     */
                    std::string m_geneticHistory;
                    bool m_geneticHistoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_FAMILYMEDICALHISTORY_H_
