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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBGPINSTANCESREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBGPINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/TagInfo.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeBgpInstances请求参数结构体
                */
                class DescribeBgpInstancesRequest : public AbstractModel
                {
                public:
                    DescribeBgpInstancesRequest();
                    ~DescribeBgpInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取地域
                     * @return FilterRegion 地域
                     * 
                     */
                    std::string GetFilterRegion() const;

                    /**
                     * 设置地域
                     * @param _filterRegion 地域
                     * 
                     */
                    void SetFilterRegion(const std::string& _filterRegion);

                    /**
                     * 判断参数 FilterRegion 是否已赋值
                     * @return FilterRegion 是否已赋值
                     * 
                     */
                    bool FilterRegionHasBeenSet() const;

                    /**
                     * 获取["bgp-0000041i"]
                     * @return FilterInstanceIdList ["bgp-0000041i"]
                     * 
                     */
                    std::vector<std::string> GetFilterInstanceIdList() const;

                    /**
                     * 设置["bgp-0000041i"]
                     * @param _filterInstanceIdList ["bgp-0000041i"]
                     * 
                     */
                    void SetFilterInstanceIdList(const std::vector<std::string>& _filterInstanceIdList);

                    /**
                     * 判断参数 FilterInstanceIdList 是否已赋值
                     * @return FilterInstanceIdList 是否已赋值
                     * 
                     */
                    bool FilterInstanceIdListHasBeenSet() const;

                    /**
                     * 获取[{}]
                     * @return FilterTag [{}]
                     * 
                     */
                    std::vector<TagInfo> GetFilterTag() const;

                    /**
                     * 设置[{}]
                     * @param _filterTag [{}]
                     * 
                     */
                    void SetFilterTag(const std::vector<TagInfo>& _filterTag);

                    /**
                     * 判断参数 FilterTag 是否已赋值
                     * @return FilterTag 是否已赋值
                     * 
                     */
                    bool FilterTagHasBeenSet() const;

                    /**
                     * 获取分页数量
                     * @return Limit 分页数量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页数量
                     * @param _limit 分页数量
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
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 地域
                     */
                    std::string m_filterRegion;
                    bool m_filterRegionHasBeenSet;

                    /**
                     * ["bgp-0000041i"]
                     */
                    std::vector<std::string> m_filterInstanceIdList;
                    bool m_filterInstanceIdListHasBeenSet;

                    /**
                     * [{}]
                     */
                    std::vector<TagInfo> m_filterTag;
                    bool m_filterTagHasBeenSet;

                    /**
                     * 分页数量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBGPINSTANCESREQUEST_H_
