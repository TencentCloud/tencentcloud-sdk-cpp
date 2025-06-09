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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VOICEPRINTINFO_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VOICEPRINTINFO_H_

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
                * 声纹查询数据
                */
                class VoicePrintInfo : public AbstractModel
                {
                public:
                    VoicePrintInfo();
                    ~VoicePrintInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取声纹ID
                     * @return VoicePrintId 声纹ID
                     * 
                     */
                    std::string GetVoicePrintId() const;

                    /**
                     * 设置声纹ID
                     * @param _voicePrintId 声纹ID
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
                     * 获取应用id
                     * @return AppId 应用id
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置应用id
                     * @param _appId 应用id
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取和声纹绑定的MetaInfo
                     * @return VoicePrintMetaInfo 和声纹绑定的MetaInfo
                     * 
                     */
                    std::string GetVoicePrintMetaInfo() const;

                    /**
                     * 设置和声纹绑定的MetaInfo
                     * @param _voicePrintMetaInfo 和声纹绑定的MetaInfo
                     * 
                     */
                    void SetVoicePrintMetaInfo(const std::string& _voicePrintMetaInfo);

                    /**
                     * 判断参数 VoicePrintMetaInfo 是否已赋值
                     * @return VoicePrintMetaInfo 是否已赋值
                     * 
                     */
                    bool VoicePrintMetaInfoHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取音频格式,当前只有0(代表wav)
                     * @return AudioFormat 音频格式,当前只有0(代表wav)
                     * 
                     */
                    uint64_t GetAudioFormat() const;

                    /**
                     * 设置音频格式,当前只有0(代表wav)
                     * @param _audioFormat 音频格式,当前只有0(代表wav)
                     * 
                     */
                    void SetAudioFormat(const uint64_t& _audioFormat);

                    /**
                     * 判断参数 AudioFormat 是否已赋值
                     * @return AudioFormat 是否已赋值
                     * 
                     */
                    bool AudioFormatHasBeenSet() const;

                    /**
                     * 获取音频名称
                     * @return AudioName 音频名称
                     * 
                     */
                    std::string GetAudioName() const;

                    /**
                     * 设置音频名称
                     * @param _audioName 音频名称
                     * 
                     */
                    void SetAudioName(const std::string& _audioName);

                    /**
                     * 判断参数 AudioName 是否已赋值
                     * @return AudioName 是否已赋值
                     * 
                     */
                    bool AudioNameHasBeenSet() const;

                    /**
                     * 获取请求毫秒时间戳
                     * @return ReqTimestamp 请求毫秒时间戳
                     * 
                     */
                    uint64_t GetReqTimestamp() const;

                    /**
                     * 设置请求毫秒时间戳
                     * @param _reqTimestamp 请求毫秒时间戳
                     * 
                     */
                    void SetReqTimestamp(const uint64_t& _reqTimestamp);

                    /**
                     * 判断参数 ReqTimestamp 是否已赋值
                     * @return ReqTimestamp 是否已赋值
                     * 
                     */
                    bool ReqTimestampHasBeenSet() const;

                private:

                    /**
                     * 声纹ID
                     */
                    std::string m_voicePrintId;
                    bool m_voicePrintIdHasBeenSet;

                    /**
                     * 应用id
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 和声纹绑定的MetaInfo
                     */
                    std::string m_voicePrintMetaInfo;
                    bool m_voicePrintMetaInfoHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 音频格式,当前只有0(代表wav)
                     */
                    uint64_t m_audioFormat;
                    bool m_audioFormatHasBeenSet;

                    /**
                     * 音频名称
                     */
                    std::string m_audioName;
                    bool m_audioNameHasBeenSet;

                    /**
                     * 请求毫秒时间戳
                     */
                    uint64_t m_reqTimestamp;
                    bool m_reqTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VOICEPRINTINFO_H_
