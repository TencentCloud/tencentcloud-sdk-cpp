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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_COMPONENTSTATISTICS_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_COMPONENTSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 组件统计数据。
                */
                class ComponentStatistics : public AbstractModel
                {
                public:
                    ComponentStatistics();
                    ~ComponentStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取组件ID。
                     * @return Id 组件ID。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置组件ID。
                     * @param _id 组件ID。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取主机数量。
                     * @return MachineNum 主机数量。
                     * 
                     */
                    uint64_t GetMachineNum() const;

                    /**
                     * 设置主机数量。
                     * @param _machineNum 主机数量。
                     * 
                     */
                    void SetMachineNum(const uint64_t& _machineNum);

                    /**
                     * 判断参数 MachineNum 是否已赋值
                     * @return MachineNum 是否已赋值
                     * 
                     */
                    bool MachineNumHasBeenSet() const;

                    /**
                     * 获取组件名称。
                     * @return ComponentName 组件名称。
                     * 
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置组件名称。
                     * @param _componentName 组件名称。
                     * 
                     */
                    void SetComponentName(const std::string& _componentName);

                    /**
                     * 判断参数 ComponentName 是否已赋值
                     * @return ComponentName 是否已赋值
                     * 
                     */
                    bool ComponentNameHasBeenSet() const;

                    /**
                     * 获取组件类型。
<li>WEB：Web组件</li>
<li>SYSTEM：系统组件</li>
                     * @return ComponentType 组件类型。
<li>WEB：Web组件</li>
<li>SYSTEM：系统组件</li>
                     * 
                     */
                    std::string GetComponentType() const;

                    /**
                     * 设置组件类型。
<li>WEB：Web组件</li>
<li>SYSTEM：系统组件</li>
                     * @param _componentType 组件类型。
<li>WEB：Web组件</li>
<li>SYSTEM：系统组件</li>
                     * 
                     */
                    void SetComponentType(const std::string& _componentType);

                    /**
                     * 判断参数 ComponentType 是否已赋值
                     * @return ComponentType 是否已赋值
                     * 
                     */
                    bool ComponentTypeHasBeenSet() const;

                    /**
                     * 获取组件描述。
                     * @return Description 组件描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置组件描述。
                     * @param _description 组件描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 组件ID。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 主机数量。
                     */
                    uint64_t m_machineNum;
                    bool m_machineNumHasBeenSet;

                    /**
                     * 组件名称。
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * 组件类型。
<li>WEB：Web组件</li>
<li>SYSTEM：系统组件</li>
                     */
                    std::string m_componentType;
                    bool m_componentTypeHasBeenSet;

                    /**
                     * 组件描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_COMPONENTSTATISTICS_H_
