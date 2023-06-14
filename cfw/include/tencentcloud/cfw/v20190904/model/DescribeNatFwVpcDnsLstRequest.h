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
                     * 获取natfw 防火墙实例id
                     * @return NatFwInsId natfw 防火墙实例id
                     * 
                     */
                    std::string GetNatFwInsId() const;

                    /**
                     * 设置natfw 防火墙实例id
                     * @param _natFwInsId natfw 防火墙实例id
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
                     * 获取natfw 过滤，以','分隔
                     * @return NatInsIdFilter natfw 过滤，以','分隔
                     * 
                     */
                    std::string GetNatInsIdFilter() const;

                    /**
                     * 设置natfw 过滤，以','分隔
                     * @param _natInsIdFilter natfw 过滤，以','分隔
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
                     * 获取分页页数
                     * @return Offset 分页页数
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页页数
                     * @param _offset 分页页数
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
                     * 获取每页最多个数
                     * @return Limit 每页最多个数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页最多个数
                     * @param _limit 每页最多个数
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
                     * natfw 防火墙实例id
                     */
                    std::string m_natFwInsId;
                    bool m_natFwInsIdHasBeenSet;

                    /**
                     * natfw 过滤，以','分隔
                     */
                    std::string m_natInsIdFilter;
                    bool m_natInsIdFilterHasBeenSet;

                    /**
                     * 分页页数
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页最多个数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWVPCDNSLSTREQUEST_H_
