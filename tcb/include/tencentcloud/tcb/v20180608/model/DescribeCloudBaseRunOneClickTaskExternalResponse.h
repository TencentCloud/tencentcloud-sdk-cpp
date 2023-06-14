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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNONECLICKTASKEXTERNALRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNONECLICKTASKEXTERNALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/OneClickTaskStepInfo.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCloudBaseRunOneClickTaskExternal返回参数结构体
                */
                class DescribeCloudBaseRunOneClickTaskExternalResponse : public AbstractModel
                {
                public:
                    DescribeCloudBaseRunOneClickTaskExternalResponse();
                    ~DescribeCloudBaseRunOneClickTaskExternalResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取外部任务Id
                     * @return ExternalId 外部任务Id
                     * 
                     */
                    std::string GetExternalId() const;

                    /**
                     * 判断参数 ExternalId 是否已赋值
                     * @return ExternalId 是否已赋值
                     * 
                     */
                    bool ExternalIdHasBeenSet() const;

                    /**
                     * 获取弃用
                     * @return EnvId 弃用
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取用户uin
                     * @return UserUin 用户uin
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取服务名
                     * @return ServerName 服务名
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取版本名
                     * @return VersionName 版本名
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取当前阶段
微信云托管环境创建阶段：envStage
存储资源创建阶段：storageStage
服务创建阶段：serverStage
                     * @return Stage 当前阶段
微信云托管环境创建阶段：envStage
存储资源创建阶段：storageStage
服务创建阶段：serverStage
                     * 
                     */
                    std::string GetStage() const;

                    /**
                     * 判断参数 Stage 是否已赋值
                     * @return Stage 是否已赋值
                     * 
                     */
                    bool StageHasBeenSet() const;

                    /**
                     * 获取状态
running
stopped
failed
finished
                     * @return Status 状态
running
stopped
failed
finished
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取失败原因
                     * @return FailReason 失败原因
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取用户envId
                     * @return UserEnvId 用户envId
                     * 
                     */
                    std::string GetUserEnvId() const;

                    /**
                     * 判断参数 UserEnvId 是否已赋值
                     * @return UserEnvId 是否已赋值
                     * 
                     */
                    bool UserEnvIdHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return StartTime 创建时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取步骤信息
                     * @return Steps 步骤信息
                     * 
                     */
                    std::vector<OneClickTaskStepInfo> GetSteps() const;

                    /**
                     * 判断参数 Steps 是否已赋值
                     * @return Steps 是否已赋值
                     * 
                     */
                    bool StepsHasBeenSet() const;

                private:

                    /**
                     * 外部任务Id
                     */
                    std::string m_externalId;
                    bool m_externalIdHasBeenSet;

                    /**
                     * 弃用
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 用户uin
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * 服务名
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * 版本名
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 当前阶段
微信云托管环境创建阶段：envStage
存储资源创建阶段：storageStage
服务创建阶段：serverStage
                     */
                    std::string m_stage;
                    bool m_stageHasBeenSet;

                    /**
                     * 状态
running
stopped
failed
finished
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 失败原因
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * 用户envId
                     */
                    std::string m_userEnvId;
                    bool m_userEnvIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 步骤信息
                     */
                    std::vector<OneClickTaskStepInfo> m_steps;
                    bool m_stepsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNONECLICKTASKEXTERNALRESPONSE_H_
