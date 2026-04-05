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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONCOMPONENTBINDINGSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONCOMPONENTBINDINGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/FunctionComponentBinding.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyFunctionComponentBindings请求参数结构体
                */
                class ModifyFunctionComponentBindingsRequest : public AbstractModel
                {
                public:
                    ModifyFunctionComponentBindingsRequest();
                    ~ModifyFunctionComponentBindingsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
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
                     * 获取函数 ID。
                     * @return FunctionId 函数 ID。
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置函数 ID。
                     * @param _functionId 函数 ID。
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取操作类型，取值有：
<li>bind：绑定组件；</li>
<li>bind-override：绑定组件。若绑定已存在则为重绑定行为，否则为绑定行为；</li>
<li>unbind：解绑组件；</li>
<li>rebind：重置绑定关系。清空所有现有绑定，并设置为传入的绑定列表。若传入空列表，则清空所有绑定。</li>

                     * @return Operation 操作类型，取值有：
<li>bind：绑定组件；</li>
<li>bind-override：绑定组件。若绑定已存在则为重绑定行为，否则为绑定行为；</li>
<li>unbind：解绑组件；</li>
<li>rebind：重置绑定关系。清空所有现有绑定，并设置为传入的绑定列表。若传入空列表，则清空所有绑定。</li>

                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作类型，取值有：
<li>bind：绑定组件；</li>
<li>bind-override：绑定组件。若绑定已存在则为重绑定行为，否则为绑定行为；</li>
<li>unbind：解绑组件；</li>
<li>rebind：重置绑定关系。清空所有现有绑定，并设置为传入的绑定列表。若传入空列表，则清空所有绑定。</li>

                     * @param _operation 操作类型，取值有：
<li>bind：绑定组件；</li>
<li>bind-override：绑定组件。若绑定已存在则为重绑定行为，否则为绑定行为；</li>
<li>unbind：解绑组件；</li>
<li>rebind：重置绑定关系。清空所有现有绑定，并设置为传入的绑定列表。若传入空列表，则清空所有绑定。</li>

                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取操作的函数组件绑定列表。当 Operation 为 rebind 且传入空列表时，表示清空所有绑定。
                     * @return FunctionComponentBindings 操作的函数组件绑定列表。当 Operation 为 rebind 且传入空列表时，表示清空所有绑定。
                     * 
                     */
                    std::vector<FunctionComponentBinding> GetFunctionComponentBindings() const;

                    /**
                     * 设置操作的函数组件绑定列表。当 Operation 为 rebind 且传入空列表时，表示清空所有绑定。
                     * @param _functionComponentBindings 操作的函数组件绑定列表。当 Operation 为 rebind 且传入空列表时，表示清空所有绑定。
                     * 
                     */
                    void SetFunctionComponentBindings(const std::vector<FunctionComponentBinding>& _functionComponentBindings);

                    /**
                     * 判断参数 FunctionComponentBindings 是否已赋值
                     * @return FunctionComponentBindings 是否已赋值
                     * 
                     */
                    bool FunctionComponentBindingsHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 函数 ID。
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * 操作类型，取值有：
<li>bind：绑定组件；</li>
<li>bind-override：绑定组件。若绑定已存在则为重绑定行为，否则为绑定行为；</li>
<li>unbind：解绑组件；</li>
<li>rebind：重置绑定关系。清空所有现有绑定，并设置为传入的绑定列表。若传入空列表，则清空所有绑定。</li>

                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 操作的函数组件绑定列表。当 Operation 为 rebind 且传入空列表时，表示清空所有绑定。
                     */
                    std::vector<FunctionComponentBinding> m_functionComponentBindings;
                    bool m_functionComponentBindingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONCOMPONENTBINDINGSREQUEST_H_
