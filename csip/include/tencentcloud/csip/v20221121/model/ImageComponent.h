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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGECOMPONENT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGECOMPONENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 镜像组件信息
                */
                class ImageComponent : public AbstractModel
                {
                public:
                    ImageComponent();
                    ~ImageComponent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>组件名</p>
                     * @return Name <p>组件名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>组件名</p>
                     * @param _name <p>组件名</p>
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
                     * 获取<p>组件版本</p>
                     * @return Version <p>组件版本</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>组件版本</p>
                     * @param _version <p>组件版本</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>组件所在路径</p>
                     * @return Path <p>组件所在路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>组件所在路径</p>
                     * @param _path <p>组件所在路径</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>组件类型</p><p>枚举值：</p><ul><li>SYSTEM_COMPONENT： 系统组件</li><li>APP_COMPONENT： 应用组件</li></ul>
                     * @return Type <p>组件类型</p><p>枚举值：</p><ul><li>SYSTEM_COMPONENT： 系统组件</li><li>APP_COMPONENT： 应用组件</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>组件类型</p><p>枚举值：</p><ul><li>SYSTEM_COMPONENT： 系统组件</li><li>APP_COMPONENT： 应用组件</li></ul>
                     * @param _type <p>组件类型</p><p>枚举值：</p><ul><li>SYSTEM_COMPONENT： 系统组件</li><li>APP_COMPONENT： 应用组件</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>镜像id</p>
                     * @return ImageID <p>镜像id</p>
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 设置<p>镜像id</p>
                     * @param _imageID <p>镜像id</p>
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
                     * 获取<p>漏洞数</p>
                     * @return VulCount <p>漏洞数</p>
                     * 
                     */
                    uint64_t GetVulCount() const;

                    /**
                     * 设置<p>漏洞数</p>
                     * @param _vulCount <p>漏洞数</p>
                     * 
                     */
                    void SetVulCount(const uint64_t& _vulCount);

                    /**
                     * 判断参数 VulCount 是否已赋值
                     * @return VulCount 是否已赋值
                     * 
                     */
                    bool VulCountHasBeenSet() const;

                    /**
                     * 获取<p>镜像组件Id</p>
                     * @return Id <p>镜像组件Id</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>镜像组件Id</p>
                     * @param _id <p>镜像组件Id</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>组件Id</p>
                     * @return ComponentId <p>组件Id</p>
                     * 
                     */
                    uint64_t GetComponentId() const;

                    /**
                     * 设置<p>组件Id</p>
                     * @param _componentId <p>组件Id</p>
                     * 
                     */
                    void SetComponentId(const uint64_t& _componentId);

                    /**
                     * 判断参数 ComponentId 是否已赋值
                     * @return ComponentId 是否已赋值
                     * 
                     */
                    bool ComponentIdHasBeenSet() const;

                private:

                    /**
                     * <p>组件名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>组件版本</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>组件所在路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>组件类型</p><p>枚举值：</p><ul><li>SYSTEM_COMPONENT： 系统组件</li><li>APP_COMPONENT： 应用组件</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>镜像id</p>
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * <p>漏洞数</p>
                     */
                    uint64_t m_vulCount;
                    bool m_vulCountHasBeenSet;

                    /**
                     * <p>镜像组件Id</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>组件Id</p>
                     */
                    uint64_t m_componentId;
                    bool m_componentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGECOMPONENT_H_
