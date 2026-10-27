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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DESCRIBEBANNERASSETDATAREQUEST_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DESCRIBEBANNERASSETDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * DescribeBannerAssetData请求参数结构体
                */
                class DescribeBannerAssetDataRequest : public AbstractModel
                {
                public:
                    DescribeBannerAssetDataRequest();
                    ~DescribeBannerAssetDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>漏洞情报ID</p>
                     * @return VulId <p>漏洞情报ID</p>
                     * 
                     */
                    std::string GetVulId() const;

                    /**
                     * 设置<p>漏洞情报ID</p>
                     * @param _vulId <p>漏洞情报ID</p>
                     * 
                     */
                    void SetVulId(const std::string& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取分页偏移
                     * @return Offset 分页偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移
                     * @param _offset 分页偏移
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页大小
                     * @return Limit 分页大小
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页大小
                     * @param _limit 分页大小
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>漏洞情报ID</p>
                     */
                    std::string m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 分页偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页大小
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DESCRIBEBANNERASSETDATAREQUEST_H_
