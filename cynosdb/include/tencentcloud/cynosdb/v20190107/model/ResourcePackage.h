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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RESOURCEPACKAGE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RESOURCEPACKAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 资源包信息
                */
                class ResourcePackage : public AbstractModel
                {
                public:
                    ResourcePackage();
                    ~ResourcePackage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源包的唯一ID
                     * @return PackageId 资源包的唯一ID
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置资源包的唯一ID
                     * @param _packageId 资源包的唯一ID
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
                     * 获取资源包类型：CCU：计算资源包
DISK：存储资源包
                     * @return PackageType 资源包类型：CCU：计算资源包
DISK：存储资源包
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置资源包类型：CCU：计算资源包
DISK：存储资源包
                     * @param _packageType 资源包类型：CCU：计算资源包
DISK：存储资源包
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
                     * 获取当前资源包绑定在当前实例下的抵扣优先级
                     * @return DeductionPriority 当前资源包绑定在当前实例下的抵扣优先级
                     * 
                     */
                    int64_t GetDeductionPriority() const;

                    /**
                     * 设置当前资源包绑定在当前实例下的抵扣优先级
                     * @param _deductionPriority 当前资源包绑定在当前实例下的抵扣优先级
                     * 
                     */
                    void SetDeductionPriority(const int64_t& _deductionPriority);

                    /**
                     * 判断参数 DeductionPriority 是否已赋值
                     * @return DeductionPriority 是否已赋值
                     * 
                     */
                    bool DeductionPriorityHasBeenSet() const;

                private:

                    /**
                     * 资源包的唯一ID
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 资源包类型：CCU：计算资源包
DISK：存储资源包
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 当前资源包绑定在当前实例下的抵扣优先级
                     */
                    int64_t m_deductionPriority;
                    bool m_deductionPriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RESOURCEPACKAGE_H_
