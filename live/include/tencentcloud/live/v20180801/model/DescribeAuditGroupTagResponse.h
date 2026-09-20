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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAUDITGROUPTAGRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAUDITGROUPTAGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/AuditGroupInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeAuditGroupTag返回参数结构体
                */
                class DescribeAuditGroupTagResponse : public AbstractModel
                {
                public:
                    DescribeAuditGroupTagResponse();
                    ~DescribeAuditGroupTagResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>标签组分类数据按类型返回。</p>
                     * @return GroupTypeList <p>标签组分类数据按类型返回。</p>
                     * 
                     */
                    std::vector<AuditGroupInfo> GetGroupTypeList() const;

                    /**
                     * 判断参数 GroupTypeList 是否已赋值
                     * @return GroupTypeList 是否已赋值
                     * 
                     */
                    bool GroupTypeListHasBeenSet() const;

                private:

                    /**
                     * <p>标签组分类数据按类型返回。</p>
                     */
                    std::vector<AuditGroupInfo> m_groupTypeList;
                    bool m_groupTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAUDITGROUPTAGRESPONSE_H_
