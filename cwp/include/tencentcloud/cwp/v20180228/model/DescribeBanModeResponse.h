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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBANMODERESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBANMODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/StandardModeConfig.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeBanMode返回参数结构体
                */
                class DescribeBanModeResponse : public AbstractModel
                {
                public:
                    DescribeBanModeResponse();
                    ~DescribeBanModeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>阻断模式，STANDARD_MODE：标准阻断，DEEP_MODE：深度阻断</p>
                     * @return Mode <p>阻断模式，STANDARD_MODE：标准阻断，DEEP_MODE：深度阻断</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>标准阻断模式的配置</p>
                     * @return StandardModeConfig <p>标准阻断模式的配置</p>
                     * 
                     */
                    StandardModeConfig GetStandardModeConfig() const;

                    /**
                     * 判断参数 StandardModeConfig 是否已赋值
                     * @return StandardModeConfig 是否已赋值
                     * 
                     */
                    bool StandardModeConfigHasBeenSet() const;

                private:

                    /**
                     * <p>阻断模式，STANDARD_MODE：标准阻断，DEEP_MODE：深度阻断</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>标准阻断模式的配置</p>
                     */
                    StandardModeConfig m_standardModeConfig;
                    bool m_standardModeConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBANMODERESPONSE_H_
