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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeDBInstances请求参数结构体
                */
                class DescribeDBInstancesRequest : public AbstractModel
                {
                public:
                    DescribeDBInstancesRequest();
                    ~DescribeDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param ProjectId 项目ID
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取实例状态。取值范围：
<li>1：申请中</li>
<li>2：运行中</li>
<li>3：受限运行中 (主备切换中)</li>
<li>4：已隔离</li>
<li>5：回收中</li>
<li>6：已回收</li>
<li>7：任务执行中 (实例做备份、回档等操作)</li>
<li>8：已下线</li>
<li>9：实例扩容中</li>
<li>10：实例迁移中</li>
<li>11：只读</li>
<li>12：重启中</li>
                     * @return Status 实例状态。取值范围：
<li>1：申请中</li>
<li>2：运行中</li>
<li>3：受限运行中 (主备切换中)</li>
<li>4：已隔离</li>
<li>5：回收中</li>
<li>6：已回收</li>
<li>7：任务执行中 (实例做备份、回档等操作)</li>
<li>8：已下线</li>
<li>9：实例扩容中</li>
<li>10：实例迁移中</li>
<li>11：只读</li>
<li>12：重启中</li>
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态。取值范围：
<li>1：申请中</li>
<li>2：运行中</li>
<li>3：受限运行中 (主备切换中)</li>
<li>4：已隔离</li>
<li>5：回收中</li>
<li>6：已回收</li>
<li>7：任务执行中 (实例做备份、回档等操作)</li>
<li>8：已下线</li>
<li>9：实例扩容中</li>
<li>10：实例迁移中</li>
<li>11：只读</li>
<li>12：重启中</li>
                     * @param Status 实例状态。取值范围：
<li>1：申请中</li>
<li>2：运行中</li>
<li>3：受限运行中 (主备切换中)</li>
<li>4：已隔离</li>
<li>5：回收中</li>
<li>6：已回收</li>
<li>7：任务执行中 (实例做备份、回档等操作)</li>
<li>8：已下线</li>
<li>9：实例扩容中</li>
<li>10：实例迁移中</li>
<li>11：只读</li>
<li>12：重启中</li>
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取页数，默认为 0
                     * @return Offset 页数，默认为 0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置页数，默认为 0
                     * @param Offset 页数，默认为 0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取页大小，默认为50
                     * @return Limit 页大小，默认为50
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置页大小，默认为50
                     * @param Limit 页大小，默认为50
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取一个或者多个实例ID。实例ID，格式如：mssql-si2823jyl
                     * @return InstanceIdSet 一个或者多个实例ID。实例ID，格式如：mssql-si2823jyl
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置一个或者多个实例ID。实例ID，格式如：mssql-si2823jyl
                     * @param InstanceIdSet 一个或者多个实例ID。实例ID，格式如：mssql-si2823jyl
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取付费类型检索 1-包年包月，0-按量计费
                     * @return PayMode 付费类型检索 1-包年包月，0-按量计费
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费类型检索 1-包年包月，0-按量计费
                     * @param PayMode 付费类型检索 1-包年包月，0-按量计费
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例状态。取值范围：
<li>1：申请中</li>
<li>2：运行中</li>
<li>3：受限运行中 (主备切换中)</li>
<li>4：已隔离</li>
<li>5：回收中</li>
<li>6：已回收</li>
<li>7：任务执行中 (实例做备份、回档等操作)</li>
<li>8：已下线</li>
<li>9：实例扩容中</li>
<li>10：实例迁移中</li>
<li>11：只读</li>
<li>12：重启中</li>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 页数，默认为 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 页大小，默认为50
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 一个或者多个实例ID。实例ID，格式如：mssql-si2823jyl
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * 付费类型检索 1-包年包月，0-按量计费
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
