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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBERESOURCEURLSBYFLOWSRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBERESOURCEURLSBYFLOWSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/FlowResourceUrlInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * DescribeResourceUrlsByFlows返回参数结构体
                */
                class DescribeResourceUrlsByFlowsResponse : public AbstractModel
                {
                public:
                    DescribeResourceUrlsByFlowsResponse();
                    ~DescribeResourceUrlsByFlowsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取签署流程资源对应链接信息
                     * @return FlowResourceUrlInfos 签署流程资源对应链接信息
                     */
                    std::vector<FlowResourceUrlInfo> GetFlowResourceUrlInfos() const;

                    /**
                     * 判断参数 FlowResourceUrlInfos 是否已赋值
                     * @return FlowResourceUrlInfos 是否已赋值
                     */
                    bool FlowResourceUrlInfosHasBeenSet() const;

                    /**
                     * 获取创建消息，对应多个合同ID，
成功为“”,创建失败则对应失败消息
                     * @return ErrorMessages 创建消息，对应多个合同ID，
成功为“”,创建失败则对应失败消息
                     */
                    std::vector<std::string> GetErrorMessages() const;

                    /**
                     * 判断参数 ErrorMessages 是否已赋值
                     * @return ErrorMessages 是否已赋值
                     */
                    bool ErrorMessagesHasBeenSet() const;

                private:

                    /**
                     * 签署流程资源对应链接信息
                     */
                    std::vector<FlowResourceUrlInfo> m_flowResourceUrlInfos;
                    bool m_flowResourceUrlInfosHasBeenSet;

                    /**
                     * 创建消息，对应多个合同ID，
成功为“”,创建失败则对应失败消息
                     */
                    std::vector<std::string> m_errorMessages;
                    bool m_errorMessagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBERESOURCEURLSBYFLOWSRESPONSE_H_
