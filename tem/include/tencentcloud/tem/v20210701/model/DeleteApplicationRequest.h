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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_DELETEAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_DELETEAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * DeleteApplication请求参数结构体
                */
                class DeleteApplicationRequest : public AbstractModel
                {
                public:
                    DeleteApplicationRequest();
                    ~DeleteApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务Id
                     * @return ApplicationId 服务Id
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置服务Id
                     * @param _applicationId 服务Id
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
                     * 获取环境ID
                     * @return EnvironmentId 环境ID
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境ID
                     * @param _environmentId 环境ID
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取来源渠道(用户不需要关心此参数)
                     * @return SourceChannel 来源渠道(用户不需要关心此参数)
                     * 
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置来源渠道(用户不需要关心此参数)
                     * @param _sourceChannel 来源渠道(用户不需要关心此参数)
                     * 
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     * 
                     */
                    bool SourceChannelHasBeenSet() const;

                    /**
                     * 获取当服务没有任何运行版本时，是否删除此服务
                     * @return DeleteApplicationIfNoRunningVersion 当服务没有任何运行版本时，是否删除此服务
                     * 
                     */
                    bool GetDeleteApplicationIfNoRunningVersion() const;

                    /**
                     * 设置当服务没有任何运行版本时，是否删除此服务
                     * @param _deleteApplicationIfNoRunningVersion 当服务没有任何运行版本时，是否删除此服务
                     * 
                     */
                    void SetDeleteApplicationIfNoRunningVersion(const bool& _deleteApplicationIfNoRunningVersion);

                    /**
                     * 判断参数 DeleteApplicationIfNoRunningVersion 是否已赋值
                     * @return DeleteApplicationIfNoRunningVersion 是否已赋值
                     * 
                     */
                    bool DeleteApplicationIfNoRunningVersionHasBeenSet() const;

                private:

                    /**
                     * 服务Id
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 环境ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 来源渠道(用户不需要关心此参数)
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                    /**
                     * 当服务没有任何运行版本时，是否删除此服务
                     */
                    bool m_deleteApplicationIfNoRunningVersion;
                    bool m_deleteApplicationIfNoRunningVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_DELETEAPPLICATIONREQUEST_H_
