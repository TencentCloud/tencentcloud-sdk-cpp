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

#ifndef TENCENTCLOUD_AMS_V20200608_MODEL_DESCRIBEAUDIOSTATREQUEST_H_
#define TENCENTCLOUD_AMS_V20200608_MODEL_DESCRIBEAUDIOSTATREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ams/v20200608/model/Filters.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20200608
        {
            namespace Model
            {
                /**
                * DescribeAudioStat请求参数结构体
                */
                class DescribeAudioStatRequest : public AbstractModel
                {
                public:
                    DescribeAudioStatRequest();
                    ~DescribeAudioStatRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取审核类型 1: 机器审核; 2: 人工审核
                     * @return AuditType 审核类型 1: 机器审核; 2: 人工审核
                     * 
                     */
                    int64_t GetAuditType() const;

                    /**
                     * 设置审核类型 1: 机器审核; 2: 人工审核
                     * @param _auditType 审核类型 1: 机器审核; 2: 人工审核
                     * 
                     */
                    void SetAuditType(const int64_t& _auditType);

                    /**
                     * 判断参数 AuditType 是否已赋值
                     * @return AuditType 是否已赋值
                     * 
                     */
                    bool AuditTypeHasBeenSet() const;

                    /**
                     * 获取查询条件
                     * @return Filters 查询条件
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置查询条件
                     * @param _filters 查询条件
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 审核类型 1: 机器审核; 2: 人工审核
                     */
                    int64_t m_auditType;
                    bool m_auditTypeHasBeenSet;

                    /**
                     * 查询条件
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20200608_MODEL_DESCRIBEAUDIOSTATREQUEST_H_
