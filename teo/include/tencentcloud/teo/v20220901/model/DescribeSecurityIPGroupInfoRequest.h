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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYIPGROUPINFOREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYIPGROUPINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeSecurityIPGroupInfo请求参数结构体
                */
                class DescribeSecurityIPGroupInfoRequest : public AbstractModel
                {
                public:
                    DescribeSecurityIPGroupInfoRequest();
                    ~DescribeSecurityIPGroupInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点的 ID ，用于指定查询的站点范围。
                     * @return ZoneId 站点的 ID ，用于指定查询的站点范围。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点的 ID ，用于指定查询的站点范围。
                     * @param _zoneId 站点的 ID ，用于指定查询的站点范围。
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
                     * 获取单次返回的最大条目数。默认值为 20 ，最大查询条目为 1000 。
                     * @return Limit 单次返回的最大条目数。默认值为 20 ，最大查询条目为 1000 。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置单次返回的最大条目数。默认值为 20 ，最大查询条目为 1000 。
                     * @param _limit 单次返回的最大条目数。默认值为 20 ，最大查询条目为 1000 。
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
                     * 获取分页查询的起始条目偏移量。默认值为 0 。
                     * @return Offset 分页查询的起始条目偏移量。默认值为 0 。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页查询的起始条目偏移量。默认值为 0 。
                     * @param _offset 分页查询的起始条目偏移量。默认值为 0 。
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
                     * 站点的 ID ，用于指定查询的站点范围。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 单次返回的最大条目数。默认值为 20 ，最大查询条目为 1000 。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页查询的起始条目偏移量。默认值为 0 。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYIPGROUPINFOREQUEST_H_
