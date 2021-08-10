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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESTAFFSTATUSMETRICSREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESTAFFSTATUSMETRICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeStaffStatusMetrics请求参数结构体
                */
                class DescribeStaffStatusMetricsRequest : public AbstractModel
                {
                public:
                    DescribeStaffStatusMetricsRequest();
                    ~DescribeStaffStatusMetricsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return SdkAppId 实例ID
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置实例ID
                     * @param SdkAppId 实例ID
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取筛选坐席列表，默认不传返回全部坐席信息
                     * @return StaffList 筛选坐席列表，默认不传返回全部坐席信息
                     */
                    std::vector<std::string> GetStaffList() const;

                    /**
                     * 设置筛选坐席列表，默认不传返回全部坐席信息
                     * @param StaffList 筛选坐席列表，默认不传返回全部坐席信息
                     */
                    void SetStaffList(const std::vector<std::string>& _staffList);

                    /**
                     * 判断参数 StaffList 是否已赋值
                     * @return StaffList 是否已赋值
                     */
                    bool StaffListHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 筛选坐席列表，默认不传返回全部坐席信息
                     */
                    std::vector<std::string> m_staffList;
                    bool m_staffListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESTAFFSTATUSMETRICSREQUEST_H_
