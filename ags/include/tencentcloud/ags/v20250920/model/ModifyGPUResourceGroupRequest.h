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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_MODIFYGPURESOURCEGROUPREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_MODIFYGPURESOURCEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * ModifyGPUResourceGroup请求参数结构体
                */
                class ModifyGPUResourceGroupRequest : public AbstractModel
                {
                public:
                    ModifyGPUResourceGroupRequest();
                    ~ModifyGPUResourceGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取GPU 资源组 ID，必填、非空，最多 64 字节。
                     * @return ResourceGroupId GPU 资源组 ID，必填、非空，最多 64 字节。
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置GPU 资源组 ID，必填、非空，最多 64 字节。
                     * @param _resourceGroupId GPU 资源组 ID，必填、非空，最多 64 字节。
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取新的资源组名称；去除首尾空白后不能为空，最多 128 字节，UTF-8 中文通常占 3 字节。
                     * @return Name 新的资源组名称；去除首尾空白后不能为空，最多 128 字节，UTF-8 中文通常占 3 字节。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置新的资源组名称；去除首尾空白后不能为空，最多 128 字节，UTF-8 中文通常占 3 字节。
                     * @param _name 新的资源组名称；去除首尾空白后不能为空，最多 128 字节，UTF-8 中文通常占 3 字节。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * GPU 资源组 ID，必填、非空，最多 64 字节。
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 新的资源组名称；去除首尾空白后不能为空，最多 128 字节，UTF-8 中文通常占 3 字节。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_MODIFYGPURESOURCEGROUPREQUEST_H_
