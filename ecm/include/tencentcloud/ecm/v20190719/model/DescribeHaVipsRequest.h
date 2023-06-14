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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEHAVIPSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEHAVIPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Filter.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeHaVips请求参数结构体
                */
                class DescribeHaVipsRequest : public AbstractModel
                {
                public:
                    DescribeHaVipsRequest();
                    ~DescribeHaVipsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取HAVIP数组，HAVIP唯一ID，形如：havip-9o233uri。
                     * @return HaVipIds HAVIP数组，HAVIP唯一ID，形如：havip-9o233uri。
                     * 
                     */
                    std::vector<std::string> GetHaVipIds() const;

                    /**
                     * 设置HAVIP数组，HAVIP唯一ID，形如：havip-9o233uri。
                     * @param _haVipIds HAVIP数组，HAVIP唯一ID，形如：havip-9o233uri。
                     * 
                     */
                    void SetHaVipIds(const std::vector<std::string>& _haVipIds);

                    /**
                     * 判断参数 HaVipIds 是否已赋值
                     * @return HaVipIds 是否已赋值
                     * 
                     */
                    bool HaVipIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件，参数不支持同时指定HaVipIds和Filters。
havip-id - String - HAVIP唯一ID，形如：havip-9o233uri。
havip-name - String - HAVIP名称。
vpc-id - String - HAVIP所在私有网络ID。
subnet-id - String - HAVIP所在子网ID。
                     * @return Filters 过滤条件，参数不支持同时指定HaVipIds和Filters。
havip-id - String - HAVIP唯一ID，形如：havip-9o233uri。
havip-name - String - HAVIP名称。
vpc-id - String - HAVIP所在私有网络ID。
subnet-id - String - HAVIP所在子网ID。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，参数不支持同时指定HaVipIds和Filters。
havip-id - String - HAVIP唯一ID，形如：havip-9o233uri。
havip-name - String - HAVIP名称。
vpc-id - String - HAVIP所在私有网络ID。
subnet-id - String - HAVIP所在子网ID。
                     * @param _filters 过滤条件，参数不支持同时指定HaVipIds和Filters。
havip-id - String - HAVIP唯一ID，形如：havip-9o233uri。
havip-name - String - HAVIP名称。
vpc-id - String - HAVIP所在私有网络ID。
subnet-id - String - HAVIP所在子网ID。
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移量，默认值是0。
                     * @return Offset 偏移量，默认值是0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认值是0。
                     * @param _offset 偏移量，默认值是0。
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
                     * 获取返回数量，默认值是20，最大是100。
                     * @return Limit 返回数量，默认值是20，最大是100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认值是20，最大是100。
                     * @param _limit 返回数量，默认值是20，最大是100。
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
                     * 获取Ecm 区域，不填代表全部区域。
                     * @return EcmRegion Ecm 区域，不填代表全部区域。
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置Ecm 区域，不填代表全部区域。
                     * @param _ecmRegion Ecm 区域，不填代表全部区域。
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                private:

                    /**
                     * HAVIP数组，HAVIP唯一ID，形如：havip-9o233uri。
                     */
                    std::vector<std::string> m_haVipIds;
                    bool m_haVipIdsHasBeenSet;

                    /**
                     * 过滤条件，参数不支持同时指定HaVipIds和Filters。
havip-id - String - HAVIP唯一ID，形如：havip-9o233uri。
havip-name - String - HAVIP名称。
vpc-id - String - HAVIP所在私有网络ID。
subnet-id - String - HAVIP所在子网ID。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认值是0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认值是20，最大是100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Ecm 区域，不填代表全部区域。
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEHAVIPSREQUEST_H_
