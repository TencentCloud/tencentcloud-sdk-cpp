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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYBLOCKRULEREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYBLOCKRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * ModifyBlockRule请求参数结构体
                */
                class ModifyBlockRuleRequest : public AbstractModel
                {
                public:
                    ModifyBlockRuleRequest();
                    ~ModifyBlockRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @return InstanceId 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @param _instanceId 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取待修改的封禁规则名
                     * @return Name 待修改的封禁规则名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置待修改的封禁规则名
                     * @param _name 待修改的封禁规则名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取包含表达式支持*（多个字符）和？（一个字符）
                     * @return Include 包含表达式支持*（多个字符）和？（一个字符）
                     * 
                     */
                    std::string GetInclude() const;

                    /**
                     * 设置包含表达式支持*（多个字符）和？（一个字符）
                     * @param _include 包含表达式支持*（多个字符）和？（一个字符）
                     * 
                     */
                    void SetInclude(const std::string& _include);

                    /**
                     * 判断参数 Include 是否已赋值
                     * @return Include 是否已赋值
                     * 
                     */
                    bool IncludeHasBeenSet() const;

                    /**
                     * 获取排除表达式支持*（多个字符）和？（一个字符），最多三条。
                     * @return Excludes 排除表达式支持*（多个字符）和？（一个字符），最多三条。
                     * 
                     */
                    std::vector<std::string> GetExcludes() const;

                    /**
                     * 设置排除表达式支持*（多个字符）和？（一个字符），最多三条。
                     * @param _excludes 排除表达式支持*（多个字符）和？（一个字符），最多三条。
                     * 
                     */
                    void SetExcludes(const std::vector<std::string>& _excludes);

                    /**
                     * 判断参数 Excludes 是否已赋值
                     * @return Excludes 是否已赋值
                     * 
                     */
                    bool ExcludesHasBeenSet() const;

                    /**
                     * 获取过期时间，毫秒级时间戳
                     * @return ExpireTime 过期时间，毫秒级时间戳
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置过期时间，毫秒级时间戳
                     * @param _expireTime 过期时间，毫秒级时间戳
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取备注，最长 128 字符
                     * @return Remark 备注，最长 128 字符
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注，最长 128 字符
                     * @param _remark 备注，最长 128 字符
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 待修改的封禁规则名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 包含表达式支持*（多个字符）和？（一个字符）
                     */
                    std::string m_include;
                    bool m_includeHasBeenSet;

                    /**
                     * 排除表达式支持*（多个字符）和？（一个字符），最多三条。
                     */
                    std::vector<std::string> m_excludes;
                    bool m_excludesHasBeenSet;

                    /**
                     * 过期时间，毫秒级时间戳
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 备注，最长 128 字符
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYBLOCKRULEREQUEST_H_
