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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEAGENTDUTYTASKDETAILREQUEST_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEAGENTDUTYTASKDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdai/v20250717/model/Parameter.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * DescribeAgentDutyTaskDetail请求参数结构体
                */
                class DescribeAgentDutyTaskDetailRequest : public AbstractModel
                {
                public:
                    DescribeAgentDutyTaskDetailRequest();
                    ~DescribeAgentDutyTaskDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务参数列表
                     * @return Parameters 业务参数列表
                     * 
                     */
                    std::vector<Parameter> GetParameters() const;

                    /**
                     * 设置业务参数列表
                     * @param _parameters 业务参数列表
                     * 
                     */
                    void SetParameters(const std::vector<Parameter>& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                private:

                    /**
                     * 业务参数列表
                     */
                    std::vector<Parameter> m_parameters;
                    bool m_parametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEAGENTDUTYTASKDETAILREQUEST_H_
