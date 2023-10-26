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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPREFERENCE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPREFERENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 源站组引用服务。
                */
                class OriginGroupReference : public AbstractModel
                {
                public:
                    OriginGroupReference();
                    ~OriginGroupReference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取引用服务类型，取值有：
<li>AccelerationDomain: 加速域名；</li>
<li>RuleEngine: 规则引擎；</li>
<li>Loadbalance: 负载均衡；</li>
<li>ApplicationProxy: 四层代理。</li>
                     * @return InstanceType 引用服务类型，取值有：
<li>AccelerationDomain: 加速域名；</li>
<li>RuleEngine: 规则引擎；</li>
<li>Loadbalance: 负载均衡；</li>
<li>ApplicationProxy: 四层代理。</li>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置引用服务类型，取值有：
<li>AccelerationDomain: 加速域名；</li>
<li>RuleEngine: 规则引擎；</li>
<li>Loadbalance: 负载均衡；</li>
<li>ApplicationProxy: 四层代理。</li>
                     * @param _instanceType 引用服务类型，取值有：
<li>AccelerationDomain: 加速域名；</li>
<li>RuleEngine: 规则引擎；</li>
<li>Loadbalance: 负载均衡；</li>
<li>ApplicationProxy: 四层代理。</li>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取引用类型的实例ID。
                     * @return InstanceId 引用类型的实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置引用类型的实例ID。
                     * @param _instanceId 引用类型的实例ID。
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
                     * 获取应用类型的实例名称。
                     * @return InstanceName 应用类型的实例名称。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置应用类型的实例名称。
                     * @param _instanceName 应用类型的实例名称。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                private:

                    /**
                     * 引用服务类型，取值有：
<li>AccelerationDomain: 加速域名；</li>
<li>RuleEngine: 规则引擎；</li>
<li>Loadbalance: 负载均衡；</li>
<li>ApplicationProxy: 四层代理。</li>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 引用类型的实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 应用类型的实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPREFERENCE_H_
