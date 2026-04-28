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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCEGROUPINWORKSPACE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCEGROUPINWORKSPACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 工作空间绑定的资源组信息
                */
                class ResourceGroupInWorkspace : public AbstractModel
                {
                public:
                    ResourceGroupInWorkspace();
                    ~ResourceGroupInWorkspace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源组ID</p>
                     * @return ResourceGroupId <p>资源组ID</p>
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置<p>资源组ID</p>
                     * @param _resourceGroupId <p>资源组ID</p>
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
                     * 获取<p>资源组名称</p>
                     * @return ResourceGroupName <p>资源组名称</p>
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置<p>资源组名称</p>
                     * @param _resourceGroupName <p>资源组名称</p>
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>地域</p>
                     * @return Region <p>地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _region <p>地域</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>是否有运行中的任务/服务占用</p>
                     * @return Occupied <p>是否有运行中的任务/服务占用</p>
                     * 
                     */
                    bool GetOccupied() const;

                    /**
                     * 设置<p>是否有运行中的任务/服务占用</p>
                     * @param _occupied <p>是否有运行中的任务/服务占用</p>
                     * 
                     */
                    void SetOccupied(const bool& _occupied);

                    /**
                     * 判断参数 Occupied 是否已赋值
                     * @return Occupied 是否已赋值
                     * 
                     */
                    bool OccupiedHasBeenSet() const;

                private:

                    /**
                     * <p>资源组ID</p>
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * <p>资源组名称</p>
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>是否有运行中的任务/服务占用</p>
                     */
                    bool m_occupied;
                    bool m_occupiedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCEGROUPINWORKSPACE_H_
