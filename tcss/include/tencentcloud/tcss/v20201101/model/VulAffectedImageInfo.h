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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VULAFFECTEDIMAGEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VULAFFECTEDIMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/VulAffectedImageComponentInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 受漏洞影响的镜像信息
                */
                class VulAffectedImageInfo : public AbstractModel
                {
                public:
                    VulAffectedImageInfo();
                    ~VulAffectedImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像ID
                     * @return ImageID 镜像ID
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 设置镜像ID
                     * @param _imageID 镜像ID
                     * 
                     */
                    void SetImageID(const std::string& _imageID);

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     * 
                     */
                    bool ImageIDHasBeenSet() const;

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
                     * 获取关联的主机数(包含普通节点数和超级节点数)
                     * @return HostCount 关联的主机数(包含普通节点数和超级节点数)
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 设置关联的主机数(包含普通节点数和超级节点数)
                     * @param _hostCount 关联的主机数(包含普通节点数和超级节点数)
                     * 
                     */
                    void SetHostCount(const int64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取关联的超级节点数
                     * @return SuperNodeCount 关联的超级节点数
                     * 
                     */
                    int64_t GetSuperNodeCount() const;

                    /**
                     * 设置关联的超级节点数
                     * @param _superNodeCount 关联的超级节点数
                     * 
                     */
                    void SetSuperNodeCount(const int64_t& _superNodeCount);

                    /**
                     * 判断参数 SuperNodeCount 是否已赋值
                     * @return SuperNodeCount 是否已赋值
                     * 
                     */
                    bool SuperNodeCountHasBeenSet() const;

                    /**
                     * 获取关联的容器数
                     * @return ContainerCount 关联的容器数
                     * 
                     */
                    int64_t GetContainerCount() const;

                    /**
                     * 设置关联的容器数
                     * @param _containerCount 关联的容器数
                     * 
                     */
                    void SetContainerCount(const int64_t& _containerCount);

                    /**
                     * 判断参数 ContainerCount 是否已赋值
                     * @return ContainerCount 是否已赋值
                     * 
                     */
                    bool ContainerCountHasBeenSet() const;

                    /**
                     * 获取组件列表
                     * @return ComponentList 组件列表
                     * 
                     */
                    std::vector<VulAffectedImageComponentInfo> GetComponentList() const;

                    /**
                     * 设置组件列表
                     * @param _componentList 组件列表
                     * 
                     */
                    void SetComponentList(const std::vector<VulAffectedImageComponentInfo>& _componentList);

                    /**
                     * 判断参数 ComponentList 是否已赋值
                     * @return ComponentList 是否已赋值
                     * 
                     */
                    bool ComponentListHasBeenSet() const;

                private:

                    /**
                     * 镜像ID
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * 镜像名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 关联的主机数(包含普通节点数和超级节点数)
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * 关联的超级节点数
                     */
                    int64_t m_superNodeCount;
                    bool m_superNodeCountHasBeenSet;

                    /**
                     * 关联的容器数
                     */
                    int64_t m_containerCount;
                    bool m_containerCountHasBeenSet;

                    /**
                     * 组件列表
                     */
                    std::vector<VulAffectedImageComponentInfo> m_componentList;
                    bool m_componentListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULAFFECTEDIMAGEINFO_H_
