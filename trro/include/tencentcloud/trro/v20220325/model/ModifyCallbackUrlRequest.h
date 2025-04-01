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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYCALLBACKURLREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYCALLBACKURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * ModifyCallbackUrl请求参数结构体
                */
                class ModifyCallbackUrlRequest : public AbstractModel
                {
                public:
                    ModifyCallbackUrlRequest();
                    ~ModifyCallbackUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取回调URL
                     * @return CallbackUrl 回调URL
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调URL
                     * @param _callbackUrl 回调URL
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取回调签名密钥，用于校验回调信息的完整性
                     * @return SignKey 回调签名密钥，用于校验回调信息的完整性
                     * 
                     */
                    std::string GetSignKey() const;

                    /**
                     * 设置回调签名密钥，用于校验回调信息的完整性
                     * @param _signKey 回调签名密钥，用于校验回调信息的完整性
                     * 
                     */
                    void SetSignKey(const std::string& _signKey);

                    /**
                     * 判断参数 SignKey 是否已赋值
                     * @return SignKey 是否已赋值
                     * 
                     */
                    bool SignKeyHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 回调URL
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 回调签名密钥，用于校验回调信息的完整性
                     */
                    std::string m_signKey;
                    bool m_signKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYCALLBACKURLREQUEST_H_
