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

#ifndef TENCENTCLOUD_CLOUDAPP_V20220530_MODEL_ISSUELICENSEREQUEST_H_
#define TENCENTCLOUD_CLOUDAPP_V20220530_MODEL_ISSUELICENSEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudapp/v20220530/model/PartnerLicenseData.h>


namespace TencentCloud
{
    namespace Cloudapp
    {
        namespace V20220530
        {
            namespace Model
            {
                /**
                * IssueLicense请求参数结构体
                */
                class IssueLicenseRequest : public AbstractModel
                {
                public:
                    IssueLicenseRequest();
                    ~IssueLicenseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>云应用实例 ID</p>
                     * @return CloudappId <p>云应用实例 ID</p>
                     * 
                     */
                    std::string GetCloudappId() const;

                    /**
                     * 设置<p>云应用实例 ID</p>
                     * @param _cloudappId <p>云应用实例 ID</p>
                     * 
                     */
                    void SetCloudappId(const std::string& _cloudappId);

                    /**
                     * 判断参数 CloudappId 是否已赋值
                     * @return CloudappId 是否已赋值
                     * 
                     */
                    bool CloudappIdHasBeenSet() const;

                    /**
                     * 获取<p>云应用颁发的 License 授权 ID。系统中唯一，伙伴可通过 License 颁发的订阅接口中获取</p>
                     * @return LicenseId <p>云应用颁发的 License 授权 ID。系统中唯一，伙伴可通过 License 颁发的订阅接口中获取</p>
                     * 
                     */
                    std::string GetLicenseId() const;

                    /**
                     * 设置<p>云应用颁发的 License 授权 ID。系统中唯一，伙伴可通过 License 颁发的订阅接口中获取</p>
                     * @param _licenseId <p>云应用颁发的 License 授权 ID。系统中唯一，伙伴可通过 License 颁发的订阅接口中获取</p>
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
                     * 获取<p>License 的详细数据</p>
                     * @return LicenseData <p>License 的详细数据</p>
                     * 
                     */
                    PartnerLicenseData GetLicenseData() const;

                    /**
                     * 设置<p>License 的详细数据</p>
                     * @param _licenseData <p>License 的详细数据</p>
                     * 
                     */
                    void SetLicenseData(const PartnerLicenseData& _licenseData);

                    /**
                     * 判断参数 LicenseData 是否已赋值
                     * @return LicenseData 是否已赋值
                     * 
                     */
                    bool LicenseDataHasBeenSet() const;

                    /**
                     * 获取<p>License 的激活模式</p>枚举值：<ul><li> immediate ： 立即激活</li><li> scheduled： 指定时间激活</li></ul>
                     * @return ActivateMode <p>License 的激活模式</p>枚举值：<ul><li> immediate ： 立即激活</li><li> scheduled： 指定时间激活</li></ul>
                     * 
                     */
                    std::string GetActivateMode() const;

                    /**
                     * 设置<p>License 的激活模式</p>枚举值：<ul><li> immediate ： 立即激活</li><li> scheduled： 指定时间激活</li></ul>
                     * @param _activateMode <p>License 的激活模式</p>枚举值：<ul><li> immediate ： 立即激活</li><li> scheduled： 指定时间激活</li></ul>
                     * 
                     */
                    void SetActivateMode(const std::string& _activateMode);

                    /**
                     * 判断参数 ActivateMode 是否已赋值
                     * @return ActivateMode 是否已赋值
                     * 
                     */
                    bool ActivateModeHasBeenSet() const;

                    /**
                     * 获取<p>激活时间，指定时间激活时需要传该字段</p>
                     * @return ActivateAt <p>激活时间，指定时间激活时需要传该字段</p>
                     * 
                     */
                    std::string GetActivateAt() const;

                    /**
                     * 设置<p>激活时间，指定时间激活时需要传该字段</p>
                     * @param _activateAt <p>激活时间，指定时间激活时需要传该字段</p>
                     * 
                     */
                    void SetActivateAt(const std::string& _activateAt);

                    /**
                     * 判断参数 ActivateAt 是否已赋值
                     * @return ActivateAt 是否已赋值
                     * 
                     */
                    bool ActivateAtHasBeenSet() const;

                private:

                    /**
                     * <p>云应用实例 ID</p>
                     */
                    std::string m_cloudappId;
                    bool m_cloudappIdHasBeenSet;

                    /**
                     * <p>云应用颁发的 License 授权 ID。系统中唯一，伙伴可通过 License 颁发的订阅接口中获取</p>
                     */
                    std::string m_licenseId;
                    bool m_licenseIdHasBeenSet;

                    /**
                     * <p>License 的详细数据</p>
                     */
                    PartnerLicenseData m_licenseData;
                    bool m_licenseDataHasBeenSet;

                    /**
                     * <p>License 的激活模式</p>枚举值：<ul><li> immediate ： 立即激活</li><li> scheduled： 指定时间激活</li></ul>
                     */
                    std::string m_activateMode;
                    bool m_activateModeHasBeenSet;

                    /**
                     * <p>激活时间，指定时间激活时需要传该字段</p>
                     */
                    std::string m_activateAt;
                    bool m_activateAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAPP_V20220530_MODEL_ISSUELICENSEREQUEST_H_
