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
                     * 
                     */
                    std::string GetTokenId() const;

                    /**
                     * 设置实例长期访问凭证 ID
                     * @param _tokenId 实例长期访问凭证 ID
                     * 
                     */
                    void SetTokenId(const std::string& _tokenId);

                    /**
                     * 判断参数 TokenId 是否已赋值
                     * @return TokenId 是否已赋值
                     * 
                     */
                    bool TokenIdHasBeenSet() const;

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
                     * 获取启用或禁用实例长期访问凭证
                     * @return Enable 启用或禁用实例长期访问凭证
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置启用或禁用实例长期访问凭证
                     * @param _enable 启用或禁用实例长期访问凭证
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取访问凭证描述
                     * @return Desc 访问凭证描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置访问凭证描述
                     * @param _desc 访问凭证描述
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取1为修改描述 2为操作启动禁用，默认值为2
                     * @return ModifyFlag 1为修改描述 2为操作启动禁用，默认值为2
                     * 
                     */
                    int64_t GetModifyFlag() const;

                    /**
                     * 设置1为修改描述 2为操作启动禁用，默认值为2
                     * @param _modifyFlag 1为修改描述 2为操作启动禁用，默认值为2
                     * 
                     */
                    void SetModifyFlag(const int64_t& _modifyFlag);

                    /**
                     * 判断参数 ModifyFlag 是否已赋值
                     * @return ModifyFlag 是否已赋值
                     * 
                     */
                    bool ModifyFlagHasBeenSet() const;

                private:

                    /**
                     * 实例长期访问凭证 ID
                     */
                    std::string m_tokenId;
                    bool m_tokenIdHasBeenSet;

                    /**
                     * 实例 ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 启用或禁用实例长期访问凭证
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 访问凭证描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 1为修改描述 2为操作启动禁用，默认值为2
                     */
                    int64_t m_modifyFlag;
                    bool m_modifyFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYINSTANCETOKENREQUEST_H_
