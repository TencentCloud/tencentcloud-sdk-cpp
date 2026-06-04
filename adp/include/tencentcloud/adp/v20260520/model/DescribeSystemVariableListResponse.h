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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESYSTEMVARIABLELISTRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESYSTEMVARIABLELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/SystemVariable.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeSystemVariableList返回参数结构体
                */
                class DescribeSystemVariableListResponse : public AbstractModel
                {
                public:
                    DescribeSystemVariableListResponse();
                    ~DescribeSystemVariableListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取system_variable_list
                     * @return SystemVariableList system_variable_list
                     * 
                     */
                    std::vector<SystemVariable> GetSystemVariableList() const;

                    /**
                     * 判断参数 SystemVariableList 是否已赋值
                     * @return SystemVariableList 是否已赋值
                     * 
                     */
                    bool SystemVariableListHasBeenSet() const;

                private:

                    /**
                     * system_variable_list
                     */
                    std::vector<SystemVariable> m_systemVariableList;
                    bool m_systemVariableListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESYSTEMVARIABLELISTRESPONSE_H_
