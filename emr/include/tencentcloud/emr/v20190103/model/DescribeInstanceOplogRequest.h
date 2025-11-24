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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCEOPLOGREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCEOPLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/SearchItem.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeInstanceOplog请求参数结构体
                */
                class DescribeInstanceOplogRequest : public AbstractModel
                {
                public:
                    DescribeInstanceOplogRequest();
                    ~DescribeInstanceOplogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EMR实例ID
                     * @return InstanceId EMR实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置EMR实例ID
                     * @param _instanceId EMR实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取页大小
                     * @return Limit 页大小
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置页大小
                     * @param _limit 页大小
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取开头时间时间戳
                     * @return StartTime 开头时间时间戳
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置开头时间时间戳
                     * @param _startTime 开头时间时间戳
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结尾时间时间戳
                     * @return EndTime 结尾时间时间戳
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结尾时间时间戳
                     * @param _endTime 结尾时间时间戳
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取搜索项数组
                     * @return SearchFields 搜索项数组
                     * 
                     */
                    std::vector<SearchItem> GetSearchFields() const;

                    /**
                     * 设置搜索项数组
                     * @param _searchFields 搜索项数组
                     * 
                     */
                    void SetSearchFields(const std::vector<SearchItem>& _searchFields);

                    /**
                     * 判断参数 SearchFields 是否已赋值
                     * @return SearchFields 是否已赋值
                     * 
                     */
                    bool SearchFieldsHasBeenSet() const;

                    /**
                     * 获取集群、节点、组件
                     * @return Operand 集群、节点、组件
                     * 
                     */
                    std::string GetOperand() const;

                    /**
                     * 设置集群、节点、组件
                     * @param _operand 集群、节点、组件
                     * 
                     */
                    void SetOperand(const std::string& _operand);

                    /**
                     * 判断参数 Operand 是否已赋值
                     * @return Operand 是否已赋值
                     * 
                     */
                    bool OperandHasBeenSet() const;

                    /**
                     * 获取一般、危险、高危
                     * @return SecurityLevel 一般、危险、高危
                     * 
                     */
                    std::string GetSecurityLevel() const;

                    /**
                     * 设置一般、危险、高危
                     * @param _securityLevel 一般、危险、高危
                     * 
                     */
                    void SetSecurityLevel(const std::string& _securityLevel);

                    /**
                     * 判断参数 SecurityLevel 是否已赋值
                     * @return SecurityLevel 是否已赋值
                     * 
                     */
                    bool SecurityLevelHasBeenSet() const;

                private:

                    /**
                     * EMR实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 页大小
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 开头时间时间戳
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结尾时间时间戳
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 搜索项数组
                     */
                    std::vector<SearchItem> m_searchFields;
                    bool m_searchFieldsHasBeenSet;

                    /**
                     * 集群、节点、组件
                     */
                    std::string m_operand;
                    bool m_operandHasBeenSet;

                    /**
                     * 一般、危险、高危
                     */
                    std::string m_securityLevel;
                    bool m_securityLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCEOPLOGREQUEST_H_
