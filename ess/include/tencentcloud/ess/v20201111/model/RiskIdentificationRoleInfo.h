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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_RISKIDENTIFICATIONROLEINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_RISKIDENTIFICATIONROLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 用于定义合同风险识别角色信息。
                */
                class RiskIdentificationRoleInfo : public AbstractModel
                {
                public:
                    RiskIdentificationRoleInfo();
                    ~RiskIdentificationRoleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取风险识别角色的名称。用于唯一标识和区分不同的风险识别角色。

注意：`最大长度应不超过200个字符`
                     * @return Name 风险识别角色的名称。用于唯一标识和区分不同的风险识别角色。

注意：`最大长度应不超过200个字符`
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置风险识别角色的名称。用于唯一标识和区分不同的风险识别角色。

注意：`最大长度应不超过200个字符`
                     * @param _name 风险识别角色的名称。用于唯一标识和区分不同的风险识别角色。

注意：`最大长度应不超过200个字符`
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
                     * 获取风险识别角色的详细说明。

注意： `最大长度应不超过500个字符`
                     * @return Description 风险识别角色的详细说明。

注意： `最大长度应不超过500个字符`
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置风险识别角色的详细说明。

注意： `最大长度应不超过500个字符`
                     * @param _description 风险识别角色的详细说明。

注意： `最大长度应不超过500个字符`
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 风险识别角色的名称。用于唯一标识和区分不同的风险识别角色。

注意：`最大长度应不超过200个字符`
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 风险识别角色的详细说明。

注意： `最大长度应不超过500个字符`
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_RISKIDENTIFICATIONROLEINFO_H_
