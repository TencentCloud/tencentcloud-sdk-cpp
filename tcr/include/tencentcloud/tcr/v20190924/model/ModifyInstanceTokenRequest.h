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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYINSTANCETOKENREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYINSTANCETOKENREQUEST_H_

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
                * ModifyInstanceToken请求参数结构体
                */
                class ModifyInstanceTokenRequest : public AbstractModel
                {
                public:
                    ModifyInstanceTokenRequest();
                    ~ModifyInstanceTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例长期访问凭证 ID
                     * @return TokenId 实例长期访问凭证 ID
                     */
                    std::string GetTokenId() const;

                    /**
                     * 设置实例长期访问凭证 ID
                     * @param TokenId 实例长期访问凭证 ID
                     */
                    void SetTokenId(const std::string& _tokenId);

                    /**
                     * 判断参数 TokenId 是否已赋值
                     * @return TokenId 是否已赋值
                     */
                    bool TokenIdHasBeenSet() const;

                    /**
                     * 获取启用或禁用实例长期访问凭证
                     * @return Enable 启用或禁用实例长期访问凭证
                     */
                    bool GetEnable() const;

                    /**
                     * 设置启用或禁用实例长期访问凭证
                     * @param Enable 启用或禁用实例长期访问凭证
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取实例 ID
                     * @return RegistryId 实例 ID
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例 ID
                     * @param RegistryId 实例 ID
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     */
                    bool RegistryIdHasBeenSet() const;

                private:

                    /**
                     * 实例长期访问凭证 ID
                     */
                    std::string m_tokenId;
                    bool m_tokenIdHasBeenSet;

                    /**
                     * 启用或禁用实例长期访问凭证
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 实例 ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYINSTANCETOKENREQUEST_H_
