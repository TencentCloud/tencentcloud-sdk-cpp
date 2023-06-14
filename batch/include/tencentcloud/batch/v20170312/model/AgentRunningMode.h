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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_AGENTRUNNINGMODE_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_AGENTRUNNINGMODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * agent运行模式
                */
                class AgentRunningMode : public AbstractModel
                {
                public:
                    AgentRunningMode();
                    ~AgentRunningMode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取场景类型，支持WINDOWS
                     * @return Scene 场景类型，支持WINDOWS
                     * 
                     */
                    std::string GetScene() const;

                    /**
                     * 设置场景类型，支持WINDOWS
                     * @param _scene 场景类型，支持WINDOWS
                     * 
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取运行Agent的User
                     * @return User 运行Agent的User
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置运行Agent的User
                     * @param _user 运行Agent的User
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取运行Agent的Session
                     * @return Session 运行Agent的Session
                     * 
                     */
                    std::string GetSession() const;

                    /**
                     * 设置运行Agent的Session
                     * @param _session 运行Agent的Session
                     * 
                     */
                    void SetSession(const std::string& _session);

                    /**
                     * 判断参数 Session 是否已赋值
                     * @return Session 是否已赋值
                     * 
                     */
                    bool SessionHasBeenSet() const;

                private:

                    /**
                     * 场景类型，支持WINDOWS
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * 运行Agent的User
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 运行Agent的Session
                     */
                    std::string m_session;
                    bool m_sessionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_AGENTRUNNINGMODE_H_
