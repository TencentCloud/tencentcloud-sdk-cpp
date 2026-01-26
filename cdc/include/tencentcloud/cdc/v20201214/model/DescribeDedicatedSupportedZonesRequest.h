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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDSUPPORTEDZONESREQUEST_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDSUPPORTEDZONESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * DescribeDedicatedSupportedZones请求参数结构体
                */
                class DescribeDedicatedSupportedZonesRequest : public AbstractModel
                {
                public:
                    DescribeDedicatedSupportedZonesRequest();
                    ~DescribeDedicatedSupportedZonesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>传入region列表</p>
                     * @return Regions <p>传入region列表</p>
                     * 
                     */
                    std::vector<int64_t> GetRegions() const;

                    /**
                     * 设置<p>传入region列表</p>
                     * @param _regions <p>传入region列表</p>
                     * 
                     */
                    void SetRegions(const std::vector<int64_t>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                private:

                    /**
                     * <p>传入region列表</p>
                     */
                    std::vector<int64_t> m_regions;
                    bool m_regionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDSUPPORTEDZONESREQUEST_H_
