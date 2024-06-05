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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBSCRIBERECEIVER_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBSCRIBERECEIVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 订阅接收人
                */
                class SubscribeReceiver : public AbstractModel
                {
                public:
                    SubscribeReceiver();
                    ~SubscribeReceiver() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取接收人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReceiverUserId 接收人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetReceiverUserId() const;

                    /**
                     * 设置接收人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receiverUserId 接收人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReceiverUserId(const uint64_t& _receiverUserId);

                    /**
                     * 判断参数 ReceiverUserId 是否已赋值
                     * @return ReceiverUserId 是否已赋值
                     * 
                     */
                    bool ReceiverUserIdHasBeenSet() const;

                    /**
                     * 获取接收人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReceiverName 接收人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReceiverName() const;

                    /**
                     * 设置接收人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receiverName 接收人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReceiverName(const std::string& _receiverName);

                    /**
                     * 判断参数 ReceiverName 是否已赋值
                     * @return ReceiverName 是否已赋值
                     * 
                     */
                    bool ReceiverNameHasBeenSet() const;

                    /**
                     * 获取接收人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReceiverUserIdStr 接收人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReceiverUserIdStr() const;

                    /**
                     * 设置接收人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receiverUserIdStr 接收人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReceiverUserIdStr(const std::string& _receiverUserIdStr);

                    /**
                     * 判断参数 ReceiverUserIdStr 是否已赋值
                     * @return ReceiverUserIdStr 是否已赋值
                     * 
                     */
                    bool ReceiverUserIdStrHasBeenSet() const;

                private:

                    /**
                     * 接收人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_receiverUserId;
                    bool m_receiverUserIdHasBeenSet;

                    /**
                     * 接收人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_receiverName;
                    bool m_receiverNameHasBeenSet;

                    /**
                     * 接收人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_receiverUserIdStr;
                    bool m_receiverUserIdStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBSCRIBERECEIVER_H_
