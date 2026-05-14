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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPSCHEDULESREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPSCHEDULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeBackUpSchedules请求参数结构体
                */
                class DescribeBackUpSchedulesRequest : public AbstractModel
                {
                public:
                    DescribeBackUpSchedulesRequest();
                    ~DescribeBackUpSchedulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务类型<br>0-不限制，或使用TypeFilters过滤；<br>1-备份恢复（包括周期备份和一次性备份）；<br>2-数据迁移（包括跨集群迁移和cos迁移）</p>
                     * @return ApplicationType <p>任务类型<br>0-不限制，或使用TypeFilters过滤；<br>1-备份恢复（包括周期备份和一次性备份）；<br>2-数据迁移（包括跨集群迁移和cos迁移）</p>
                     * 
                     */
                    int64_t GetApplicationType() const;

                    /**
                     * 设置<p>任务类型<br>0-不限制，或使用TypeFilters过滤；<br>1-备份恢复（包括周期备份和一次性备份）；<br>2-数据迁移（包括跨集群迁移和cos迁移）</p>
                     * @param _applicationType <p>任务类型<br>0-不限制，或使用TypeFilters过滤；<br>1-备份恢复（包括周期备份和一次性备份）；<br>2-数据迁移（包括跨集群迁移和cos迁移）</p>
                     * 
                     */
                    void SetApplicationType(const int64_t& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取<p>创建人过滤器</p>
                     * @return UsersFilters <p>创建人过滤器</p>
                     * 
                     */
                    std::vector<std::string> GetUsersFilters() const;

                    /**
                     * 设置<p>创建人过滤器</p>
                     * @param _usersFilters <p>创建人过滤器</p>
                     * 
                     */
                    void SetUsersFilters(const std::vector<std::string>& _usersFilters);

                    /**
                     * 判断参数 UsersFilters 是否已赋值
                     * @return UsersFilters 是否已赋值
                     * 
                     */
                    bool UsersFiltersHasBeenSet() const;

                    /**
                     * 获取<p>任务类型过滤器。<br>0-周期；<br>1-一次性；<br>2-数据迁移(即3和4的合集)；<br>3-远端集群迁移；<br>4-COS迁移</p>
                     * @return TypeFilters <p>任务类型过滤器。<br>0-周期；<br>1-一次性；<br>2-数据迁移(即3和4的合集)；<br>3-远端集群迁移；<br>4-COS迁移</p>
                     * 
                     */
                    std::vector<int64_t> GetTypeFilters() const;

                    /**
                     * 设置<p>任务类型过滤器。<br>0-周期；<br>1-一次性；<br>2-数据迁移(即3和4的合集)；<br>3-远端集群迁移；<br>4-COS迁移</p>
                     * @param _typeFilters <p>任务类型过滤器。<br>0-周期；<br>1-一次性；<br>2-数据迁移(即3和4的合集)；<br>3-远端集群迁移；<br>4-COS迁移</p>
                     * 
                     */
                    void SetTypeFilters(const std::vector<int64_t>& _typeFilters);

                    /**
                     * 判断参数 TypeFilters 是否已赋值
                     * @return TypeFilters 是否已赋值
                     * 
                     */
                    bool TypeFiltersHasBeenSet() const;

                    /**
                     * 获取<p>任务状态过滤器</p>
                     * @return StatusFilters <p>任务状态过滤器</p>
                     * 
                     */
                    std::vector<int64_t> GetStatusFilters() const;

                    /**
                     * 设置<p>任务状态过滤器</p>
                     * @param _statusFilters <p>任务状态过滤器</p>
                     * 
                     */
                    void SetStatusFilters(const std::vector<int64_t>& _statusFilters);

                    /**
                     * 判断参数 StatusFilters 是否已赋值
                     * @return StatusFilters 是否已赋值
                     * 
                     */
                    bool StatusFiltersHasBeenSet() const;

                    /**
                     * 获取<p>排序：<br>DESC-降序<br>ASC-升序</p>
                     * @return OrderType <p>排序：<br>DESC-降序<br>ASC-升序</p>
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置<p>排序：<br>DESC-降序<br>ASC-升序</p>
                     * @param _orderType <p>排序：<br>DESC-降序<br>ASC-升序</p>
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
                     * 获取<p>任务名过滤器</p>
                     * @return ScheduleNameFilters <p>任务名过滤器</p>
                     * 
                     */
                    std::string GetScheduleNameFilters() const;

                    /**
                     * 设置<p>任务名过滤器</p>
                     * @param _scheduleNameFilters <p>任务名过滤器</p>
                     * 
                     */
                    void SetScheduleNameFilters(const std::string& _scheduleNameFilters);

                    /**
                     * 判断参数 ScheduleNameFilters 是否已赋值
                     * @return ScheduleNameFilters 是否已赋值
                     * 
                     */
                    bool ScheduleNameFiltersHasBeenSet() const;

                    /**
                     * 获取<p>分页大小</p>
                     * @return PageSize <p>分页大小</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>分页大小</p>
                     * @param _pageSize <p>分页大小</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>页号</p>
                     * @return PageNum <p>页号</p>
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置<p>页号</p>
                     * @param _pageNum <p>页号</p>
                     * 
                     */
                    void SetPageNum(const int64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取<p>0-未加密；1-已加密</p>
                     * @return EncryptionFilters <p>0-未加密；1-已加密</p>
                     * 
                     */
                    std::vector<int64_t> GetEncryptionFilters() const;

                    /**
                     * 设置<p>0-未加密；1-已加密</p>
                     * @param _encryptionFilters <p>0-未加密；1-已加密</p>
                     * 
                     */
                    void SetEncryptionFilters(const std::vector<int64_t>& _encryptionFilters);

                    /**
                     * 判断参数 EncryptionFilters 是否已赋值
                     * @return EncryptionFilters 是否已赋值
                     * 
                     */
                    bool EncryptionFiltersHasBeenSet() const;

                    /**
                     * 获取<p>调度任务id过滤</p>
                     * @return ScheduleId <p>调度任务id过滤</p>
                     * 
                     */
                    int64_t GetScheduleId() const;

                    /**
                     * 设置<p>调度任务id过滤</p>
                     * @param _scheduleId <p>调度任务id过滤</p>
                     * 
                     */
                    void SetScheduleId(const int64_t& _scheduleId);

                    /**
                     * 判断参数 ScheduleId 是否已赋值
                     * @return ScheduleId 是否已赋值
                     * 
                     */
                    bool ScheduleIdHasBeenSet() const;

                private:

                    /**
                     * <p>任务类型<br>0-不限制，或使用TypeFilters过滤；<br>1-备份恢复（包括周期备份和一次性备份）；<br>2-数据迁移（包括跨集群迁移和cos迁移）</p>
                     */
                    int64_t m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * <p>创建人过滤器</p>
                     */
                    std::vector<std::string> m_usersFilters;
                    bool m_usersFiltersHasBeenSet;

                    /**
                     * <p>任务类型过滤器。<br>0-周期；<br>1-一次性；<br>2-数据迁移(即3和4的合集)；<br>3-远端集群迁移；<br>4-COS迁移</p>
                     */
                    std::vector<int64_t> m_typeFilters;
                    bool m_typeFiltersHasBeenSet;

                    /**
                     * <p>任务状态过滤器</p>
                     */
                    std::vector<int64_t> m_statusFilters;
                    bool m_statusFiltersHasBeenSet;

                    /**
                     * <p>排序：<br>DESC-降序<br>ASC-升序</p>
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>任务名过滤器</p>
                     */
                    std::string m_scheduleNameFilters;
                    bool m_scheduleNameFiltersHasBeenSet;

                    /**
                     * <p>分页大小</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>页号</p>
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * <p>0-未加密；1-已加密</p>
                     */
                    std::vector<int64_t> m_encryptionFilters;
                    bool m_encryptionFiltersHasBeenSet;

                    /**
                     * <p>调度任务id过滤</p>
                     */
                    int64_t m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPSCHEDULESREQUEST_H_
