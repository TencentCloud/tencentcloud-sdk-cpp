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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEACCESSGROUPSRESPONSE_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEACCESSGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chdfs/v20201112/model/AccessGroup.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * DescribeAccessGroups返回参数结构体
                */
                class DescribeAccessGroupsResponse : public AbstractModel
                {
                public:
                    DescribeAccessGroupsResponse();
                    ~DescribeAccessGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取权限组列表
                     * @return AccessGroups 权限组列表
                     * 
                     */
                    std::vector<AccessGroup> GetAccessGroups() const;

                    /**
                     * 判断参数 AccessGroups 是否已赋值
                     * @return AccessGroups 是否已赋值
                     * 
                     */
                    bool AccessGroupsHasBeenSet() const;

                private:

                    /**
                     * 权限组列表
                     */
                    std::vector<AccessGroup> m_accessGroups;
                    bool m_accessGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEACCESSGROUPSRESPONSE_H_
