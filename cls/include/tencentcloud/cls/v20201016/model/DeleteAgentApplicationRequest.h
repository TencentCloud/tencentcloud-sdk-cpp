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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETEAGENTAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETEAGENTAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DeleteAgentApplication请求参数结构体
                */
                class DeleteAgentApplicationRequest : public AbstractModel
                {
                public:
                    DeleteAgentApplicationRequest();
                    ~DeleteAgentApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用id</p>
                     * @return ApplicationId <p>应用id</p>
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置<p>应用id</p>
                     * @param _applicationId <p>应用id</p>
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
                     * 获取<p>是否删除agent应用关联的主题</p><p>枚举值：</p><ul><li>false： 不删除agent应用关联的主题</li><li>true： 删除agent应用关联的主题</li></ul><p>默认值：false</p>
                     * @return DeleteTopics <p>是否删除agent应用关联的主题</p><p>枚举值：</p><ul><li>false： 不删除agent应用关联的主题</li><li>true： 删除agent应用关联的主题</li></ul><p>默认值：false</p>
                     * 
                     */
                    bool GetDeleteTopics() const;

                    /**
                     * 设置<p>是否删除agent应用关联的主题</p><p>枚举值：</p><ul><li>false： 不删除agent应用关联的主题</li><li>true： 删除agent应用关联的主题</li></ul><p>默认值：false</p>
                     * @param _deleteTopics <p>是否删除agent应用关联的主题</p><p>枚举值：</p><ul><li>false： 不删除agent应用关联的主题</li><li>true： 删除agent应用关联的主题</li></ul><p>默认值：false</p>
                     * 
                     */
                    void SetDeleteTopics(const bool& _deleteTopics);

                    /**
                     * 判断参数 DeleteTopics 是否已赋值
                     * @return DeleteTopics 是否已赋值
                     * 
                     */
                    bool DeleteTopicsHasBeenSet() const;

                private:

                    /**
                     * <p>应用id</p>
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * <p>是否删除agent应用关联的主题</p><p>枚举值：</p><ul><li>false： 不删除agent应用关联的主题</li><li>true： 删除agent应用关联的主题</li></ul><p>默认值：false</p>
                     */
                    bool m_deleteTopics;
                    bool m_deleteTopicsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETEAGENTAPPLICATIONREQUEST_H_
