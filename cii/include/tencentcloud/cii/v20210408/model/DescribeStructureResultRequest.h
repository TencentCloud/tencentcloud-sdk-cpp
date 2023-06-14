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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBESTRUCTURERESULTREQUEST_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBESTRUCTURERESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * DescribeStructureResult请求参数结构体
                */
                class DescribeStructureResultRequest : public AbstractModel
                {
                public:
                    DescribeStructureResultRequest();
                    ~DescribeStructureResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取创建任务时返回的主任务ID
                     * @return MainTaskId 创建任务时返回的主任务ID
                     * 
                     */
                    std::string GetMainTaskId() const;

                    /**
                     * 设置创建任务时返回的主任务ID
                     * @param _mainTaskId 创建任务时返回的主任务ID
                     * 
                     */
                    void SetMainTaskId(const std::string& _mainTaskId);

                    /**
                     * 判断参数 MainTaskId 是否已赋值
                     * @return MainTaskId 是否已赋值
                     * 
                     */
                    bool MainTaskIdHasBeenSet() const;

                private:

                    /**
                     * 创建任务时返回的主任务ID
                     */
                    std::string m_mainTaskId;
                    bool m_mainTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBESTRUCTURERESULTREQUEST_H_
