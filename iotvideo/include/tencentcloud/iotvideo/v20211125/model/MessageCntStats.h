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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_MESSAGECNTSTATS_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_MESSAGECNTSTATS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * 消息数量统计
                */
                class MessageCntStats : public AbstractModel
                {
                public:
                    MessageCntStats();
                    ~MessageCntStats() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取统计日期
                     * @return Date 统计日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置统计日期
                     * @param _date 统计日期
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取物模型上行消息数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpMsgCnt 物模型上行消息数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUpMsgCnt() const;

                    /**
                     * 设置物模型上行消息数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upMsgCnt 物模型上行消息数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpMsgCnt(const uint64_t& _upMsgCnt);

                    /**
                     * 判断参数 UpMsgCnt 是否已赋值
                     * @return UpMsgCnt 是否已赋值
                     * 
                     */
                    bool UpMsgCntHasBeenSet() const;

                    /**
                     * 获取物模型下行消息数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownMsgCnt 物模型下行消息数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDownMsgCnt() const;

                    /**
                     * 设置物模型下行消息数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _downMsgCnt 物模型下行消息数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDownMsgCnt(const uint64_t& _downMsgCnt);

                    /**
                     * 判断参数 DownMsgCnt 是否已赋值
                     * @return DownMsgCnt 是否已赋值
                     * 
                     */
                    bool DownMsgCntHasBeenSet() const;

                    /**
                     * 获取ntp消息数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NtpMsgCnt ntp消息数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNtpMsgCnt() const;

                    /**
                     * 设置ntp消息数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ntpMsgCnt ntp消息数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNtpMsgCnt(const uint64_t& _ntpMsgCnt);

                    /**
                     * 判断参数 NtpMsgCnt 是否已赋值
                     * @return NtpMsgCnt 是否已赋值
                     * 
                     */
                    bool NtpMsgCntHasBeenSet() const;

                private:

                    /**
                     * 统计日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 物模型上行消息数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_upMsgCnt;
                    bool m_upMsgCntHasBeenSet;

                    /**
                     * 物模型下行消息数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_downMsgCnt;
                    bool m_downMsgCntHasBeenSet;

                    /**
                     * ntp消息数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ntpMsgCnt;
                    bool m_ntpMsgCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_MESSAGECNTSTATS_H_
