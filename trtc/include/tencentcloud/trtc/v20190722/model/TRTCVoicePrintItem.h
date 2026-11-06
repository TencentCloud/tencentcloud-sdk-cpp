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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TRTCVOICEPRINTITEM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TRTCVOICEPRINTITEM_H_

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
                * VoicePrintList 接口出参 VoicePrintSet 的元素类型
                */
                class TRTCVoicePrintItem : public AbstractModel
                {
                public:
                    TRTCVoicePrintItem();
                    ~TRTCVoicePrintItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取声纹 ID，36 位 UUID（含连字符）。对 (AppId, SdkAppId) 维度内唯一。
示例值：59d83c76-8f4e-4a1b-9c2d-0e7f8a6b5c4d
                     * @return VoicePrintId 声纹 ID，36 位 UUID（含连字符）。对 (AppId, SdkAppId) 维度内唯一。
示例值：59d83c76-8f4e-4a1b-9c2d-0e7f8a6b5c4d
                     * 
                     */
                    std::string GetVoicePrintId() const;

                    /**
                     * 设置声纹 ID，36 位 UUID（含连字符）。对 (AppId, SdkAppId) 维度内唯一。
示例值：59d83c76-8f4e-4a1b-9c2d-0e7f8a6b5c4d
                     * @param _voicePrintId 声纹 ID，36 位 UUID（含连字符）。对 (AppId, SdkAppId) 维度内唯一。
示例值：59d83c76-8f4e-4a1b-9c2d-0e7f8a6b5c4d
                     * 
                     */
                    void SetVoicePrintId(const std::string& _voicePrintId);

                    /**
                     * 判断参数 VoicePrintId 是否已赋值
                     * @return VoicePrintId 是否已赋值
                     * 
                     */
                    bool VoicePrintIdHasBeenSet() const;

                    /**
                     * 获取业务方自定义的说话人标识，长度不超过 128 字节，由客户在注册声纹时传入。同一 SpeakerId 可对应多条声纹。
示例值：user_12345
                     * @return SpeakerId 业务方自定义的说话人标识，长度不超过 128 字节，由客户在注册声纹时传入。同一 SpeakerId 可对应多条声纹。
示例值：user_12345
                     * 
                     */
                    std::string GetSpeakerId() const;

                    /**
                     * 设置业务方自定义的说话人标识，长度不超过 128 字节，由客户在注册声纹时传入。同一 SpeakerId 可对应多条声纹。
示例值：user_12345
                     * @param _speakerId 业务方自定义的说话人标识，长度不超过 128 字节，由客户在注册声纹时传入。同一 SpeakerId 可对应多条声纹。
示例值：user_12345
                     * 
                     */
                    void SetSpeakerId(const std::string& _speakerId);

                    /**
                     * 判断参数 SpeakerId 是否已赋值
                     * @return SpeakerId 是否已赋值
                     * 
                     */
                    bool SpeakerIdHasBeenSet() const;

                    /**
                     * 获取声纹注册时间，ISO8601 格式，UTC 时区。
示例值：2025-04-24T10:20:30Z
                     * @return CreateTime 声纹注册时间，ISO8601 格式，UTC 时区。
示例值：2025-04-24T10:20:30Z
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置声纹注册时间，ISO8601 格式，UTC 时区。
示例值：2025-04-24T10:20:30Z
                     * @param _createTime 声纹注册时间，ISO8601 格式，UTC 时区。
示例值：2025-04-24T10:20:30Z
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取声纹最近一次更新时间，ISO8601 格式，UTC 时区。未被更新过时等于 CreateTime。
示例值：2025-04-24T10:20:30Z
                     * @return UpdateTime 声纹最近一次更新时间，ISO8601 格式，UTC 时区。未被更新过时等于 CreateTime。
示例值：2025-04-24T10:20:30Z
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置声纹最近一次更新时间，ISO8601 格式，UTC 时区。未被更新过时等于 CreateTime。
示例值：2025-04-24T10:20:30Z
                     * @param _updateTime 声纹最近一次更新时间，ISO8601 格式，UTC 时区。未被更新过时等于 CreateTime。
示例值：2025-04-24T10:20:30Z
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 声纹 ID，36 位 UUID（含连字符）。对 (AppId, SdkAppId) 维度内唯一。
示例值：59d83c76-8f4e-4a1b-9c2d-0e7f8a6b5c4d
                     */
                    std::string m_voicePrintId;
                    bool m_voicePrintIdHasBeenSet;

                    /**
                     * 业务方自定义的说话人标识，长度不超过 128 字节，由客户在注册声纹时传入。同一 SpeakerId 可对应多条声纹。
示例值：user_12345
                     */
                    std::string m_speakerId;
                    bool m_speakerIdHasBeenSet;

                    /**
                     * 声纹注册时间，ISO8601 格式，UTC 时区。
示例值：2025-04-24T10:20:30Z
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 声纹最近一次更新时间，ISO8601 格式，UTC 时区。未被更新过时等于 CreateTime。
示例值：2025-04-24T10:20:30Z
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TRTCVOICEPRINTITEM_H_
