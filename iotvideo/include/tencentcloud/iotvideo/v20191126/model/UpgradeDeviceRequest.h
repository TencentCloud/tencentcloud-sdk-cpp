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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_UPGRADEDEVICEREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_UPGRADEDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * UpgradeDevice请求参数结构体
                */
                class UpgradeDeviceRequest : public AbstractModel
                {
                public:
                    UpgradeDeviceRequest();
                    ~UpgradeDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备TID
                     * @return Tid 设备TID
                     * 
                     */
                    std::string GetTid() const;

                    /**
                     * 设置设备TID
                     * @param _tid 设备TID
                     * 
                     */
                    void SetTid(const std::string& _tid);

                    /**
                     * 判断参数 Tid 是否已赋值
                     * @return Tid 是否已赋值
                     * 
                     */
                    bool TidHasBeenSet() const;

                    /**
                     * 获取固件版本号
                     * @return OtaVersion 固件版本号
                     * 
                     */
                    std::string GetOtaVersion() const;

                    /**
                     * 设置固件版本号
                     * @param _otaVersion 固件版本号
                     * 
                     */
                    void SetOtaVersion(const std::string& _otaVersion);

                    /**
                     * 判断参数 OtaVersion 是否已赋值
                     * @return OtaVersion 是否已赋值
                     * 
                     */
                    bool OtaVersionHasBeenSet() const;

                    /**
                     * 获取是否立即升级
                     * @return UpgradeNow 是否立即升级
                     * 
                     */
                    bool GetUpgradeNow() const;

                    /**
                     * 设置是否立即升级
                     * @param _upgradeNow 是否立即升级
                     * 
                     */
                    void SetUpgradeNow(const bool& _upgradeNow);

                    /**
                     * 判断参数 UpgradeNow 是否已赋值
                     * @return UpgradeNow 是否已赋值
                     * 
                     */
                    bool UpgradeNowHasBeenSet() const;

                private:

                    /**
                     * 设备TID
                     */
                    std::string m_tid;
                    bool m_tidHasBeenSet;

                    /**
                     * 固件版本号
                     */
                    std::string m_otaVersion;
                    bool m_otaVersionHasBeenSet;

                    /**
                     * 是否立即升级
                     */
                    bool m_upgradeNow;
                    bool m_upgradeNowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_UPGRADEDEVICEREQUEST_H_
