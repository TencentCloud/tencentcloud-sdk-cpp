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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_COMPONENTDEPLOYINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_COMPONENTDEPLOYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 角色的部署信息
                */
                class ComponentDeployInfo : public AbstractModel
                {
                public:
                    ComponentDeployInfo();
                    ~ComponentDeployInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色名称
                     * @return ComponentName 角色名称
                     * 
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置角色名称
                     * @param _componentName 角色名称
                     * 
                     */
                    void SetComponentName(const std::string& _componentName);

                    /**
                     * 判断参数 ComponentName 是否已赋值
                     * @return ComponentName 是否已赋值
                     * 
                     */
                    bool ComponentNameHasBeenSet() const;

                    /**
                     * 获取待安装的节点uuid列表
                     * @return DeployHostUuidList 待安装的节点uuid列表
                     * 
                     */
                    std::vector<std::string> GetDeployHostUuidList() const;

                    /**
                     * 设置待安装的节点uuid列表
                     * @param _deployHostUuidList 待安装的节点uuid列表
                     * 
                     */
                    void SetDeployHostUuidList(const std::vector<std::string>& _deployHostUuidList);

                    /**
                     * 判断参数 DeployHostUuidList 是否已赋值
                     * @return DeployHostUuidList 是否已赋值
                     * 
                     */
                    bool DeployHostUuidListHasBeenSet() const;

                private:

                    /**
                     * 角色名称
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * 待安装的节点uuid列表
                     */
                    std::vector<std::string> m_deployHostUuidList;
                    bool m_deployHostUuidListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_COMPONENTDEPLOYINFO_H_
