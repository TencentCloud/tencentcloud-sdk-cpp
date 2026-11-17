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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DELETEGPURESOURCEGROUPREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DELETEGPURESOURCEGROUPREQUEST_H_

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
                * DeleteGPUResourceGroup请求参数结构体
                */
                class DeleteGPUResourceGroupRequest : public AbstractModel
                {
                public:
                    DeleteGPUResourceGroupRequest();
                    ~DeleteGPUResourceGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待删除的 GPU 资源组 ID，必填、非空，最多 64 字节。资源组必须属于当前租户，且已清空有效 GPU 实例、占用绑定和关联沙箱工具。
                     * @return ResourceGroupId 待删除的 GPU 资源组 ID，必填、非空，最多 64 字节。资源组必须属于当前租户，且已清空有效 GPU 实例、占用绑定和关联沙箱工具。
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置待删除的 GPU 资源组 ID，必填、非空，最多 64 字节。资源组必须属于当前租户，且已清空有效 GPU 实例、占用绑定和关联沙箱工具。
                     * @param _resourceGroupId 待删除的 GPU 资源组 ID，必填、非空，最多 64 字节。资源组必须属于当前租户，且已清空有效 GPU 实例、占用绑定和关联沙箱工具。
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                private:

                    /**
                     * 待删除的 GPU 资源组 ID，必填、非空，最多 64 字节。资源组必须属于当前租户，且已清空有效 GPU 实例、占用绑定和关联沙箱工具。
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DELETEGPURESOURCEGROUPREQUEST_H_
