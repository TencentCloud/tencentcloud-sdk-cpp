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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LICENSEOVERVIEW_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LICENSEOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/ActivationLicense.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 激活码统计信息。
                */
                class LicenseOverview : public AbstractModel
                {
                public:
                    LicenseOverview();
                    ~LicenseOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>激活码统计信息</p>
                     * @return ActivationLicense <p>激活码统计信息</p>
                     * 
                     */
                    std::vector<ActivationLicense> GetActivationLicense() const;

                    /**
                     * 设置<p>激活码统计信息</p>
                     * @param _activationLicense <p>激活码统计信息</p>
                     * 
                     */
                    void SetActivationLicense(const std::vector<ActivationLicense>& _activationLicense);

                    /**
                     * 判断参数 ActivationLicense 是否已赋值
                     * @return ActivationLicense 是否已赋值
                     * 
                     */
                    bool ActivationLicenseHasBeenSet() const;

                    /**
                     * 获取<p>激活码类型</p>
                     * @return LicenseType <p>激活码类型</p>
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置<p>激活码类型</p>
                     * @param _licenseType <p>激活码类型</p>
                     * 
                     */
                    void SetLicenseType(const std::string& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                private:

                    /**
                     * <p>激活码统计信息</p>
                     */
                    std::vector<ActivationLicense> m_activationLicense;
                    bool m_activationLicenseHasBeenSet;

                    /**
                     * <p>激活码类型</p>
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LICENSEOVERVIEW_H_
