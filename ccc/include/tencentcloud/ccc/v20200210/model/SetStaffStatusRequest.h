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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_SETSTAFFSTATUSREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_SETSTAFFSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/SetStaffStatusItem.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * SetStaffStatus请求参数结构体
                */
                class SetStaffStatusRequest : public AbstractModel
                {
                public:
                    SetStaffStatusRequest();
                    ~SetStaffStatusRequest() = default;
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
                     * 获取设置座席状态列表，最大个数 10
                     * @return StaffStatusList 设置座席状态列表，最大个数 10
                     * 
                     */
                    std::vector<SetStaffStatusItem> GetStaffStatusList() const;

                    /**
                     * 设置设置座席状态列表，最大个数 10
                     * @param _staffStatusList 设置座席状态列表，最大个数 10
                     * 
                     */
                    void SetStaffStatusList(const std::vector<SetStaffStatusItem>& _staffStatusList);

                    /**
                     * 判断参数 StaffStatusList 是否已赋值
                     * @return StaffStatusList 是否已赋值
                     * 
                     */
                    bool StaffStatusListHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 设置座席状态列表，最大个数 10
                     */
                    std::vector<SetStaffStatusItem> m_staffStatusList;
                    bool m_staffStatusListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_SETSTAFFSTATUSREQUEST_H_
