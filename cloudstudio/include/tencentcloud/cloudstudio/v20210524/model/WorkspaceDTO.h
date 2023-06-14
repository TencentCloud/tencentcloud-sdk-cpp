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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACEDTO_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACEDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudstudio/v20210524/model/WorkspaceResourceDTO.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20210524
        {
            namespace Model
            {
                /**
                * 工作空间结构
                */
                class WorkspaceDTO : public AbstractModel
                {
                public:
                    WorkspaceDTO();
                    ~WorkspaceDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作空间名称
                     * @return Name 工作空间名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置工作空间名称
                     * @param _name 工作空间名称
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
                     * 获取代码来源类型
                     * @return VersionControlType 代码来源类型
                     * 
                     */
                    std::string GetVersionControlType() const;

                    /**
                     * 设置代码来源类型
                     * @param _versionControlType 代码来源类型
                     * 
                     */
                    void SetVersionControlType(const std::string& _versionControlType);

                    /**
                     * 判断参数 VersionControlType 是否已赋值
                     * @return VersionControlType 是否已赋值
                     * 
                     */
                    bool VersionControlTypeHasBeenSet() const;

                    /**
                     * 获取镜像id
                     * @return ImageId 镜像id
                     * 
                     */
                    int64_t GetImageId() const;

                    /**
                     * 设置镜像id
                     * @param _imageId 镜像id
                     * 
                     */
                    void SetImageId(const int64_t& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取镜像名称
                     * @return ImageName 镜像名称
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名称
                     * @param _imageName 镜像名称
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取工作空间版本
                     * @return WorkspaceVersion 工作空间版本
                     * 
                     */
                    int64_t GetWorkspaceVersion() const;

                    /**
                     * 设置工作空间版本
                     * @param _workspaceVersion 工作空间版本
                     * 
                     */
                    void SetWorkspaceVersion(const int64_t& _workspaceVersion);

                    /**
                     * 判断参数 WorkspaceVersion 是否已赋值
                     * @return WorkspaceVersion 是否已赋值
                     * 
                     */
                    bool WorkspaceVersionHasBeenSet() const;

                    /**
                     * 获取工作空间资源结构
                     * @return WorkspaceResourceDTO 工作空间资源结构
                     * 
                     */
                    WorkspaceResourceDTO GetWorkspaceResourceDTO() const;

                    /**
                     * 设置工作空间资源结构
                     * @param _workspaceResourceDTO 工作空间资源结构
                     * 
                     */
                    void SetWorkspaceResourceDTO(const WorkspaceResourceDTO& _workspaceResourceDTO);

                    /**
                     * 判断参数 WorkspaceResourceDTO 是否已赋值
                     * @return WorkspaceResourceDTO 是否已赋值
                     * 
                     */
                    bool WorkspaceResourceDTOHasBeenSet() const;

                    /**
                     * 获取代码仓库地址
                     * @return VersionControlUrl 代码仓库地址
                     * 
                     */
                    std::string GetVersionControlUrl() const;

                    /**
                     * 设置代码仓库地址
                     * @param _versionControlUrl 代码仓库地址
                     * 
                     */
                    void SetVersionControlUrl(const std::string& _versionControlUrl);

                    /**
                     * 判断参数 VersionControlUrl 是否已赋值
                     * @return VersionControlUrl 是否已赋值
                     * 
                     */
                    bool VersionControlUrlHasBeenSet() const;

                    /**
                     * 获取代码Ref是分支还是标签
                     * @return VersionControlRef 代码Ref是分支还是标签
                     * 
                     */
                    std::string GetVersionControlRef() const;

                    /**
                     * 设置代码Ref是分支还是标签
                     * @param _versionControlRef 代码Ref是分支还是标签
                     * 
                     */
                    void SetVersionControlRef(const std::string& _versionControlRef);

                    /**
                     * 判断参数 VersionControlRef 是否已赋值
                     * @return VersionControlRef 是否已赋值
                     * 
                     */
                    bool VersionControlRefHasBeenSet() const;

                    /**
                     * 获取代码Ref地址
                     * @return VersionControlRefType 代码Ref地址
                     * 
                     */
                    std::string GetVersionControlRefType() const;

                    /**
                     * 设置代码Ref地址
                     * @param _versionControlRefType 代码Ref地址
                     * 
                     */
                    void SetVersionControlRefType(const std::string& _versionControlRefType);

                    /**
                     * 判断参数 VersionControlRefType 是否已赋值
                     * @return VersionControlRefType 是否已赋值
                     * 
                     */
                    bool VersionControlRefTypeHasBeenSet() const;

                    /**
                     * 获取快照Uid
                     * @return SnapshotUid 快照Uid
                     * 
                     */
                    std::string GetSnapshotUid() const;

                    /**
                     * 设置快照Uid
                     * @param _snapshotUid 快照Uid
                     * 
                     */
                    void SetSnapshotUid(const std::string& _snapshotUid);

                    /**
                     * 判断参数 SnapshotUid 是否已赋值
                     * @return SnapshotUid 是否已赋值
                     * 
                     */
                    bool SnapshotUidHasBeenSet() const;

                    /**
                     * 获取模板id
                     * @return TemplateId 模板id
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置模板id
                     * @param _templateId 模板id
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取价格id
                     * @return PriceId 价格id
                     * 
                     */
                    int64_t GetPriceId() const;

                    /**
                     * 设置价格id
                     * @param _priceId 价格id
                     * 
                     */
                    void SetPriceId(const int64_t& _priceId);

                    /**
                     * 判断参数 PriceId 是否已赋值
                     * @return PriceId 是否已赋值
                     * 
                     */
                    bool PriceIdHasBeenSet() const;

                    /**
                     * 获取初始化状态
                     * @return InitializeStatus 初始化状态
                     * 
                     */
                    int64_t GetInitializeStatus() const;

                    /**
                     * 设置初始化状态
                     * @param _initializeStatus 初始化状态
                     * 
                     */
                    void SetInitializeStatus(const int64_t& _initializeStatus);

                    /**
                     * 判断参数 InitializeStatus 是否已赋值
                     * @return InitializeStatus 是否已赋值
                     * 
                     */
                    bool InitializeStatusHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return VersionControlDesc 描述
                     * 
                     */
                    std::string GetVersionControlDesc() const;

                    /**
                     * 设置描述
                     * @param _versionControlDesc 描述
                     * 
                     */
                    void SetVersionControlDesc(const std::string& _versionControlDesc);

                    /**
                     * 判断参数 VersionControlDesc 是否已赋值
                     * @return VersionControlDesc 是否已赋值
                     * 
                     */
                    bool VersionControlDescHasBeenSet() const;

                private:

                    /**
                     * 工作空间名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 代码来源类型
                     */
                    std::string m_versionControlType;
                    bool m_versionControlTypeHasBeenSet;

                    /**
                     * 镜像id
                     */
                    int64_t m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 镜像名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 工作空间版本
                     */
                    int64_t m_workspaceVersion;
                    bool m_workspaceVersionHasBeenSet;

                    /**
                     * 工作空间资源结构
                     */
                    WorkspaceResourceDTO m_workspaceResourceDTO;
                    bool m_workspaceResourceDTOHasBeenSet;

                    /**
                     * 代码仓库地址
                     */
                    std::string m_versionControlUrl;
                    bool m_versionControlUrlHasBeenSet;

                    /**
                     * 代码Ref是分支还是标签
                     */
                    std::string m_versionControlRef;
                    bool m_versionControlRefHasBeenSet;

                    /**
                     * 代码Ref地址
                     */
                    std::string m_versionControlRefType;
                    bool m_versionControlRefTypeHasBeenSet;

                    /**
                     * 快照Uid
                     */
                    std::string m_snapshotUid;
                    bool m_snapshotUidHasBeenSet;

                    /**
                     * 模板id
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 价格id
                     */
                    int64_t m_priceId;
                    bool m_priceIdHasBeenSet;

                    /**
                     * 初始化状态
                     */
                    int64_t m_initializeStatus;
                    bool m_initializeStatusHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_versionControlDesc;
                    bool m_versionControlDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACEDTO_H_
