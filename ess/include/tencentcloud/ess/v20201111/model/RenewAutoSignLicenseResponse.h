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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_RENEWAUTOSIGNLICENSERESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_RENEWAUTOSIGNLICENSERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * RenewAutoSignLicense返回参数结构体
                */
                class RenewAutoSignLicenseResponse : public AbstractModel
                {
                public:
                    RenewAutoSignLicenseResponse();
                    ~RenewAutoSignLicenseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取续期成功后新的自动签许可到期时间。当且仅当已通过许可开通自动签时有值。

值为unix时间戳,单位为秒。
                     * @return LicenseTo 续期成功后新的自动签许可到期时间。当且仅当已通过许可开通自动签时有值。

值为unix时间戳,单位为秒。
                     * 
                     */
                    int64_t GetLicenseTo() const;

                    /**
                     * 判断参数 LicenseTo 是否已赋值
                     * @return LicenseTo 是否已赋值
                     * 
                     */
                    bool LicenseToHasBeenSet() const;

                private:

                    /**
                     * 续期成功后新的自动签许可到期时间。当且仅当已通过许可开通自动签时有值。

值为unix时间戳,单位为秒。
                     */
                    int64_t m_licenseTo;
                    bool m_licenseToHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_RENEWAUTOSIGNLICENSERESPONSE_H_
