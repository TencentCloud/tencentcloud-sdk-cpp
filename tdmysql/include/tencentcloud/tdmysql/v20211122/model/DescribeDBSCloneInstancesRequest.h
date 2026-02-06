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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBSCLONEINSTANCESREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBSCLONEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DescribeDBSCloneInstances请求参数结构体
                */
                class DescribeDBSCloneInstancesRequest : public AbstractModel
                {
                public:
                    DescribeDBSCloneInstancesRequest();
                    ~DescribeDBSCloneInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>源实例ID</p>
                     * @return SourceInstanceId <p>源实例ID</p>
                     * 
                     */
                    std::string GetSourceInstanceId() const;

                    /**
                     * 设置<p>源实例ID</p>
                     * @param _sourceInstanceId <p>源实例ID</p>
                     * 
                     */
                    void SetSourceInstanceId(const std::string& _sourceInstanceId);

                    /**
                     * 判断参数 SourceInstanceId 是否已赋值
                     * @return SourceInstanceId 是否已赋值
                     * 
                     */
                    bool SourceInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>引擎类型</p>
                     * @return DBType <p>引擎类型</p>
                     * 
                     */
                    std::string GetDBType() const;

                    /**
                     * 设置<p>引擎类型</p>
                     * @param _dBType <p>引擎类型</p>
                     * 
                     */
                    void SetDBType(const std::string& _dBType);

                    /**
                     * 判断参数 DBType 是否已赋值
                     * @return DBType 是否已赋值
                     * 
                     */
                    bool DBTypeHasBeenSet() const;

                    /**
                     * 获取<p>结束创建时间</p>
                     * @return EndCreateTime <p>结束创建时间</p>
                     * 
                     */
                    std::string GetEndCreateTime() const;

                    /**
                     * 设置<p>结束创建时间</p>
                     * @param _endCreateTime <p>结束创建时间</p>
                     * 
                     */
                    void SetEndCreateTime(const std::string& _endCreateTime);

                    /**
                     * 判断参数 EndCreateTime 是否已赋值
                     * @return EndCreateTime 是否已赋值
                     * 
                     */
                    bool EndCreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>克隆类型: PITR 时间点 BackupSet 备份集</p>
                     * @return FilterCloneType <p>克隆类型: PITR 时间点 BackupSet 备份集</p>
                     * 
                     */
                    std::string GetFilterCloneType() const;

                    /**
                     * 设置<p>克隆类型: PITR 时间点 BackupSet 备份集</p>
                     * @param _filterCloneType <p>克隆类型: PITR 时间点 BackupSet 备份集</p>
                     * 
                     */
                    void SetFilterCloneType(const std::string& _filterCloneType);

                    /**
                     * 判断参数 FilterCloneType 是否已赋值
                     * @return FilterCloneType 是否已赋值
                     * 
                     */
                    bool FilterCloneTypeHasBeenSet() const;

                    /**
                     * 获取<p>查询数量[0,200]</p>
                     * @return Limit <p>查询数量[0,200]</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>查询数量[0,200]</p>
                     * @param _limit <p>查询数量[0,200]</p>
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
                     * 获取<p>查询偏移量[0,INF]</p>
                     * @return Offset <p>查询偏移量[0,INF]</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>查询偏移量[0,INF]</p>
                     * @param _offset <p>查询偏移量[0,INF]</p>
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
                     * 获取<p>排序字段: CloneTime,CreateTime</p>
                     * @return OrderBy <p>排序字段: CloneTime,CreateTime</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序字段: CloneTime,CreateTime</p>
                     * @param _orderBy <p>排序字段: CloneTime,CreateTime</p>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取<p>排序类型:ASC,DESC</p>
                     * @return OrderType <p>排序类型:ASC,DESC</p>
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置<p>排序类型:ASC,DESC</p>
                     * @param _orderType <p>排序类型:ASC,DESC</p>
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取<p>开始创建时间</p>
                     * @return StartCreateTime <p>开始创建时间</p>
                     * 
                     */
                    std::string GetStartCreateTime() const;

                    /**
                     * 设置<p>开始创建时间</p>
                     * @param _startCreateTime <p>开始创建时间</p>
                     * 
                     */
                    void SetStartCreateTime(const std::string& _startCreateTime);

                    /**
                     * 判断参数 StartCreateTime 是否已赋值
                     * @return StartCreateTime 是否已赋值
                     * 
                     */
                    bool StartCreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>源实例ID</p>
                     */
                    std::string m_sourceInstanceId;
                    bool m_sourceInstanceIdHasBeenSet;

                    /**
                     * <p>引擎类型</p>
                     */
                    std::string m_dBType;
                    bool m_dBTypeHasBeenSet;

                    /**
                     * <p>结束创建时间</p>
                     */
                    std::string m_endCreateTime;
                    bool m_endCreateTimeHasBeenSet;

                    /**
                     * <p>克隆类型: PITR 时间点 BackupSet 备份集</p>
                     */
                    std::string m_filterCloneType;
                    bool m_filterCloneTypeHasBeenSet;

                    /**
                     * <p>查询数量[0,200]</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>查询偏移量[0,INF]</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>排序字段: CloneTime,CreateTime</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>排序类型:ASC,DESC</p>
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>开始创建时间</p>
                     */
                    std::string m_startCreateTime;
                    bool m_startCreateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBSCLONEINSTANCESREQUEST_H_
