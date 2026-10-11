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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_ROLEPRIVILEGE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_ROLEPRIVILEGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/RoleResource.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 角色权限
                */
                class RolePrivilege : public AbstractModel
                {
                public:
                    RolePrivilege();
                    ~RolePrivilege() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源</p>
                     * @return Resource <p>资源</p>
                     * 
                     */
                    RoleResource GetResource() const;

                    /**
                     * 设置<p>资源</p>
                     * @param _resource <p>资源</p>
                     * 
                     */
                    void SetResource(const RoleResource& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取<p>动作</p>
                     * @return Actions <p>动作</p>
                     * 
                     */
                    std::vector<std::string> GetActions() const;

                    /**
                     * 设置<p>动作</p>
                     * @param _actions <p>动作</p>
                     * 
                     */
                    void SetActions(const std::vector<std::string>& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     * 
                     */
                    bool ActionsHasBeenSet() const;

                private:

                    /**
                     * <p>资源</p>
                     */
                    RoleResource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * <p>动作</p>
                     */
                    std::vector<std::string> m_actions;
                    bool m_actionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_ROLEPRIVILEGE_H_
