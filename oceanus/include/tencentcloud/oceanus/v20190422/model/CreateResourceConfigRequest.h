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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATERESOURCECONFIGREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATERESOURCECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/ResourceLoc.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * CreateResourceConfig请求参数结构体
                */
                class CreateResourceConfigRequest : public AbstractModel
                {
                public:
                    CreateResourceConfigRequest();
                    ~CreateResourceConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源ID
                     * @return ResourceId 资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID
                     * @param _resourceId 资源ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取位置信息
                     * @return ResourceLoc 位置信息
                     * 
                     */
                    ResourceLoc GetResourceLoc() const;

                    /**
                     * 设置位置信息
                     * @param _resourceLoc 位置信息
                     * 
                     */
                    void SetResourceLoc(const ResourceLoc& _resourceLoc);

                    /**
                     * 判断参数 ResourceLoc 是否已赋值
                     * @return ResourceLoc 是否已赋值
                     * 
                     */
                    bool ResourceLocHasBeenSet() const;

                    /**
                     * 获取资源描述信息
                     * @return Remark 资源描述信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置资源描述信息
                     * @param _remark 资源描述信息
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取1： 资源版本达到上限，自动删除最早可删除的版本
                     * @return AutoDelete 1： 资源版本达到上限，自动删除最早可删除的版本
                     * 
                     */
                    int64_t GetAutoDelete() const;

                    /**
                     * 设置1： 资源版本达到上限，自动删除最早可删除的版本
                     * @param _autoDelete 1： 资源版本达到上限，自动删除最早可删除的版本
                     * 
                     */
                    void SetAutoDelete(const int64_t& _autoDelete);

                    /**
                     * 判断参数 AutoDelete 是否已赋值
                     * @return AutoDelete 是否已赋值
                     * 
                     */
                    bool AutoDeleteHasBeenSet() const;

                    /**
                     * 获取工作空间 SerialId
                     * @return WorkSpaceId 工作空间 SerialId
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置工作空间 SerialId
                     * @param _workSpaceId 工作空间 SerialId
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                private:

                    /**
                     * 资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 位置信息
                     */
                    ResourceLoc m_resourceLoc;
                    bool m_resourceLocHasBeenSet;

                    /**
                     * 资源描述信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 1： 资源版本达到上限，自动删除最早可删除的版本
                     */
                    int64_t m_autoDelete;
                    bool m_autoDeleteHasBeenSet;

                    /**
                     * 工作空间 SerialId
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATERESOURCECONFIGREQUEST_H_
