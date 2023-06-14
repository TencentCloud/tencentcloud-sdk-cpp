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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_OPERATEAPPLICATIONTCRBINDINGREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_OPERATEAPPLICATIONTCRBINDINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/TcrRepoInfo.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * OperateApplicationTcrBinding请求参数结构体
                */
                class OperateApplicationTcrBindingRequest : public AbstractModel
                {
                public:
                    OperateApplicationTcrBindingRequest();
                    ~OperateApplicationTcrBindingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取bind 或 unbind
                     * @return Command bind 或 unbind
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置bind 或 unbind
                     * @param _command bind 或 unbind
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取应用id
                     * @return ApplicationId 应用id
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用id
                     * @param _applicationId 应用id
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取TcrRepoInfo值
                     * @return TcrRepoInfo TcrRepoInfo值
                     * 
                     */
                    TcrRepoInfo GetTcrRepoInfo() const;

                    /**
                     * 设置TcrRepoInfo值
                     * @param _tcrRepoInfo TcrRepoInfo值
                     * 
                     */
                    void SetTcrRepoInfo(const TcrRepoInfo& _tcrRepoInfo);

                    /**
                     * 判断参数 TcrRepoInfo 是否已赋值
                     * @return TcrRepoInfo 是否已赋值
                     * 
                     */
                    bool TcrRepoInfoHasBeenSet() const;

                private:

                    /**
                     * bind 或 unbind
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 应用id
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * TcrRepoInfo值
                     */
                    TcrRepoInfo m_tcrRepoInfo;
                    bool m_tcrRepoInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_OPERATEAPPLICATIONTCRBINDINGREQUEST_H_
