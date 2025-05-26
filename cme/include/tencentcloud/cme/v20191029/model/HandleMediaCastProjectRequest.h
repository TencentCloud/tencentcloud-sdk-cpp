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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_HANDLEMEDIACASTPROJECTREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_HANDLEMEDIACASTPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/MediaCastSourceInfo.h>
#include <tencentcloud/cme/v20191029/model/MediaCastDestinationInfo.h>
#include <tencentcloud/cme/v20191029/model/MediaCastOutputMediaSetting.h>
#include <tencentcloud/cme/v20191029/model/MediaCastPlaySetting.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * HandleMediaCastProject请求参数结构体
                */
                class HandleMediaCastProjectRequest : public AbstractModel
                {
                public:
                    HandleMediaCastProjectRequest();
                    ~HandleMediaCastProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @return Platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @param _platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取媒体转推项目 Id 。
                     * @return ProjectId 媒体转推项目 Id 。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置媒体转推项目 Id 。
                     * @param _projectId 媒体转推项目 Id 。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取请参考 [操作类型](#Operation)。
                     * @return Operation 请参考 [操作类型](#Operation)。
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置请参考 [操作类型](#Operation)。
                     * @param _operation 请参考 [操作类型](#Operation)。
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取输入源信息。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 AddSource、DeleteSource、SwitchSource 时必填。
                     * @return SourceInfos 输入源信息。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 AddSource、DeleteSource、SwitchSource 时必填。
                     * 
                     */
                    std::vector<MediaCastSourceInfo> GetSourceInfos() const;

                    /**
                     * 设置输入源信息。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 AddSource、DeleteSource、SwitchSource 时必填。
                     * @param _sourceInfos 输入源信息。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 AddSource、DeleteSource、SwitchSource 时必填。
                     * 
                     */
                    void SetSourceInfos(const std::vector<MediaCastSourceInfo>& _sourceInfos);

                    /**
                     * 判断参数 SourceInfos 是否已赋值
                     * @return SourceInfos 是否已赋值
                     * 
                     */
                    bool SourceInfosHasBeenSet() const;

                    /**
                     * 获取输出源信息。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 AddDestination、DeleteDestination、EnableDestination、DisableDestination、ModifyDestination 时必填。
                     * @return DestinationInfos 输出源信息。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 AddDestination、DeleteDestination、EnableDestination、DisableDestination、ModifyDestination 时必填。
                     * 
                     */
                    std::vector<MediaCastDestinationInfo> GetDestinationInfos() const;

                    /**
                     * 设置输出源信息。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 AddDestination、DeleteDestination、EnableDestination、DisableDestination、ModifyDestination 时必填。
                     * @param _destinationInfos 输出源信息。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 AddDestination、DeleteDestination、EnableDestination、DisableDestination、ModifyDestination 时必填。
                     * 
                     */
                    void SetDestinationInfos(const std::vector<MediaCastDestinationInfo>& _destinationInfos);

                    /**
                     * 判断参数 DestinationInfos 是否已赋值
                     * @return DestinationInfos 是否已赋值
                     * 
                     */
                    bool DestinationInfosHasBeenSet() const;

                    /**
                     * 获取输出媒体配置。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 ModifyOutputSetting 时必填。
                     * @return OutputMediaSetting 输出媒体配置。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 ModifyOutputSetting 时必填。
                     * 
                     */
                    MediaCastOutputMediaSetting GetOutputMediaSetting() const;

                    /**
                     * 设置输出媒体配置。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 ModifyOutputSetting 时必填。
                     * @param _outputMediaSetting 输出媒体配置。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 ModifyOutputSetting 时必填。
                     * 
                     */
                    void SetOutputMediaSetting(const MediaCastOutputMediaSetting& _outputMediaSetting);

                    /**
                     * 判断参数 OutputMediaSetting 是否已赋值
                     * @return OutputMediaSetting 是否已赋值
                     * 
                     */
                    bool OutputMediaSettingHasBeenSet() const;

                    /**
                     * 获取播放控制参数。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 ModifyPlaySetting 时必填。
                     * @return PlaySetting 播放控制参数。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 ModifyPlaySetting 时必填。
                     * 
                     */
                    MediaCastPlaySetting GetPlaySetting() const;

                    /**
                     * 设置播放控制参数。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 ModifyPlaySetting 时必填。
                     * @param _playSetting 播放控制参数。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 ModifyPlaySetting 时必填。
                     * 
                     */
                    void SetPlaySetting(const MediaCastPlaySetting& _playSetting);

                    /**
                     * 判断参数 PlaySetting 是否已赋值
                     * @return PlaySetting 是否已赋值
                     * 
                     */
                    bool PlaySettingHasBeenSet() const;

                    /**
                     * 获取新添加的输入源位于输入源列表的位置，从0开始。默认加在输入源列表的后面。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 AddSource 时必填。
                     * @return Position 新添加的输入源位于输入源列表的位置，从0开始。默认加在输入源列表的后面。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 AddSource 时必填。
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置新添加的输入源位于输入源列表的位置，从0开始。默认加在输入源列表的后面。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 AddSource 时必填。
                     * @param _position 新添加的输入源位于输入源列表的位置，从0开始。默认加在输入源列表的后面。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 AddSource 时必填。
                     * 
                     */
                    void SetPosition(const int64_t& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以操作所有媒体转推项目。如果指定操作者，则操作者必须为项目所有者。
                     * @return Operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以操作所有媒体转推项目。如果指定操作者，则操作者必须为项目所有者。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以操作所有媒体转推项目。如果指定操作者，则操作者必须为项目所有者。
                     * @param _operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以操作所有媒体转推项目。如果指定操作者，则操作者必须为项目所有者。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 媒体转推项目 Id 。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 请参考 [操作类型](#Operation)。
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 输入源信息。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 AddSource、DeleteSource、SwitchSource 时必填。
                     */
                    std::vector<MediaCastSourceInfo> m_sourceInfos;
                    bool m_sourceInfosHasBeenSet;

                    /**
                     * 输出源信息。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 AddDestination、DeleteDestination、EnableDestination、DisableDestination、ModifyDestination 时必填。
                     */
                    std::vector<MediaCastDestinationInfo> m_destinationInfos;
                    bool m_destinationInfosHasBeenSet;

                    /**
                     * 输出媒体配置。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 ModifyOutputSetting 时必填。
                     */
                    MediaCastOutputMediaSetting m_outputMediaSetting;
                    bool m_outputMediaSettingHasBeenSet;

                    /**
                     * 播放控制参数。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 ModifyPlaySetting 时必填。
                     */
                    MediaCastPlaySetting m_playSetting;
                    bool m_playSettingHasBeenSet;

                    /**
                     * 新添加的输入源位于输入源列表的位置，从0开始。默认加在输入源列表的后面。具体操作方式详见 [操作类型](#Operation) 及下文示例。
当 Operation 为 AddSource 时必填。
                     */
                    int64_t m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以操作所有媒体转推项目。如果指定操作者，则操作者必须为项目所有者。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_HANDLEMEDIACASTPROJECTREQUEST_H_
