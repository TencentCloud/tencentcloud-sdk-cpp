/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENVPOSTPAIDDEDUCTRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENVPOSTPAIDDEDUCTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/PostPaidEnvDeductInfo.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeEnvPostpaidDeduct返回参数结构体
                */
                class DescribeEnvPostpaidDeductResponse : public AbstractModel
                {
                public:
                    DescribeEnvPostpaidDeductResponse();
                    ~DescribeEnvPostpaidDeductResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取指标抵扣详情列表
                     * @return PostPaidEnvDeductInfoList 指标抵扣详情列表
                     * 
                     */
                    std::vector<PostPaidEnvDeductInfo> GetPostPaidEnvDeductInfoList() const;

                    /**
                     * 判断参数 PostPaidEnvDeductInfoList 是否已赋值
                     * @return PostPaidEnvDeductInfoList 是否已赋值
                     * 
                     */
                    bool PostPaidEnvDeductInfoListHasBeenSet() const;

                private:

                    /**
                     * 指标抵扣详情列表
                     */
                    std::vector<PostPaidEnvDeductInfo> m_postPaidEnvDeductInfoList;
                    bool m_postPaidEnvDeductInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENVPOSTPAIDDEDUCTRESPONSE_H_
