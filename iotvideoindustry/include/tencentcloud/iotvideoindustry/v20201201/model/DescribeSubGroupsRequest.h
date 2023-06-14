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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBESUBGROUPSREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBESUBGROUPSREQUEST_H_

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
                * DescribeSubGroups请求参数结构体
                */
                class DescribeSubGroupsRequest : public AbstractModel
                {
                public:
                    DescribeSubGroupsRequest();
                    ~DescribeSubGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分组ID
                     * @return GroupId 分组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组ID
                     * @param _groupId 分组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取分组名称，根据名称模糊匹配子分组时为必填
                     * @return GroupName 分组名称，根据名称模糊匹配子分组时为必填
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置分组名称，根据名称模糊匹配子分组时为必填
                     * @param _groupName 分组名称，根据名称模糊匹配子分组时为必填
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取偏移量，默认0
                     * @return Offset 偏移量，默认0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认0
                     * @param _offset 偏移量，默认0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制数，默认200
                     * @return Limit 限制数，默认200
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数，默认200
                     * @param _limit 限制数，默认200
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取是否统计子分组下的设备数，0：统计，1：不统计
                     * @return OnlyGroup 是否统计子分组下的设备数，0：统计，1：不统计
                     * 
                     */
                    int64_t GetOnlyGroup() const;

                    /**
                     * 设置是否统计子分组下的设备数，0：统计，1：不统计
                     * @param _onlyGroup 是否统计子分组下的设备数，0：统计，1：不统计
                     * 
                     */
                    void SetOnlyGroup(const int64_t& _onlyGroup);

                    /**
                     * 判断参数 OnlyGroup 是否已赋值
                     * @return OnlyGroup 是否已赋值
                     * 
                     */
                    bool OnlyGroupHasBeenSet() const;

                private:

                    /**
                     * 分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 分组名称，根据名称模糊匹配子分组时为必填
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 偏移量，默认0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数，默认200
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 是否统计子分组下的设备数，0：统计，1：不统计
                     */
                    int64_t m_onlyGroup;
                    bool m_onlyGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBESUBGROUPSREQUEST_H_
