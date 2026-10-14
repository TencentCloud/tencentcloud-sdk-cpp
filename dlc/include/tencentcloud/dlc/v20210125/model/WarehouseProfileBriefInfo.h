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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_WAREHOUSEPROFILEBRIEFINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_WAREHOUSEPROFILEBRIEFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Warehouse Profile 对外基础信息（对外 API 精简视图）.
                */
                class WarehouseProfileBriefInfo : public AbstractModel
                {
                public:
                    WarehouseProfileBriefInfo();
                    ~WarehouseProfileBriefInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规格编码（常见 XS / S / M / L / XL，租户自定义编码亦合法）.</p>
                     * @return ProfileCode <p>规格编码（常见 XS / S / M / L / XL，租户自定义编码亦合法）.</p>
                     * 
                     */
                    std::string GetProfileCode() const;

                    /**
                     * 设置<p>规格编码（常见 XS / S / M / L / XL，租户自定义编码亦合法）.</p>
                     * @param _profileCode <p>规格编码（常见 XS / S / M / L / XL，租户自定义编码亦合法）.</p>
                     * 
                     */
                    void SetProfileCode(const std::string& _profileCode);

                    /**
                     * 判断参数 ProfileCode 是否已赋值
                     * @return ProfileCode 是否已赋值
                     * 
                     */
                    bool ProfileCodeHasBeenSet() const;

                    /**
                     * 获取<p>规格名称.</p>
                     * @return ProfileName <p>规格名称.</p>
                     * 
                     */
                    std::string GetProfileName() const;

                    /**
                     * 设置<p>规格名称.</p>
                     * @param _profileName <p>规格名称.</p>
                     * 
                     */
                    void SetProfileName(const std::string& _profileName);

                    /**
                     * 判断参数 ProfileName 是否已赋值
                     * @return ProfileName 是否已赋值
                     * 
                     */
                    bool ProfileNameHasBeenSet() const;

                    /**
                     * 获取<p>规格描述.</p>
                     * @return Description <p>规格描述.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>规格描述.</p>
                     * @param _description <p>规格描述.</p>
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
                     * 获取<p>规格展示文案（后端渲染后的字符串，如 "4CU"；前端直接展示，不做二次拼装）.</p>
                     * @return Spec <p>规格展示文案（后端渲染后的字符串，如 "4CU"；前端直接展示，不做二次拼装）.</p>
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置<p>规格展示文案（后端渲染后的字符串，如 "4CU"；前端直接展示，不做二次拼装）.</p>
                     * @param _spec <p>规格展示文案（后端渲染后的字符串，如 "4CU"；前端直接展示，不做二次拼装）.</p>
                     * 
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取<p>适用场景描述.</p>
                     * @return Scenario <p>适用场景描述.</p>
                     * 
                     */
                    std::string GetScenario() const;

                    /**
                     * 设置<p>适用场景描述.</p>
                     * @param _scenario <p>适用场景描述.</p>
                     * 
                     */
                    void SetScenario(const std::string& _scenario);

                    /**
                     * 判断参数 Scenario 是否已赋值
                     * @return Scenario 是否已赋值
                     * 
                     */
                    bool ScenarioHasBeenSet() const;

                private:

                    /**
                     * <p>规格编码（常见 XS / S / M / L / XL，租户自定义编码亦合法）.</p>
                     */
                    std::string m_profileCode;
                    bool m_profileCodeHasBeenSet;

                    /**
                     * <p>规格名称.</p>
                     */
                    std::string m_profileName;
                    bool m_profileNameHasBeenSet;

                    /**
                     * <p>规格描述.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>规格展示文案（后端渲染后的字符串，如 "4CU"；前端直接展示，不做二次拼装）.</p>
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * <p>适用场景描述.</p>
                     */
                    std::string m_scenario;
                    bool m_scenarioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_WAREHOUSEPROFILEBRIEFINFO_H_
