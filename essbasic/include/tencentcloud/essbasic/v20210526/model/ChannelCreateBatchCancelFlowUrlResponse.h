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
                     * 获取批量撤销url
                     * @return BatchCancelFlowUrl 批量撤销url
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
                     * 获取签署流程批量撤销失败原因
                     * @return FailMessages 签署流程批量撤销失败原因
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
                     * 获取签署撤销url过期时间-年月日-时分秒
                     * @return UrlExpireOn 签署撤销url过期时间-年月日-时分秒
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
                     * 批量撤销url
                     */
                    std::string m_batchCancelFlowUrl;
                    bool m_batchCancelFlowUrlHasBeenSet;

                    /**
                     * 签署流程批量撤销失败原因
                     */
                    std::vector<std::string> m_failMessages;
                    bool m_failMessagesHasBeenSet;

                    /**
                     * 签署撤销url过期时间-年月日-时分秒
                     */
                    std::string m_urlExpireOn;
                    bool m_urlExpireOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEBATCHCANCELFLOWURLRESPONSE_H_
