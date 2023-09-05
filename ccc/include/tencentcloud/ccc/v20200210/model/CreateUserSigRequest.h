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
                     * 获取用户 ID，该值必须与 ClientData 字段中 Uid 的值一致
                     * @return Uid 用户 ID，该值必须与 ClientData 字段中 Uid 的值一致
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置用户 ID，该值必须与 ClientData 字段中 Uid 的值一致
                     * @param _uid 用户 ID，该值必须与 ClientData 字段中 Uid 的值一致
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
                     * 获取有效期，单位秒，不超过 1 小时
                     * @return ExpiredTime 有效期，单位秒，不超过 1 小时
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 设置有效期，单位秒，不超过 1 小时
                     * @param _expiredTime 有效期，单位秒，不超过 1 小时
                     * 
                     */
                    void SetExpiredTime(const int64_t& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取用户签名数据，必填字段，为标准 JSON 格式
                     * @return ClientData 用户签名数据，必填字段，为标准 JSON 格式
                     * 
                     */
                    std::string GetClientData() const;

                    /**
                     * 设置用户签名数据，必填字段，为标准 JSON 格式
                     * @param _clientData 用户签名数据，必填字段，为标准 JSON 格式
                     * 
                     */
                    void SetClientData(const std::string& _clientData);

                    /**
                     * 判断参数 ClientData 是否已赋值
                     * @return ClientData 是否已赋值
                     * 
                     */
                    bool ClientDataHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 用户 ID，该值必须与 ClientData 字段中 Uid 的值一致
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 有效期，单位秒，不超过 1 小时
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 用户签名数据，必填字段，为标准 JSON 格式
                     */
                    std::string m_clientData;
                    bool m_clientDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATEUSERSIGREQUEST_H_
