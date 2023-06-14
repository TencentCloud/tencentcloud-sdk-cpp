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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DELETEINSTANCETOKENREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DELETEINSTANCETOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DeleteInstanceToken请求参数结构体
                */
                class DeleteInstanceTokenRequest : public AbstractModel
                {
                public:
                    DeleteInstanceTokenRequest();
                    ~DeleteInstanceTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID
                     * @return RegistryId 实例 ID
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例 ID
                     * @param _registryId 实例 ID
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取访问凭证 ID
                     * @return TokenId 访问凭证 ID
                     * 
                     */
                    std::string GetTokenId() const;

                    /**
                     * 设置访问凭证 ID
                     * @param _tokenId 访问凭证 ID
                     * 
                     */
                    void SetTokenId(const std::string& _tokenId);

                    /**
                     * 判断参数 TokenId 是否已赋值
                     * @return TokenId 是否已赋值
                     * 
                     */
                    bool TokenIdHasBeenSet() const;

                private:

                    /**
                     * 实例 ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 访问凭证 ID
                     */
                    std::string m_tokenId;
                    bool m_tokenIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DELETEINSTANCETOKENREQUEST_H_
