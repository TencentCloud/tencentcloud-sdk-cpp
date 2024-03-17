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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_ROLLBACKCONFIGFILERELEASESREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_ROLLBACKCONFIGFILERELEASESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/ConfigFileRelease.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * RollbackConfigFileReleases请求参数结构体
                */
                class RollbackConfigFileReleasesRequest : public AbstractModel
                {
                public:
                    RollbackConfigFileReleasesRequest();
                    ~RollbackConfigFileReleasesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TSE实例id
                     * @return InstanceId TSE实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置TSE实例id
                     * @param _instanceId TSE实例id
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
                     * 获取回滚发布
                     * @return RollbackConfigFileReleases 回滚发布
                     * 
                     */
                    std::vector<ConfigFileRelease> GetRollbackConfigFileReleases() const;

                    /**
                     * 设置回滚发布
                     * @param _rollbackConfigFileReleases 回滚发布
                     * 
                     */
                    void SetRollbackConfigFileReleases(const std::vector<ConfigFileRelease>& _rollbackConfigFileReleases);

                    /**
                     * 判断参数 RollbackConfigFileReleases 是否已赋值
                     * @return RollbackConfigFileReleases 是否已赋值
                     * 
                     */
                    bool RollbackConfigFileReleasesHasBeenSet() const;

                private:

                    /**
                     * TSE实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 回滚发布
                     */
                    std::vector<ConfigFileRelease> m_rollbackConfigFileReleases;
                    bool m_rollbackConfigFileReleasesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_ROLLBACKCONFIGFILERELEASESREQUEST_H_
