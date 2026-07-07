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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DEFAULTACTION_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DEFAULTACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/TargetGroupConfig.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 监听器默认规则动作
                */
                class DefaultAction : public AbstractModel
                {
                public:
                    DefaultAction();
                    ~DefaultAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转发目标组配置。创建监听器时转发动作中的目标组配置仅支持单个目标组。
                     * @return TargetGroupConfig 转发目标组配置。创建监听器时转发动作中的目标组配置仅支持单个目标组。
                     * 
                     */
                    TargetGroupConfig GetTargetGroupConfig() const;

                    /**
                     * 设置转发目标组配置。创建监听器时转发动作中的目标组配置仅支持单个目标组。
                     * @param _targetGroupConfig 转发目标组配置。创建监听器时转发动作中的目标组配置仅支持单个目标组。
                     * 
                     */
                    void SetTargetGroupConfig(const TargetGroupConfig& _targetGroupConfig);

                    /**
                     * 判断参数 TargetGroupConfig 是否已赋值
                     * @return TargetGroupConfig 是否已赋值
                     * 
                     */
                    bool TargetGroupConfigHasBeenSet() const;

                    /**
                     * 获取转发动作类型。创建监听器时，默认转发动作类型仅支持转发至目标组。
                     * @return Type 转发动作类型。创建监听器时，默认转发动作类型仅支持转发至目标组。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置转发动作类型。创建监听器时，默认转发动作类型仅支持转发至目标组。
                     * @param _type 转发动作类型。创建监听器时，默认转发动作类型仅支持转发至目标组。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 转发目标组配置。创建监听器时转发动作中的目标组配置仅支持单个目标组。
                     */
                    TargetGroupConfig m_targetGroupConfig;
                    bool m_targetGroupConfigHasBeenSet;

                    /**
                     * 转发动作类型。创建监听器时，默认转发动作类型仅支持转发至目标组。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DEFAULTACTION_H_
