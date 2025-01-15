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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GETTHREADMESSAGELISTRESPONSE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GETTHREADMESSAGELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/ThreadMessage.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * GetThreadMessageList返回参数结构体
                */
                class GetThreadMessageListResponse : public AbstractModel
                {
                public:
                    GetThreadMessageListResponse();
                    ~GetThreadMessageListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取消息列表
                     * @return Data 消息列表
                     * 
                     */
                    std::vector<ThreadMessage> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取第一条消息 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstID 第一条消息 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetFirstID() const;

                    /**
                     * 判断参数 FirstID 是否已赋值
                     * @return FirstID 是否已赋值
                     * @deprecated
                     */
                    bool FirstIDHasBeenSet() const;

                    /**
                     * 获取已废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastID 已废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    int64_t GetLastID() const;

                    /**
                     * 判断参数 LastID 是否已赋值
                     * @return LastID 是否已赋值
                     * @deprecated
                     */
                    bool LastIDHasBeenSet() const;

                    /**
                     * 获取是否还有更多消息
                     * @return HasMore 是否还有更多消息
                     * 
                     */
                    bool GetHasMore() const;

                    /**
                     * 判断参数 HasMore 是否已赋值
                     * @return HasMore 是否已赋值
                     * 
                     */
                    bool HasMoreHasBeenSet() const;

                    /**
                     * 获取对象类型
                     * @return Object 对象类型
                     * 
                     */
                    std::string GetObject() const;

                    /**
                     * 判断参数 Object 是否已赋值
                     * @return Object 是否已赋值
                     * 
                     */
                    bool ObjectHasBeenSet() const;

                    /**
                     * 获取第一条消息 ID
                     * @return FirstMsgID 第一条消息 ID
                     * 
                     */
                    std::string GetFirstMsgID() const;

                    /**
                     * 判断参数 FirstMsgID 是否已赋值
                     * @return FirstMsgID 是否已赋值
                     * 
                     */
                    bool FirstMsgIDHasBeenSet() const;

                    /**
                     * 获取最后一条消息 ID
                     * @return LastMsgID 最后一条消息 ID
                     * 
                     */
                    std::string GetLastMsgID() const;

                    /**
                     * 判断参数 LastMsgID 是否已赋值
                     * @return LastMsgID 是否已赋值
                     * 
                     */
                    bool LastMsgIDHasBeenSet() const;

                private:

                    /**
                     * 消息列表
                     */
                    std::vector<ThreadMessage> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 第一条消息 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstID;
                    bool m_firstIDHasBeenSet;

                    /**
                     * 已废弃
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lastID;
                    bool m_lastIDHasBeenSet;

                    /**
                     * 是否还有更多消息
                     */
                    bool m_hasMore;
                    bool m_hasMoreHasBeenSet;

                    /**
                     * 对象类型
                     */
                    std::string m_object;
                    bool m_objectHasBeenSet;

                    /**
                     * 第一条消息 ID
                     */
                    std::string m_firstMsgID;
                    bool m_firstMsgIDHasBeenSet;

                    /**
                     * 最后一条消息 ID
                     */
                    std::string m_lastMsgID;
                    bool m_lastMsgIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GETTHREADMESSAGELISTRESPONSE_H_
