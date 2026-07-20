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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWVPCDNSLSTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWVPCDNSLSTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeNatFwVpcDnsLst请求参数结构体
                */
                class DescribeNatFwVpcDnsLstRequest : public AbstractModel
                {
                public:
                    DescribeNatFwVpcDnsLstRequest();
                    ~DescribeNatFwVpcDnsLstRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>natfw 防火墙实例id</p>
                     * @return NatFwInsId <p>natfw 防火墙实例id</p>
                     * 
                     */
                    std::string GetNatFwInsId() const;

                    /**
                     * 设置<p>natfw 防火墙实例id</p>
                     * @param _natFwInsId <p>natfw 防火墙实例id</p>
                     * 
                     */
                    void SetNatFwInsId(const std::string& _natFwInsId);

                    /**
                     * 判断参数 NatFwInsId 是否已赋值
                     * @return NatFwInsId 是否已赋值
                     * 
                     */
                    bool NatFwInsIdHasBeenSet() const;

                    /**
                     * 获取<p>natfw 过滤，以&#39;,&#39;分隔</p>
                     * @return NatInsIdFilter <p>natfw 过滤，以&#39;,&#39;分隔</p>
                     * 
                     */
                    std::string GetNatInsIdFilter() const;

                    /**
                     * 设置<p>natfw 过滤，以&#39;,&#39;分隔</p>
                     * @param _natInsIdFilter <p>natfw 过滤，以&#39;,&#39;分隔</p>
                     * 
                     */
                    void SetNatInsIdFilter(const std::string& _natInsIdFilter);

                    /**
                     * 判断参数 NatInsIdFilter 是否已赋值
                     * @return NatInsIdFilter 是否已赋值
                     * 
                     */
                    bool NatInsIdFilterHasBeenSet() const;

                    /**
                     * 获取<p>分页页数</p>
                     * @return Offset <p>分页页数</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页页数</p>
                     * @param _offset <p>分页页数</p>
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
                     * 获取<p>每页最多个数</p>
                     * @return Limit <p>每页最多个数</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页最多个数</p>
                     * @param _limit <p>每页最多个数</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>natfw 防火墙实例id</p>
                     */
                    std::string m_natFwInsId;
                    bool m_natFwInsIdHasBeenSet;

                    /**
                     * <p>natfw 过滤，以&#39;,&#39;分隔</p>
                     */
                    std::string m_natInsIdFilter;
                    bool m_natInsIdFilterHasBeenSet;

                    /**
                     * <p>分页页数</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页最多个数</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWVPCDNSLSTREQUEST_H_
