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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DETECTLENGTHLIMITCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DETECTLENGTHLIMITCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DetectLengthLimitRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 检测长度限制
                */
                class DetectLengthLimitConfig : public AbstractModel
                {
                public:
                    DetectLengthLimitConfig();
                    ~DetectLengthLimitConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检测长度限制的规则列表。
                     * @return DetectLengthLimitRules 检测长度限制的规则列表。
                     * 
                     */
                    std::vector<DetectLengthLimitRule> GetDetectLengthLimitRules() const;

                    /**
                     * 设置检测长度限制的规则列表。
                     * @param _detectLengthLimitRules 检测长度限制的规则列表。
                     * 
                     */
                    void SetDetectLengthLimitRules(const std::vector<DetectLengthLimitRule>& _detectLengthLimitRules);

                    /**
                     * 判断参数 DetectLengthLimitRules 是否已赋值
                     * @return DetectLengthLimitRules 是否已赋值
                     * 
                     */
                    bool DetectLengthLimitRulesHasBeenSet() const;

                private:

                    /**
                     * 检测长度限制的规则列表。
                     */
                    std::vector<DetectLengthLimitRule> m_detectLengthLimitRules;
                    bool m_detectLengthLimitRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DETECTLENGTHLIMITCONFIG_H_
