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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEREVERSESHELLSYSTEMPOLICYCONFIGRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEREVERSESHELLSYSTEMPOLICYCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeReverseShellSystemPolicyConfig返回参数结构体
                */
                class DescribeReverseShellSystemPolicyConfigResponse : public AbstractModel
                {
                public:
                    DescribeReverseShellSystemPolicyConfigResponse();
                    ~DescribeReverseShellSystemPolicyConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取内网告警展示
                     * @return InnerNetAlarmShow 内网告警展示
                     * 
                     */
                    bool GetInnerNetAlarmShow() const;

                    /**
                     * 判断参数 InnerNetAlarmShow 是否已赋值
                     * @return InnerNetAlarmShow 是否已赋值
                     * 
                     */
                    bool InnerNetAlarmShowHasBeenSet() const;

                    /**
                     * 获取内网ip展示
                     * @return InnerIPShow 内网ip展示
                     * 
                     */
                    bool GetInnerIPShow() const;

                    /**
                     * 判断参数 InnerIPShow 是否已赋值
                     * @return InnerIPShow 是否已赋值
                     * 
                     */
                    bool InnerIPShowHasBeenSet() const;

                private:

                    /**
                     * 内网告警展示
                     */
                    bool m_innerNetAlarmShow;
                    bool m_innerNetAlarmShowHasBeenSet;

                    /**
                     * 内网ip展示
                     */
                    bool m_innerIPShow;
                    bool m_innerIPShowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEREVERSESHELLSYSTEMPOLICYCONFIGRESPONSE_H_
