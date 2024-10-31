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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEACCOUNTGROUPSREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEACCOUNTGROUPSREQUEST_H_

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
                * DescribeAccountGroups请求参数结构体
                */
                class DescribeAccountGroupsRequest : public AbstractModel
                {
                public:
                    DescribeAccountGroupsRequest();
                    ~DescribeAccountGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索范围：0-仅当前分组的直接子组，1-当前分组的所有子组。默认为0。
                     * @return Deepin 搜索范围：0-仅当前分组的直接子组，1-当前分组的所有子组。默认为0。
                     * 
                     */
                    int64_t GetDeepin() const;

                    /**
                     * 设置搜索范围：0-仅当前分组的直接子组，1-当前分组的所有子组。默认为0。
                     * @param _deepin 搜索范围：0-仅当前分组的直接子组，1-当前分组的所有子组。默认为0。
                     * 
                     */
                    void SetDeepin(const int64_t& _deepin);

                    /**
                     * 判断参数 Deepin 是否已赋值
                     * @return Deepin 是否已赋值
                     * 
                     */
                    bool DeepinHasBeenSet() const;

                    /**
                     * 获取查询条件

过滤参数
1、Name，string类型，按分组名过滤
是否必填：否
操作符: like

排序条件
1、Itime，string类型，按分组创建时间排序
是否必填：否
2、Utime，string类型，按分组更新时间排序
是否必填：否
                     * @return Condition 查询条件

过滤参数
1、Name，string类型，按分组名过滤
是否必填：否
操作符: like

排序条件
1、Itime，string类型，按分组创建时间排序
是否必填：否
2、Utime，string类型，按分组更新时间排序
是否必填：否
                     * 
                     */
                    Condition GetCondition() const;

                    /**
                     * 设置查询条件

过滤参数
1、Name，string类型，按分组名过滤
是否必填：否
操作符: like

排序条件
1、Itime，string类型，按分组创建时间排序
是否必填：否
2、Utime，string类型，按分组更新时间排序
是否必填：否
                     * @param _condition 查询条件

过滤参数
1、Name，string类型，按分组名过滤
是否必填：否
操作符: like

排序条件
1、Itime，string类型，按分组创建时间排序
是否必填：否
2、Utime，string类型，按分组更新时间排序
是否必填：否
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
                     * 获取父分组ID，获取该分组下的子组信息。默认查询全网根分组下子组信息。
                     * @return ParentId 父分组ID，获取该分组下的子组信息。默认查询全网根分组下子组信息。
                     * 
                     */
                    int64_t GetParentId() const;

                    /**
                     * 设置父分组ID，获取该分组下的子组信息。默认查询全网根分组下子组信息。
                     * @param _parentId 父分组ID，获取该分组下的子组信息。默认查询全网根分组下子组信息。
                     * 
                     */
                    void SetParentId(const int64_t& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                private:

                    /**
                     * 搜索范围：0-仅当前分组的直接子组，1-当前分组的所有子组。默认为0。
                     */
                    int64_t m_deepin;
                    bool m_deepinHasBeenSet;

                    /**
                     * 查询条件

过滤参数
1、Name，string类型，按分组名过滤
是否必填：否
操作符: like

排序条件
1、Itime，string类型，按分组创建时间排序
是否必填：否
2、Utime，string类型，按分组更新时间排序
是否必填：否
                     */
                    Condition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 父分组ID，获取该分组下的子组信息。默认查询全网根分组下子组信息。
                     */
                    int64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEACCOUNTGROUPSREQUEST_H_
