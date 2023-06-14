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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_CHATARCHIVINGDETAIL_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_CHATARCHIVINGDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wav/v20210129/model/ChatArchivingMsgTypeVideo.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 会话存档数据详情
                */
                class ChatArchivingDetail : public AbstractModel
                {
                public:
                    ChatArchivingDetail();
                    ~ChatArchivingDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息id
                     * @return MsgId 消息id
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 设置消息id
                     * @param _msgId 消息id
                     * 
                     */
                    void SetMsgId(const std::string& _msgId);

                    /**
                     * 判断参数 MsgId 是否已赋值
                     * @return MsgId 是否已赋值
                     * 
                     */
                    bool MsgIdHasBeenSet() const;

                    /**
                     * 获取动作名称，switch表示切换企微账号，send表示企微普通消息
                     * @return Action 动作名称，switch表示切换企微账号，send表示企微普通消息
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置动作名称，switch表示切换企微账号，send表示企微普通消息
                     * @param _action 动作名称，switch表示切换企微账号，send表示企微普通消息
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取消息类型，当Action != "switch"时存在，例如video, text, voice 等，和企微开放文档一一对应
https://open.work.weixin.qq.com/api/doc/90000/90135/91774
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgType 消息类型，当Action != "switch"时存在，例如video, text, voice 等，和企微开放文档一一对应
https://open.work.weixin.qq.com/api/doc/90000/90135/91774
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsgType() const;

                    /**
                     * 设置消息类型，当Action != "switch"时存在，例如video, text, voice 等，和企微开放文档一一对应
https://open.work.weixin.qq.com/api/doc/90000/90135/91774
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msgType 消息类型，当Action != "switch"时存在，例如video, text, voice 等，和企微开放文档一一对应
https://open.work.weixin.qq.com/api/doc/90000/90135/91774
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsgType(const std::string& _msgType);

                    /**
                     * 判断参数 MsgType 是否已赋值
                     * @return MsgType 是否已赋值
                     * 
                     */
                    bool MsgTypeHasBeenSet() const;

                    /**
                     * 获取消息发送人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return From 消息发送人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置消息发送人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _from 消息发送人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取消息接收人列表，注意接收人可能只有一个
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ToList 消息接收人列表，注意接收人可能只有一个
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetToList() const;

                    /**
                     * 设置消息接收人列表，注意接收人可能只有一个
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _toList 消息接收人列表，注意接收人可能只有一个
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetToList(const std::vector<std::string>& _toList);

                    /**
                     * 判断参数 ToList 是否已赋值
                     * @return ToList 是否已赋值
                     * 
                     */
                    bool ToListHasBeenSet() const;

                    /**
                     * 获取如果是群消息，则不为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoomId 如果是群消息，则不为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置如果是群消息，则不为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roomId 如果是群消息，则不为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取消息发送的时间戳，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgTime 消息发送的时间戳，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMsgTime() const;

                    /**
                     * 设置消息发送的时间戳，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msgTime 消息发送的时间戳，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsgTime(const uint64_t& _msgTime);

                    /**
                     * 判断参数 MsgTime 是否已赋值
                     * @return MsgTime 是否已赋值
                     * 
                     */
                    bool MsgTimeHasBeenSet() const;

                    /**
                     * 获取MsgType=video时的消息体，忽略此字段，见BodyJson字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Video MsgType=video时的消息体，忽略此字段，见BodyJson字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ChatArchivingMsgTypeVideo GetVideo() const;

                    /**
                     * 设置MsgType=video时的消息体，忽略此字段，见BodyJson字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _video MsgType=video时的消息体，忽略此字段，见BodyJson字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVideo(const ChatArchivingMsgTypeVideo& _video);

                    /**
                     * 判断参数 Video 是否已赋值
                     * @return Video 是否已赋值
                     * 
                     */
                    bool VideoHasBeenSet() const;

                    /**
                     * 获取根据MsgType的不同取值，解析内容不同，参考：https://open.work.weixin.qq.com/api/doc/90000/90135/91774
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BodyJson 根据MsgType的不同取值，解析内容不同，参考：https://open.work.weixin.qq.com/api/doc/90000/90135/91774
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBodyJson() const;

                    /**
                     * 设置根据MsgType的不同取值，解析内容不同，参考：https://open.work.weixin.qq.com/api/doc/90000/90135/91774
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bodyJson 根据MsgType的不同取值，解析内容不同，参考：https://open.work.weixin.qq.com/api/doc/90000/90135/91774
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBodyJson(const std::string& _bodyJson);

                    /**
                     * 判断参数 BodyJson 是否已赋值
                     * @return BodyJson 是否已赋值
                     * 
                     */
                    bool BodyJsonHasBeenSet() const;

                private:

                    /**
                     * 消息id
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * 动作名称，switch表示切换企微账号，send表示企微普通消息
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 消息类型，当Action != "switch"时存在，例如video, text, voice 等，和企微开放文档一一对应
https://open.work.weixin.qq.com/api/doc/90000/90135/91774
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msgType;
                    bool m_msgTypeHasBeenSet;

                    /**
                     * 消息发送人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 消息接收人列表，注意接收人可能只有一个
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_toList;
                    bool m_toListHasBeenSet;

                    /**
                     * 如果是群消息，则不为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 消息发送的时间戳，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_msgTime;
                    bool m_msgTimeHasBeenSet;

                    /**
                     * MsgType=video时的消息体，忽略此字段，见BodyJson字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ChatArchivingMsgTypeVideo m_video;
                    bool m_videoHasBeenSet;

                    /**
                     * 根据MsgType的不同取值，解析内容不同，参考：https://open.work.weixin.qq.com/api/doc/90000/90135/91774
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bodyJson;
                    bool m_bodyJsonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_CHATARCHIVINGDETAIL_H_
