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

#ifndef TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBESUBPROJECTREQUEST_H_
#define TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBESUBPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Solar
    {
        namespace V20181011
        {
            namespace Model
            {
                /**
                * DescribeSubProject请求参数结构体
                */
                class DescribeSubProjectRequest : public AbstractModel
                {
                public:
                    DescribeSubProjectRequest();
                    ~DescribeSubProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取子项目id
                     * @return SubProjectId 子项目id
                     * 
                     */
                    std::string GetSubProjectId() const;

                    /**
                     * 设置子项目id
                     * @param _subProjectId 子项目id
                     * 
                     */
                    void SetSubProjectId(const std::string& _subProjectId);

                    /**
                     * 判断参数 SubProjectId 是否已赋值
                     * @return SubProjectId 是否已赋值
                     * 
                     */
                    bool SubProjectIdHasBeenSet() const;

                private:

                    /**
                     * 子项目id
                     */
                    std::string m_subProjectId;
                    bool m_subProjectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBESUBPROJECTREQUEST_H_
