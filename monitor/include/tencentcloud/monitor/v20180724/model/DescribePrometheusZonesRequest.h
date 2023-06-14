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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSZONESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSZONESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePrometheusZones请求参数结构体
                */
                class DescribePrometheusZonesRequest : public AbstractModel
                {
                public:
                    DescribePrometheusZonesRequest();
                    ~DescribePrometheusZonesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取地域 ID（RegionId 和 RegionName 只需要填一个）
                     * @return RegionId 地域 ID（RegionId 和 RegionName 只需要填一个）
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域 ID（RegionId 和 RegionName 只需要填一个）
                     * @param _regionId 地域 ID（RegionId 和 RegionName 只需要填一个）
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取地域名（RegionId 和 RegionName 只需要填一个）
                     * @return RegionName 地域名（RegionId 和 RegionName 只需要填一个）
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域名（RegionId 和 RegionName 只需要填一个）
                     * @param _regionName 地域名（RegionId 和 RegionName 只需要填一个）
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                private:

                    /**
                     * 地域 ID（RegionId 和 RegionName 只需要填一个）
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 地域名（RegionId 和 RegionName 只需要填一个）
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSZONESREQUEST_H_
