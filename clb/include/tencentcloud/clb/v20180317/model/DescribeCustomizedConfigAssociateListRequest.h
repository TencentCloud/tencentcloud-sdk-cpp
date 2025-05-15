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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECUSTOMIZEDCONFIGASSOCIATELISTREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECUSTOMIZEDCONFIGASSOCIATELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeCustomizedConfigAssociateList请求参数结构体
                */
                class DescribeCustomizedConfigAssociateListRequest : public AbstractModel
                {
                public:
                    DescribeCustomizedConfigAssociateListRequest();
                    ~DescribeCustomizedConfigAssociateListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置ID，可以通过 [DescribeCustomizedConfigList](https://cloud.tencent.com/document/product/214/60009) 接口获取。
                     * @return UconfigId 配置ID，可以通过 [DescribeCustomizedConfigList](https://cloud.tencent.com/document/product/214/60009) 接口获取。
                     * 
                     */
                    std::string GetUconfigId() const;

                    /**
                     * 设置配置ID，可以通过 [DescribeCustomizedConfigList](https://cloud.tencent.com/document/product/214/60009) 接口获取。
                     * @param _uconfigId 配置ID，可以通过 [DescribeCustomizedConfigList](https://cloud.tencent.com/document/product/214/60009) 接口获取。
                     * 
                     */
                    void SetUconfigId(const std::string& _uconfigId);

                    /**
                     * 判断参数 UconfigId 是否已赋值
                     * @return UconfigId 是否已赋值
                     * 
                     */
                    bool UconfigIdHasBeenSet() const;

                    /**
                     * 获取拉取绑定关系列表开始位置，默认值 0
                     * @return Offset 拉取绑定关系列表开始位置，默认值 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置拉取绑定关系列表开始位置，默认值 0
                     * @param _offset 拉取绑定关系列表开始位置，默认值 0
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
                     * 获取拉取绑定关系列表数目，默认值 20
                     * @return Limit 拉取绑定关系列表数目，默认值 20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置拉取绑定关系列表数目，默认值 20
                     * @param _limit 拉取绑定关系列表数目，默认值 20
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取搜索域名，可以通过 [DescribeLoadBalancersDetail](https://cloud.tencent.com/document/product/214/46916) 接口返回值的 `Domain` 字段查询。
                     * @return Domain 搜索域名，可以通过 [DescribeLoadBalancersDetail](https://cloud.tencent.com/document/product/214/46916) 接口返回值的 `Domain` 字段查询。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置搜索域名，可以通过 [DescribeLoadBalancersDetail](https://cloud.tencent.com/document/product/214/46916) 接口返回值的 `Domain` 字段查询。
                     * @param _domain 搜索域名，可以通过 [DescribeLoadBalancersDetail](https://cloud.tencent.com/document/product/214/46916) 接口返回值的 `Domain` 字段查询。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * 配置ID，可以通过 [DescribeCustomizedConfigList](https://cloud.tencent.com/document/product/214/60009) 接口获取。
                     */
                    std::string m_uconfigId;
                    bool m_uconfigIdHasBeenSet;

                    /**
                     * 拉取绑定关系列表开始位置，默认值 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 拉取绑定关系列表数目，默认值 20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索域名，可以通过 [DescribeLoadBalancersDetail](https://cloud.tencent.com/document/product/214/46916) 接口返回值的 `Domain` 字段查询。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECUSTOMIZEDCONFIGASSOCIATELISTREQUEST_H_
