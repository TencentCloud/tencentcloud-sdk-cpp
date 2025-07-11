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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFLOWCOMPONENTSRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFLOWCOMPONENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/RecipientComponentInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeFlowComponents返回参数结构体
                */
                class DescribeFlowComponentsResponse : public AbstractModel
                {
                public:
                    DescribeFlowComponentsResponse();
                    ~DescribeFlowComponentsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取合同流程关联的填写控件信息，包括填写控件的归属方以及是否填写等内容。
                     * @return RecipientComponentInfos 合同流程关联的填写控件信息，包括填写控件的归属方以及是否填写等内容。
                     * 
                     */
                    std::vector<RecipientComponentInfo> GetRecipientComponentInfos() const;

                    /**
                     * 判断参数 RecipientComponentInfos 是否已赋值
                     * @return RecipientComponentInfos 是否已赋值
                     * 
                     */
                    bool RecipientComponentInfosHasBeenSet() const;

                private:

                    /**
                     * 合同流程关联的填写控件信息，包括填写控件的归属方以及是否填写等内容。
                     */
                    std::vector<RecipientComponentInfo> m_recipientComponentInfos;
                    bool m_recipientComponentInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFLOWCOMPONENTSRESPONSE_H_
