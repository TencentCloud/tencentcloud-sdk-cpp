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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEABTESTCONFIGREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEABTESTCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeABTestConfig请求参数结构体
                */
                class DescribeABTestConfigRequest : public AbstractModel
                {
                public:
                    DescribeABTestConfigRequest();
                    ~DescribeABTestConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取灰度项目名称
                     * @return ProjectName 灰度项目名称
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置灰度项目名称
                     * @param _projectName 灰度项目名称
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                private:

                    /**
                     * 灰度项目名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEABTESTCONFIGREQUEST_H_
