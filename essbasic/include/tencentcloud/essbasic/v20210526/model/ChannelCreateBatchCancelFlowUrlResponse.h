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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEBATCHCANCELFLOWURLRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEBATCHCANCELFLOWURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelCreateBatchCancelFlowUrl返回参数结构体
                */
                class ChannelCreateBatchCancelFlowUrlResponse : public AbstractModel
                {
                public:
                    ChannelCreateBatchCancelFlowUrlResponse();
                    ~ChannelCreateBatchCancelFlowUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取批量撤销合同的URL链接, 需要在手机端打开, 有效期24小时

注：<font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     * @return BatchCancelFlowUrl 批量撤销合同的URL链接, 需要在手机端打开, 有效期24小时

注：<font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     * 
                     */
                    std::string GetBatchCancelFlowUrl() const;

                    /**
                     * 判断参数 BatchCancelFlowUrl 是否已赋值
                     * @return BatchCancelFlowUrl 是否已赋值
                     * 
                     */
                    bool BatchCancelFlowUrlHasBeenSet() const;

                    /**
                     * 获取与入参的FlowIds数组一致,   成功生成到撤销链接中,则为"",   不能撤销合同则为失败原因
                     * @return FailMessages 与入参的FlowIds数组一致,   成功生成到撤销链接中,则为"",   不能撤销合同则为失败原因
                     * 
                     */
                    std::vector<std::string> GetFailMessages() const;

                    /**
                     * 判断参数 FailMessages 是否已赋值
                     * @return FailMessages 是否已赋值
                     * 
                     */
                    bool FailMessagesHasBeenSet() const;

                    /**
                     * 获取签署撤销链接的过期时间(格式为:年-月-日 时:分:秒), 默认是生成链接的24小时后失效


                     * @return UrlExpireOn 签署撤销链接的过期时间(格式为:年-月-日 时:分:秒), 默认是生成链接的24小时后失效


                     * 
                     */
                    std::string GetUrlExpireOn() const;

                    /**
                     * 判断参数 UrlExpireOn 是否已赋值
                     * @return UrlExpireOn 是否已赋值
                     * 
                     */
                    bool UrlExpireOnHasBeenSet() const;

                private:

                    /**
                     * 批量撤销合同的URL链接, 需要在手机端打开, 有效期24小时

注：<font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     */
                    std::string m_batchCancelFlowUrl;
                    bool m_batchCancelFlowUrlHasBeenSet;

                    /**
                     * 与入参的FlowIds数组一致,   成功生成到撤销链接中,则为"",   不能撤销合同则为失败原因
                     */
                    std::vector<std::string> m_failMessages;
                    bool m_failMessagesHasBeenSet;

                    /**
                     * 签署撤销链接的过期时间(格式为:年-月-日 时:分:秒), 默认是生成链接的24小时后失效


                     */
                    std::string m_urlExpireOn;
                    bool m_urlExpireOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEBATCHCANCELFLOWURLRESPONSE_H_
