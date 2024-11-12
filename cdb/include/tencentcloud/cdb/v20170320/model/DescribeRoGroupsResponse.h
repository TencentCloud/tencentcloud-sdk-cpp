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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEROGROUPSRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEROGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RoGroup.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeRoGroups返回参数结构体
                */
                class DescribeRoGroupsResponse : public AbstractModel
                {
                public:
                    DescribeRoGroupsResponse();
                    ~DescribeRoGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取RO 组信息数组，一个实例可关联多个 RO 组。
                     * @return RoGroups RO 组信息数组，一个实例可关联多个 RO 组。
                     * 
                     */
                    std::vector<RoGroup> GetRoGroups() const;

                    /**
                     * 判断参数 RoGroups 是否已赋值
                     * @return RoGroups 是否已赋值
                     * 
                     */
                    bool RoGroupsHasBeenSet() const;

                private:

                    /**
                     * RO 组信息数组，一个实例可关联多个 RO 组。
                     */
                    std::vector<RoGroup> m_roGroups;
                    bool m_roGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEROGROUPSRESPONSE_H_
