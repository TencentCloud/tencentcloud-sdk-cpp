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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_AGENTSPACEDTO_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_AGENTSPACEDTO_H_

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
                * 云主机创建工作空间DTO
                */
                class AgentSpaceDTO : public AbstractModel
                {
                public:
                    AgentSpaceDTO();
                    ~AgentSpaceDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作空间名称
                     * @return Name 工作空间名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置工作空间名称
                     * @param Name 工作空间名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取镜像id
                     * @return ImageId 镜像id
                     */
                    int64_t GetImageId() const;

                    /**
                     * 设置镜像id
                     * @param ImageId 镜像id
                     */
                    void SetImageId(const int64_t& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取镜像名称
                     * @return ImageName 镜像名称
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名称
                     * @param ImageName 镜像名称
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取云服务器登录名称
                     * @return RemoteUser 云服务器登录名称
                     */
                    std::string GetRemoteUser() const;

                    /**
                     * 设置云服务器登录名称
                     * @param RemoteUser 云服务器登录名称
                     */
                    void SetRemoteUser(const std::string& _remoteUser);

                    /**
                     * 判断参数 RemoteUser 是否已赋值
                     * @return RemoteUser 是否已赋值
                     */
                    bool RemoteUserHasBeenSet() const;

                    /**
                     * 获取云服务器登录地址
                     * @return RemoteHost 云服务器登录地址
                     */
                    std::string GetRemoteHost() const;

                    /**
                     * 设置云服务器登录地址
                     * @param RemoteHost 云服务器登录地址
                     */
                    void SetRemoteHost(const std::string& _remoteHost);

                    /**
                     * 判断参数 RemoteHost 是否已赋值
                     * @return RemoteHost 是否已赋值
                     */
                    bool RemoteHostHasBeenSet() const;

                    /**
                     * 获取云服务器登录端口
                     * @return RemotePort 云服务器登录端口
                     */
                    std::string GetRemotePort() const;

                    /**
                     * 设置云服务器登录端口
                     * @param RemotePort 云服务器登录端口
                     */
                    void SetRemotePort(const std::string& _remotePort);

                    /**
                     * 判断参数 RemotePort 是否已赋值
                     * @return RemotePort 是否已赋值
                     */
                    bool RemotePortHasBeenSet() const;

                    /**
                     * 获取工作空间类型
                     * @return WorkspaceType 工作空间类型
                     */
                    std::string GetWorkspaceType() const;

                    /**
                     * 设置工作空间类型
                     * @param WorkspaceType 工作空间类型
                     */
                    void SetWorkspaceType(const std::string& _workspaceType);

                    /**
                     * 判断参数 WorkspaceType 是否已赋值
                     * @return WorkspaceType 是否已赋值
                     */
                    bool WorkspaceTypeHasBeenSet() const;

                    /**
                     * 获取工作空间版本
                     * @return WorkspaceVersion 工作空间版本
                     */
                    int64_t GetWorkspaceVersion() const;

                    /**
                     * 设置工作空间版本
                     * @param WorkspaceVersion 工作空间版本
                     */
                    void SetWorkspaceVersion(const int64_t& _workspaceVersion);

                    /**
                     * 判断参数 WorkspaceVersion 是否已赋值
                     * @return WorkspaceVersion 是否已赋值
                     */
                    bool WorkspaceVersionHasBeenSet() const;

                    /**
                     * 获取工作空间资源结构
                     * @return WorkspaceResourceDTO 工作空间资源结构
                     */
                    WorkspaceResourceDTO GetWorkspaceResourceDTO() const;

                    /**
                     * 设置工作空间资源结构
                     * @param WorkspaceResourceDTO 工作空间资源结构
                     */
                    void SetWorkspaceResourceDTO(const WorkspaceResourceDTO& _workspaceResourceDTO);

                    /**
                     * 判断参数 WorkspaceResourceDTO 是否已赋值
                     * @return WorkspaceResourceDTO 是否已赋值
                     */
                    bool WorkspaceResourceDTOHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param Description 描述
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 工作空间名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

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
                     * 云服务器登录名称
                     */
                    std::string m_remoteUser;
                    bool m_remoteUserHasBeenSet;

                    /**
                     * 云服务器登录地址
                     */
                    std::string m_remoteHost;
                    bool m_remoteHostHasBeenSet;

                    /**
                     * 云服务器登录端口
                     */
                    std::string m_remotePort;
                    bool m_remotePortHasBeenSet;

                    /**
                     * 工作空间类型
                     */
                    std::string m_workspaceType;
                    bool m_workspaceTypeHasBeenSet;

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
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_AGENTSPACEDTO_H_
