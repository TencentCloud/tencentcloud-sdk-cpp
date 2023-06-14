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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESECURITYAUDITLOGDOWNLOADURLSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESECURITYAUDITLOGDOWNLOADURLSREQUEST_H_

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
                * DescribeSecurityAuditLogDownloadUrls请求参数结构体
                */
                class DescribeSecurityAuditLogDownloadUrlsRequest : public AbstractModel
                {
                public:
                    DescribeSecurityAuditLogDownloadUrlsRequest();
                    ~DescribeSecurityAuditLogDownloadUrlsRequest() = default;
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
                     * 获取异步任务Id。
                     * @return AsyncRequestId 异步任务Id。
                     * 
                     */
                    uint64_t GetAsyncRequestId() const;

                    /**
                     * 设置异步任务Id。
                     * @param _asyncRequestId 异步任务Id。
                     * 
                     */
                    void SetAsyncRequestId(const uint64_t& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdHasBeenSet() const;

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

                private:

                    /**
                     * 安全审计组Id。
                     */
                    std::string m_secAuditGroupId;
                    bool m_secAuditGroupIdHasBeenSet;

                    /**
                     * 异步任务Id。
                     */
                    uint64_t m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                    /**
                     * 服务产品类型，支持值："mysql" - 云数据库 MySQL。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESECURITYAUDITLOGDOWNLOADURLSREQUEST_H_
