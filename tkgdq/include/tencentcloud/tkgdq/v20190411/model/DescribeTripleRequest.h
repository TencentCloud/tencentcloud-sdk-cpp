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

#ifndef TENCENTCLOUD_TKGDQ_V20190411_MODEL_DESCRIBETRIPLEREQUEST_H_
#define TENCENTCLOUD_TKGDQ_V20190411_MODEL_DESCRIBETRIPLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tkgdq
    {
        namespace V20190411
        {
            namespace Model
            {
                /**
                * DescribeTriple请求参数结构体
                */
                class DescribeTripleRequest : public AbstractModel
                {
                public:
                    DescribeTripleRequest();
                    ~DescribeTripleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取三元组查询条件
                     * @return TripleCondition 三元组查询条件
                     * 
                     */
                    std::string GetTripleCondition() const;

                    /**
                     * 设置三元组查询条件
                     * @param _tripleCondition 三元组查询条件
                     * 
                     */
                    void SetTripleCondition(const std::string& _tripleCondition);

                    /**
                     * 判断参数 TripleCondition 是否已赋值
                     * @return TripleCondition 是否已赋值
                     * 
                     */
                    bool TripleConditionHasBeenSet() const;

                private:

                    /**
                     * 三元组查询条件
                     */
                    std::string m_tripleCondition;
                    bool m_tripleConditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKGDQ_V20190411_MODEL_DESCRIBETRIPLEREQUEST_H_
