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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SENSITIVEDETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SENSITIVEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 敏感分类分级描述
                */
                class SensitiveDetail : public AbstractModel
                {
                public:
                    SensitiveDetail();
                    ~SensitiveDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段分类
                     * @return CategoryRule 字段分类
                     * 
                     */
                    std::string GetCategoryRule() const;

                    /**
                     * 设置字段分类
                     * @param _categoryRule 字段分类
                     * 
                     */
                    void SetCategoryRule(const std::string& _categoryRule);

                    /**
                     * 判断参数 CategoryRule 是否已赋值
                     * @return CategoryRule 是否已赋值
                     * 
                     */
                    bool CategoryRuleHasBeenSet() const;

                    /**
                     * 获取字段分级
                     * @return LevelRisk 字段分级
                     * 
                     */
                    std::string GetLevelRisk() const;

                    /**
                     * 设置字段分级
                     * @param _levelRisk 字段分级
                     * 
                     */
                    void SetLevelRisk(const std::string& _levelRisk);

                    /**
                     * 判断参数 LevelRisk 是否已赋值
                     * @return LevelRisk 是否已赋值
                     * 
                     */
                    bool LevelRiskHasBeenSet() const;

                    /**
                     * 获取1:敏感信息字段
0:非敏感字段
                     * @return IsSensitive 1:敏感信息字段
0:非敏感字段
                     * 
                     */
                    uint64_t GetIsSensitive() const;

                    /**
                     * 设置1:敏感信息字段
0:非敏感字段
                     * @param _isSensitive 1:敏感信息字段
0:非敏感字段
                     * 
                     */
                    void SetIsSensitive(const uint64_t& _isSensitive);

                    /**
                     * 判断参数 IsSensitive 是否已赋值
                     * @return IsSensitive 是否已赋值
                     * 
                     */
                    bool IsSensitiveHasBeenSet() const;

                private:

                    /**
                     * 字段分类
                     */
                    std::string m_categoryRule;
                    bool m_categoryRuleHasBeenSet;

                    /**
                     * 字段分级
                     */
                    std::string m_levelRisk;
                    bool m_levelRiskHasBeenSet;

                    /**
                     * 1:敏感信息字段
0:非敏感字段
                     */
                    uint64_t m_isSensitive;
                    bool m_isSensitiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SENSITIVEDETAIL_H_
