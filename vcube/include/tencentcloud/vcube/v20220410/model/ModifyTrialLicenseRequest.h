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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_MODIFYTRIALLICENSEREQUEST_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_MODIFYTRIALLICENSEREQUEST_H_

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
                * ModifyTrialLicense请求参数结构体
                */
                class ModifyTrialLicenseRequest : public AbstractModel
                {
                public:
                    ModifyTrialLicenseRequest();
                    ~ModifyTrialLicenseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取授权ID
                     * @return LicenseId 授权ID
                     * 
                     */
                    std::string GetLicenseId() const;

                    /**
                     * 设置授权ID
                     * @param _licenseId 授权ID
                     * 
                     */
                    void SetLicenseId(const std::string& _licenseId);

                    /**
                     * 判断参数 LicenseId 是否已赋值
                     * @return LicenseId 是否已赋值
                     * 
                     */
                    bool LicenseIdHasBeenSet() const;

                private:

                    /**
                     * 授权ID
                     */
                    std::string m_licenseId;
                    bool m_licenseIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_MODIFYTRIALLICENSEREQUEST_H_
