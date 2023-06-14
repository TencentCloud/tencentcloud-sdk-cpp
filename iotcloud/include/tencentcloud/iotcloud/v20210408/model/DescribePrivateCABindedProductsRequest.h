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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEPRIVATECABINDEDPRODUCTSREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEPRIVATECABINDEDPRODUCTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * DescribePrivateCABindedProducts请求参数结构体
                */
                class DescribePrivateCABindedProductsRequest : public AbstractModel
                {
                public:
                    DescribePrivateCABindedProductsRequest();
                    ~DescribePrivateCABindedProductsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取证书名称
                     * @return CertName 证书名称
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置证书名称
                     * @param _certName 证书名称
                     * 
                     */
                    void SetCertName(const std::string& _certName);

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     * 
                     */
                    bool CertNameHasBeenSet() const;

                    /**
                     * 获取查询偏移量
                     * @return Offset 查询偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询偏移量
                     * @param _offset 查询偏移量
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
                     * 获取查询的数据量，默认为20， 最大为200
                     * @return Limit 查询的数据量，默认为20， 最大为200
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置查询的数据量，默认为20， 最大为200
                     * @param _limit 查询的数据量，默认为20， 最大为200
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
                     * 证书名称
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * 查询偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询的数据量，默认为20， 最大为200
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEPRIVATECABINDEDPRODUCTSREQUEST_H_
