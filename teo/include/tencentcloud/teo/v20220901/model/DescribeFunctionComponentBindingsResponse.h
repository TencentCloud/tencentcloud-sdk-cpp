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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEFUNCTIONCOMPONENTBINDINGSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEFUNCTIONCOMPONENTBINDINGSRESPONSE_H_

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
                * DescribeFunctionComponentBindings返回参数结构体
                */
                class DescribeFunctionComponentBindingsResponse : public AbstractModel
                {
                public:
                    DescribeFunctionComponentBindingsResponse();
                    ~DescribeFunctionComponentBindingsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的函数绑定总数。
                     * @return TotalCount 符合条件的函数绑定总数。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取函数组件绑定列表。
                     * @return FunctionComponentBindings 函数组件绑定列表。
                     * 
                     */
                    std::vector<FunctionComponentBinding> GetFunctionComponentBindings() const;

                    /**
                     * 判断参数 FunctionComponentBindings 是否已赋值
                     * @return FunctionComponentBindings 是否已赋值
                     * 
                     */
                    bool FunctionComponentBindingsHasBeenSet() const;

                private:

                    /**
                     * 符合条件的函数绑定总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 函数组件绑定列表。
                     */
                    std::vector<FunctionComponentBinding> m_functionComponentBindings;
                    bool m_functionComponentBindingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEFUNCTIONCOMPONENTBINDINGSRESPONSE_H_
