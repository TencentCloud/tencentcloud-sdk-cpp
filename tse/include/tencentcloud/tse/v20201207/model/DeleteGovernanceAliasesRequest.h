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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DELETEGOVERNANCEALIASESREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DELETEGOVERNANCEALIASESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/GovernanceAlias.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DeleteGovernanceAliases请求参数结构体
                */
                class DeleteGovernanceAliasesRequest : public AbstractModel
                {
                public:
                    DeleteGovernanceAliasesRequest();
                    ~DeleteGovernanceAliasesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取tse实例id。
                     * @return InstanceId tse实例id。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置tse实例id。
                     * @param _instanceId tse实例id。
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
                     * 获取服务别名列表
                     * @return GovernanceAliases 服务别名列表
                     * 
                     */
                    std::vector<GovernanceAlias> GetGovernanceAliases() const;

                    /**
                     * 设置服务别名列表
                     * @param _governanceAliases 服务别名列表
                     * 
                     */
                    void SetGovernanceAliases(const std::vector<GovernanceAlias>& _governanceAliases);

                    /**
                     * 判断参数 GovernanceAliases 是否已赋值
                     * @return GovernanceAliases 是否已赋值
                     * 
                     */
                    bool GovernanceAliasesHasBeenSet() const;

                private:

                    /**
                     * tse实例id。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 服务别名列表
                     */
                    std::vector<GovernanceAlias> m_governanceAliases;
                    bool m_governanceAliasesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DELETEGOVERNANCEALIASESREQUEST_H_
