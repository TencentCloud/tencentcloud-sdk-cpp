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
                     * 获取<p>旗舰版 配置信息</p>
                     * @return FlagShip <p>旗舰版 配置信息</p>
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
                     * 获取<p>专业版 配置信息</p>
                     * @return Professional <p>专业版 配置信息</p>
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
                     * 获取<p>轻量版 配置信息</p>
                     * @return PrattWhitney <p>轻量版 配置信息</p>
                     * 
                     */
                    VersionWhiteConfig GetPrattWhitney() const;

                    /**
                     * 判断参数 PrattWhitney 是否已赋值
                     * @return PrattWhitney 是否已赋值
                     * 
                     */
                    bool PrattWhitneyHasBeenSet() const;

                    /**
                     * 获取<p>重保授权包 配置信息</p>
                     * @return RASP <p>重保授权包 配置信息</p>
                     * 
                     */
                    VersionWhiteConfig GetRASP() const;

                    /**
                     * 判断参数 RASP 是否已赋值
                     * @return RASP 是否已赋值
                     * 
                     */
                    bool RASPHasBeenSet() const;

                    /**
                     * 获取<p>日志分析配置信息</p>
                     * @return LOG <p>日志分析配置信息</p>
                     * 
                     */
                    VersionWhiteConfig GetLOG() const;

                    /**
                     * 判断参数 LOG 是否已赋值
                     * @return LOG 是否已赋值
                     * 
                     */
                    bool LOGHasBeenSet() const;

                private:

                    /**
                     * <p>旗舰版 配置信息</p>
                     */
                    VersionWhiteConfig m_flagShip;
                    bool m_flagShipHasBeenSet;

                    /**
                     * <p>专业版 配置信息</p>
                     */
                    VersionWhiteConfig m_professional;
                    bool m_professionalHasBeenSet;

                    /**
                     * <p>轻量版 配置信息</p>
                     */
                    VersionWhiteConfig m_prattWhitney;
                    bool m_prattWhitneyHasBeenSet;

                    /**
                     * <p>重保授权包 配置信息</p>
                     */
                    VersionWhiteConfig m_rASP;
                    bool m_rASPHasBeenSet;

                    /**
                     * <p>日志分析配置信息</p>
                     */
                    VersionWhiteConfig m_lOG;
                    bool m_lOGHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSEWHITECONFIGRESPONSE_H_
