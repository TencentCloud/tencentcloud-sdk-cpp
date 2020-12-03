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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYROTYPEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYROTYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyRoType请求参数结构体
                */
                class ModifyRoTypeRequest : public AbstractModel
                {
                public:
                    ModifyRoTypeRequest();
                    ~ModifyRoTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
                     * @param InstanceId 实例 ID。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取只读实例源类型，取值 NORMAL（普通只读实例）、DELAY_REPLICATION（延迟只读实例）。
                     * @return SrcRoInstType 只读实例源类型，取值 NORMAL（普通只读实例）、DELAY_REPLICATION（延迟只读实例）。
                     */
                    std::string GetSrcRoInstType() const;

                    /**
                     * 设置只读实例源类型，取值 NORMAL（普通只读实例）、DELAY_REPLICATION（延迟只读实例）。
                     * @param SrcRoInstType 只读实例源类型，取值 NORMAL（普通只读实例）、DELAY_REPLICATION（延迟只读实例）。
                     */
                    void SetSrcRoInstType(const std::string& _srcRoInstType);

                    /**
                     * 判断参数 SrcRoInstType 是否已赋值
                     * @return SrcRoInstType 是否已赋值
                     */
                    bool SrcRoInstTypeHasBeenSet() const;

                    /**
                     * 获取只读实例目标类型，取值 NORMAL（普通只读实例）、DELAY_REPLICATION（延迟只读实例）。
                     * @return DstRoInstType 只读实例目标类型，取值 NORMAL（普通只读实例）、DELAY_REPLICATION（延迟只读实例）。
                     */
                    std::string GetDstRoInstType() const;

                    /**
                     * 设置只读实例目标类型，取值 NORMAL（普通只读实例）、DELAY_REPLICATION（延迟只读实例）。
                     * @param DstRoInstType 只读实例目标类型，取值 NORMAL（普通只读实例）、DELAY_REPLICATION（延迟只读实例）。
                     */
                    void SetDstRoInstType(const std::string& _dstRoInstType);

                    /**
                     * 判断参数 DstRoInstType 是否已赋值
                     * @return DstRoInstType 是否已赋值
                     */
                    bool DstRoInstTypeHasBeenSet() const;

                    /**
                     * 获取延迟时间（s），将实例修改为延迟只读实例时必传。最小值1，最大值259200。
                     * @return ReplicationDelay 延迟时间（s），将实例修改为延迟只读实例时必传。最小值1，最大值259200。
                     */
                    int64_t GetReplicationDelay() const;

                    /**
                     * 设置延迟时间（s），将实例修改为延迟只读实例时必传。最小值1，最大值259200。
                     * @param ReplicationDelay 延迟时间（s），将实例修改为延迟只读实例时必传。最小值1，最大值259200。
                     */
                    void SetReplicationDelay(const int64_t& _replicationDelay);

                    /**
                     * 判断参数 ReplicationDelay 是否已赋值
                     * @return ReplicationDelay 是否已赋值
                     */
                    bool ReplicationDelayHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 只读实例源类型，取值 NORMAL（普通只读实例）、DELAY_REPLICATION（延迟只读实例）。
                     */
                    std::string m_srcRoInstType;
                    bool m_srcRoInstTypeHasBeenSet;

                    /**
                     * 只读实例目标类型，取值 NORMAL（普通只读实例）、DELAY_REPLICATION（延迟只读实例）。
                     */
                    std::string m_dstRoInstType;
                    bool m_dstRoInstTypeHasBeenSet;

                    /**
                     * 延迟时间（s），将实例修改为延迟只读实例时必传。最小值1，最大值259200。
                     */
                    int64_t m_replicationDelay;
                    bool m_replicationDelayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYROTYPEREQUEST_H_
