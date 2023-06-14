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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SCDNWAFRULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SCDNWAFRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Waf 规则信息
                */
                class ScdnWafRule : public AbstractModel
                {
                public:
                    ScdnWafRule();
                    ~ScdnWafRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取攻击类型
                     * @return AttackType 攻击类型
                     * 
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置攻击类型
                     * @param _attackType 攻击类型
                     * 
                     */
                    void SetAttackType(const std::string& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     * 
                     */
                    bool AttackTypeHasBeenSet() const;

                    /**
                     * 获取防护措施，observe
                     * @return Operate 防护措施，observe
                     * 
                     */
                    std::string GetOperate() const;

                    /**
                     * 设置防护措施，observe
                     * @param _operate 防护措施，observe
                     * 
                     */
                    void SetOperate(const std::string& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                private:

                    /**
                     * 攻击类型
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * 防护措施，observe
                     */
                    std::string m_operate;
                    bool m_operateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SCDNWAFRULE_H_
