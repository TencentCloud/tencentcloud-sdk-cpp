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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_LISTSECRETVERSIONIDSREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_LISTSECRETVERSIONIDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * ListSecretVersionIds请求参数结构体
                */
                class ListSecretVersionIdsRequest : public AbstractModel
                {
                public:
                    ListSecretVersionIdsRequest();
                    ~ListSecretVersionIdsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取凭据名称
                     * @return SecretName 凭据名称
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置凭据名称
                     * @param _secretName 凭据名称
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                private:

                    /**
                     * 凭据名称
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_LISTSECRETVERSIONIDSREQUEST_H_
