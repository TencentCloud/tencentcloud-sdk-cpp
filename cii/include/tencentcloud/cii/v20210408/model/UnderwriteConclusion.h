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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_UNDERWRITECONCLUSION_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_UNDERWRITECONCLUSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * 核保结论 机器结论和人工结论统一数据结构
                */
                class UnderwriteConclusion : public AbstractModel
                {
                public:
                    UnderwriteConclusion();
                    ~UnderwriteConclusion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型
                     * @return Type 类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
                     * @param _type 类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取结论
                     * @return Conclusion 结论
                     * 
                     */
                    std::string GetConclusion() const;

                    /**
                     * 设置结论
                     * @param _conclusion 结论
                     * 
                     */
                    void SetConclusion(const std::string& _conclusion);

                    /**
                     * 判断参数 Conclusion 是否已赋值
                     * @return Conclusion 是否已赋值
                     * 
                     */
                    bool ConclusionHasBeenSet() const;

                    /**
                     * 获取解释
                     * @return Explanation 解释
                     * 
                     */
                    std::string GetExplanation() const;

                    /**
                     * 设置解释
                     * @param _explanation 解释
                     * 
                     */
                    void SetExplanation(const std::string& _explanation);

                    /**
                     * 判断参数 Explanation 是否已赋值
                     * @return Explanation 是否已赋值
                     * 
                     */
                    bool ExplanationHasBeenSet() const;

                private:

                    /**
                     * 类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 结论
                     */
                    std::string m_conclusion;
                    bool m_conclusionHasBeenSet;

                    /**
                     * 解释
                     */
                    std::string m_explanation;
                    bool m_explanationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_UNDERWRITECONCLUSION_H_
