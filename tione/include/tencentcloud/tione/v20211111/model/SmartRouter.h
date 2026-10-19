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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SMARTROUTER_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SMARTROUTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/SmartRouterComponent.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 智能路由完整对象（挂在 ServiceGroup 的 44 号）
                */
                class SmartRouter : public AbstractModel
                {
                public:
                    SmartRouter();
                    ~SmartRouter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取智能路由开关状态（true=已开启，false=未开启/已停止）
                     * @return Enabled 智能路由开关状态（true=已开启，false=未开启/已停止）
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置智能路由开关状态（true=已开启，false=未开启/已停止）
                     * @param _enabled 智能路由开关状态（true=已开启，false=未开启/已停止）
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取绑定的服务组 ID（一对一）
                     * @return ServiceGroupId 绑定的服务组 ID（一对一）
                     * 
                     */
                    std::string GetServiceGroupId() const;

                    /**
                     * 设置绑定的服务组 ID（一对一）
                     * @param _serviceGroupId 绑定的服务组 ID（一对一）
                     * 
                     */
                    void SetServiceGroupId(const std::string& _serviceGroupId);

                    /**
                     * 判断参数 ServiceGroupId 是否已赋值
                     * @return ServiceGroupId 是否已赋值
                     * 
                     */
                    bool ServiceGroupIdHasBeenSet() const;

                    /**
                     * 获取组件列表（gateway + scheduler；repeated 为未来扩展预留）
                     * @return ComponentList 组件列表（gateway + scheduler；repeated 为未来扩展预留）
                     * 
                     */
                    std::vector<SmartRouterComponent> GetComponentList() const;

                    /**
                     * 设置组件列表（gateway + scheduler；repeated 为未来扩展预留）
                     * @param _componentList 组件列表（gateway + scheduler；repeated 为未来扩展预留）
                     * 
                     */
                    void SetComponentList(const std::vector<SmartRouterComponent>& _componentList);

                    /**
                     * 判断参数 ComponentList 是否已赋值
                     * @return ComponentList 是否已赋值
                     * 
                     */
                    bool ComponentListHasBeenSet() const;

                    /**
                     * 获取创建人
                     * @return Creator 创建人
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建人
                     * @param _creator 创建人
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 智能路由开关状态（true=已开启，false=未开启/已停止）
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 绑定的服务组 ID（一对一）
                     */
                    std::string m_serviceGroupId;
                    bool m_serviceGroupIdHasBeenSet;

                    /**
                     * 组件列表（gateway + scheduler；repeated 为未来扩展预留）
                     */
                    std::vector<SmartRouterComponent> m_componentList;
                    bool m_componentListHasBeenSet;

                    /**
                     * 创建人
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SMARTROUTER_H_
