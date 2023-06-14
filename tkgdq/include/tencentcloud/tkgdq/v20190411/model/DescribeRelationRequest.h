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

#ifndef TENCENTCLOUD_TKGDQ_V20190411_MODEL_DESCRIBERELATIONREQUEST_H_
#define TENCENTCLOUD_TKGDQ_V20190411_MODEL_DESCRIBERELATIONREQUEST_H_

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
                * DescribeRelation请求参数结构体
                */
                class DescribeRelationRequest : public AbstractModel
                {
                public:
                    DescribeRelationRequest();
                    ~DescribeRelationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取输入第一个实体
                     * @return LeftEntityName 输入第一个实体
                     * 
                     */
                    std::string GetLeftEntityName() const;

                    /**
                     * 设置输入第一个实体
                     * @param _leftEntityName 输入第一个实体
                     * 
                     */
                    void SetLeftEntityName(const std::string& _leftEntityName);

                    /**
                     * 判断参数 LeftEntityName 是否已赋值
                     * @return LeftEntityName 是否已赋值
                     * 
                     */
                    bool LeftEntityNameHasBeenSet() const;

                    /**
                     * 获取输入第二个实体
                     * @return RightEntityName 输入第二个实体
                     * 
                     */
                    std::string GetRightEntityName() const;

                    /**
                     * 设置输入第二个实体
                     * @param _rightEntityName 输入第二个实体
                     * 
                     */
                    void SetRightEntityName(const std::string& _rightEntityName);

                    /**
                     * 判断参数 RightEntityName 是否已赋值
                     * @return RightEntityName 是否已赋值
                     * 
                     */
                    bool RightEntityNameHasBeenSet() const;

                private:

                    /**
                     * 输入第一个实体
                     */
                    std::string m_leftEntityName;
                    bool m_leftEntityNameHasBeenSet;

                    /**
                     * 输入第二个实体
                     */
                    std::string m_rightEntityName;
                    bool m_rightEntityNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKGDQ_V20190411_MODEL_DESCRIBERELATIONREQUEST_H_
