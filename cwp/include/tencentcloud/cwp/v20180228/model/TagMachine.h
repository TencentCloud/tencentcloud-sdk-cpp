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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_TAGMACHINE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_TAGMACHINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 标签相关服务器信息
                */
                class TagMachine : public AbstractModel
                {
                public:
                    TagMachine();
                    ~TagMachine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID
                     * @return Id ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置ID
                     * @param _id ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取主机ID
                     * @return Quuid 主机ID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机ID
                     * @param _quuid 主机ID
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取主机名称
                     * @return MachineName 主机名称
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置主机名称
                     * @param _machineName 主机名称
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
                     * 获取主机内网IP
                     * @return MachineIp 主机内网IP
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置主机内网IP
                     * @param _machineIp 主机内网IP
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
                     * 获取主机外网IP
                     * @return MachineWanIp 主机外网IP
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置主机外网IP
                     * @param _machineWanIp 主机外网IP
                     * 
                     */
                    void SetMachineWanIp(const std::string& _machineWanIp);

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     * 
                     */
                    bool MachineWanIpHasBeenSet() const;

                    /**
                     * 获取主机区域
                     * @return MachineRegion 主机区域
                     * 
                     */
                    std::string GetMachineRegion() const;

                    /**
                     * 设置主机区域
                     * @param _machineRegion 主机区域
                     * 
                     */
                    void SetMachineRegion(const std::string& _machineRegion);

                    /**
                     * 判断参数 MachineRegion 是否已赋值
                     * @return MachineRegion 是否已赋值
                     * 
                     */
                    bool MachineRegionHasBeenSet() const;

                    /**
                     * 获取主机区域类型
                     * @return MachineType 主机区域类型
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置主机区域类型
                     * @param _machineType 主机区域类型
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                private:

                    /**
                     * ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 主机ID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 主机内网IP
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 主机外网IP
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * 主机区域
                     */
                    std::string m_machineRegion;
                    bool m_machineRegionHasBeenSet;

                    /**
                     * 主机区域类型
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_TAGMACHINE_H_
