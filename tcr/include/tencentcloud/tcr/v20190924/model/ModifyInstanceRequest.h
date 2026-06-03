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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYINSTANCEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYINSTANCEREQUEST_H_

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
                * ModifyInstance请求参数结构体
                */
                class ModifyInstanceRequest : public AbstractModel
                {
                public:
                    ModifyInstanceRequest();
                    ~ModifyInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return RegistryId <p>实例ID</p>
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _registryId <p>实例ID</p>
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
                     * 获取<p>实例的规格,<br>基础版：basic<br>标准版：standard<br>高级版：premium</p>
                     * @return RegistryType <p>实例的规格,<br>基础版：basic<br>标准版：standard<br>高级版：premium</p>
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置<p>实例的规格,<br>基础版：basic<br>标准版：standard<br>高级版：premium</p>
                     * @param _registryType <p>实例的规格,<br>基础版：basic<br>标准版：standard<br>高级版：premium</p>
                     * 
                     */
                    void SetRegistryType(const std::string& _registryType);

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     * 
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例删除保护，false为关闭</p>
                     * @return DeletionProtection <p>实例删除保护，false为关闭</p>
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置<p>实例删除保护，false为关闭</p>
                     * @param _deletionProtection <p>实例删除保护，false为关闭</p>
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                    /**
                     * 获取<p>实例是否开启多版本控制，false为关闭</p>
                     * @return EnableCosVersioning <p>实例是否开启多版本控制，false为关闭</p>
                     * 
                     */
                    bool GetEnableCosVersioning() const;

                    /**
                     * 设置<p>实例是否开启多版本控制，false为关闭</p>
                     * @param _enableCosVersioning <p>实例是否开启多版本控制，false为关闭</p>
                     * 
                     */
                    void SetEnableCosVersioning(const bool& _enableCosVersioning);

                    /**
                     * 判断参数 EnableCosVersioning 是否已赋值
                     * @return EnableCosVersioning 是否已赋值
                     * 
                     */
                    bool EnableCosVersioningHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>实例的规格,<br>基础版：basic<br>标准版：standard<br>高级版：premium</p>
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * <p>实例删除保护，false为关闭</p>
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * <p>实例是否开启多版本控制，false为关闭</p>
                     */
                    bool m_enableCosVersioning;
                    bool m_enableCosVersioningHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYINSTANCEREQUEST_H_
