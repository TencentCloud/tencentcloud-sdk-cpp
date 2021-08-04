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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_CREATEAPPRESPONSE_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_CREATEAPPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/RealtimeSpeechConf.h>
#include <tencentcloud/gme/v20180711/model/VoiceMessageConf.h>
#include <tencentcloud/gme/v20180711/model/VoiceFilterConf.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * CreateApp的输出参数
                */
                class CreateAppResponse : public AbstractModel
                {
                public:
                    CreateAppResponse();
                    ~CreateAppResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID，由后台自动生成。
                     * @return BizId 应用ID，由后台自动生成。
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取应用名称，透传输入参数的AppName
                     * @return AppName 应用名称，透传输入参数的AppName
                     */
                    std::string GetAppName() const;

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取项目ID，透传输入的ProjectId
                     * @return ProjectId 项目ID，透传输入的ProjectId
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取应用密钥，GME SDK初始化时使用
                     * @return SecretKey 应用密钥，GME SDK初始化时使用
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取服务创建时间戳
                     * @return CreateTime 服务创建时间戳
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取实时语音服务配置数据
                     * @return RealtimeSpeechConf 实时语音服务配置数据
                     */
                    RealtimeSpeechConf GetRealtimeSpeechConf() const;

                    /**
                     * 判断参数 RealtimeSpeechConf 是否已赋值
                     * @return RealtimeSpeechConf 是否已赋值
                     */
                    bool RealtimeSpeechConfHasBeenSet() const;

                    /**
                     * 获取语音消息及转文本服务配置数据
                     * @return VoiceMessageConf 语音消息及转文本服务配置数据
                     */
                    VoiceMessageConf GetVoiceMessageConf() const;

                    /**
                     * 判断参数 VoiceMessageConf 是否已赋值
                     * @return VoiceMessageConf 是否已赋值
                     */
                    bool VoiceMessageConfHasBeenSet() const;

                    /**
                     * 获取语音分析服务配置数据
                     * @return VoiceFilterConf 语音分析服务配置数据
                     */
                    VoiceFilterConf GetVoiceFilterConf() const;

                    /**
                     * 判断参数 VoiceFilterConf 是否已赋值
                     * @return VoiceFilterConf 是否已赋值
                     */
                    bool VoiceFilterConfHasBeenSet() const;

                private:

                    /**
                     * 应用ID，由后台自动生成。
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 应用名称，透传输入参数的AppName
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 项目ID，透传输入的ProjectId
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 应用密钥，GME SDK初始化时使用
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * 服务创建时间戳
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实时语音服务配置数据
                     */
                    RealtimeSpeechConf m_realtimeSpeechConf;
                    bool m_realtimeSpeechConfHasBeenSet;

                    /**
                     * 语音消息及转文本服务配置数据
                     */
                    VoiceMessageConf m_voiceMessageConf;
                    bool m_voiceMessageConfHasBeenSet;

                    /**
                     * 语音分析服务配置数据
                     */
                    VoiceFilterConf m_voiceFilterConf;
                    bool m_voiceFilterConfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_CREATEAPPRESPONSE_H_
