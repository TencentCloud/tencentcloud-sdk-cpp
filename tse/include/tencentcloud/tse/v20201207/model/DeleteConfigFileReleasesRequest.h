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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DELETECONFIGFILERELEASESREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DELETECONFIGFILERELEASESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/ConfigFileReleaseDeletion.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DeleteConfigFileReleases请求参数结构体
                */
                class DeleteConfigFileReleasesRequest : public AbstractModel
                {
                public:
                    DeleteConfigFileReleasesRequest();
                    ~DeleteConfigFileReleasesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取待删除配置发布详情
                     * @return ConfigFileReleases 待删除配置发布详情
                     * 
                     */
                    std::vector<ConfigFileReleaseDeletion> GetConfigFileReleases() const;

                    /**
                     * 设置待删除配置发布详情
                     * @param _configFileReleases 待删除配置发布详情
                     * 
                     */
                    void SetConfigFileReleases(const std::vector<ConfigFileReleaseDeletion>& _configFileReleases);

                    /**
                     * 判断参数 ConfigFileReleases 是否已赋值
                     * @return ConfigFileReleases 是否已赋值
                     * 
                     */
                    bool ConfigFileReleasesHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 待删除配置发布详情
                     */
                    std::vector<ConfigFileReleaseDeletion> m_configFileReleases;
                    bool m_configFileReleasesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DELETECONFIGFILERELEASESREQUEST_H_
