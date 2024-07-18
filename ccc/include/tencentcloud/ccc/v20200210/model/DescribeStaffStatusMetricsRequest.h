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
                     * 获取应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @return SdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @param _sdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取筛选坐席列表，默认不传返回全部坐席信息
                     * @return StaffList 筛选坐席列表，默认不传返回全部坐席信息
                     * 
                     */
                    std::vector<std::string> GetStaffList() const;

                    /**
                     * 设置筛选坐席列表，默认不传返回全部坐席信息
                     * @param _staffList 筛选坐席列表，默认不传返回全部坐席信息
                     * 
                     */
                    void SetStaffList(const std::vector<std::string>& _staffList);

                    /**
                     * 判断参数 StaffList 是否已赋值
                     * @return StaffList 是否已赋值
                     * 
                     */
                    bool StaffListHasBeenSet() const;

                    /**
                     * 获取筛选技能组ID列表
                     * @return GroupIdList 筛选技能组ID列表
                     * 
                     */
                    std::vector<int64_t> GetGroupIdList() const;

                    /**
                     * 设置筛选技能组ID列表
                     * @param _groupIdList 筛选技能组ID列表
                     * 
                     */
                    void SetGroupIdList(const std::vector<int64_t>& _groupIdList);

                    /**
                     * 判断参数 GroupIdList 是否已赋值
                     * @return GroupIdList 是否已赋值
                     * 
                     */
                    bool GroupIdListHasBeenSet() const;

                    /**
                     * 获取筛选坐席状态列表 座席状态 free 示闲 | busy 忙碌 | rest 小休 | notReady 示忙 | afterCallWork 话后调整 | offline 离线 
                     * @return StatusList 筛选坐席状态列表 座席状态 free 示闲 | busy 忙碌 | rest 小休 | notReady 示忙 | afterCallWork 话后调整 | offline 离线 
                     * 
                     */
                    std::vector<std::string> GetStatusList() const;

                    /**
                     * 设置筛选坐席状态列表 座席状态 free 示闲 | busy 忙碌 | rest 小休 | notReady 示忙 | afterCallWork 话后调整 | offline 离线 
                     * @param _statusList 筛选坐席状态列表 座席状态 free 示闲 | busy 忙碌 | rest 小休 | notReady 示忙 | afterCallWork 话后调整 | offline 离线 
                     * 
                     */
                    void SetStatusList(const std::vector<std::string>& _statusList);

                    /**
                     * 判断参数 StatusList 是否已赋值
                     * @return StatusList 是否已赋值
                     * 
                     */
                    bool StatusListHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 筛选坐席列表，默认不传返回全部坐席信息
                     */
                    std::vector<std::string> m_staffList;
                    bool m_staffListHasBeenSet;

                    /**
                     * 筛选技能组ID列表
                     */
                    std::vector<int64_t> m_groupIdList;
                    bool m_groupIdListHasBeenSet;

                    /**
                     * 筛选坐席状态列表 座席状态 free 示闲 | busy 忙碌 | rest 小休 | notReady 示忙 | afterCallWork 话后调整 | offline 离线 
                     */
                    std::vector<std::string> m_statusList;
                    bool m_statusListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESTAFFSTATUSMETRICSREQUEST_H_
