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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYZONECUSTOMVARIABLESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYZONECUSTOMVARIABLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomVariable.h>
#include <tencentcloud/teo/v20220901/model/CustomVariableOperation.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyZoneCustomVariables请求参数结构体
                */
                class ModifyZoneCustomVariablesRequest : public AbstractModel
                {
                public:
                    ModifyZoneCustomVariablesRequest();
                    ~ModifyZoneCustomVariablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>站点 ID。</p>
                     * @return ZoneId <p>站点 ID。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点 ID。</p>
                     * @param _zoneId <p>站点 ID。</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>站点级自定义变量列表。CustomVariable.Name 需要使用 user.zone. 作为前缀。变量按照数组顺序依次初始化，InitialValue 仅支持引用位于当前变量之前的变量，不支持引用当前变量自身或位于当前变量之后的变量。</p>
                     * @return CustomVariables <p>站点级自定义变量列表。CustomVariable.Name 需要使用 user.zone. 作为前缀。变量按照数组顺序依次初始化，InitialValue 仅支持引用位于当前变量之前的变量，不支持引用当前变量自身或位于当前变量之后的变量。</p>
                     * 
                     */
                    std::vector<CustomVariable> GetCustomVariables() const;

                    /**
                     * 设置<p>站点级自定义变量列表。CustomVariable.Name 需要使用 user.zone. 作为前缀。变量按照数组顺序依次初始化，InitialValue 仅支持引用位于当前变量之前的变量，不支持引用当前变量自身或位于当前变量之后的变量。</p>
                     * @param _customVariables <p>站点级自定义变量列表。CustomVariable.Name 需要使用 user.zone. 作为前缀。变量按照数组顺序依次初始化，InitialValue 仅支持引用位于当前变量之前的变量，不支持引用当前变量自身或位于当前变量之后的变量。</p>
                     * 
                     */
                    void SetCustomVariables(const std::vector<CustomVariable>& _customVariables);

                    /**
                     * 判断参数 CustomVariables 是否已赋值
                     * @return CustomVariables 是否已赋值
                     * 
                     */
                    bool CustomVariablesHasBeenSet() const;

                    /**
                     * 获取<p>站点级自定义变量运算规则。运算中支持引用已定义的站点级自定义变量。此列表当前只支持填写一项规则，多填无效。</p>
                     * @return CustomVariableOperations <p>站点级自定义变量运算规则。运算中支持引用已定义的站点级自定义变量。此列表当前只支持填写一项规则，多填无效。</p>
                     * 
                     */
                    std::vector<CustomVariableOperation> GetCustomVariableOperations() const;

                    /**
                     * 设置<p>站点级自定义变量运算规则。运算中支持引用已定义的站点级自定义变量。此列表当前只支持填写一项规则，多填无效。</p>
                     * @param _customVariableOperations <p>站点级自定义变量运算规则。运算中支持引用已定义的站点级自定义变量。此列表当前只支持填写一项规则，多填无效。</p>
                     * 
                     */
                    void SetCustomVariableOperations(const std::vector<CustomVariableOperation>& _customVariableOperations);

                    /**
                     * 判断参数 CustomVariableOperations 是否已赋值
                     * @return CustomVariableOperations 是否已赋值
                     * 
                     */
                    bool CustomVariableOperationsHasBeenSet() const;

                private:

                    /**
                     * <p>站点 ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>站点级自定义变量列表。CustomVariable.Name 需要使用 user.zone. 作为前缀。变量按照数组顺序依次初始化，InitialValue 仅支持引用位于当前变量之前的变量，不支持引用当前变量自身或位于当前变量之后的变量。</p>
                     */
                    std::vector<CustomVariable> m_customVariables;
                    bool m_customVariablesHasBeenSet;

                    /**
                     * <p>站点级自定义变量运算规则。运算中支持引用已定义的站点级自定义变量。此列表当前只支持填写一项规则，多填无效。</p>
                     */
                    std::vector<CustomVariableOperation> m_customVariableOperations;
                    bool m_customVariableOperationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYZONECUSTOMVARIABLESREQUEST_H_
