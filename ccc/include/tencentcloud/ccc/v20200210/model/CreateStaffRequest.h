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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATESTAFFREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATESTAFFREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/SeatUserInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * CreateStaff请求参数结构体
                */
                class CreateStaffRequest : public AbstractModel
                {
                public:
                    CreateStaffRequest();
                    ~CreateStaffRequest() = default;
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
                     * 获取客服信息，个数不超过 10
                     * @return Staffs 客服信息，个数不超过 10
                     * 
                     */
                    std::vector<SeatUserInfo> GetStaffs() const;

                    /**
                     * 设置客服信息，个数不超过 10
                     * @param _staffs 客服信息，个数不超过 10
                     * 
                     */
                    void SetStaffs(const std::vector<SeatUserInfo>& _staffs);

                    /**
                     * 判断参数 Staffs 是否已赋值
                     * @return Staffs 是否已赋值
                     * 
                     */
                    bool StaffsHasBeenSet() const;

                    /**
                     * 获取是否发送密码邮件，默认true
                     * @return SendPassword 是否发送密码邮件，默认true
                     * 
                     */
                    bool GetSendPassword() const;

                    /**
                     * 设置是否发送密码邮件，默认true
                     * @param _sendPassword 是否发送密码邮件，默认true
                     * 
                     */
                    void SetSendPassword(const bool& _sendPassword);

                    /**
                     * 判断参数 SendPassword 是否已赋值
                     * @return SendPassword 是否已赋值
                     * 
                     */
                    bool SendPasswordHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 客服信息，个数不超过 10
                     */
                    std::vector<SeatUserInfo> m_staffs;
                    bool m_staffsHasBeenSet;

                    /**
                     * 是否发送密码邮件，默认true
                     */
                    bool m_sendPassword;
                    bool m_sendPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATESTAFFREQUEST_H_
