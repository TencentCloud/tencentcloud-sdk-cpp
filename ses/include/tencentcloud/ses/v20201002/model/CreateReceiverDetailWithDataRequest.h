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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_CREATERECEIVERDETAILWITHDATAREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_CREATERECEIVERDETAILWITHDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/ReceiverInputData.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * CreateReceiverDetailWithData请求参数结构体
                */
                class CreateReceiverDetailWithDataRequest : public AbstractModel
                {
                public:
                    CreateReceiverDetailWithDataRequest();
                    ~CreateReceiverDetailWithDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取收件人列表ID
                     * @return ReceiverId 收件人列表ID
                     * 
                     */
                    uint64_t GetReceiverId() const;

                    /**
                     * 设置收件人列表ID
                     * @param _receiverId 收件人列表ID
                     * 
                     */
                    void SetReceiverId(const uint64_t& _receiverId);

                    /**
                     * 判断参数 ReceiverId 是否已赋值
                     * @return ReceiverId 是否已赋值
                     * 
                     */
                    bool ReceiverIdHasBeenSet() const;

                    /**
                     * 获取收信人邮箱以及模板参数，数组形式。收件人个数限制20000个以内。
                     * @return Datas 收信人邮箱以及模板参数，数组形式。收件人个数限制20000个以内。
                     * 
                     */
                    std::vector<ReceiverInputData> GetDatas() const;

                    /**
                     * 设置收信人邮箱以及模板参数，数组形式。收件人个数限制20000个以内。
                     * @param _datas 收信人邮箱以及模板参数，数组形式。收件人个数限制20000个以内。
                     * 
                     */
                    void SetDatas(const std::vector<ReceiverInputData>& _datas);

                    /**
                     * 判断参数 Datas 是否已赋值
                     * @return Datas 是否已赋值
                     * 
                     */
                    bool DatasHasBeenSet() const;

                private:

                    /**
                     * 收件人列表ID
                     */
                    uint64_t m_receiverId;
                    bool m_receiverIdHasBeenSet;

                    /**
                     * 收信人邮箱以及模板参数，数组形式。收件人个数限制20000个以内。
                     */
                    std::vector<ReceiverInputData> m_datas;
                    bool m_datasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_CREATERECEIVERDETAILWITHDATAREQUEST_H_
