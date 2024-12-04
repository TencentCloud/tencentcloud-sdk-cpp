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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_RENEWVIDEOREQUEST_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_RENEWVIDEOREQUEST_H_

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
                * RenewVideo请求参数结构体
                */
                class RenewVideoRequest : public AbstractModel
                {
                public:
                    RenewVideoRequest();
                    ~RenewVideoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要续期的视频播放license Id
                     * @return LicenseId 要续期的视频播放license Id
                     * 
                     */
                    uint64_t GetLicenseId() const;

                    /**
                     * 设置要续期的视频播放license Id
                     * @param _licenseId 要续期的视频播放license Id
                     * 
                     */
                    void SetLicenseId(const uint64_t& _licenseId);

                    /**
                     * 判断参数 LicenseId 是否已赋值
                     * @return LicenseId 是否已赋值
                     * 
                     */
                    bool LicenseIdHasBeenSet() const;

                private:

                    /**
                     * 要续期的视频播放license Id
                     */
                    uint64_t m_licenseId;
                    bool m_licenseIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_RENEWVIDEOREQUEST_H_
