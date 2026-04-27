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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEAUDITLOGFILESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEAUDITLOGFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeAuditLogFiles请求参数结构体
                */
                class DescribeAuditLogFilesRequest : public AbstractModel
                {
                public:
                    DescribeAuditLogFilesRequest();
                    ~DescribeAuditLogFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>产品名称</p><p>入参限制：postgres</p>
                     * @return Product <p>产品名称</p><p>入参限制：postgres</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>产品名称</p><p>入参限制：postgres</p>
                     * @param _product <p>产品名称</p><p>入参限制：postgres</p>
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
                     * 获取<p>日志文件名称</p>
                     * @return FileName <p>日志文件名称</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>日志文件名称</p>
                     * @param _fileName <p>日志文件名称</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>查询限制</p><p>取值范围：[1, 300]</p>
                     * @return Limit <p>查询限制</p><p>取值范围：[1, 300]</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>查询限制</p><p>取值范围：[1, 300]</p>
                     * @param _limit <p>查询限制</p><p>取值范围：[1, 300]</p>
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
                     * 获取<p>偏移量</p><p>取值范围：[0, 1000]</p>
                     * @return Offset <p>偏移量</p><p>取值范围：[0, 1000]</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量</p><p>取值范围：[0, 1000]</p>
                     * @param _offset <p>偏移量</p><p>取值范围：[0, 1000]</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>产品名称</p><p>入参限制：postgres</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>日志文件名称</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>查询限制</p><p>取值范围：[1, 300]</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量</p><p>取值范围：[0, 1000]</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEAUDITLOGFILESREQUEST_H_
