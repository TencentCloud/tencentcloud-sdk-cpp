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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBEPLATFORMSREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBEPLATFORMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * DescribePlatforms请求参数结构体
                */
                class DescribePlatformsRequest : public AbstractModel
                {
                public:
                    DescribePlatformsRequest();
                    ~DescribePlatformsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台 Id 列表。如果不填，则不按平台 Id 进行过滤。
                     * @return Platforms 平台 Id 列表。如果不填，则不按平台 Id 进行过滤。
                     * 
                     */
                    std::vector<std::string> GetPlatforms() const;

                    /**
                     * 设置平台 Id 列表。如果不填，则不按平台 Id 进行过滤。
                     * @param _platforms 平台 Id 列表。如果不填，则不按平台 Id 进行过滤。
                     * 
                     */
                    void SetPlatforms(const std::vector<std::string>& _platforms);

                    /**
                     * 判断参数 Platforms 是否已赋值
                     * @return Platforms 是否已赋值
                     * 
                     */
                    bool PlatformsHasBeenSet() const;

                    /**
                     * 获取平台绑定的 License Id 列表。如果不填，则不按平台绑定的 License Id 进行过滤。
                     * @return LicenseIds 平台绑定的 License Id 列表。如果不填，则不按平台绑定的 License Id 进行过滤。
                     * 
                     */
                    std::vector<std::string> GetLicenseIds() const;

                    /**
                     * 设置平台绑定的 License Id 列表。如果不填，则不按平台绑定的 License Id 进行过滤。
                     * @param _licenseIds 平台绑定的 License Id 列表。如果不填，则不按平台绑定的 License Id 进行过滤。
                     * 
                     */
                    void SetLicenseIds(const std::vector<std::string>& _licenseIds);

                    /**
                     * 判断参数 LicenseIds 是否已赋值
                     * @return LicenseIds 是否已赋值
                     * 
                     */
                    bool LicenseIdsHasBeenSet() const;

                    /**
                     * 获取分页返回的起始偏移量，默认值：0。
                     * @return Offset 分页返回的起始偏移量，默认值：0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页返回的起始偏移量，默认值：0。
                     * @param _offset 分页返回的起始偏移量，默认值：0。
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
                     * 获取分页返回的记录条数，默认值：10，最大值：20。
                     * @return Limit 分页返回的记录条数，默认值：10，最大值：20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页返回的记录条数，默认值：10，最大值：20。
                     * @param _limit 分页返回的记录条数，默认值：10，最大值：20。
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
                     * 平台 Id 列表。如果不填，则不按平台 Id 进行过滤。
                     */
                    std::vector<std::string> m_platforms;
                    bool m_platformsHasBeenSet;

                    /**
                     * 平台绑定的 License Id 列表。如果不填，则不按平台绑定的 License Id 进行过滤。
                     */
                    std::vector<std::string> m_licenseIds;
                    bool m_licenseIdsHasBeenSet;

                    /**
                     * 分页返回的起始偏移量，默认值：0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页返回的记录条数，默认值：10，最大值：20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBEPLATFORMSREQUEST_H_
