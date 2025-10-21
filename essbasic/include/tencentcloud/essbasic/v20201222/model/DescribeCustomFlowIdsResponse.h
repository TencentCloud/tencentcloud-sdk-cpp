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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBECUSTOMFLOWIDSRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBECUSTOMFLOWIDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/CustomFlowIdMap.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * DescribeCustomFlowIds返回参数结构体
                */
                class DescribeCustomFlowIdsResponse : public AbstractModel
                {
                public:
                    DescribeCustomFlowIdsResponse();
                    ~DescribeCustomFlowIdsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义流程 id 映射列表
                     * @return CustomIdList 自定义流程 id 映射列表
                     * 
                     */
                    std::vector<CustomFlowIdMap> GetCustomIdList() const;

                    /**
                     * 判断参数 CustomIdList 是否已赋值
                     * @return CustomIdList 是否已赋值
                     * 
                     */
                    bool CustomIdListHasBeenSet() const;

                private:

                    /**
                     * 自定义流程 id 映射列表
                     */
                    std::vector<CustomFlowIdMap> m_customIdList;
                    bool m_customIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBECUSTOMFLOWIDSRESPONSE_H_
