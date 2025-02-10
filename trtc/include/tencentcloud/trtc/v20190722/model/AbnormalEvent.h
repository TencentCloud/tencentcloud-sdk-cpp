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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_ABNORMALEVENT_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_ABNORMALEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 造成异常体验可能的异常事件类型
                */
                class AbnormalEvent : public AbstractModel
                {
                public:
                    AbnormalEvent();
                    ~AbnormalEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取异常事件ID，具体值查看附录：异常体验ID映射表：https://cloud.tencent.com/document/product/647/44916
                     * @return AbnormalEventId 异常事件ID，具体值查看附录：异常体验ID映射表：https://cloud.tencent.com/document/product/647/44916
                     * 
                     */
                    uint64_t GetAbnormalEventId() const;

                    /**
                     * 设置异常事件ID，具体值查看附录：异常体验ID映射表：https://cloud.tencent.com/document/product/647/44916
                     * @param _abnormalEventId 异常事件ID，具体值查看附录：异常体验ID映射表：https://cloud.tencent.com/document/product/647/44916
                     * 
                     */
                    void SetAbnormalEventId(const uint64_t& _abnormalEventId);

                    /**
                     * 判断参数 AbnormalEventId 是否已赋值
                     * @return AbnormalEventId 是否已赋值
                     * 
                     */
                    bool AbnormalEventIdHasBeenSet() const;

                    /**
                     * 获取远端用户ID,""：表示异常事件不是由远端用户产生
                     * @return PeerId 远端用户ID,""：表示异常事件不是由远端用户产生
                     * 
                     */
                    std::string GetPeerId() const;

                    /**
                     * 设置远端用户ID,""：表示异常事件不是由远端用户产生
                     * @param _peerId 远端用户ID,""：表示异常事件不是由远端用户产生
                     * 
                     */
                    void SetPeerId(const std::string& _peerId);

                    /**
                     * 判断参数 PeerId 是否已赋值
                     * @return PeerId 是否已赋值
                     * 
                     */
                    bool PeerIdHasBeenSet() const;

                private:

                    /**
                     * 异常事件ID，具体值查看附录：异常体验ID映射表：https://cloud.tencent.com/document/product/647/44916
                     */
                    uint64_t m_abnormalEventId;
                    bool m_abnormalEventIdHasBeenSet;

                    /**
                     * 远端用户ID,""：表示异常事件不是由远端用户产生
                     */
                    std::string m_peerId;
                    bool m_peerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_ABNORMALEVENT_H_
