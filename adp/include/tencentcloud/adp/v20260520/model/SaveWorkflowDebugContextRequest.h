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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SAVEWORKFLOWDEBUGCONTEXTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SAVEWORKFLOWDEBUGCONTEXTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppVariableValue.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * SaveWorkflowDebugContext请求参数结构体
                */
                class SaveWorkflowDebugContextRequest : public AbstractModel
                {
                public:
                    SaveWorkflowDebugContextRequest();
                    ~SaveWorkflowDebugContextRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用ID</p>
                     * @return AppId <p>应用ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用ID</p>
                     * @param _appId <p>应用ID</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>应用变量列表</p>
                     * @return AppVariableValueList <p>应用变量列表</p>
                     * 
                     */
                    std::vector<AppVariableValue> GetAppVariableValueList() const;

                    /**
                     * 设置<p>应用变量列表</p>
                     * @param _appVariableValueList <p>应用变量列表</p>
                     * 
                     */
                    void SetAppVariableValueList(const std::vector<AppVariableValue>& _appVariableValueList);

                    /**
                     * 判断参数 AppVariableValueList 是否已赋值
                     * @return AppVariableValueList 是否已赋值
                     * 
                     */
                    bool AppVariableValueListHasBeenSet() const;

                    /**
                     * 获取<p>会话ID</p>
                     * @return SessionId <p>会话ID</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>会话ID</p>
                     * @param _sessionId <p>会话ID</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>自定义用户ID</p>
                     * @return UserId <p>自定义用户ID</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>自定义用户ID</p>
                     * @param _userId <p>自定义用户ID</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * <p>应用ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>应用变量列表</p>
                     */
                    std::vector<AppVariableValue> m_appVariableValueList;
                    bool m_appVariableValueListHasBeenSet;

                    /**
                     * <p>会话ID</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>自定义用户ID</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SAVEWORKFLOWDEBUGCONTEXTREQUEST_H_
