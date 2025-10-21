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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEAGGRSOFTCATEGORYSOFTLISTREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEAGGRSOFTCATEGORYSOFTLISTREQUEST_H_

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
                * DescribeAggrSoftCategorySoftList请求参数结构体
                */
                class DescribeAggrSoftCategorySoftListRequest : public AbstractModel
                {
                public:
                    DescribeAggrSoftCategorySoftListRequest();
                    ~DescribeAggrSoftCategorySoftListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件、分页参数<li>Name - String - 过滤支持：是 - 操作符:eq,neq,like,ilike,nlike - 排序支持：是 - 按类别名称过滤或排序。</li><li>CorpName - String - 过滤支持：是 - 操作符:eq,neq,like,ilike,nlike - 排序支持：是 - 按CorpName过滤或排序。</li><li>Version - String - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按版本排序。</li><li>InstalledDeviceCount - int - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按安装设备数量排序。</li><li>GenuineRate - float - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按正版率排序。</li><li>AuthNum - int - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按授权数量排序。</li><li>CategoryNamePath - String - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按类别路径名排序。</li>
                     * @return Condition 过滤条件、分页参数<li>Name - String - 过滤支持：是 - 操作符:eq,neq,like,ilike,nlike - 排序支持：是 - 按类别名称过滤或排序。</li><li>CorpName - String - 过滤支持：是 - 操作符:eq,neq,like,ilike,nlike - 排序支持：是 - 按CorpName过滤或排序。</li><li>Version - String - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按版本排序。</li><li>InstalledDeviceCount - int - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按安装设备数量排序。</li><li>GenuineRate - float - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按正版率排序。</li><li>AuthNum - int - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按授权数量排序。</li><li>CategoryNamePath - String - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按类别路径名排序。</li>
                     * 
                     */
                    Condition GetCondition() const;

                    /**
                     * 设置过滤条件、分页参数<li>Name - String - 过滤支持：是 - 操作符:eq,neq,like,ilike,nlike - 排序支持：是 - 按类别名称过滤或排序。</li><li>CorpName - String - 过滤支持：是 - 操作符:eq,neq,like,ilike,nlike - 排序支持：是 - 按CorpName过滤或排序。</li><li>Version - String - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按版本排序。</li><li>InstalledDeviceCount - int - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按安装设备数量排序。</li><li>GenuineRate - float - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按正版率排序。</li><li>AuthNum - int - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按授权数量排序。</li><li>CategoryNamePath - String - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按类别路径名排序。</li>
                     * @param _condition 过滤条件、分页参数<li>Name - String - 过滤支持：是 - 操作符:eq,neq,like,ilike,nlike - 排序支持：是 - 按类别名称过滤或排序。</li><li>CorpName - String - 过滤支持：是 - 操作符:eq,neq,like,ilike,nlike - 排序支持：是 - 按CorpName过滤或排序。</li><li>Version - String - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按版本排序。</li><li>InstalledDeviceCount - int - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按安装设备数量排序。</li><li>GenuineRate - float - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按正版率排序。</li><li>AuthNum - int - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按授权数量排序。</li><li>CategoryNamePath - String - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按类别路径名排序。</li>
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
                     * 获取操作系统类型（0: win，1：linux，2: mac，4：android，5：ios 默认值0）
                     * @return OsType 操作系统类型（0: win，1：linux，2: mac，4：android，5：ios 默认值0）
                     * 
                     */
                    int64_t GetOsType() const;

                    /**
                     * 设置操作系统类型（0: win，1：linux，2: mac，4：android，5：ios 默认值0）
                     * @param _osType 操作系统类型（0: win，1：linux，2: mac，4：android，5：ios 默认值0）
                     * 
                     */
                    void SetOsType(const int64_t& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                private:

                    /**
                     * 过滤条件、分页参数<li>Name - String - 过滤支持：是 - 操作符:eq,neq,like,ilike,nlike - 排序支持：是 - 按类别名称过滤或排序。</li><li>CorpName - String - 过滤支持：是 - 操作符:eq,neq,like,ilike,nlike - 排序支持：是 - 按CorpName过滤或排序。</li><li>Version - String - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按版本排序。</li><li>InstalledDeviceCount - int - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按安装设备数量排序。</li><li>GenuineRate - float - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按正版率排序。</li><li>AuthNum - int - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按授权数量排序。</li><li>CategoryNamePath - String - 过滤支持：否 - 操作符:eq,like - 排序支持：是 - 按类别路径名排序。</li>
                     */
                    Condition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 操作系统类型（0: win，1：linux，2: mac，4：android，5：ios 默认值0）
                     */
                    int64_t m_osType;
                    bool m_osTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEAGGRSOFTCATEGORYSOFTLISTREQUEST_H_
