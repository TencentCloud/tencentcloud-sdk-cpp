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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_COMPONENT_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_COMPONENT_H_

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
                * 组件列表数据。
                */
                class Component : public AbstractModel
                {
                public:
                    Component();
                    ~Component() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取唯一ID。
                     * @return Id 唯一ID。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置唯一ID。
                     * @param _id 唯一ID。
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
                     * 获取云镜客户端唯一Uuid。
                     * @return Uuid 云镜客户端唯一Uuid。
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置云镜客户端唯一Uuid。
                     * @param _uuid 云镜客户端唯一Uuid。
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取主机内网IP。
                     * @return MachineIp 主机内网IP。
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置主机内网IP。
                     * @param _machineIp 主机内网IP。
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取主机名。
                     * @return MachineName 主机名。
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置主机名。
                     * @param _machineName 主机名。
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取组件版本号。
                     * @return ComponentVersion 组件版本号。
                     * 
                     */
                    std::string GetComponentVersion() const;

                    /**
                     * 设置组件版本号。
                     * @param _componentVersion 组件版本号。
                     * 
                     */
                    void SetComponentVersion(const std::string& _componentVersion);

                    /**
                     * 判断参数 ComponentVersion 是否已赋值
                     * @return ComponentVersion 是否已赋值
                     * 
                     */
                    bool ComponentVersionHasBeenSet() const;

                    /**
                     * 获取组件类型。
<li>SYSTEM：系统组件</li>
<li>WEB：Web组件</li>
                     * @return ComponentType 组件类型。
<li>SYSTEM：系统组件</li>
<li>WEB：Web组件</li>
                     * 
                     */
                    std::string GetComponentType() const;

                    /**
                     * 设置组件类型。
<li>SYSTEM：系统组件</li>
<li>WEB：Web组件</li>
                     * @param _componentType 组件类型。
<li>SYSTEM：系统组件</li>
<li>WEB：Web组件</li>
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
                     * 获取组件检测更新时间。
                     * @return ModifyTime 组件检测更新时间。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置组件检测更新时间。
                     * @param _modifyTime 组件检测更新时间。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 唯一ID。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 云镜客户端唯一Uuid。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 主机内网IP。
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 主机名。
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 组件版本号。
                     */
                    std::string m_componentVersion;
                    bool m_componentVersionHasBeenSet;

                    /**
                     * 组件类型。
<li>SYSTEM：系统组件</li>
<li>WEB：Web组件</li>
                     */
                    std::string m_componentType;
                    bool m_componentTypeHasBeenSet;

                    /**
                     * 组件名称。
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * 组件检测更新时间。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_COMPONENT_H_
