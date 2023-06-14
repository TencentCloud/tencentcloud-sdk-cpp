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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPDATEAPIAPPKEYREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPDATEAPIAPPKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * UpdateApiAppKey请求参数结构体
                */
                class UpdateApiAppKeyRequest : public AbstractModel
                {
                public:
                    UpdateApiAppKeyRequest();
                    ~UpdateApiAppKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用唯一 ID。
                     * @return ApiAppId 应用唯一 ID。
                     * 
                     */
                    std::string GetApiAppId() const;

                    /**
                     * 设置应用唯一 ID。
                     * @param _apiAppId 应用唯一 ID。
                     * 
                     */
                    void SetApiAppId(const std::string& _apiAppId);

                    /**
                     * 判断参数 ApiAppId 是否已赋值
                     * @return ApiAppId 是否已赋值
                     * 
                     */
                    bool ApiAppIdHasBeenSet() const;

                    /**
                     * 获取应用的Key。
                     * @return ApiAppKey 应用的Key。
                     * 
                     */
                    std::string GetApiAppKey() const;

                    /**
                     * 设置应用的Key。
                     * @param _apiAppKey 应用的Key。
                     * 
                     */
                    void SetApiAppKey(const std::string& _apiAppKey);

                    /**
                     * 判断参数 ApiAppKey 是否已赋值
                     * @return ApiAppKey 是否已赋值
                     * 
                     */
                    bool ApiAppKeyHasBeenSet() const;

                    /**
                     * 获取应用的Secret。
                     * @return ApiAppSecret 应用的Secret。
                     * 
                     */
                    std::string GetApiAppSecret() const;

                    /**
                     * 设置应用的Secret。
                     * @param _apiAppSecret 应用的Secret。
                     * 
                     */
                    void SetApiAppSecret(const std::string& _apiAppSecret);

                    /**
                     * 判断参数 ApiAppSecret 是否已赋值
                     * @return ApiAppSecret 是否已赋值
                     * 
                     */
                    bool ApiAppSecretHasBeenSet() const;

                private:

                    /**
                     * 应用唯一 ID。
                     */
                    std::string m_apiAppId;
                    bool m_apiAppIdHasBeenSet;

                    /**
                     * 应用的Key。
                     */
                    std::string m_apiAppKey;
                    bool m_apiAppKeyHasBeenSet;

                    /**
                     * 应用的Secret。
                     */
                    std::string m_apiAppSecret;
                    bool m_apiAppSecretHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPDATEAPIAPPKEYREQUEST_H_
