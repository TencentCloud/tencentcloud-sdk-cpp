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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBECUSTOMPERSONDETAILREQUEST_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBECUSTOMPERSONDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * DescribeCustomPersonDetail请求参数结构体
                */
                class DescribeCustomPersonDetailRequest : public AbstractModel
                {
                public:
                    DescribeCustomPersonDetailRequest();
                    ~DescribeCustomPersonDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义人物Id
                     * @return PersonId 自定义人物Id
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置自定义人物Id
                     * @param _personId 自定义人物Id
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                private:

                    /**
                     * 自定义人物Id
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBECUSTOMPERSONDETAILREQUEST_H_
