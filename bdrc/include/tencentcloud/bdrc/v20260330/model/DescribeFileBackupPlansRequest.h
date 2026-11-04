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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEFILEBACKUPPLANSREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEFILEBACKUPPLANSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/FilterModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * DescribeFileBackupPlans请求参数结构体
                */
                class DescribeFileBackupPlansRequest : public AbstractModel
                {
                public:
                    DescribeFileBackupPlansRequest();
                    ~DescribeFileBackupPlansRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>偏移量，默认0</p>
                     * @return Offset <p>偏移量，默认0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认0</p>
                     * @param _offset <p>偏移量，默认0</p>
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
                     * 获取<p>返回数量，默认20，最大100</p>
                     * @return Limit <p>返回数量，默认20，最大100</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认20，最大100</p>
                     * @param _limit <p>返回数量，默认20，最大100</p>
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
                     * 获取<p>排序字段</p><p>枚举值：</p><ul><li>CREATE_TIME： 创建时间</li><li>CreatedTime： 创建时间</li></ul><p>默认值：CREATE_TIME</p>
                     * @return OrderField <p>排序字段</p><p>枚举值：</p><ul><li>CREATE_TIME： 创建时间</li><li>CreatedTime： 创建时间</li></ul><p>默认值：CREATE_TIME</p>
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置<p>排序字段</p><p>枚举值：</p><ul><li>CREATE_TIME： 创建时间</li><li>CreatedTime： 创建时间</li></ul><p>默认值：CREATE_TIME</p>
                     * @param _orderField <p>排序字段</p><p>枚举值：</p><ul><li>CREATE_TIME： 创建时间</li><li>CreatedTime： 创建时间</li></ul><p>默认值：CREATE_TIME</p>
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取<p>排序方式</p><p>枚举值：</p><ul><li>ASC： 升序排序</li><li>DESC： 降序排序</li></ul><p>默认值：DESC</p>
                     * @return Order <p>排序方式</p><p>枚举值：</p><ul><li>ASC： 升序排序</li><li>DESC： 降序排序</li></ul><p>默认值：DESC</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序方式</p><p>枚举值：</p><ul><li>ASC： 升序排序</li><li>DESC： 降序排序</li></ul><p>默认值：DESC</p>
                     * @param _order <p>排序方式</p><p>枚举值：</p><ul><li>ASC： 升序排序</li><li>DESC： 降序排序</li></ul><p>默认值：DESC</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件。支持: instance-id, plan-id, plan-name, status, auto-backup-policy-id</p>
                     * @return Filters <p>过滤条件。支持: instance-id, plan-id, plan-name, status, auto-backup-policy-id</p>
                     * 
                     */
                    std::vector<FilterModel> GetFilters() const;

                    /**
                     * 设置<p>过滤条件。支持: instance-id, plan-id, plan-name, status, auto-backup-policy-id</p>
                     * @param _filters <p>过滤条件。支持: instance-id, plan-id, plan-name, status, auto-backup-policy-id</p>
                     * 
                     */
                    void SetFilters(const std::vector<FilterModel>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>资源类型</p><p>枚举值：</p><ul><li>CVM_AGENT： CVM 文件备份</li><li>CFS_AGENT： 文件系统备份</li><li>COS_AGENT： COS备份</li></ul><p>默认值：CVM_AGENT</p>
                     * @return ResourceType <p>资源类型</p><p>枚举值：</p><ul><li>CVM_AGENT： CVM 文件备份</li><li>CFS_AGENT： 文件系统备份</li><li>COS_AGENT： COS备份</li></ul><p>默认值：CVM_AGENT</p>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>资源类型</p><p>枚举值：</p><ul><li>CVM_AGENT： CVM 文件备份</li><li>CFS_AGENT： 文件系统备份</li><li>COS_AGENT： COS备份</li></ul><p>默认值：CVM_AGENT</p>
                     * @param _resourceType <p>资源类型</p><p>枚举值：</p><ul><li>CVM_AGENT： CVM 文件备份</li><li>CFS_AGENT： 文件系统备份</li><li>COS_AGENT： COS备份</li></ul><p>默认值：CVM_AGENT</p>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                private:

                    /**
                     * <p>偏移量，默认0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，默认20，最大100</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>排序字段</p><p>枚举值：</p><ul><li>CREATE_TIME： 创建时间</li><li>CreatedTime： 创建时间</li></ul><p>默认值：CREATE_TIME</p>
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * <p>排序方式</p><p>枚举值：</p><ul><li>ASC： 升序排序</li><li>DESC： 降序排序</li></ul><p>默认值：DESC</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>过滤条件。支持: instance-id, plan-id, plan-name, status, auto-backup-policy-id</p>
                     */
                    std::vector<FilterModel> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>资源类型</p><p>枚举值：</p><ul><li>CVM_AGENT： CVM 文件备份</li><li>CFS_AGENT： 文件系统备份</li><li>COS_AGENT： COS备份</li></ul><p>默认值：CVM_AGENT</p>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEFILEBACKUPPLANSREQUEST_H_
