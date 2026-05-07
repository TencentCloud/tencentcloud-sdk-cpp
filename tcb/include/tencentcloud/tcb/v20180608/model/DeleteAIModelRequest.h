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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DELETEAIMODELREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DELETEAIMODELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DeleteAIModel请求参数结构体
                */
                class DeleteAIModelRequest : public AbstractModel
                {
                public:
                    DeleteAIModelRequest();
                    ~DeleteAIModelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境id</p>
                     * @return EnvId <p>环境id</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境id</p>
                     * @param _envId <p>环境id</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取<p>分组名列表</p>
                     * @return GroupNames <p>分组名列表</p>
                     * 
                     */
                    std::vector<std::string> GetGroupNames() const;

                    /**
                     * 设置<p>分组名列表</p>
                     * @param _groupNames <p>分组名列表</p>
                     * 
                     */
                    void SetGroupNames(const std::vector<std::string>& _groupNames);

                    /**
                     * 判断参数 GroupNames 是否已赋值
                     * @return GroupNames 是否已赋值
                     * 
                     */
                    bool GroupNamesHasBeenSet() const;

                private:

                    /**
                     * <p>环境id</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>分组名列表</p>
                     */
                    std::vector<std::string> m_groupNames;
                    bool m_groupNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DELETEAIMODELREQUEST_H_
