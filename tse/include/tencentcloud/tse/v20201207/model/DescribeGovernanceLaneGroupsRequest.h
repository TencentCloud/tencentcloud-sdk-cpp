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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCELANEGROUPSREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCELANEGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeGovernanceLaneGroups请求参数结构体
                */
                class DescribeGovernanceLaneGroupsRequest : public AbstractModel
                {
                public:
                    DescribeGovernanceLaneGroupsRequest();
                    ~DescribeGovernanceLaneGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎实例ID
                     * @return InstanceId 引擎实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置引擎实例ID
                     * @param _instanceId 引擎实例ID
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
                     * 获取分页查询偏移量
                     * @return Offset 分页查询偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页查询偏移量
                     * @param _offset 分页查询偏移量
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
                     * 获取分页条数
                     * @return Limit 分页条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页条数
                     * @param _limit 分页条数
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
                     * 获取泳道名称
                     * @return Name 泳道名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置泳道名称
                     * @param _name 泳道名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取泳道ID
                     * @return GroupID 泳道ID
                     * 
                     */
                    std::string GetGroupID() const;

                    /**
                     * 设置泳道ID
                     * @param _groupID 泳道ID
                     * 
                     */
                    void SetGroupID(const std::string& _groupID);

                    /**
                     * 判断参数 GroupID 是否已赋值
                     * @return GroupID 是否已赋值
                     * 
                     */
                    bool GroupIDHasBeenSet() const;

                    /**
                     * 获取是否展示泳道规则列表
                     * @return Brief 是否展示泳道规则列表
                     * 
                     */
                    bool GetBrief() const;

                    /**
                     * 设置是否展示泳道规则列表
                     * @param _brief 是否展示泳道规则列表
                     * 
                     */
                    void SetBrief(const bool& _brief);

                    /**
                     * 判断参数 Brief 是否已赋值
                     * @return Brief 是否已赋值
                     * 
                     */
                    bool BriefHasBeenSet() const;

                private:

                    /**
                     * 引擎实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 分页查询偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 泳道名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 泳道ID
                     */
                    std::string m_groupID;
                    bool m_groupIDHasBeenSet;

                    /**
                     * 是否展示泳道规则列表
                     */
                    bool m_brief;
                    bool m_briefHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCELANEGROUPSREQUEST_H_
