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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBECROSSBACKUPSTATISTICALREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBECROSSBACKUPSTATISTICALREQUEST_H_

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
                * DescribeCrossBackupStatistical请求参数结构体
                */
                class DescribeCrossBackupStatisticalRequest : public AbstractModel
                {
                public:
                    DescribeCrossBackupStatisticalRequest();
                    ~DescribeCrossBackupStatisticalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页,页数
                     * @return Offset 分页,页数
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页,页数
                     * @param _offset 分页,页数
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页，页大小
                     * @return Limit 分页，页大小
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页，页大小
                     * @param _limit 分页，页大小
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取实例ID列表
                     * @return InstanceIdSet 实例ID列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置实例ID列表
                     * @param _instanceIdSet 实例ID列表
                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取实例名称列表
                     * @return InstanceNameSet 实例名称列表
                     * 
                     */
                    std::vector<std::string> GetInstanceNameSet() const;

                    /**
                     * 设置实例名称列表
                     * @param _instanceNameSet 实例名称列表
                     * 
                     */
                    void SetInstanceNameSet(const std::vector<std::string>& _instanceNameSet);

                    /**
                     * 判断参数 InstanceNameSet 是否已赋值
                     * @return InstanceNameSet 是否已赋值
                     * 
                     */
                    bool InstanceNameSetHasBeenSet() const;

                    /**
                     * 获取跨地域备份状态，enable-开启，disable-关闭
                     * @return CrossBackupStatus 跨地域备份状态，enable-开启，disable-关闭
                     * 
                     */
                    std::string GetCrossBackupStatus() const;

                    /**
                     * 设置跨地域备份状态，enable-开启，disable-关闭
                     * @param _crossBackupStatus 跨地域备份状态，enable-开启，disable-关闭
                     * 
                     */
                    void SetCrossBackupStatus(const std::string& _crossBackupStatus);

                    /**
                     * 判断参数 CrossBackupStatus 是否已赋值
                     * @return CrossBackupStatus 是否已赋值
                     * 
                     */
                    bool CrossBackupStatusHasBeenSet() const;

                    /**
                     * 获取跨地域备份目标地域
                     * @return CrossRegion 跨地域备份目标地域
                     * 
                     */
                    std::string GetCrossRegion() const;

                    /**
                     * 设置跨地域备份目标地域
                     * @param _crossRegion 跨地域备份目标地域
                     * 
                     */
                    void SetCrossRegion(const std::string& _crossRegion);

                    /**
                     * 判断参数 CrossRegion 是否已赋值
                     * @return CrossRegion 是否已赋值
                     * 
                     */
                    bool CrossRegionHasBeenSet() const;

                    /**
                     * 获取排序字段，默认default-按照备份空间降序排序，data-按照数据备份排序，log-按照日志备份培训
                     * @return OrderBy 排序字段，默认default-按照备份空间降序排序，data-按照数据备份排序，log-按照日志备份培训
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，默认default-按照备份空间降序排序，data-按照数据备份排序，log-按照日志备份培训
                     * @param _orderBy 排序字段，默认default-按照备份空间降序排序，data-按照数据备份排序，log-按照日志备份培训
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取排序规则（desc-降序，asc-升序），默认desc
                     * @return OrderByType 排序规则（desc-降序，asc-升序），默认desc
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序规则（desc-降序，asc-升序），默认desc
                     * @param _orderByType 排序规则（desc-降序，asc-升序），默认desc
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * 分页,页数
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页，页大小
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 实例ID列表
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * 实例名称列表
                     */
                    std::vector<std::string> m_instanceNameSet;
                    bool m_instanceNameSetHasBeenSet;

                    /**
                     * 跨地域备份状态，enable-开启，disable-关闭
                     */
                    std::string m_crossBackupStatus;
                    bool m_crossBackupStatusHasBeenSet;

                    /**
                     * 跨地域备份目标地域
                     */
                    std::string m_crossRegion;
                    bool m_crossRegionHasBeenSet;

                    /**
                     * 排序字段，默认default-按照备份空间降序排序，data-按照数据备份排序，log-按照日志备份培训
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序规则（desc-降序，asc-升序），默认desc
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBECROSSBACKUPSTATISTICALREQUEST_H_
