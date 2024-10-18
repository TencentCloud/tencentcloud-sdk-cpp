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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGJOINOBJECTLISTRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGJOINOBJECTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/SecLogJoinObjectInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeSecLogJoinObjectList返回参数结构体
                */
                class DescribeSecLogJoinObjectListResponse : public AbstractModel
                {
                public:
                    DescribeSecLogJoinObjectListResponse();
                    ~DescribeSecLogJoinObjectListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数
                     * @return TotalCount 总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取接入对象列表
                     * @return List 接入对象列表
                     * 
                     */
                    std::vector<SecLogJoinObjectInfo> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取日志节点范围类型,0自选 1全部
                     * @return RangeType 日志节点范围类型,0自选 1全部
                     * 
                     */
                    int64_t GetRangeType() const;

                    /**
                     * 判断参数 RangeType 是否已赋值
                     * @return RangeType 是否已赋值
                     * 
                     */
                    bool RangeTypeHasBeenSet() const;

                    /**
                     * 获取新增资产是否自动加入，节点范围为全部时生效
                     * @return AutoJoin 新增资产是否自动加入，节点范围为全部时生效
                     * 
                     */
                    bool GetAutoJoin() const;

                    /**
                     * 判断参数 AutoJoin 是否已赋值
                     * @return AutoJoin 是否已赋值
                     * 
                     */
                    bool AutoJoinHasBeenSet() const;

                    /**
                     * 获取剔除节点数
                     * @return ExcludedCount 剔除节点数
                     * 
                     */
                    uint64_t GetExcludedCount() const;

                    /**
                     * 判断参数 ExcludedCount 是否已赋值
                     * @return ExcludedCount 是否已赋值
                     * 
                     */
                    bool ExcludedCountHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 接入对象列表
                     */
                    std::vector<SecLogJoinObjectInfo> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * 日志节点范围类型,0自选 1全部
                     */
                    int64_t m_rangeType;
                    bool m_rangeTypeHasBeenSet;

                    /**
                     * 新增资产是否自动加入，节点范围为全部时生效
                     */
                    bool m_autoJoin;
                    bool m_autoJoinHasBeenSet;

                    /**
                     * 剔除节点数
                     */
                    uint64_t m_excludedCount;
                    bool m_excludedCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGJOINOBJECTLISTRESPONSE_H_
