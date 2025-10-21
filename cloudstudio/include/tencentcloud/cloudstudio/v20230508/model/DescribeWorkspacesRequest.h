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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20230508_MODEL_DESCRIBEWORKSPACESREQUEST_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20230508_MODEL_DESCRIBEWORKSPACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20230508
        {
            namespace Model
            {
                /**
                * DescribeWorkspaces请求参数结构体
                */
                class DescribeWorkspacesRequest : public AbstractModel
                {
                public:
                    DescribeWorkspacesRequest();
                    ~DescribeWorkspacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作空间名称过滤条件
                     * @return Name 工作空间名称过滤条件
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置工作空间名称过滤条件
                     * @param _name 工作空间名称过滤条件
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 工作空间名称过滤条件
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20230508_MODEL_DESCRIBEWORKSPACESREQUEST_H_
