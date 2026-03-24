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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_COMPLIANCEPACKRULES_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_COMPLIANCEPACKRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/Control.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * 合规包规则信息
                */
                class CompliancePackRules : public AbstractModel
                {
                public:
                    CompliancePackRules();
                    ~CompliancePackRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规则标识</p>
                     * @return Identifier <p>规则标识</p>
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置<p>规则标识</p>
                     * @param _identifier <p>规则标识</p>
                     * 
                     */
                    void SetIdentifier(const std::string& _identifier);

                    /**
                     * 判断参数 Identifier 是否已赋值
                     * @return Identifier 是否已赋值
                     * 
                     */
                    bool IdentifierHasBeenSet() const;

                    /**
                     * 获取<p>规则编号信息</p>
                     * @return Control <p>规则编号信息</p>
                     * 
                     */
                    std::vector<Control> GetControl() const;

                    /**
                     * 设置<p>规则编号信息</p>
                     * @param _control <p>规则编号信息</p>
                     * 
                     */
                    void SetControl(const std::vector<Control>& _control);

                    /**
                     * 判断参数 Control 是否已赋值
                     * @return Control 是否已赋值
                     * 
                     */
                    bool ControlHasBeenSet() const;

                    /**
                     * 获取<p>资源类型</p>
                     * @return ResourceTypes <p>资源类型</p>
                     * 
                     */
                    std::vector<std::string> GetResourceTypes() const;

                    /**
                     * 设置<p>资源类型</p>
                     * @param _resourceTypes <p>资源类型</p>
                     * 
                     */
                    void SetResourceTypes(const std::vector<std::string>& _resourceTypes);

                    /**
                     * 判断参数 ResourceTypes 是否已赋值
                     * @return ResourceTypes 是否已赋值
                     * 
                     */
                    bool ResourceTypesHasBeenSet() const;

                private:

                    /**
                     * <p>规则标识</p>
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * <p>规则编号信息</p>
                     */
                    std::vector<Control> m_control;
                    bool m_controlHasBeenSet;

                    /**
                     * <p>资源类型</p>
                     */
                    std::vector<std::string> m_resourceTypes;
                    bool m_resourceTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_COMPLIANCEPACKRULES_H_
