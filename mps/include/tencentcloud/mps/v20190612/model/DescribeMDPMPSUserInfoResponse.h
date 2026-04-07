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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEMDPMPSUSERINFORESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEMDPMPSUSERINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeMDPMPSUserInfo返回参数结构体
                */
                class DescribeMDPMPSUserInfoResponse : public AbstractModel
                {
                public:
                    DescribeMDPMPSUserInfoResponse();
                    ~DescribeMDPMPSUserInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户状态，取值为：
<li> InvalidMpsUser：未开通mps；</li>
<li>Normal：正常 ；</li>
<li> Closed：下线；</li>
<li> Arrearage：欠费停服</li>
                     * @return Status 用户状态，取值为：
<li> InvalidMpsUser：未开通mps；</li>
<li>Normal：正常 ；</li>
<li> Closed：下线；</li>
<li> Arrearage：欠费停服</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 用户状态，取值为：
<li> InvalidMpsUser：未开通mps；</li>
<li>Normal：正常 ；</li>
<li> Closed：下线；</li>
<li> Arrearage：欠费停服</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEMDPMPSUSERINFORESPONSE_H_
