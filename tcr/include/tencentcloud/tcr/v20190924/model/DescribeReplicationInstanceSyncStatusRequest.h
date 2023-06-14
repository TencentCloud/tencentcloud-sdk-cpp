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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCESYNCSTATUSREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCESYNCSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeReplicationInstanceSyncStatus请求参数结构体
                */
                class DescribeReplicationInstanceSyncStatusRequest : public AbstractModel
                {
                public:
                    DescribeReplicationInstanceSyncStatusRequest();
                    ~DescribeReplicationInstanceSyncStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主实例Id
                     * @return RegistryId 主实例Id
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置主实例Id
                     * @param _registryId 主实例Id
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取复制实例Id
                     * @return ReplicationRegistryId 复制实例Id
                     * 
                     */
                    std::string GetReplicationRegistryId() const;

                    /**
                     * 设置复制实例Id
                     * @param _replicationRegistryId 复制实例Id
                     * 
                     */
                    void SetReplicationRegistryId(const std::string& _replicationRegistryId);

                    /**
                     * 判断参数 ReplicationRegistryId 是否已赋值
                     * @return ReplicationRegistryId 是否已赋值
                     * 
                     */
                    bool ReplicationRegistryIdHasBeenSet() const;

                    /**
                     * 获取复制实例的地域Id
                     * @return ReplicationRegionId 复制实例的地域Id
                     * 
                     */
                    uint64_t GetReplicationRegionId() const;

                    /**
                     * 设置复制实例的地域Id
                     * @param _replicationRegionId 复制实例的地域Id
                     * 
                     */
                    void SetReplicationRegionId(const uint64_t& _replicationRegionId);

                    /**
                     * 判断参数 ReplicationRegionId 是否已赋值
                     * @return ReplicationRegionId 是否已赋值
                     * 
                     */
                    bool ReplicationRegionIdHasBeenSet() const;

                    /**
                     * 获取是否显示同步日志
                     * @return ShowReplicationLog 是否显示同步日志
                     * 
                     */
                    bool GetShowReplicationLog() const;

                    /**
                     * 设置是否显示同步日志
                     * @param _showReplicationLog 是否显示同步日志
                     * 
                     */
                    void SetShowReplicationLog(const bool& _showReplicationLog);

                    /**
                     * 判断参数 ShowReplicationLog 是否已赋值
                     * @return ShowReplicationLog 是否已赋值
                     * 
                     */
                    bool ShowReplicationLogHasBeenSet() const;

                    /**
                     * 获取日志页号, 默认0
                     * @return Offset 日志页号, 默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置日志页号, 默认0
                     * @param _offset 日志页号, 默认0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取最大输出条数，默认5，最大为20
                     * @return Limit 最大输出条数，默认5，最大为20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置最大输出条数，默认5，最大为20
                     * @param _limit 最大输出条数，默认5，最大为20
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 主实例Id
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 复制实例Id
                     */
                    std::string m_replicationRegistryId;
                    bool m_replicationRegistryIdHasBeenSet;

                    /**
                     * 复制实例的地域Id
                     */
                    uint64_t m_replicationRegionId;
                    bool m_replicationRegionIdHasBeenSet;

                    /**
                     * 是否显示同步日志
                     */
                    bool m_showReplicationLog;
                    bool m_showReplicationLogHasBeenSet;

                    /**
                     * 日志页号, 默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 最大输出条数，默认5，最大为20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCESYNCSTATUSREQUEST_H_
