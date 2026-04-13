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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBEPUBLICAPPLICATIONSREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBEPUBLICAPPLICATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * DescribePublicApplications请求参数结构体
                */
                class DescribePublicApplicationsRequest : public AbstractModel
                {
                public:
                    DescribePublicApplicationsRequest();
                    ~DescribePublicApplicationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>返回数量，默认为20，最大值为100。</p>
                     * @return Limit <p>返回数量，默认为20，最大值为100。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为20，最大值为100。</p>
                     * @param _limit <p>返回数量，默认为20，最大值为100。</p>
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
                     * 获取<p>偏移量，默认为0。</p>
                     * @return Offset <p>偏移量，默认为0。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为0。</p>
                     * @param _offset <p>偏移量，默认为0。</p>
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
                     * 获取<p>父应用ID</p>
                     * @return ParentAppId <p>父应用ID</p>
                     * 
                     */
                    std::string GetParentAppId() const;

                    /**
                     * 设置<p>父应用ID</p>
                     * @param _parentAppId <p>父应用ID</p>
                     * 
                     */
                    void SetParentAppId(const std::string& _parentAppId);

                    /**
                     * 判断参数 ParentAppId 是否已赋值
                     * @return ParentAppId 是否已赋值
                     * 
                     */
                    bool ParentAppIdHasBeenSet() const;

                    /**
                     * 获取<p>应用类型</p><p>枚举值：</p><ul><li>WDL： WDL</li><li>NEXTFLOW： NEXTFLOW</li></ul>
                     * @return AppType <p>应用类型</p><p>枚举值：</p><ul><li>WDL： WDL</li><li>NEXTFLOW： NEXTFLOW</li></ul>
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置<p>应用类型</p><p>枚举值：</p><ul><li>WDL： WDL</li><li>NEXTFLOW： NEXTFLOW</li></ul>
                     * @param _appType <p>应用类型</p><p>枚举值：</p><ul><li>WDL： WDL</li><li>NEXTFLOW： NEXTFLOW</li></ul>
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                private:

                    /**
                     * <p>返回数量，默认为20，最大值为100。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量，默认为0。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>父应用ID</p>
                     */
                    std::string m_parentAppId;
                    bool m_parentAppIdHasBeenSet;

                    /**
                     * <p>应用类型</p><p>枚举值：</p><ul><li>WDL： WDL</li><li>NEXTFLOW： NEXTFLOW</li></ul>
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBEPUBLICAPPLICATIONSREQUEST_H_
