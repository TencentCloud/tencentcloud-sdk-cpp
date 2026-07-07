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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELNAMESREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELNAMESREQUEST_H_

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
                * DescribeModelNames请求参数结构体
                */
                class DescribeModelNamesRequest : public AbstractModel
                {
                public:
                    DescribeModelNamesRequest();
                    ~DescribeModelNamesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分页偏移量（&gt;=0）</p>
                     * @return Offset <p>分页偏移量（&gt;=0）</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量（&gt;=0）</p>
                     * @param _offset <p>分页偏移量（&gt;=0）</p>
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
                     * 获取<p>每页数量（1-100）</p>
                     * @return Limit <p>每页数量（1-100）</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页数量（1-100）</p>
                     * @param _limit <p>每页数量（1-100）</p>
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
                     * 获取<p>过滤PrivateCustom类型自建模型。如果传递了此参数，则只返回具有相同VPC Id的模型。</p>
                     * @return VpcId <p>过滤PrivateCustom类型自建模型。如果传递了此参数，则只返回具有相同VPC Id的模型。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>过滤PrivateCustom类型自建模型。如果传递了此参数，则只返回具有相同VPC Id的模型。</p>
                     * @param _vpcId <p>过滤PrivateCustom类型自建模型。如果传递了此参数，则只返回具有相同VPC Id的模型。</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * <p>分页偏移量（&gt;=0）</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页数量（1-100）</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>过滤PrivateCustom类型自建模型。如果传递了此参数，则只返回具有相同VPC Id的模型。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELNAMESREQUEST_H_
