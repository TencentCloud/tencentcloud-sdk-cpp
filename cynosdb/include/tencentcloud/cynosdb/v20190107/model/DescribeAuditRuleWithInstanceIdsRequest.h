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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEAUDITRULEWITHINSTANCEIDSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEAUDITRULEWITHINSTANCEIDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeAuditRuleWithInstanceIds请求参数结构体
                */
                class DescribeAuditRuleWithInstanceIdsRequest : public AbstractModel
                {
                public:
                    DescribeAuditRuleWithInstanceIdsRequest();
                    ~DescribeAuditRuleWithInstanceIdsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。目前仅支持单个实例的查询。
                     * @return InstanceIds 实例ID。目前仅支持单个实例的查询。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例ID。目前仅支持单个实例的查询。
                     * @param _instanceIds 实例ID。目前仅支持单个实例的查询。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 实例ID。目前仅支持单个实例的查询。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEAUDITRULEWITHINSTANCEIDSREQUEST_H_
