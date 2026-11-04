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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_BINDAUTOBACKUPPOLICYREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_BINDAUTOBACKUPPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * BindAutoBackupPolicy请求参数结构体
                */
                class BindAutoBackupPolicyRequest : public AbstractModel
                {
                public:
                    BindAutoBackupPolicyRequest();
                    ~BindAutoBackupPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>备份策略ID</p>
                     * @return AutoBackupPolicyId <p>备份策略ID</p>
                     * 
                     */
                    std::string GetAutoBackupPolicyId() const;

                    /**
                     * 设置<p>备份策略ID</p>
                     * @param _autoBackupPolicyId <p>备份策略ID</p>
                     * 
                     */
                    void SetAutoBackupPolicyId(const std::string& _autoBackupPolicyId);

                    /**
                     * 判断参数 AutoBackupPolicyId 是否已赋值
                     * @return AutoBackupPolicyId 是否已赋值
                     * 
                     */
                    bool AutoBackupPolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>实例ID列表</p>
                     * @return InstanceIds <p>实例ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>实例ID列表</p>
                     * @param _instanceIds <p>实例ID列表</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * <p>备份策略ID</p>
                     */
                    std::string m_autoBackupPolicyId;
                    bool m_autoBackupPolicyIdHasBeenSet;

                    /**
                     * <p>实例ID列表</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_BINDAUTOBACKUPPOLICYREQUEST_H_
