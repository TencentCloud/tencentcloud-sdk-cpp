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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_MODIFYCLUSTERDELETIONPROTECTIONREQUEST_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_MODIFYCLUSTERDELETIONPROTECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * ModifyClusterDeletionProtection请求参数结构体
                */
                class ModifyClusterDeletionProtectionRequest : public AbstractModel
                {
                public:
                    ModifyClusterDeletionProtectionRequest();
                    ~ModifyClusterDeletionProtectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID。
                     * @return ClusterId 集群ID。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID。
                     * @param _clusterId 集群ID。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取集群删除保护开关。 
可选值：<li>OFF：关闭集群删除保护。</li><li>ON：打开集群删除保护。</li>
                     * @return DeletionProtection 集群删除保护开关。 
可选值：<li>OFF：关闭集群删除保护。</li><li>ON：打开集群删除保护。</li>
                     * 
                     */
                    std::string GetDeletionProtection() const;

                    /**
                     * 设置集群删除保护开关。 
可选值：<li>OFF：关闭集群删除保护。</li><li>ON：打开集群删除保护。</li>
                     * @param _deletionProtection 集群删除保护开关。 
可选值：<li>OFF：关闭集群删除保护。</li><li>ON：打开集群删除保护。</li>
                     * 
                     */
                    void SetDeletionProtection(const std::string& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                private:

                    /**
                     * 集群ID。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群删除保护开关。 
可选值：<li>OFF：关闭集群删除保护。</li><li>ON：打开集群删除保护。</li>
                     */
                    std::string m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_MODIFYCLUSTERDELETIONPROTECTIONREQUEST_H_
