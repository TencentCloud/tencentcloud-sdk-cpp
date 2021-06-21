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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTPROTECTTHRESHOLDCONFIGREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTPROTECTTHRESHOLDCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeListProtectThresholdConfig请求参数结构体
                */
                class DescribeListProtectThresholdConfigRequest : public AbstractModel
                {
                public:
                    DescribeListProtectThresholdConfigRequest();
                    ~DescribeListProtectThresholdConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页起始偏移，取值为(页码-1)*一页条数
                     * @return Offset 页起始偏移，取值为(页码-1)*一页条数
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置页起始偏移，取值为(页码-1)*一页条数
                     * @param Offset 页起始偏移，取值为(页码-1)*一页条数
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取一页条数，当Limit=0时，默认一页条数为100;最大取值为100
                     * @return Limit 一页条数，当Limit=0时，默认一页条数为100;最大取值为100
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置一页条数，当Limit=0时，默认一页条数为100;最大取值为100
                     * @param Limit 一页条数，当Limit=0时，默认一页条数为100;最大取值为100
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取资源实例ID搜索, 支持资源实例前缀通配搜索，例如bgp-*表示获取高防包类型的资源实例
                     * @return FilterInstanceId 资源实例ID搜索, 支持资源实例前缀通配搜索，例如bgp-*表示获取高防包类型的资源实例
                     */
                    std::string GetFilterInstanceId() const;

                    /**
                     * 设置资源实例ID搜索, 支持资源实例前缀通配搜索，例如bgp-*表示获取高防包类型的资源实例
                     * @param FilterInstanceId 资源实例ID搜索, 支持资源实例前缀通配搜索，例如bgp-*表示获取高防包类型的资源实例
                     */
                    void SetFilterInstanceId(const std::string& _filterInstanceId);

                    /**
                     * 判断参数 FilterInstanceId 是否已赋值
                     * @return FilterInstanceId 是否已赋值
                     */
                    bool FilterInstanceIdHasBeenSet() const;

                    /**
                     * 获取IP搜索
                     * @return FilterIp IP搜索
                     */
                    std::string GetFilterIp() const;

                    /**
                     * 设置IP搜索
                     * @param FilterIp IP搜索
                     */
                    void SetFilterIp(const std::string& _filterIp);

                    /**
                     * 判断参数 FilterIp 是否已赋值
                     * @return FilterIp 是否已赋值
                     */
                    bool FilterIpHasBeenSet() const;

                    /**
                     * 获取域名搜索（查询域名与协议的CC防护阈值时使用）
                     * @return FilterDomain 域名搜索（查询域名与协议的CC防护阈值时使用）
                     */
                    std::string GetFilterDomain() const;

                    /**
                     * 设置域名搜索（查询域名与协议的CC防护阈值时使用）
                     * @param FilterDomain 域名搜索（查询域名与协议的CC防护阈值时使用）
                     */
                    void SetFilterDomain(const std::string& _filterDomain);

                    /**
                     * 判断参数 FilterDomain 是否已赋值
                     * @return FilterDomain 是否已赋值
                     */
                    bool FilterDomainHasBeenSet() const;

                    /**
                     * 获取协议搜索(查询域名与协议的CC防护阈值时使用）
                     * @return FilterProtocol 协议搜索(查询域名与协议的CC防护阈值时使用）
                     */
                    std::string GetFilterProtocol() const;

                    /**
                     * 设置协议搜索(查询域名与协议的CC防护阈值时使用）
                     * @param FilterProtocol 协议搜索(查询域名与协议的CC防护阈值时使用）
                     */
                    void SetFilterProtocol(const std::string& _filterProtocol);

                    /**
                     * 判断参数 FilterProtocol 是否已赋值
                     * @return FilterProtocol 是否已赋值
                     */
                    bool FilterProtocolHasBeenSet() const;

                private:

                    /**
                     * 页起始偏移，取值为(页码-1)*一页条数
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 一页条数，当Limit=0时，默认一页条数为100;最大取值为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 资源实例ID搜索, 支持资源实例前缀通配搜索，例如bgp-*表示获取高防包类型的资源实例
                     */
                    std::string m_filterInstanceId;
                    bool m_filterInstanceIdHasBeenSet;

                    /**
                     * IP搜索
                     */
                    std::string m_filterIp;
                    bool m_filterIpHasBeenSet;

                    /**
                     * 域名搜索（查询域名与协议的CC防护阈值时使用）
                     */
                    std::string m_filterDomain;
                    bool m_filterDomainHasBeenSet;

                    /**
                     * 协议搜索(查询域名与协议的CC防护阈值时使用）
                     */
                    std::string m_filterProtocol;
                    bool m_filterProtocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTPROTECTTHRESHOLDCONFIGREQUEST_H_
