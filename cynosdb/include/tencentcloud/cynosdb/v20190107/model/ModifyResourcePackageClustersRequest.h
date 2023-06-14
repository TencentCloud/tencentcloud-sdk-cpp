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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYRESOURCEPACKAGECLUSTERSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYRESOURCEPACKAGECLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyResourcePackageClusters请求参数结构体
                */
                class ModifyResourcePackageClustersRequest : public AbstractModel
                {
                public:
                    ModifyResourcePackageClustersRequest();
                    ~ModifyResourcePackageClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源包唯一ID
                     * @return PackageId 资源包唯一ID
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置资源包唯一ID
                     * @param _packageId 资源包唯一ID
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取需要建立绑定关系的集群ID
                     * @return BindClusterIds 需要建立绑定关系的集群ID
                     * 
                     */
                    std::vector<std::string> GetBindClusterIds() const;

                    /**
                     * 设置需要建立绑定关系的集群ID
                     * @param _bindClusterIds 需要建立绑定关系的集群ID
                     * 
                     */
                    void SetBindClusterIds(const std::vector<std::string>& _bindClusterIds);

                    /**
                     * 判断参数 BindClusterIds 是否已赋值
                     * @return BindClusterIds 是否已赋值
                     * 
                     */
                    bool BindClusterIdsHasBeenSet() const;

                    /**
                     * 获取需要解除绑定关系的集群ID
                     * @return UnbindClusterIds 需要解除绑定关系的集群ID
                     * 
                     */
                    std::vector<std::string> GetUnbindClusterIds() const;

                    /**
                     * 设置需要解除绑定关系的集群ID
                     * @param _unbindClusterIds 需要解除绑定关系的集群ID
                     * 
                     */
                    void SetUnbindClusterIds(const std::vector<std::string>& _unbindClusterIds);

                    /**
                     * 判断参数 UnbindClusterIds 是否已赋值
                     * @return UnbindClusterIds 是否已赋值
                     * 
                     */
                    bool UnbindClusterIdsHasBeenSet() const;

                private:

                    /**
                     * 资源包唯一ID
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 需要建立绑定关系的集群ID
                     */
                    std::vector<std::string> m_bindClusterIds;
                    bool m_bindClusterIdsHasBeenSet;

                    /**
                     * 需要解除绑定关系的集群ID
                     */
                    std::vector<std::string> m_unbindClusterIds;
                    bool m_unbindClusterIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYRESOURCEPACKAGECLUSTERSREQUEST_H_
