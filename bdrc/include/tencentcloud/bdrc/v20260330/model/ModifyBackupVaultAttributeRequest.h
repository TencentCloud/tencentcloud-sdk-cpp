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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYBACKUPVAULTATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYBACKUPVAULTATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * ModifyBackupVaultAttribute请求参数结构体
                */
                class ModifyBackupVaultAttributeRequest : public AbstractModel
                {
                public:
                    ModifyBackupVaultAttributeRequest();
                    ~ModifyBackupVaultAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取备份库ID
                     * @return VaultId 备份库ID
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置备份库ID
                     * @param _vaultId 备份库ID
                     * 
                     */
                    void SetVaultId(const std::string& _vaultId);

                    /**
                     * 判断参数 VaultId 是否已赋值
                     * @return VaultId 是否已赋值
                     * 
                     */
                    bool VaultIdHasBeenSet() const;

                    /**
                     * 获取备份库名称
                     * @return VaultName 备份库名称
                     * 
                     */
                    std::string GetVaultName() const;

                    /**
                     * 设置备份库名称
                     * @param _vaultName 备份库名称
                     * 
                     */
                    void SetVaultName(const std::string& _vaultName);

                    /**
                     * 判断参数 VaultName 是否已赋值
                     * @return VaultName 是否已赋值
                     * 
                     */
                    bool VaultNameHasBeenSet() const;

                    /**
                     * 获取备份库描述
                     * @return Description 备份库描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备份库描述
                     * @param _description 备份库描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 备份库ID
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * 备份库名称
                     */
                    std::string m_vaultName;
                    bool m_vaultNameHasBeenSet;

                    /**
                     * 备份库描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYBACKUPVAULTATTRIBUTEREQUEST_H_
