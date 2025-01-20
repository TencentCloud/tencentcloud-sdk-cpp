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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_IP6TRANSLATOR_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_IP6TRANSLATOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Ip6Rule.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * IPV6转换实例信息
                */
                class Ip6Translator : public AbstractModel
                {
                public:
                    Ip6Translator();
                    ~Ip6Translator() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取IPV6转换实例名称
                     * @return Ip6TranslatorName IPV6转换实例名称
                     * 
                     */
                    std::string GetIp6TranslatorName() const;

                    /**
                     * 设置IPV6转换实例名称
                     * @param _ip6TranslatorName IPV6转换实例名称
                     * 
                     */
                    void SetIp6TranslatorName(const std::string& _ip6TranslatorName);

                    /**
                     * 判断参数 Ip6TranslatorName 是否已赋值
                     * @return Ip6TranslatorName 是否已赋值
                     * 
                     */
                    bool Ip6TranslatorNameHasBeenSet() const;

                    /**
                     * 获取IPV6地址
                     * @return Vip6 IPV6地址
                     * 
                     */
                    std::string GetVip6() const;

                    /**
                     * 设置IPV6地址
                     * @param _vip6 IPV6地址
                     * 
                     */
                    void SetVip6(const std::string& _vip6);

                    /**
                     * 判断参数 Vip6 是否已赋值
                     * @return Vip6 是否已赋值
                     * 
                     */
                    bool Vip6HasBeenSet() const;

                    /**
                     * 获取IPV6转换地址所属运营商
                     * @return IspName IPV6转换地址所属运营商
                     * 
                     */
                    std::string GetIspName() const;

                    /**
                     * 设置IPV6转换地址所属运营商
                     * @param _ispName IPV6转换地址所属运营商
                     * 
                     */
                    void SetIspName(const std::string& _ispName);

                    /**
                     * 判断参数 IspName 是否已赋值
                     * @return IspName 是否已赋值
                     * 
                     */
                    bool IspNameHasBeenSet() const;

                    /**
                     * 获取转换实例状态，限于CREATING,RUNNING,DELETING,MODIFYING
                     * @return TranslatorStatus 转换实例状态，限于CREATING,RUNNING,DELETING,MODIFYING
                     * 
                     */
                    std::string GetTranslatorStatus() const;

                    /**
                     * 设置转换实例状态，限于CREATING,RUNNING,DELETING,MODIFYING
                     * @param _translatorStatus 转换实例状态，限于CREATING,RUNNING,DELETING,MODIFYING
                     * 
                     */
                    void SetTranslatorStatus(const std::string& _translatorStatus);

                    /**
                     * 判断参数 TranslatorStatus 是否已赋值
                     * @return TranslatorStatus 是否已赋值
                     * 
                     */
                    bool TranslatorStatusHasBeenSet() const;

                    /**
                     * 获取IPV6转换实例创建时间
                     * @return CreatedTime IPV6转换实例创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置IPV6转换实例创建时间
                     * @param _createdTime IPV6转换实例创建时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取绑定的IPV6转换规则数量
                     * @return Ip6RuleCount 绑定的IPV6转换规则数量
                     * 
                     */
                    int64_t GetIp6RuleCount() const;

                    /**
                     * 设置绑定的IPV6转换规则数量
                     * @param _ip6RuleCount 绑定的IPV6转换规则数量
                     * 
                     */
                    void SetIp6RuleCount(const int64_t& _ip6RuleCount);

                    /**
                     * 判断参数 Ip6RuleCount 是否已赋值
                     * @return Ip6RuleCount 是否已赋值
                     * 
                     */
                    bool Ip6RuleCountHasBeenSet() const;

                    /**
                     * 获取IPV6转换规则信息
                     * @return IP6RuleSet IPV6转换规则信息
                     * 
                     */
                    std::vector<Ip6Rule> GetIP6RuleSet() const;

                    /**
                     * 设置IPV6转换规则信息
                     * @param _iP6RuleSet IPV6转换规则信息
                     * 
                     */
                    void SetIP6RuleSet(const std::vector<Ip6Rule>& _iP6RuleSet);

                    /**
                     * 判断参数 IP6RuleSet 是否已赋值
                     * @return IP6RuleSet 是否已赋值
                     * 
                     */
                    bool IP6RuleSetHasBeenSet() const;

                private:

                    /**
                     * IPV6转换实例唯一ID，形如ip6-xxxxxxxx
                     */
                    std::string m_ip6TranslatorId;
                    bool m_ip6TranslatorIdHasBeenSet;

                    /**
                     * IPV6转换实例名称
                     */
                    std::string m_ip6TranslatorName;
                    bool m_ip6TranslatorNameHasBeenSet;

                    /**
                     * IPV6地址
                     */
                    std::string m_vip6;
                    bool m_vip6HasBeenSet;

                    /**
                     * IPV6转换地址所属运营商
                     */
                    std::string m_ispName;
                    bool m_ispNameHasBeenSet;

                    /**
                     * 转换实例状态，限于CREATING,RUNNING,DELETING,MODIFYING
                     */
                    std::string m_translatorStatus;
                    bool m_translatorStatusHasBeenSet;

                    /**
                     * IPV6转换实例创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 绑定的IPV6转换规则数量
                     */
                    int64_t m_ip6RuleCount;
                    bool m_ip6RuleCountHasBeenSet;

                    /**
                     * IPV6转换规则信息
                     */
                    std::vector<Ip6Rule> m_iP6RuleSet;
                    bool m_iP6RuleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_IP6TRANSLATOR_H_
