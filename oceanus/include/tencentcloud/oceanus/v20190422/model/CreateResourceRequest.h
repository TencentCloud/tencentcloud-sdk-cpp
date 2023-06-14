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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATERESOURCEREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATERESOURCEREQUEST_H_

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
                * CreateResource请求参数结构体
                */
                class CreateResourceRequest : public AbstractModel
                {
                public:
                    CreateResourceRequest();
                    ~CreateResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源位置
                     * @return ResourceLoc 资源位置
                     * 
                     */
                    ResourceLoc GetResourceLoc() const;

                    /**
                     * 设置资源位置
                     * @param _resourceLoc 资源位置
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
                     * 获取资源类型。目前只支持 JAR，取值为 1
                     * @return ResourceType 资源类型。目前只支持 JAR，取值为 1
                     * 
                     */
                    int64_t GetResourceType() const;

                    /**
                     * 设置资源类型。目前只支持 JAR，取值为 1
                     * @param _resourceType 资源类型。目前只支持 JAR，取值为 1
                     * 
                     */
                    void SetResourceType(const int64_t& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源描述
                     * @return Remark 资源描述
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置资源描述
                     * @param _remark 资源描述
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
                     * 获取资源名称
                     * @return Name 资源名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置资源名称
                     * @param _name 资源名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取资源版本描述
                     * @return ResourceConfigRemark 资源版本描述
                     * 
                     */
                    std::string GetResourceConfigRemark() const;

                    /**
                     * 设置资源版本描述
                     * @param _resourceConfigRemark 资源版本描述
                     * 
                     */
                    void SetResourceConfigRemark(const std::string& _resourceConfigRemark);

                    /**
                     * 判断参数 ResourceConfigRemark 是否已赋值
                     * @return ResourceConfigRemark 是否已赋值
                     * 
                     */
                    bool ResourceConfigRemarkHasBeenSet() const;

                    /**
                     * 获取目录ID
                     * @return FolderId 目录ID
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置目录ID
                     * @param _folderId 目录ID
                     * 
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

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
                     * 资源位置
                     */
                    ResourceLoc m_resourceLoc;
                    bool m_resourceLocHasBeenSet;

                    /**
                     * 资源类型。目前只支持 JAR，取值为 1
                     */
                    int64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源描述
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 资源名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 资源版本描述
                     */
                    std::string m_resourceConfigRemark;
                    bool m_resourceConfigRemarkHasBeenSet;

                    /**
                     * 目录ID
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

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

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATERESOURCEREQUEST_H_
