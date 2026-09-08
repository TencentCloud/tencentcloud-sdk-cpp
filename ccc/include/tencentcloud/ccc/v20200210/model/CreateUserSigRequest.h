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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATEUSERSIGREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATEUSERSIGREQUEST_H_

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
                * CreateUserSig请求参数结构体
                */
                class CreateUserSigRequest : public AbstractModel
                {
                public:
                    CreateUserSigRequest();
                    ~CreateUserSigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     * @return SdkAppId <p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置<p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     * @param _sdkAppId <p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
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
                     * 获取<p>用户 ID</p>
                     * @return Uid <p>用户 ID</p>
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置<p>用户 ID</p>
                     * @param _uid <p>用户 ID</p>
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取<p>用户签名数据</p>
                     * @return ClientData <p>用户签名数据</p>
                     * 
                     */
                    std::string GetClientData() const;

                    /**
                     * 设置<p>用户签名数据</p>
                     * @param _clientData <p>用户签名数据</p>
                     * 
                     */
                    void SetClientData(const std::string& _clientData);

                    /**
                     * 判断参数 ClientData 是否已赋值
                     * @return ClientData 是否已赋值
                     * 
                     */
                    bool ClientDataHasBeenSet() const;

                    /**
                     * 获取<p>有效期，单位秒，不超过 1 小时</p>
                     * @return ExpiredTime <p>有效期，单位秒，不超过 1 小时</p>
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 设置<p>有效期，单位秒，不超过 1 小时</p>
                     * @param _expiredTime <p>有效期，单位秒，不超过 1 小时</p>
                     * 
                     */
                    void SetExpiredTime(const int64_t& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>用户 ID</p>
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * <p>用户签名数据</p>
                     */
                    std::string m_clientData;
                    bool m_clientDataHasBeenSet;

                    /**
                     * <p>有效期，单位秒，不超过 1 小时</p>
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATEUSERSIGREQUEST_H_
