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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWSIGNURLRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWSIGNURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/FlowApproverUrlInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelCreateFlowSignUrl返回参数结构体
                */
                class ChannelCreateFlowSignUrlResponse : public AbstractModel
                {
                public:
                    ChannelCreateFlowSignUrlResponse();
                    ~ChannelCreateFlowSignUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取签署人签署链接信息
                     * @return FlowApproverUrlInfos 签署人签署链接信息
                     * 
                     */
                    std::vector<FlowApproverUrlInfo> GetFlowApproverUrlInfos() const;

                    /**
                     * 判断参数 FlowApproverUrlInfos 是否已赋值
                     * @return FlowApproverUrlInfos 是否已赋值
                     * 
                     */
                    bool FlowApproverUrlInfosHasBeenSet() const;

                private:

                    /**
                     * 签署人签署链接信息
                     */
                    std::vector<FlowApproverUrlInfo> m_flowApproverUrlInfos;
                    bool m_flowApproverUrlInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWSIGNURLRESPONSE_H_
