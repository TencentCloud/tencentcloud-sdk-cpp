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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECHECKCONFIGDETAILRESPONSE_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECHECKCONFIGDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/CheckConfigDetail.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCheckConfigDetail返回参数结构体
                */
                class DescribeCheckConfigDetailResponse : public AbstractModel
                {
                public:
                    DescribeCheckConfigDetailResponse();
                    ~DescribeCheckConfigDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取检查项详情
                     * @return CheckConfigDetail 检查项详情
                     * 
                     */
                    CheckConfigDetail GetCheckConfigDetail() const;

                    /**
                     * 判断参数 CheckConfigDetail 是否已赋值
                     * @return CheckConfigDetail 是否已赋值
                     * 
                     */
                    bool CheckConfigDetailHasBeenSet() const;

                private:

                    /**
                     * 检查项详情
                     */
                    CheckConfigDetail m_checkConfigDetail;
                    bool m_checkConfigDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECHECKCONFIGDETAILRESPONSE_H_
