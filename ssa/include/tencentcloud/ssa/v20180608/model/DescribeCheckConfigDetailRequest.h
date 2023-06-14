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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECHECKCONFIGDETAILREQUEST_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECHECKCONFIGDETAILREQUEST_H_

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
                * DescribeCheckConfigDetail请求参数结构体
                */
                class DescribeCheckConfigDetailRequest : public AbstractModel
                {
                public:
                    DescribeCheckConfigDetailRequest();
                    ~DescribeCheckConfigDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取检查项ID
                     * @return Id 检查项ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置检查项ID
                     * @param _id 检查项ID
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
                     * 检查项ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECHECKCONFIGDETAILREQUEST_H_
