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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEINSTANCETYPESREQUEST_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEINSTANCETYPESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * DescribeInstanceTypes请求参数结构体
                */
                class DescribeInstanceTypesRequest : public AbstractModel
                {
                public:
                    DescribeInstanceTypesRequest();
                    ~DescribeInstanceTypesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区代码，如 ap-guangzhou-1；不传则返回账号下所有可用区的机型。
                     * @return Zone 可用区代码，如 ap-guangzhou-1；不传则返回账号下所有可用区的机型。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区代码，如 ap-guangzhou-1；不传则返回账号下所有可用区的机型。
                     * @param _zone 可用区代码，如 ap-guangzhou-1；不传则返回账号下所有可用区的机型。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取分页偏移量,默认0
                     * @return Offset 分页偏移量,默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量,默认0
                     * @param _offset 分页偏移量,默认0
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
                     * 获取分页大小，默认20，最大100
                     * @return Limit 分页大小，默认20，最大100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页大小，默认20，最大100
                     * @param _limit 分页大小，默认20，最大100
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
                     * 可用区代码，如 ap-guangzhou-1；不传则返回账号下所有可用区的机型。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 分页偏移量,默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页大小，默认20，最大100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEINSTANCETYPESREQUEST_H_
