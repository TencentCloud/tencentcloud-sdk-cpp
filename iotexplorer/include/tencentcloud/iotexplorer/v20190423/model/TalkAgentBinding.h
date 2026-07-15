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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKAGENTBINDING_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKAGENTBINDING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 智能体绑定配置
                */
                class TalkAgentBinding : public AbstractModel
                {
                public:
                    TalkAgentBinding();
                    ~TalkAgentBinding() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取product 或 device
                     * @return BindingScope product 或 device
                     * 
                     */
                    std::string GetBindingScope() const;

                    /**
                     * 设置product 或 device
                     * @param _bindingScope product 或 device
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
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
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
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
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
                     * 获取智能体ID
                     * @return AgentId 智能体ID
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置智能体ID
                     * @param _agentId 智能体ID
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
                     * 获取绑定优先级
                     * @return Priority 绑定优先级
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置绑定优先级
                     * @param _priority 绑定优先级
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取创建时间，Unix 秒
                     * @return CreateTime 创建时间，Unix 秒
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，Unix 秒
                     * @param _createTime 创建时间，Unix 秒
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间，Unix 秒
                     * @return UpdateTime 更新时间，Unix 秒
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间，Unix 秒
                     * @param _updateTime 更新时间，Unix 秒
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * product 或 device
                     */
                    std::string m_bindingScope;
                    bool m_bindingScopeHasBeenSet;

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 智能体ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 绑定优先级
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 创建时间，Unix 秒
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间，Unix 秒
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKAGENTBINDING_H_
