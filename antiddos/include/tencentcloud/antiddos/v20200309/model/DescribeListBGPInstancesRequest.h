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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTBGPINSTANCESREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTBGPINSTANCESREQUEST_H_

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
                * DescribeListBGPInstances请求参数结构体
                */
                class DescribeListBGPInstancesRequest : public AbstractModel
                {
                public:
                    DescribeListBGPInstancesRequest();
                    ~DescribeListBGPInstancesRequest() = default;
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
                     * 获取一页条数，当Limit=0时，默认一页条数为20;最大取值为100
                     * @return Limit 一页条数，当Limit=0时，默认一页条数为20;最大取值为100
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置一页条数，当Limit=0时，默认一页条数为20;最大取值为100
                     * @param Limit 一页条数，当Limit=0时，默认一页条数为20;最大取值为100
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

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
                     * 获取资产实例ID搜索，例如，bgp-00000001
                     * @return FilterInstanceId 资产实例ID搜索，例如，bgp-00000001
                     */
                    std::string GetFilterInstanceId() const;

                    /**
                     * 设置资产实例ID搜索，例如，bgp-00000001
                     * @param FilterInstanceId 资产实例ID搜索，例如，bgp-00000001
                     */
                    void SetFilterInstanceId(const std::string& _filterInstanceId);

                    /**
                     * 判断参数 FilterInstanceId 是否已赋值
                     * @return FilterInstanceId 是否已赋值
                     */
                    bool FilterInstanceIdHasBeenSet() const;

                    /**
                     * 获取地域搜索，例如，ap-guangzhou
                     * @return FilterRegion 地域搜索，例如，ap-guangzhou
                     */
                    std::string GetFilterRegion() const;

                    /**
                     * 设置地域搜索，例如，ap-guangzhou
                     * @param FilterRegion 地域搜索，例如，ap-guangzhou
                     */
                    void SetFilterRegion(const std::string& _filterRegion);

                    /**
                     * 判断参数 FilterRegion 是否已赋值
                     * @return FilterRegion 是否已赋值
                     */
                    bool FilterRegionHasBeenSet() const;

                    /**
                     * 获取名称搜索
                     * @return FilterName 名称搜索
                     */
                    std::string GetFilterName() const;

                    /**
                     * 设置名称搜索
                     * @param FilterName 名称搜索
                     */
                    void SetFilterName(const std::string& _filterName);

                    /**
                     * 判断参数 FilterName 是否已赋值
                     * @return FilterName 是否已赋值
                     */
                    bool FilterNameHasBeenSet() const;

                    /**
                     * 获取按照线路搜索, 1: BGP; 2: 三网
                     * @return FilterLine 按照线路搜索, 1: BGP; 2: 三网
                     */
                    uint64_t GetFilterLine() const;

                    /**
                     * 设置按照线路搜索, 1: BGP; 2: 三网
                     * @param FilterLine 按照线路搜索, 1: BGP; 2: 三网
                     */
                    void SetFilterLine(const uint64_t& _filterLine);

                    /**
                     * 判断参数 FilterLine 是否已赋值
                     * @return FilterLine 是否已赋值
                     */
                    bool FilterLineHasBeenSet() const;

                private:

                    /**
                     * 页起始偏移，取值为(页码-1)*一页条数
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 一页条数，当Limit=0时，默认一页条数为20;最大取值为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * IP搜索
                     */
                    std::string m_filterIp;
                    bool m_filterIpHasBeenSet;

                    /**
                     * 资产实例ID搜索，例如，bgp-00000001
                     */
                    std::string m_filterInstanceId;
                    bool m_filterInstanceIdHasBeenSet;

                    /**
                     * 地域搜索，例如，ap-guangzhou
                     */
                    std::string m_filterRegion;
                    bool m_filterRegionHasBeenSet;

                    /**
                     * 名称搜索
                     */
                    std::string m_filterName;
                    bool m_filterNameHasBeenSet;

                    /**
                     * 按照线路搜索, 1: BGP; 2: 三网
                     */
                    uint64_t m_filterLine;
                    bool m_filterLineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTBGPINSTANCESREQUEST_H_