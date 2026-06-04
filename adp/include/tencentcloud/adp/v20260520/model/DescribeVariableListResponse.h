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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEVARIABLELISTRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEVARIABLELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Variable.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeVariableList返回参数结构体
                */
                class DescribeVariableListResponse : public AbstractModel
                {
                public:
                    DescribeVariableListResponse();
                    ~DescribeVariableListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取total_count
                     * @return TotalCount total_count
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取variable_list
                     * @return VariableList variable_list
                     * 
                     */
                    std::vector<Variable> GetVariableList() const;

                    /**
                     * 判断参数 VariableList 是否已赋值
                     * @return VariableList 是否已赋值
                     * 
                     */
                    bool VariableListHasBeenSet() const;

                private:

                    /**
                     * total_count
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * variable_list
                     */
                    std::vector<Variable> m_variableList;
                    bool m_variableListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEVARIABLELISTRESPONSE_H_
