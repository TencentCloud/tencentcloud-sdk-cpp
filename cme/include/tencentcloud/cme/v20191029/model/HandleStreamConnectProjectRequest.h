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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_HANDLESTREAMCONNECTPROJECTREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_HANDLESTREAMCONNECTPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/StreamInputInfo.h>
#include <tencentcloud/cme/v20191029/model/StreamConnectOutput.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * HandleStreamConnectProject请求参数结构体
                */
                class HandleStreamConnectProjectRequest : public AbstractModel
                {
                public:
                    HandleStreamConnectProjectRequest();
                    ~HandleStreamConnectProjectRequest() = default;
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
                     * 获取云转推项目 Id 。
                     * @return ProjectId 云转推项目 Id 。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置云转推项目 Id 。
                     * @param _projectId 云转推项目 Id 。
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
                     * 获取请参考 [操作类型](#Operation)
                     * @return Operation 请参考 [操作类型](#Operation)
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置请参考 [操作类型](#Operation)
                     * @param _operation 请参考 [操作类型](#Operation)
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
                     * 获取转推输入源操作参数。具体操作方式详见 [操作类型](#Operation) 及下文示例。
                     * @return InputInfo 转推输入源操作参数。具体操作方式详见 [操作类型](#Operation) 及下文示例。
                     * 
                     */
                    StreamInputInfo GetInputInfo() const;

                    /**
                     * 设置转推输入源操作参数。具体操作方式详见 [操作类型](#Operation) 及下文示例。
                     * @param _inputInfo 转推输入源操作参数。具体操作方式详见 [操作类型](#Operation) 及下文示例。
                     * 
                     */
                    void SetInputInfo(const StreamInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取主备输入源标识，取值有：
<li> Main ：主源；</li>
<li> Backup ：备源。</li>
                     * @return InputEndpoint 主备输入源标识，取值有：
<li> Main ：主源；</li>
<li> Backup ：备源。</li>
                     * 
                     */
                    std::string GetInputEndpoint() const;

                    /**
                     * 设置主备输入源标识，取值有：
<li> Main ：主源；</li>
<li> Backup ：备源。</li>
                     * @param _inputEndpoint 主备输入源标识，取值有：
<li> Main ：主源；</li>
<li> Backup ：备源。</li>
                     * 
                     */
                    void SetInputEndpoint(const std::string& _inputEndpoint);

                    /**
                     * 判断参数 InputEndpoint 是否已赋值
                     * @return InputEndpoint 是否已赋值
                     * 
                     */
                    bool InputEndpointHasBeenSet() const;

                    /**
                     * 获取转推输出源操作参数。具体操作方式详见 [操作类型](#Operation) 及下文示例。
                     * @return OutputInfo 转推输出源操作参数。具体操作方式详见 [操作类型](#Operation) 及下文示例。
                     * 
                     */
                    StreamConnectOutput GetOutputInfo() const;

                    /**
                     * 设置转推输出源操作参数。具体操作方式详见 [操作类型](#Operation) 及下文示例。
                     * @param _outputInfo 转推输出源操作参数。具体操作方式详见 [操作类型](#Operation) 及下文示例。
                     * 
                     */
                    void SetOutputInfo(const StreamConnectOutput& _outputInfo);

                    /**
                     * 判断参数 OutputInfo 是否已赋值
                     * @return OutputInfo 是否已赋值
                     * 
                     */
                    bool OutputInfoHasBeenSet() const;

                    /**
                     * 获取云转推当前预计结束时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。具体操作方式详见 [操作类型](#Operation) 及下文示例。
                     * @return CurrentStopTime 云转推当前预计结束时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。具体操作方式详见 [操作类型](#Operation) 及下文示例。
                     * 
                     */
                    std::string GetCurrentStopTime() const;

                    /**
                     * 设置云转推当前预计结束时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。具体操作方式详见 [操作类型](#Operation) 及下文示例。
                     * @param _currentStopTime 云转推当前预计结束时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。具体操作方式详见 [操作类型](#Operation) 及下文示例。
                     * 
                     */
                    void SetCurrentStopTime(const std::string& _currentStopTime);

                    /**
                     * 判断参数 CurrentStopTime 是否已赋值
                     * @return CurrentStopTime 是否已赋值
                     * 
                     */
                    bool CurrentStopTimeHasBeenSet() const;

                    /**
                     * 获取操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以操作所有云转推项目。如果指定操作者，则操作者必须为项目所有者。
                     * @return Operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以操作所有云转推项目。如果指定操作者，则操作者必须为项目所有者。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以操作所有云转推项目。如果指定操作者，则操作者必须为项目所有者。
                     * @param _operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以操作所有云转推项目。如果指定操作者，则操作者必须为项目所有者。
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
                     * 云转推项目 Id 。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 请参考 [操作类型](#Operation)
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 转推输入源操作参数。具体操作方式详见 [操作类型](#Operation) 及下文示例。
                     */
                    StreamInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * 主备输入源标识，取值有：
<li> Main ：主源；</li>
<li> Backup ：备源。</li>
                     */
                    std::string m_inputEndpoint;
                    bool m_inputEndpointHasBeenSet;

                    /**
                     * 转推输出源操作参数。具体操作方式详见 [操作类型](#Operation) 及下文示例。
                     */
                    StreamConnectOutput m_outputInfo;
                    bool m_outputInfoHasBeenSet;

                    /**
                     * 云转推当前预计结束时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。具体操作方式详见 [操作类型](#Operation) 及下文示例。
                     */
                    std::string m_currentStopTime;
                    bool m_currentStopTimeHasBeenSet;

                    /**
                     * 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以操作所有云转推项目。如果指定操作者，则操作者必须为项目所有者。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_HANDLESTREAMCONNECTPROJECTREQUEST_H_
