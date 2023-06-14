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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_PROVERSIONMACHINE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_PROVERSIONMACHINE_H_

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
                * 需要开通专业版机器信息。
                */
                class ProVersionMachine : public AbstractModel
                {
                public:
                    ProVersionMachine();
                    ~ProVersionMachine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机类型。
<li>CVM: 虚拟主机</li>
<li>BM: 黑石物理机</li>
                     * @return MachineType 主机类型。
<li>CVM: 虚拟主机</li>
<li>BM: 黑石物理机</li>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置主机类型。
<li>CVM: 虚拟主机</li>
<li>BM: 黑石物理机</li>
                     * @param _machineType 主机类型。
<li>CVM: 虚拟主机</li>
<li>BM: 黑石物理机</li>
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取主机所在地域。
如：ap-guangzhou、ap-beijing
                     * @return MachineRegion 主机所在地域。
如：ap-guangzhou、ap-beijing
                     * 
                     */
                    std::string GetMachineRegion() const;

                    /**
                     * 设置主机所在地域。
如：ap-guangzhou、ap-beijing
                     * @param _machineRegion 主机所在地域。
如：ap-guangzhou、ap-beijing
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
                     * 获取主机唯一标识Uuid。
黑石的InstanceId，CVM的Uuid
                     * @return Quuid 主机唯一标识Uuid。
黑石的InstanceId，CVM的Uuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机唯一标识Uuid。
黑石的InstanceId，CVM的Uuid
                     * @param _quuid 主机唯一标识Uuid。
黑石的InstanceId，CVM的Uuid
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                private:

                    /**
                     * 主机类型。
<li>CVM: 虚拟主机</li>
<li>BM: 黑石物理机</li>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 主机所在地域。
如：ap-guangzhou、ap-beijing
                     */
                    std::string m_machineRegion;
                    bool m_machineRegionHasBeenSet;

                    /**
                     * 主机唯一标识Uuid。
黑石的InstanceId，CVM的Uuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_PROVERSIONMACHINE_H_
