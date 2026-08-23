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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULAFFECTEDCOMPONENT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULAFFECTEDCOMPONENT_H_

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
                * 仓库镜像受漏洞影响的组件明细列表
                */
                class VulAffectedComponent : public AbstractModel
                {
                public:
                    VulAffectedComponent();
                    ~VulAffectedComponent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>组件id</p>
                     * @return ComponentId <p>组件id</p>
                     * 
                     */
                    uint64_t GetComponentId() const;

                    /**
                     * 设置<p>组件id</p>
                     * @param _componentId <p>组件id</p>
                     * 
                     */
                    void SetComponentId(const uint64_t& _componentId);

                    /**
                     * 判断参数 ComponentId 是否已赋值
                     * @return ComponentId 是否已赋值
                     * 
                     */
                    bool ComponentIdHasBeenSet() const;

                    /**
                     * 获取<p>镜像层id</p>
                     * @return LayerId <p>镜像层id</p>
                     * 
                     */
                    std::string GetLayerId() const;

                    /**
                     * 设置<p>镜像层id</p>
                     * @param _layerId <p>镜像层id</p>
                     * 
                     */
                    void SetLayerId(const std::string& _layerId);

                    /**
                     * 判断参数 LayerId 是否已赋值
                     * @return LayerId 是否已赋值
                     * 
                     */
                    bool LayerIdHasBeenSet() const;

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
                     * 获取<p>组件版本号</p>
                     * @return Version <p>组件版本号</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>组件版本号</p>
                     * @param _version <p>组件版本号</p>
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
                     * 获取<p>修复漏洞的版本号</p>
                     * @return FixedVersion <p>修复漏洞的版本号</p>
                     * 
                     */
                    std::string GetFixedVersion() const;

                    /**
                     * 设置<p>修复漏洞的版本号</p>
                     * @param _fixedVersion <p>修复漏洞的版本号</p>
                     * 
                     */
                    void SetFixedVersion(const std::string& _fixedVersion);

                    /**
                     * 判断参数 FixedVersion 是否已赋值
                     * @return FixedVersion 是否已赋值
                     * 
                     */
                    bool FixedVersionHasBeenSet() const;

                private:

                    /**
                     * <p>组件id</p>
                     */
                    uint64_t m_componentId;
                    bool m_componentIdHasBeenSet;

                    /**
                     * <p>镜像层id</p>
                     */
                    std::string m_layerId;
                    bool m_layerIdHasBeenSet;

                    /**
                     * <p>组件名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>组件版本号</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>修复漏洞的版本号</p>
                     */
                    std::string m_fixedVersion;
                    bool m_fixedVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULAFFECTEDCOMPONENT_H_
