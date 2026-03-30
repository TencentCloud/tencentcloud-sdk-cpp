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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LLMSENSITIVEVALUELEVEL_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LLMSENSITIVEVALUELEVEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 涉敏信息结果结构体
                */
                class LLMSensitiveValueLevel : public AbstractModel
                {
                public:
                    LLMSensitiveValueLevel();
                    ~LLMSensitiveValueLevel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取敏感数据标签，如政治、色情
                     * @return Label 敏感数据标签，如政治、色情
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置敏感数据标签，如政治、色情
                     * @param _label 敏感数据标签，如政治、色情
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
                     * 获取敏感数据等级，250,300，400分别代表超严格、严格、标准等级
                     * @return Level 敏感数据等级，250,300，400分别代表超严格、严格、标准等级
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置敏感数据等级，250,300，400分别代表超严格、严格、标准等级
                     * @param _level 敏感数据等级，250,300，400分别代表超严格、严格、标准等级
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                private:

                    /**
                     * 敏感数据标签，如政治、色情
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 敏感数据等级，250,300，400分别代表超严格、严格、标准等级
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LLMSENSITIVEVALUELEVEL_H_
