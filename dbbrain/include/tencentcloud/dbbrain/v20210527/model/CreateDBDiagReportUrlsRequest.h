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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEDBDIAGREPORTURLSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEDBDIAGREPORTURLSREQUEST_H_

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
                * CreateDBDiagReportUrls请求参数结构体
                */
                class CreateDBDiagReportUrlsRequest : public AbstractModel
                {
                public:
                    CreateDBDiagReportUrlsRequest();
                    ~CreateDBDiagReportUrlsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>服务产品类型，支持值包括：&quot;mysql&quot; - 云数据库 MySQL，&quot;redis&quot; - 云数据库 Redis，&quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;mongodb&quot; - 云数据库 MongoDB，&quot;postgres&quot; - 云数据库 PostgreSQL。</p>
                     * @return Product <p>服务产品类型，支持值包括：&quot;mysql&quot; - 云数据库 MySQL，&quot;redis&quot; - 云数据库 Redis，&quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;mongodb&quot; - 云数据库 MongoDB，&quot;postgres&quot; - 云数据库 PostgreSQL。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>服务产品类型，支持值包括：&quot;mysql&quot; - 云数据库 MySQL，&quot;redis&quot; - 云数据库 Redis，&quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;mongodb&quot; - 云数据库 MongoDB，&quot;postgres&quot; - 云数据库 PostgreSQL。</p>
                     * @param _product <p>服务产品类型，支持值包括：&quot;mysql&quot; - 云数据库 MySQL，&quot;redis&quot; - 云数据库 Redis，&quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;mongodb&quot; - 云数据库 MongoDB，&quot;postgres&quot; - 云数据库 PostgreSQL。</p>
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
                     * 获取<p>异步任务ID列表。</p>
                     * @return AsyncRequestIds <p>异步任务ID列表。</p>
                     * 
                     */
                    std::vector<int64_t> GetAsyncRequestIds() const;

                    /**
                     * 设置<p>异步任务ID列表。</p>
                     * @param _asyncRequestIds <p>异步任务ID列表。</p>
                     * 
                     */
                    void SetAsyncRequestIds(const std::vector<int64_t>& _asyncRequestIds);

                    /**
                     * 判断参数 AsyncRequestIds 是否已赋值
                     * @return AsyncRequestIds 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdsHasBeenSet() const;

                private:

                    /**
                     * <p>服务产品类型，支持值包括：&quot;mysql&quot; - 云数据库 MySQL，&quot;redis&quot; - 云数据库 Redis，&quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;mongodb&quot; - 云数据库 MongoDB，&quot;postgres&quot; - 云数据库 PostgreSQL。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>异步任务ID列表。</p>
                     */
                    std::vector<int64_t> m_asyncRequestIds;
                    bool m_asyncRequestIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEDBDIAGREPORTURLSREQUEST_H_
