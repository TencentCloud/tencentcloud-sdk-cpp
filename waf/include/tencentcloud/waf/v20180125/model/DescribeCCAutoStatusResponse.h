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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECCAUTOSTATUSRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECCAUTOSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeCCAutoStatus返回参数结构体
                */
                class DescribeCCAutoStatusResponse : public AbstractModel
                {
                public:
                    DescribeCCAutoStatusResponse();
                    ~DescribeCCAutoStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取配置状态，0表示关闭，1表示开启
                     * @return AutoCCSwitch 配置状态，0表示关闭，1表示开启
                     * 
                     */
                    int64_t GetAutoCCSwitch() const;

                    /**
                     * 判断参数 AutoCCSwitch 是否已赋值
                     * @return AutoCCSwitch 是否已赋值
                     * 
                     */
                    bool AutoCCSwitchHasBeenSet() const;

                private:

                    /**
                     * 配置状态，0表示关闭，1表示开启
                     */
                    int64_t m_autoCCSwitch;
                    bool m_autoCCSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECCAUTOSTATUSRESPONSE_H_
