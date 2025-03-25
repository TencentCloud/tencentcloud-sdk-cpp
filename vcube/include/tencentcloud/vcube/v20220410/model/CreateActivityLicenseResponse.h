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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_CREATEACTIVITYLICENSERESPONSE_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_CREATEACTIVITYLICENSERESPONSE_H_

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
                * CreateActivityLicense返回参数结构体
                */
                class CreateActivityLicenseResponse : public AbstractModel
                {
                public:
                    CreateActivityLicenseResponse();
                    ~CreateActivityLicenseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户appid
                     * @return AppId 用户appid
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取app名称
                     * @return AppName app名称
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取ios包名
                     * @return BundleId ios包名
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取安卓包名
                     * @return PackageName 安卓包名
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取有效时长
                     * @return Duration 有效时长
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取license秘钥
                     * @return LicenseKey license秘钥
                     * 
                     */
                    std::string GetLicenseKey() const;

                    /**
                     * 判断参数 LicenseKey 是否已赋值
                     * @return LicenseKey 是否已赋值
                     * 
                     */
                    bool LicenseKeyHasBeenSet() const;

                    /**
                     * 获取license 授权文件下载链接
                     * @return LicenseUrl license 授权文件下载链接
                     * 
                     */
                    std::string GetLicenseUrl() const;

                    /**
                     * 判断参数 LicenseUrl 是否已赋值
                     * @return LicenseUrl 是否已赋值
                     * 
                     */
                    bool LicenseUrlHasBeenSet() const;

                    /**
                     * 获取license剩余天数，最后一天以及过期显示0
                     * @return ResidueDay license剩余天数，最后一天以及过期显示0
                     * 
                     */
                    uint64_t GetResidueDay() const;

                    /**
                     * 判断参数 ResidueDay 是否已赋值
                     * @return ResidueDay 是否已赋值
                     * 
                     */
                    bool ResidueDayHasBeenSet() const;

                    /**
                     * 获取license剩余秒数
                     * @return Residue license剩余秒数
                     * 
                     */
                    uint64_t GetResidue() const;

                    /**
                     * 判断参数 Residue 是否已赋值
                     * @return Residue 是否已赋值
                     * 
                     */
                    bool ResidueHasBeenSet() const;

                private:

                    /**
                     * 用户appid
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * app名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * ios包名
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * 安卓包名
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 有效时长
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * license秘钥
                     */
                    std::string m_licenseKey;
                    bool m_licenseKeyHasBeenSet;

                    /**
                     * license 授权文件下载链接
                     */
                    std::string m_licenseUrl;
                    bool m_licenseUrlHasBeenSet;

                    /**
                     * license剩余天数，最后一天以及过期显示0
                     */
                    uint64_t m_residueDay;
                    bool m_residueDayHasBeenSet;

                    /**
                     * license剩余秒数
                     */
                    uint64_t m_residue;
                    bool m_residueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_CREATEACTIVITYLICENSERESPONSE_H_
