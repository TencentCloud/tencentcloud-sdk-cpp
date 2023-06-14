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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSECURITYGROUPRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSECURITYGROUPRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/SecurityGroupListData.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifySecurityGroupRule请求参数结构体
                */
                class ModifySecurityGroupRuleRequest : public AbstractModel
                {
                public:
                    ModifySecurityGroupRuleRequest();
                    ~ModifySecurityGroupRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取方向，0：出站，1：入站，默认1
                     * @return Direction 方向，0：出站，1：入站，默认1
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置方向，0：出站，1：入站，默认1
                     * @param _direction 方向，0：出站，1：入站，默认1
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取编辑后是否启用规则，0：不启用，1：启用，默认1
                     * @return Enable 编辑后是否启用规则，0：不启用，1：启用，默认1
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置编辑后是否启用规则，0：不启用，1：启用，默认1
                     * @param _enable 编辑后是否启用规则，0：不启用，1：启用，默认1
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取编辑的企业安全组规则数据
                     * @return Data 编辑的企业安全组规则数据
                     * 
                     */
                    std::vector<SecurityGroupListData> GetData() const;

                    /**
                     * 设置编辑的企业安全组规则数据
                     * @param _data 编辑的企业安全组规则数据
                     * 
                     */
                    void SetData(const std::vector<SecurityGroupListData>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取编辑的企业安全组规则的原始执行顺序
                     * @return SgRuleOriginSequence 编辑的企业安全组规则的原始执行顺序
                     * 
                     */
                    uint64_t GetSgRuleOriginSequence() const;

                    /**
                     * 设置编辑的企业安全组规则的原始执行顺序
                     * @param _sgRuleOriginSequence 编辑的企业安全组规则的原始执行顺序
                     * 
                     */
                    void SetSgRuleOriginSequence(const uint64_t& _sgRuleOriginSequence);

                    /**
                     * 判断参数 SgRuleOriginSequence 是否已赋值
                     * @return SgRuleOriginSequence 是否已赋值
                     * 
                     */
                    bool SgRuleOriginSequenceHasBeenSet() const;

                private:

                    /**
                     * 方向，0：出站，1：入站，默认1
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 编辑后是否启用规则，0：不启用，1：启用，默认1
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 编辑的企业安全组规则数据
                     */
                    std::vector<SecurityGroupListData> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 编辑的企业安全组规则的原始执行顺序
                     */
                    uint64_t m_sgRuleOriginSequence;
                    bool m_sgRuleOriginSequenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSECURITYGROUPRULEREQUEST_H_
