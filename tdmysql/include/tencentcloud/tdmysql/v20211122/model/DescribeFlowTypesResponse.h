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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEFLOWTYPESRESPONSE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEFLOWTYPESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/FlowType.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DescribeFlowTypes返回参数结构体
                */
                class DescribeFlowTypesResponse : public AbstractModel
                {
                public:
                    DescribeFlowTypesResponse();
                    ~DescribeFlowTypesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务类型信息，供前端下拉筛选使用</p>
                     * @return FlowTypes <p>任务类型信息，供前端下拉筛选使用</p>
                     * 
                     */
                    std::vector<FlowType> GetFlowTypes() const;

                    /**
                     * 判断参数 FlowTypes 是否已赋值
                     * @return FlowTypes 是否已赋值
                     * 
                     */
                    bool FlowTypesHasBeenSet() const;

                private:

                    /**
                     * <p>任务类型信息，供前端下拉筛选使用</p>
                     */
                    std::vector<FlowType> m_flowTypes;
                    bool m_flowTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEFLOWTYPESRESPONSE_H_
