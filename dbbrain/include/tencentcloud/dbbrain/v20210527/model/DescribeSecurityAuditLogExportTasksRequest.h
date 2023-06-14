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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESECURITYAUDITLOGEXPORTTASKSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESECURITYAUDITLOGEXPORTTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeSecurityAuditLogExportTasks请求参数结构体
                */
                class DescribeSecurityAuditLogExportTasksRequest : public AbstractModel
                {
                public:
                    DescribeSecurityAuditLogExportTasksRequest();
                    ~DescribeSecurityAuditLogExportTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安全审计组Id。
                     * @return SecAuditGroupId 安全审计组Id。
                     * 
                     */
                    std::string GetSecAuditGroupId() const;

                    /**
                     * 设置安全审计组Id。
                     * @param _secAuditGroupId 安全审计组Id。
                     * 
                     */
                    void SetSecAuditGroupId(const std::string& _secAuditGroupId);

                    /**
                     * 判断参数 SecAuditGroupId 是否已赋值
                     * @return SecAuditGroupId 是否已赋值
                     * 
                     */
                    bool SecAuditGroupIdHasBeenSet() const;

                    /**
                     * 获取服务产品类型，支持值："mysql" - 云数据库 MySQL。
                     * @return Product 服务产品类型，支持值："mysql" - 云数据库 MySQL。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值："mysql" - 云数据库 MySQL。
                     * @param _product 服务产品类型，支持值："mysql" - 云数据库 MySQL。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取日志导出任务Id列表。
                     * @return AsyncRequestIds 日志导出任务Id列表。
                     * 
                     */
                    std::vector<uint64_t> GetAsyncRequestIds() const;

                    /**
                     * 设置日志导出任务Id列表。
                     * @param _asyncRequestIds 日志导出任务Id列表。
                     * 
                     */
                    void SetAsyncRequestIds(const std::vector<uint64_t>& _asyncRequestIds);

                    /**
                     * 判断参数 AsyncRequestIds 是否已赋值
                     * @return AsyncRequestIds 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdsHasBeenSet() const;

                    /**
                     * 获取偏移量，默认0。
                     * @return Offset 偏移量，默认0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认0。
                     * @param _offset 偏移量，默认0。
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
                     * 获取返回数量，默认20，最大值为100。
                     * @return Limit 返回数量，默认20，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认20，最大值为100。
                     * @param _limit 返回数量，默认20，最大值为100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 安全审计组Id。
                     */
                    std::string m_secAuditGroupId;
                    bool m_secAuditGroupIdHasBeenSet;

                    /**
                     * 服务产品类型，支持值："mysql" - 云数据库 MySQL。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 日志导出任务Id列表。
                     */
                    std::vector<uint64_t> m_asyncRequestIds;
                    bool m_asyncRequestIdsHasBeenSet;

                    /**
                     * 偏移量，默认0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认20，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESECURITYAUDITLOGEXPORTTASKSREQUEST_H_
