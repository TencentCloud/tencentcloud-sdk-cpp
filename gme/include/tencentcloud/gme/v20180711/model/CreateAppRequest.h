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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_CREATEAPPREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_CREATEAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/RealtimeSpeechConf.h>
#include <tencentcloud/gme/v20180711/model/VoiceMessageConf.h>
#include <tencentcloud/gme/v20180711/model/VoiceFilterConf.h>
#include <tencentcloud/gme/v20180711/model/AsrConf.h>
#include <tencentcloud/gme/v20180711/model/Tag.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * CreateApp请求参数结构体
                */
                class CreateAppRequest : public AbstractModel
                {
                public:
                    CreateAppRequest();
                    ~CreateAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用名称
                     * @return AppName 应用名称
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称
                     * @param _appName 应用名称
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取腾讯云项目ID，默认为0，表示默认项目
                     * @return ProjectId 腾讯云项目ID，默认为0，表示默认项目
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置腾讯云项目ID，默认为0，表示默认项目
                     * @param _projectId 腾讯云项目ID，默认为0，表示默认项目
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取需要支持的引擎列表，默认全选。
取值：android/ios/unity/cocos/unreal/windows
                     * @return EngineList 需要支持的引擎列表，默认全选。
取值：android/ios/unity/cocos/unreal/windows
                     * 
                     */
                    std::vector<std::string> GetEngineList() const;

                    /**
                     * 设置需要支持的引擎列表，默认全选。
取值：android/ios/unity/cocos/unreal/windows
                     * @param _engineList 需要支持的引擎列表，默认全选。
取值：android/ios/unity/cocos/unreal/windows
                     * 
                     */
                    void SetEngineList(const std::vector<std::string>& _engineList);

                    /**
                     * 判断参数 EngineList 是否已赋值
                     * @return EngineList 是否已赋值
                     * 
                     */
                    bool EngineListHasBeenSet() const;

                    /**
                     * 获取服务区域列表，默认全选。
取值：mainland-大陆地区，hmt-港澳台，sea-东南亚，na-北美，eu-欧洲，jpkr-日韩亚太，sa-南美，oc-澳洲，me-中东
                     * @return RegionList 服务区域列表，默认全选。
取值：mainland-大陆地区，hmt-港澳台，sea-东南亚，na-北美，eu-欧洲，jpkr-日韩亚太，sa-南美，oc-澳洲，me-中东
                     * 
                     */
                    std::vector<std::string> GetRegionList() const;

                    /**
                     * 设置服务区域列表，默认全选。
取值：mainland-大陆地区，hmt-港澳台，sea-东南亚，na-北美，eu-欧洲，jpkr-日韩亚太，sa-南美，oc-澳洲，me-中东
                     * @param _regionList 服务区域列表，默认全选。
取值：mainland-大陆地区，hmt-港澳台，sea-东南亚，na-北美，eu-欧洲，jpkr-日韩亚太，sa-南美，oc-澳洲，me-中东
                     * 
                     */
                    void SetRegionList(const std::vector<std::string>& _regionList);

                    /**
                     * 判断参数 RegionList 是否已赋值
                     * @return RegionList 是否已赋值
                     * 
                     */
                    bool RegionListHasBeenSet() const;

                    /**
                     * 获取实时语音服务配置数据
                     * @return RealtimeSpeechConf 实时语音服务配置数据
                     * 
                     */
                    RealtimeSpeechConf GetRealtimeSpeechConf() const;

                    /**
                     * 设置实时语音服务配置数据
                     * @param _realtimeSpeechConf 实时语音服务配置数据
                     * 
                     */
                    void SetRealtimeSpeechConf(const RealtimeSpeechConf& _realtimeSpeechConf);

                    /**
                     * 判断参数 RealtimeSpeechConf 是否已赋值
                     * @return RealtimeSpeechConf 是否已赋值
                     * 
                     */
                    bool RealtimeSpeechConfHasBeenSet() const;

                    /**
                     * 获取语音消息服务配置数据
                     * @return VoiceMessageConf 语音消息服务配置数据
                     * 
                     */
                    VoiceMessageConf GetVoiceMessageConf() const;

                    /**
                     * 设置语音消息服务配置数据
                     * @param _voiceMessageConf 语音消息服务配置数据
                     * 
                     */
                    void SetVoiceMessageConf(const VoiceMessageConf& _voiceMessageConf);

                    /**
                     * 判断参数 VoiceMessageConf 是否已赋值
                     * @return VoiceMessageConf 是否已赋值
                     * 
                     */
                    bool VoiceMessageConfHasBeenSet() const;

                    /**
                     * 获取语音分析服务配置数据
                     * @return VoiceFilterConf 语音分析服务配置数据
                     * 
                     */
                    VoiceFilterConf GetVoiceFilterConf() const;

                    /**
                     * 设置语音分析服务配置数据
                     * @param _voiceFilterConf 语音分析服务配置数据
                     * 
                     */
                    void SetVoiceFilterConf(const VoiceFilterConf& _voiceFilterConf);

                    /**
                     * 判断参数 VoiceFilterConf 是否已赋值
                     * @return VoiceFilterConf 是否已赋值
                     * 
                     */
                    bool VoiceFilterConfHasBeenSet() const;

                    /**
                     * 获取语音转文本配置数据
                     * @return AsrConf 语音转文本配置数据
                     * 
                     */
                    AsrConf GetAsrConf() const;

                    /**
                     * 设置语音转文本配置数据
                     * @param _asrConf 语音转文本配置数据
                     * 
                     */
                    void SetAsrConf(const AsrConf& _asrConf);

                    /**
                     * 判断参数 AsrConf 是否已赋值
                     * @return AsrConf 是否已赋值
                     * 
                     */
                    bool AsrConfHasBeenSet() const;

                    /**
                     * 获取需要添加的标签列表
                     * @return Tags 需要添加的标签列表
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置需要添加的标签列表
                     * @param _tags 需要添加的标签列表
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 应用名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 腾讯云项目ID，默认为0，表示默认项目
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 需要支持的引擎列表，默认全选。
取值：android/ios/unity/cocos/unreal/windows
                     */
                    std::vector<std::string> m_engineList;
                    bool m_engineListHasBeenSet;

                    /**
                     * 服务区域列表，默认全选。
取值：mainland-大陆地区，hmt-港澳台，sea-东南亚，na-北美，eu-欧洲，jpkr-日韩亚太，sa-南美，oc-澳洲，me-中东
                     */
                    std::vector<std::string> m_regionList;
                    bool m_regionListHasBeenSet;

                    /**
                     * 实时语音服务配置数据
                     */
                    RealtimeSpeechConf m_realtimeSpeechConf;
                    bool m_realtimeSpeechConfHasBeenSet;

                    /**
                     * 语音消息服务配置数据
                     */
                    VoiceMessageConf m_voiceMessageConf;
                    bool m_voiceMessageConfHasBeenSet;

                    /**
                     * 语音分析服务配置数据
                     */
                    VoiceFilterConf m_voiceFilterConf;
                    bool m_voiceFilterConfHasBeenSet;

                    /**
                     * 语音转文本配置数据
                     */
                    AsrConf m_asrConf;
                    bool m_asrConfHasBeenSet;

                    /**
                     * 需要添加的标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_CREATEAPPREQUEST_H_
