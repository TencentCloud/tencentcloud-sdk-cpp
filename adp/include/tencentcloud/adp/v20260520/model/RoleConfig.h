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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_ROLECONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_ROLECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 角色配置
                */
                class RoleConfig : public AbstractModel
                {
                public:
                    RoleConfig();
                    ~RoleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色描述
                     * @return RoleDescription 角色描述
                     * 
                     */
                    std::string GetRoleDescription() const;

                    /**
                     * 设置角色描述
                     * @param _roleDescription 角色描述
                     * 
                     */
                    void SetRoleDescription(const std::string& _roleDescription);

                    /**
                     * 判断参数 RoleDescription 是否已赋值
                     * @return RoleDescription 是否已赋值
                     * 
                     */
                    bool RoleDescriptionHasBeenSet() const;

                private:

                    /**
                     * 角色描述
                     */
                    std::string m_roleDescription;
                    bool m_roleDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_ROLECONFIG_H_
