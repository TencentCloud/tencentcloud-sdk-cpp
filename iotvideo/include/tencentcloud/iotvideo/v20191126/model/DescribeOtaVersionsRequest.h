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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBEOTAVERSIONSREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBEOTAVERSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * DescribeOtaVersions请求参数结构体
                */
                class DescribeOtaVersionsRequest : public AbstractModel
                {
                public:
                    DescribeOtaVersionsRequest();
                    ~DescribeOtaVersionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页偏移量
                     * @return Offset 分页偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量
                     * @param _offset 分页偏移量
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
                     * 获取每页数量，0<取值范围<=100
                     * @return Limit 每页数量，0<取值范围<=100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页数量，0<取值范围<=100
                     * @param _limit 每页数量，0<取值范围<=100
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
                     * 获取产品ID，为空时查询客户所有产品的版本信息
                     * @return ProductId 产品ID，为空时查询客户所有产品的版本信息
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID，为空时查询客户所有产品的版本信息
                     * @param _productId 产品ID，为空时查询客户所有产品的版本信息
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取版本号，支持模糊匹配
                     * @return OtaVersion 版本号，支持模糊匹配
                     * 
                     */
                    std::string GetOtaVersion() const;

                    /**
                     * 设置版本号，支持模糊匹配
                     * @param _otaVersion 版本号，支持模糊匹配
                     * 
                     */
                    void SetOtaVersion(const std::string& _otaVersion);

                    /**
                     * 判断参数 OtaVersion 是否已赋值
                     * @return OtaVersion 是否已赋值
                     * 
                     */
                    bool OtaVersionHasBeenSet() const;

                    /**
                     * 获取版本类型 1未发布 2测试发布 3正式发布 4禁用
                     * @return PubStatus 版本类型 1未发布 2测试发布 3正式发布 4禁用
                     * 
                     */
                    uint64_t GetPubStatus() const;

                    /**
                     * 设置版本类型 1未发布 2测试发布 3正式发布 4禁用
                     * @param _pubStatus 版本类型 1未发布 2测试发布 3正式发布 4禁用
                     * 
                     */
                    void SetPubStatus(const uint64_t& _pubStatus);

                    /**
                     * 判断参数 PubStatus 是否已赋值
                     * @return PubStatus 是否已赋值
                     * 
                     */
                    bool PubStatusHasBeenSet() const;

                private:

                    /**
                     * 分页偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页数量，0<取值范围<=100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 产品ID，为空时查询客户所有产品的版本信息
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 版本号，支持模糊匹配
                     */
                    std::string m_otaVersion;
                    bool m_otaVersionHasBeenSet;

                    /**
                     * 版本类型 1未发布 2测试发布 3正式发布 4禁用
                     */
                    uint64_t m_pubStatus;
                    bool m_pubStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBEOTAVERSIONSREQUEST_H_
