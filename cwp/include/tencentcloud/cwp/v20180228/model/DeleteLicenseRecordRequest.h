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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DELETELICENSERECORDREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DELETELICENSERECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DeleteLicenseRecord请求参数结构体
                */
                class DeleteLicenseRecordRequest : public AbstractModel
                {
                public:
                    DeleteLicenseRecordRequest();
                    ~DeleteLicenseRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取授权ID ,可以用授权订单列表获取.
                     * @return LicenseId 授权ID ,可以用授权订单列表获取.
                     * 
                     */
                    uint64_t GetLicenseId() const;

                    /**
                     * 设置授权ID ,可以用授权订单列表获取.
                     * @param _licenseId 授权ID ,可以用授权订单列表获取.
                     * 
                     */
                    void SetLicenseId(const uint64_t& _licenseId);

                    /**
                     * 判断参数 LicenseId 是否已赋值
                     * @return LicenseId 是否已赋值
                     * 
                     */
                    bool LicenseIdHasBeenSet() const;

                    /**
                     * 获取授权类型
                     * @return LicenseType 授权类型
                     * 
                     */
                    uint64_t GetLicenseType() const;

                    /**
                     * 设置授权类型
                     * @param _licenseType 授权类型
                     * 
                     */
                    void SetLicenseType(const uint64_t& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return ResourceId 资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID
                     * @param _resourceId 资源ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * 授权ID ,可以用授权订单列表获取.
                     */
                    uint64_t m_licenseId;
                    bool m_licenseIdHasBeenSet;

                    /**
                     * 授权类型
                     */
                    uint64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DELETELICENSERECORDREQUEST_H_
