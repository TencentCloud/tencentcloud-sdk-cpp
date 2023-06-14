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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBENEWL4RULESREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBENEWL4RULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeNewL4Rules请求参数结构体
                */
                class DescribeNewL4RulesRequest : public AbstractModel
                {
                public:
                    DescribeNewL4RulesRequest();
                    ~DescribeNewL4RulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP）
                     * @return Business 大禹子产品代号（bgpip表示高防IP）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP）
                     * @param _business 大禹子产品代号（bgpip表示高防IP）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取指定IP查询
                     * @return Ip 指定IP查询
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置指定IP查询
                     * @param _ip 指定IP查询
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取指定高防IP端口查询
                     * @return VirtualPort 指定高防IP端口查询
                     * 
                     */
                    uint64_t GetVirtualPort() const;

                    /**
                     * 设置指定高防IP端口查询
                     * @param _virtualPort 指定高防IP端口查询
                     * 
                     */
                    void SetVirtualPort(const uint64_t& _virtualPort);

                    /**
                     * 判断参数 VirtualPort 是否已赋值
                     * @return VirtualPort 是否已赋值
                     * 
                     */
                    bool VirtualPortHasBeenSet() const;

                    /**
                     * 获取一页条数，填0表示不分页
                     * @return Limit 一页条数，填0表示不分页
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置一页条数，填0表示不分页
                     * @param _limit 一页条数，填0表示不分页
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
                     * 获取页起始偏移，取值为(页码-1)*一页条数
                     * @return Offset 页起始偏移，取值为(页码-1)*一页条数
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置页起始偏移，取值为(页码-1)*一页条数
                     * @param _offset 页起始偏移，取值为(页码-1)*一页条数
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
                     * 大禹子产品代号（bgpip表示高防IP）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 指定IP查询
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 指定高防IP端口查询
                     */
                    uint64_t m_virtualPort;
                    bool m_virtualPortHasBeenSet;

                    /**
                     * 一页条数，填0表示不分页
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 页起始偏移，取值为(页码-1)*一页条数
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBENEWL4RULESREQUEST_H_
