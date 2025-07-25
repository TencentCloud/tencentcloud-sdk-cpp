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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECOMPLIANCEDETAILREQUEST_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECOMPLIANCEDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeComplianceDetail请求参数结构体
                */
                class DescribeComplianceDetailRequest : public AbstractModel
                {
                public:
                    DescribeComplianceDetailRequest();
                    ~DescribeComplianceDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取检查项uuid
                     * @return Id 检查项uuid
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置检查项uuid
                     * @param _id 检查项uuid
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 检查项uuid
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECOMPLIANCEDETAILREQUEST_H_
