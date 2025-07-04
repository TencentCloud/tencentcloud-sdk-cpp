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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_UPDATETRIALLICENSEREQUEST_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_UPDATETRIALLICENSEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * UpdateTrialLicense请求参数结构体
                */
                class UpdateTrialLicenseRequest : public AbstractModel
                {
                public:
                    UpdateTrialLicenseRequest();
                    ~UpdateTrialLicenseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执照ID
                     * @return LicenseId 执照ID
                     * 
                     */
                    std::string GetLicenseId() const;

                    /**
                     * 设置执照ID
                     * @param _licenseId 执照ID
                     * 
                     */
                    void SetLicenseId(const std::string& _licenseId);

                    /**
                     * 判断参数 LicenseId 是否已赋值
                     * @return LicenseId 是否已赋值
                     * 
                     */
                    bool LicenseIdHasBeenSet() const;

                    /**
                     * 获取资源包ID
                     * @return ResourceId 资源包ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源包ID
                     * @param _resourceId 资源包ID
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
                     * 执照ID
                     */
                    std::string m_licenseId;
                    bool m_licenseIdHasBeenSet;

                    /**
                     * 资源包ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_UPDATETRIALLICENSEREQUEST_H_
