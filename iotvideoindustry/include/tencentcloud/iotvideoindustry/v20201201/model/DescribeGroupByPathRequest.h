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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEGROUPBYPATHREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEGROUPBYPATHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeGroupByPath请求参数结构体
                */
                class DescribeGroupByPathRequest : public AbstractModel
                {
                public:
                    DescribeGroupByPathRequest();
                    ~DescribeGroupByPathRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分组路径，格式为/aaa(/bbb/ccc)
                     * @return GroupPath 分组路径，格式为/aaa(/bbb/ccc)
                     * 
                     */
                    std::string GetGroupPath() const;

                    /**
                     * 设置分组路径，格式为/aaa(/bbb/ccc)
                     * @param _groupPath 分组路径，格式为/aaa(/bbb/ccc)
                     * 
                     */
                    void SetGroupPath(const std::string& _groupPath);

                    /**
                     * 判断参数 GroupPath 是否已赋值
                     * @return GroupPath 是否已赋值
                     * 
                     */
                    bool GroupPathHasBeenSet() const;

                private:

                    /**
                     * 分组路径，格式为/aaa(/bbb/ccc)
                     */
                    std::string m_groupPath;
                    bool m_groupPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEGROUPBYPATHREQUEST_H_
