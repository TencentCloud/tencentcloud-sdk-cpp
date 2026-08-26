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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_INSTRUCTIONCONFIG_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_INSTRUCTIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 分身提示词配置
                */
                class InstructionConfig : public AbstractModel
                {
                public:
                    InstructionConfig();
                    ~InstructionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>角色定义</p>
                     * @return RolePosition <p>角色定义</p>
                     * 
                     */
                    std::string GetRolePosition() const;

                    /**
                     * 设置<p>角色定义</p>
                     * @param _rolePosition <p>角色定义</p>
                     * 
                     */
                    void SetRolePosition(const std::string& _rolePosition);

                    /**
                     * 判断参数 RolePosition 是否已赋值
                     * @return RolePosition 是否已赋值
                     * 
                     */
                    bool RolePositionHasBeenSet() const;

                    /**
                     * 获取<p>核心职责</p>
                     * @return CoreDuty <p>核心职责</p>
                     * 
                     */
                    std::string GetCoreDuty() const;

                    /**
                     * 设置<p>核心职责</p>
                     * @param _coreDuty <p>核心职责</p>
                     * 
                     */
                    void SetCoreDuty(const std::string& _coreDuty);

                    /**
                     * 判断参数 CoreDuty 是否已赋值
                     * @return CoreDuty 是否已赋值
                     * 
                     */
                    bool CoreDutyHasBeenSet() const;

                    /**
                     * 获取<p>核心原则</p>
                     * @return CoreTruths <p>核心原则</p>
                     * 
                     */
                    std::string GetCoreTruths() const;

                    /**
                     * 设置<p>核心原则</p>
                     * @param _coreTruths <p>核心原则</p>
                     * 
                     */
                    void SetCoreTruths(const std::string& _coreTruths);

                    /**
                     * 判断参数 CoreTruths 是否已赋值
                     * @return CoreTruths 是否已赋值
                     * 
                     */
                    bool CoreTruthsHasBeenSet() const;

                    /**
                     * 获取<p>风格约束</p>
                     * @return Vibe <p>风格约束</p>
                     * 
                     */
                    std::string GetVibe() const;

                    /**
                     * 设置<p>风格约束</p>
                     * @param _vibe <p>风格约束</p>
                     * 
                     */
                    void SetVibe(const std::string& _vibe);

                    /**
                     * 判断参数 Vibe 是否已赋值
                     * @return Vibe 是否已赋值
                     * 
                     */
                    bool VibeHasBeenSet() const;

                    /**
                     * 获取<p>注意事项</p>
                     * @return Boundaries <p>注意事项</p>
                     * 
                     */
                    std::string GetBoundaries() const;

                    /**
                     * 设置<p>注意事项</p>
                     * @param _boundaries <p>注意事项</p>
                     * 
                     */
                    void SetBoundaries(const std::string& _boundaries);

                    /**
                     * 判断参数 Boundaries 是否已赋值
                     * @return Boundaries 是否已赋值
                     * 
                     */
                    bool BoundariesHasBeenSet() const;

                private:

                    /**
                     * <p>角色定义</p>
                     */
                    std::string m_rolePosition;
                    bool m_rolePositionHasBeenSet;

                    /**
                     * <p>核心职责</p>
                     */
                    std::string m_coreDuty;
                    bool m_coreDutyHasBeenSet;

                    /**
                     * <p>核心原则</p>
                     */
                    std::string m_coreTruths;
                    bool m_coreTruthsHasBeenSet;

                    /**
                     * <p>风格约束</p>
                     */
                    std::string m_vibe;
                    bool m_vibeHasBeenSet;

                    /**
                     * <p>注意事项</p>
                     */
                    std::string m_boundaries;
                    bool m_boundariesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_INSTRUCTIONCONFIG_H_
