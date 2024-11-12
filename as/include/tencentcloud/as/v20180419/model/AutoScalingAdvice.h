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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_AUTOSCALINGADVICE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_AUTOSCALINGADVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/Advice.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 伸缩组配置建议。
                */
                class AutoScalingAdvice : public AbstractModel
                {
                public:
                    AutoScalingAdvice();
                    ~AutoScalingAdvice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取伸缩组ID。
                     * @return AutoScalingGroupId 伸缩组ID。
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置伸缩组ID。
                     * @param _autoScalingGroupId 伸缩组ID。
                     * 
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取伸缩组警告级别。取值范围：
<li>NORMAL：正常</li>
<li>WARNING：警告级别</li>
<li>CRITICAL：严重级别</li>
                     * @return Level 伸缩组警告级别。取值范围：
<li>NORMAL：正常</li>
<li>WARNING：警告级别</li>
<li>CRITICAL：严重级别</li>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置伸缩组警告级别。取值范围：
<li>NORMAL：正常</li>
<li>WARNING：警告级别</li>
<li>CRITICAL：严重级别</li>
                     * @param _level 伸缩组警告级别。取值范围：
<li>NORMAL：正常</li>
<li>WARNING：警告级别</li>
<li>CRITICAL：严重级别</li>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取伸缩组配置建议集合。
                     * @return Advices 伸缩组配置建议集合。
                     * 
                     */
                    std::vector<Advice> GetAdvices() const;

                    /**
                     * 设置伸缩组配置建议集合。
                     * @param _advices 伸缩组配置建议集合。
                     * 
                     */
                    void SetAdvices(const std::vector<Advice>& _advices);

                    /**
                     * 判断参数 Advices 是否已赋值
                     * @return Advices 是否已赋值
                     * 
                     */
                    bool AdvicesHasBeenSet() const;

                private:

                    /**
                     * 伸缩组ID。
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * 伸缩组警告级别。取值范围：
<li>NORMAL：正常</li>
<li>WARNING：警告级别</li>
<li>CRITICAL：严重级别</li>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 伸缩组配置建议集合。
                     */
                    std::vector<Advice> m_advices;
                    bool m_advicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_AUTOSCALINGADVICE_H_
