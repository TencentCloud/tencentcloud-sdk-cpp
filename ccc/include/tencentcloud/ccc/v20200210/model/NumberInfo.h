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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_NUMBERINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_NUMBERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 号码信息
                */
                class NumberInfo : public AbstractModel
                {
                public:
                    NumberInfo();
                    ~NumberInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>号码</p>
                     * @return Number <p>号码</p>
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置<p>号码</p>
                     * @param _number <p>号码</p>
                     * 
                     */
                    void SetNumber(const std::string& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取<p>绑定的外呼技能组</p>
                     * @return CallOutSkillGroupIds <p>绑定的外呼技能组</p>
                     * 
                     */
                    std::vector<uint64_t> GetCallOutSkillGroupIds() const;

                    /**
                     * 设置<p>绑定的外呼技能组</p>
                     * @param _callOutSkillGroupIds <p>绑定的外呼技能组</p>
                     * 
                     */
                    void SetCallOutSkillGroupIds(const std::vector<uint64_t>& _callOutSkillGroupIds);

                    /**
                     * 判断参数 CallOutSkillGroupIds 是否已赋值
                     * @return CallOutSkillGroupIds 是否已赋值
                     * 
                     */
                    bool CallOutSkillGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>号码状态，1-正常，2-欠费停用，4-管理员停用，5-违规停用</p>
                     * @return State <p>号码状态，1-正常，2-欠费停用，4-管理员停用，5-违规停用</p>
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置<p>号码状态，1-正常，2-欠费停用，4-管理员停用，5-违规停用</p>
                     * @param _state <p>号码状态，1-正常，2-欠费停用，4-管理员停用，5-违规停用</p>
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>是否自携号码</p><p>枚举值：</p><ul><li>0： 非自携</li><li>1： 自携</li></ul>
                     * @return CostType <p>是否自携号码</p><p>枚举值：</p><ul><li>0： 非自携</li><li>1： 自携</li></ul>
                     * 
                     */
                    int64_t GetCostType() const;

                    /**
                     * 设置<p>是否自携号码</p><p>枚举值：</p><ul><li>0： 非自携</li><li>1： 自携</li></ul>
                     * @param _costType <p>是否自携号码</p><p>枚举值：</p><ul><li>0： 非自携</li><li>1： 自携</li></ul>
                     * 
                     */
                    void SetCostType(const int64_t& _costType);

                    /**
                     * 判断参数 CostType 是否已赋值
                     * @return CostType 是否已赋值
                     * 
                     */
                    bool CostTypeHasBeenSet() const;

                private:

                    /**
                     * <p>号码</p>
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * <p>绑定的外呼技能组</p>
                     */
                    std::vector<uint64_t> m_callOutSkillGroupIds;
                    bool m_callOutSkillGroupIdsHasBeenSet;

                    /**
                     * <p>号码状态，1-正常，2-欠费停用，4-管理员停用，5-违规停用</p>
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>是否自携号码</p><p>枚举值：</p><ul><li>0： 非自携</li><li>1： 自携</li></ul>
                     */
                    int64_t m_costType;
                    bool m_costTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_NUMBERINFO_H_
