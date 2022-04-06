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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_OPENPROVERSIONREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_OPENPROVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * OpenProVersion请求参数结构体
                */
                class OpenProVersionRequest : public AbstractModel
                {
                public:
                    OpenProVersionRequest();
                    ~OpenProVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云服务器类型。(当前参数已作废,可以留空值 )
                     * @return MachineType 云服务器类型。(当前参数已作废,可以留空值 )
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置云服务器类型。(当前参数已作废,可以留空值 )
                     * @param MachineType 云服务器类型。(当前参数已作废,可以留空值 )
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取机器所属地域。(当前参数已作废,可以留空值 )
                     * @return MachineRegion 机器所属地域。(当前参数已作废,可以留空值 )
                     */
                    std::string GetMachineRegion() const;

                    /**
                     * 设置机器所属地域。(当前参数已作废,可以留空值 )
                     * @param MachineRegion 机器所属地域。(当前参数已作废,可以留空值 )
                     */
                    void SetMachineRegion(const std::string& _machineRegion);

                    /**
                     * 判断参数 MachineRegion 是否已赋值
                     * @return MachineRegion 是否已赋值
                     */
                    bool MachineRegionHasBeenSet() const;

                    /**
                     * 获取主机唯一标识Uuid数组。
黑石的InstanceId，CVM的Uuid ,边缘计算的Uuid , 轻量应用服务器的Uuid ,混合云机器的Quuid 。 当前参数最大长度限制20
                     * @return Quuids 主机唯一标识Uuid数组。
黑石的InstanceId，CVM的Uuid ,边缘计算的Uuid , 轻量应用服务器的Uuid ,混合云机器的Quuid 。 当前参数最大长度限制20
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置主机唯一标识Uuid数组。
黑石的InstanceId，CVM的Uuid ,边缘计算的Uuid , 轻量应用服务器的Uuid ,混合云机器的Quuid 。 当前参数最大长度限制20
                     * @param Quuids 主机唯一标识Uuid数组。
黑石的InstanceId，CVM的Uuid ,边缘计算的Uuid , 轻量应用服务器的Uuid ,混合云机器的Quuid 。 当前参数最大长度限制20
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取活动ID。
                     * @return ActivityId 活动ID。
                     */
                    uint64_t GetActivityId() const;

                    /**
                     * 设置活动ID。
                     * @param ActivityId 活动ID。
                     */
                    void SetActivityId(const uint64_t& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     */
                    bool ActivityIdHasBeenSet() const;

                private:

                    /**
                     * 云服务器类型。(当前参数已作废,可以留空值 )
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 机器所属地域。(当前参数已作废,可以留空值 )
                     */
                    std::string m_machineRegion;
                    bool m_machineRegionHasBeenSet;

                    /**
                     * 主机唯一标识Uuid数组。
黑石的InstanceId，CVM的Uuid ,边缘计算的Uuid , 轻量应用服务器的Uuid ,混合云机器的Quuid 。 当前参数最大长度限制20
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * 活动ID。
                     */
                    uint64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_OPENPROVERSIONREQUEST_H_
