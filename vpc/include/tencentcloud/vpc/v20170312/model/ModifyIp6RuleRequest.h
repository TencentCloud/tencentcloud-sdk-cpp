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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYIP6RULEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYIP6RULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyIp6Rule请求参数结构体
                */
                class ModifyIp6RuleRequest : public AbstractModel
                {
                public:
                    ModifyIp6RuleRequest();
                    ~ModifyIp6RuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IPV6转换实例唯一ID，形如ip6-xxxxxxxx
                     * @return Ip6TranslatorId IPV6转换实例唯一ID，形如ip6-xxxxxxxx
                     * 
                     */
                    std::string GetIp6TranslatorId() const;

                    /**
                     * 设置IPV6转换实例唯一ID，形如ip6-xxxxxxxx
                     * @param _ip6TranslatorId IPV6转换实例唯一ID，形如ip6-xxxxxxxx
                     * 
                     */
                    void SetIp6TranslatorId(const std::string& _ip6TranslatorId);

                    /**
                     * 判断参数 Ip6TranslatorId 是否已赋值
                     * @return Ip6TranslatorId 是否已赋值
                     * 
                     */
                    bool Ip6TranslatorIdHasBeenSet() const;

                    /**
                     * 获取IPV6转换规则唯一ID，形如rule6-xxxxxxxx
                     * @return Ip6RuleId IPV6转换规则唯一ID，形如rule6-xxxxxxxx
                     * 
                     */
                    std::string GetIp6RuleId() const;

                    /**
                     * 设置IPV6转换规则唯一ID，形如rule6-xxxxxxxx
                     * @param _ip6RuleId IPV6转换规则唯一ID，形如rule6-xxxxxxxx
                     * 
                     */
                    void SetIp6RuleId(const std::string& _ip6RuleId);

                    /**
                     * 判断参数 Ip6RuleId 是否已赋值
                     * @return Ip6RuleId 是否已赋值
                     * 
                     */
                    bool Ip6RuleIdHasBeenSet() const;

                    /**
                     * 获取IPV6转换规则修改后的名称
                     * @return Ip6RuleName IPV6转换规则修改后的名称
                     * 
                     */
                    std::string GetIp6RuleName() const;

                    /**
                     * 设置IPV6转换规则修改后的名称
                     * @param _ip6RuleName IPV6转换规则修改后的名称
                     * 
                     */
                    void SetIp6RuleName(const std::string& _ip6RuleName);

                    /**
                     * 判断参数 Ip6RuleName 是否已赋值
                     * @return Ip6RuleName 是否已赋值
                     * 
                     */
                    bool Ip6RuleNameHasBeenSet() const;

                    /**
                     * 获取IPV6转换规则修改后的IPV4地址
                     * @return Vip IPV6转换规则修改后的IPV4地址
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置IPV6转换规则修改后的IPV4地址
                     * @param _vip IPV6转换规则修改后的IPV4地址
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取IPV6转换规则修改后的IPV4端口号
                     * @return Vport IPV6转换规则修改后的IPV4端口号
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置IPV6转换规则修改后的IPV4端口号
                     * @param _vport IPV6转换规则修改后的IPV4端口号
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                private:

                    /**
                     * IPV6转换实例唯一ID，形如ip6-xxxxxxxx
                     */
                    std::string m_ip6TranslatorId;
                    bool m_ip6TranslatorIdHasBeenSet;

                    /**
                     * IPV6转换规则唯一ID，形如rule6-xxxxxxxx
                     */
                    std::string m_ip6RuleId;
                    bool m_ip6RuleIdHasBeenSet;

                    /**
                     * IPV6转换规则修改后的名称
                     */
                    std::string m_ip6RuleName;
                    bool m_ip6RuleNameHasBeenSet;

                    /**
                     * IPV6转换规则修改后的IPV4地址
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * IPV6转换规则修改后的IPV4端口号
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYIP6RULEREQUEST_H_
