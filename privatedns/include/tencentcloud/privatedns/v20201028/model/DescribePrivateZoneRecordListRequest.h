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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEPRIVATEZONERECORDLISTREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEPRIVATEZONERECORDLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/Filter.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribePrivateZoneRecordList请求参数结构体
                */
                class DescribePrivateZoneRecordListRequest : public AbstractModel
                {
                public:
                    DescribePrivateZoneRecordListRequest();
                    ~DescribePrivateZoneRecordListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私有域ID: zone-xxxxxx
                     * @return ZoneId 私有域ID: zone-xxxxxx
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置私有域ID: zone-xxxxxx
                     * @param _zoneId 私有域ID: zone-xxxxxx
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取过滤参数（支持使用Value、RecordType过滤）
                     * @return Filters 过滤参数（支持使用Value、RecordType过滤）
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤参数（支持使用Value、RecordType过滤）
                     * @param _filters 过滤参数（支持使用Value、RecordType过滤）
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
                     * 获取分页偏移量，从0开始
                     * @return Offset 分页偏移量，从0开始
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，从0开始
                     * @param _offset 分页偏移量，从0开始
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
                     * 获取分页限制数目， 最大200，默认20
                     * @return Limit 分页限制数目， 最大200，默认20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页限制数目， 最大200，默认20
                     * @param _limit 分页限制数目， 最大200，默认20
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
                     * 私有域ID: zone-xxxxxx
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 过滤参数（支持使用Value、RecordType过滤）
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 分页偏移量，从0开始
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页限制数目， 最大200，默认20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEPRIVATEZONERECORDLISTREQUEST_H_
