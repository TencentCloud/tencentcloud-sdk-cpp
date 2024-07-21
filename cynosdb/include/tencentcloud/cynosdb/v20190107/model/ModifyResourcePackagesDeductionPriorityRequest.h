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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYRESOURCEPACKAGESDEDUCTIONPRIORITYREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYRESOURCEPACKAGESDEDUCTIONPRIORITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/PackagePriority.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyResourcePackagesDeductionPriority请求参数结构体
                */
                class ModifyResourcePackagesDeductionPriorityRequest : public AbstractModel
                {
                public:
                    ModifyResourcePackagesDeductionPriorityRequest();
                    ~ModifyResourcePackagesDeductionPriorityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要修改优先级的资源包类型，CCU：计算资源包，DISK：存储资源包
                     * @return PackageType 需要修改优先级的资源包类型，CCU：计算资源包，DISK：存储资源包
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置需要修改优先级的资源包类型，CCU：计算资源包，DISK：存储资源包
                     * @param _packageType 需要修改优先级的资源包类型，CCU：计算资源包，DISK：存储资源包
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取修改后的抵扣优先级对于哪个cynos资源生效
                     * @return ClusterId 修改后的抵扣优先级对于哪个cynos资源生效
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置修改后的抵扣优先级对于哪个cynos资源生效
                     * @param _clusterId 修改后的抵扣优先级对于哪个cynos资源生效
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
                     * 获取资源包抵扣优先级
                     * @return DeductionPriorities 资源包抵扣优先级
                     * 
                     */
                    std::vector<PackagePriority> GetDeductionPriorities() const;

                    /**
                     * 设置资源包抵扣优先级
                     * @param _deductionPriorities 资源包抵扣优先级
                     * 
                     */
                    void SetDeductionPriorities(const std::vector<PackagePriority>& _deductionPriorities);

                    /**
                     * 判断参数 DeductionPriorities 是否已赋值
                     * @return DeductionPriorities 是否已赋值
                     * 
                     */
                    bool DeductionPrioritiesHasBeenSet() const;

                private:

                    /**
                     * 需要修改优先级的资源包类型，CCU：计算资源包，DISK：存储资源包
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 修改后的抵扣优先级对于哪个cynos资源生效
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 资源包抵扣优先级
                     */
                    std::vector<PackagePriority> m_deductionPriorities;
                    bool m_deductionPrioritiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYRESOURCEPACKAGESDEDUCTIONPRIORITYREQUEST_H_
