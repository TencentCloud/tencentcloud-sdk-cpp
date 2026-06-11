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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYREMOTEDISKATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYREMOTEDISKATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyRemoteDiskAttributes请求参数结构体
                */
                class ModifyRemoteDiskAttributesRequest : public AbstractModel
                {
                public:
                    ModifyRemoteDiskAttributesRequest();
                    ~ModifyRemoteDiskAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>一个或多个待操作的单副本SSD硬盘ID。如果传入多个单副本SSD硬盘ID，只支持所有硬盘修改为同一属性。</p>
                     * @return RemoteDiskIds <p>一个或多个待操作的单副本SSD硬盘ID。如果传入多个单副本SSD硬盘ID，只支持所有硬盘修改为同一属性。</p>
                     * 
                     */
                    std::vector<std::string> GetRemoteDiskIds() const;

                    /**
                     * 设置<p>一个或多个待操作的单副本SSD硬盘ID。如果传入多个单副本SSD硬盘ID，只支持所有硬盘修改为同一属性。</p>
                     * @param _remoteDiskIds <p>一个或多个待操作的单副本SSD硬盘ID。如果传入多个单副本SSD硬盘ID，只支持所有硬盘修改为同一属性。</p>
                     * 
                     */
                    void SetRemoteDiskIds(const std::vector<std::string>& _remoteDiskIds);

                    /**
                     * 判断参数 RemoteDiskIds 是否已赋值
                     * @return RemoteDiskIds 是否已赋值
                     * 
                     */
                    bool RemoteDiskIdsHasBeenSet() const;

                    /**
                     * 获取<p>新的单副本SSD硬盘名称</p>
                     * @return DiskName <p>新的单副本SSD硬盘名称</p>
                     * 
                     */
                    std::string GetDiskName() const;

                    /**
                     * 设置<p>新的单副本SSD硬盘名称</p>
                     * @param _diskName <p>新的单副本SSD硬盘名称</p>
                     * 
                     */
                    void SetDiskName(const std::string& _diskName);

                    /**
                     * 判断参数 DiskName 是否已赋值
                     * @return DiskName 是否已赋值
                     * 
                     */
                    bool DiskNameHasBeenSet() const;

                    /**
                     * 获取<p>新的单副本SSD硬盘项目ID。</p>
                     * @return ProjectId <p>新的单副本SSD硬盘项目ID。</p>
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置<p>新的单副本SSD硬盘项目ID。</p>
                     * @param _projectId <p>新的单副本SSD硬盘项目ID。</p>
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * <p>一个或多个待操作的单副本SSD硬盘ID。如果传入多个单副本SSD硬盘ID，只支持所有硬盘修改为同一属性。</p>
                     */
                    std::vector<std::string> m_remoteDiskIds;
                    bool m_remoteDiskIdsHasBeenSet;

                    /**
                     * <p>新的单副本SSD硬盘名称</p>
                     */
                    std::string m_diskName;
                    bool m_diskNameHasBeenSet;

                    /**
                     * <p>新的单副本SSD硬盘项目ID。</p>
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYREMOTEDISKATTRIBUTESREQUEST_H_
