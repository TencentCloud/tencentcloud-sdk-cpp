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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATESDKLOGINTOKENREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATESDKLOGINTOKENREQUEST_H_

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
                * CreateSDKLoginToken请求参数结构体
                */
                class CreateSDKLoginTokenRequest : public AbstractModel
                {
                public:
                    CreateSDKLoginTokenRequest();
                    ~CreateSDKLoginTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @return SdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @param SdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取坐席账号。
                     * @return SeatUserId 坐席账号。
                     */
                    std::string GetSeatUserId() const;

                    /**
                     * 设置坐席账号。
                     * @param SeatUserId 坐席账号。
                     */
                    void SetSeatUserId(const std::string& _seatUserId);

                    /**
                     * 判断参数 SeatUserId 是否已赋值
                     * @return SeatUserId 是否已赋值
                     */
                    bool SeatUserIdHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 坐席账号。
                     */
                    std::string m_seatUserId;
                    bool m_seatUserIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATESDKLOGINTOKENREQUEST_H_
