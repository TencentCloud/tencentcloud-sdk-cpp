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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_DELETERECEIVERREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_DELETERECEIVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * DeleteReceiver请求参数结构体
                */
                class DeleteReceiverRequest : public AbstractModel
                {
                public:
                    DeleteReceiverRequest();
                    ~DeleteReceiverRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取收件人列表id，创建收件人列表时会返回
                     * @return ReceiverId 收件人列表id，创建收件人列表时会返回
                     * 
                     */
                    uint64_t GetReceiverId() const;

                    /**
                     * 设置收件人列表id，创建收件人列表时会返回
                     * @param _receiverId 收件人列表id，创建收件人列表时会返回
                     * 
                     */
                    void SetReceiverId(const uint64_t& _receiverId);

                    /**
                     * 判断参数 ReceiverId 是否已赋值
                     * @return ReceiverId 是否已赋值
                     * 
                     */
                    bool ReceiverIdHasBeenSet() const;

                private:

                    /**
                     * 收件人列表id，创建收件人列表时会返回
                     */
                    uint64_t m_receiverId;
                    bool m_receiverIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_DELETERECEIVERREQUEST_H_
