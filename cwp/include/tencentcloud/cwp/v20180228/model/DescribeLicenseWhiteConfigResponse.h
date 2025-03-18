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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSEWHITECONFIGRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSEWHITECONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VersionWhiteConfig.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeLicenseWhiteConfig返回参数结构体
                */
                class DescribeLicenseWhiteConfigResponse : public AbstractModel
                {
                public:
                    DescribeLicenseWhiteConfigResponse();
                    ~DescribeLicenseWhiteConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取旗舰版 配置信息
                     * @return FlagShip 旗舰版 配置信息
                     * 
                     */
                    VersionWhiteConfig GetFlagShip() const;

                    /**
                     * 判断参数 FlagShip 是否已赋值
                     * @return FlagShip 是否已赋值
                     * 
                     */
                    bool FlagShipHasBeenSet() const;

                    /**
                     * 获取专业版 配置信息
                     * @return Professional 专业版 配置信息
                     * 
                     */
                    VersionWhiteConfig GetProfessional() const;

                    /**
                     * 判断参数 Professional 是否已赋值
                     * @return Professional 是否已赋值
                     * 
                     */
                    bool ProfessionalHasBeenSet() const;

                    /**
                     * 获取轻量版 配置信息
                     * @return PrattWhitney 轻量版 配置信息
                     * 
                     */
                    VersionWhiteConfig GetPrattWhitney() const;

                    /**
                     * 判断参数 PrattWhitney 是否已赋值
                     * @return PrattWhitney 是否已赋值
                     * 
                     */
                    bool PrattWhitneyHasBeenSet() const;

                private:

                    /**
                     * 旗舰版 配置信息
                     */
                    VersionWhiteConfig m_flagShip;
                    bool m_flagShipHasBeenSet;

                    /**
                     * 专业版 配置信息
                     */
                    VersionWhiteConfig m_professional;
                    bool m_professionalHasBeenSet;

                    /**
                     * 轻量版 配置信息
                     */
                    VersionWhiteConfig m_prattWhitney;
                    bool m_prattWhitneyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSEWHITECONFIGRESPONSE_H_
