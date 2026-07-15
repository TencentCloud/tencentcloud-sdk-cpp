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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWETALKAGENTLISTREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWETALKAGENTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DescribeTWeTalkAgentList请求参数结构体
                */
                class DescribeTWeTalkAgentListRequest : public AbstractModel
                {
                public:
                    DescribeTWeTalkAgentListRequest();
                    ~DescribeTWeTalkAgentListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>产品 ID</p>
                     * @return ProductId <p>产品 ID</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>产品 ID</p>
                     * @param _productId <p>产品 ID</p>
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取<p>设备名称，设备级绑定查询时使用</p>
                     * @return DeviceName <p>设备名称，设备级绑定查询时使用</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>设备名称，设备级绑定查询时使用</p>
                     * @param _deviceName <p>设备名称，设备级绑定查询时使用</p>
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取<p>绑定维度：product 或 device</p>
                     * @return BindingScope <p>绑定维度：product 或 device</p>
                     * 
                     */
                    std::string GetBindingScope() const;

                    /**
                     * 设置<p>绑定维度：product 或 device</p>
                     * @param _bindingScope <p>绑定维度：product 或 device</p>
                     * 
                     */
                    void SetBindingScope(const std::string& _bindingScope);

                    /**
                     * 判断参数 BindingScope 是否已赋值
                     * @return BindingScope 是否已赋值
                     * 
                     */
                    bool BindingScopeHasBeenSet() const;

                    /**
                     * 获取<p>智能体 ID</p>
                     * @return AgentId <p>智能体 ID</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>智能体 ID</p>
                     * @param _agentId <p>智能体 ID</p>
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取<p>实例 ID</p>
                     * @return InstanceId <p>实例 ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID</p>
                     * @param _instanceId <p>实例 ID</p>
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
                     * 获取<p>智能体名称筛选</p>
                     * @return Name <p>智能体名称筛选</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>智能体名称筛选</p>
                     * @param _name <p>智能体名称筛选</p>
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
                     * 获取<p>偏移量</p>
                     * @return Offset <p>偏移量</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量</p>
                     * @param _offset <p>偏移量</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>返回数量，最大 100</p>
                     * @return Limit <p>返回数量，最大 100</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，最大 100</p>
                     * @param _limit <p>返回数量，最大 100</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>产品 ID</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>设备名称，设备级绑定查询时使用</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>绑定维度：product 或 device</p>
                     */
                    std::string m_bindingScope;
                    bool m_bindingScopeHasBeenSet;

                    /**
                     * <p>智能体 ID</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>实例 ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>智能体名称筛选</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>偏移量</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，最大 100</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWETALKAGENTLISTREQUEST_H_
