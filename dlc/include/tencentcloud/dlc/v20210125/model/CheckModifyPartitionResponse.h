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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CHECKMODIFYPARTITIONRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CHECKMODIFYPARTITIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/MessageItem.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CheckModifyPartition返回参数结构体
                */
                class CheckModifyPartitionResponse : public AbstractModel
                {
                public:
                    CheckModifyPartitionResponse();
                    ~CheckModifyPartitionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>是否允许变配：true-允许，false-不允许</p>
                     * @return CanModify <p>是否允许变配：true-允许，false-不允许</p>
                     * 
                     */
                    bool GetCanModify() const;

                    /**
                     * 判断参数 CanModify 是否已赋值
                     * @return CanModify 是否已赋值
                     * 
                     */
                    bool CanModifyHasBeenSet() const;

                    /**
                     * 获取<p>校验失败时的不足资源描述信息列表，校验通过时为null</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MessageList <p>校验失败时的不足资源描述信息列表，校验通过时为null</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MessageItem> GetMessageList() const;

                    /**
                     * 判断参数 MessageList 是否已赋值
                     * @return MessageList 是否已赋值
                     * 
                     */
                    bool MessageListHasBeenSet() const;

                private:

                    /**
                     * <p>是否允许变配：true-允许，false-不允许</p>
                     */
                    bool m_canModify;
                    bool m_canModifyHasBeenSet;

                    /**
                     * <p>校验失败时的不足资源描述信息列表，校验通过时为null</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MessageItem> m_messageList;
                    bool m_messageListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CHECKMODIFYPARTITIONRESPONSE_H_
