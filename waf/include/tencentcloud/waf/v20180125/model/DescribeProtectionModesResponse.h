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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPROTECTIONMODESRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPROTECTIONMODESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/TigaMainClassMode.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeProtectionModes返回参数结构体
                */
                class DescribeProtectionModesResponse : public AbstractModel
                {
                public:
                    DescribeProtectionModesResponse();
                    ~DescribeProtectionModesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取规则大类ID及防护模式
                     * @return Modes 规则大类ID及防护模式
                     * 
                     */
                    std::vector<TigaMainClassMode> GetModes() const;

                    /**
                     * 判断参数 Modes 是否已赋值
                     * @return Modes 是否已赋值
                     * 
                     */
                    bool ModesHasBeenSet() const;

                private:

                    /**
                     * 规则大类ID及防护模式
                     */
                    std::vector<TigaMainClassMode> m_modes;
                    bool m_modesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPROTECTIONMODESRESPONSE_H_
