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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULEMERGENTMSGRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULEMERGENTMSGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VulEmergentMsgInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulEmergentMsg返回参数结构体
                */
                class DescribeVulEmergentMsgResponse : public AbstractModel
                {
                public:
                    DescribeVulEmergentMsgResponse();
                    ~DescribeVulEmergentMsgResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞紧急通知数据
                     * @return EmergentMsgList 漏洞紧急通知数据
                     * 
                     */
                    std::vector<VulEmergentMsgInfo> GetEmergentMsgList() const;

                    /**
                     * 判断参数 EmergentMsgList 是否已赋值
                     * @return EmergentMsgList 是否已赋值
                     * 
                     */
                    bool EmergentMsgListHasBeenSet() const;

                private:

                    /**
                     * 漏洞紧急通知数据
                     */
                    std::vector<VulEmergentMsgInfo> m_emergentMsgList;
                    bool m_emergentMsgListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULEMERGENTMSGRESPONSE_H_
