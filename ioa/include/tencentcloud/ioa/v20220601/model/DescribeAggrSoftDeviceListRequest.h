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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEAGGRSOFTDEVICELISTREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEAGGRSOFTDEVICELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/Condition.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * DescribeAggrSoftDeviceList请求参数结构体
                */
                class DescribeAggrSoftDeviceListRequest : public AbstractModel
                {
                public:
                    DescribeAggrSoftDeviceListRequest();
                    ~DescribeAggrSoftDeviceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件
                     * @return Condition 过滤条件
                     * 
                     */
                    Condition GetCondition() const;

                    /**
                     * 设置过滤条件
                     * @param _condition 过滤条件
                     * 
                     */
                    void SetCondition(const Condition& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取软件名
                     * @return Name 软件名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置软件名
                     * @param _name 软件名
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
                     * 获取0:win 2:mac
                     * @return OsType 0:win 2:mac
                     * 
                     */
                    int64_t GetOsType() const;

                    /**
                     * 设置0:win 2:mac
                     * @param _osType 0:win 2:mac
                     * 
                     */
                    void SetOsType(const int64_t& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取分组ID
                     * @return GroupId 分组ID
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置分组ID
                     * @param _groupId 分组ID
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取分组类型 1-终端分组 2-组织架构(账号分组) 3/4-虚拟分组
                     * @return GroupType 分组类型 1-终端分组 2-组织架构(账号分组) 3/4-虚拟分组
                     * 
                     */
                    int64_t GetGroupType() const;

                    /**
                     * 设置分组类型 1-终端分组 2-组织架构(账号分组) 3/4-虚拟分组
                     * @param _groupType 分组类型 1-终端分组 2-组织架构(账号分组) 3/4-虚拟分组
                     * 
                     */
                    void SetGroupType(const int64_t& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                private:

                    /**
                     * 过滤条件
                     */
                    Condition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 软件名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 0:win 2:mac
                     */
                    int64_t m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * 分组ID
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 分组类型 1-终端分组 2-组织架构(账号分组) 3/4-虚拟分组
                     */
                    int64_t m_groupType;
                    bool m_groupTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEAGGRSOFTDEVICELISTREQUEST_H_
