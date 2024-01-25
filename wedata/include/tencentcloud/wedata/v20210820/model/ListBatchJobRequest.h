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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_LISTBATCHJOBREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_LISTBATCHJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ListBatchJob请求参数结构体
                */
                class ListBatchJobRequest : public AbstractModel
                {
                public:
                    ListBatchJobRequest();
                    ~ListBatchJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取操作类型
                     * @return JobType 操作类型
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置操作类型
                     * @param _jobType 操作类型
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取操作人Id
                     * @return OwnerId 操作人Id
                     * 
                     */
                    std::string GetOwnerId() const;

                    /**
                     * 设置操作人Id
                     * @param _ownerId 操作人Id
                     * 
                     */
                    void SetOwnerId(const std::string& _ownerId);

                    /**
                     * 判断参数 OwnerId 是否已赋值
                     * @return OwnerId 是否已赋值
                     * 
                     */
                    bool OwnerIdHasBeenSet() const;

                    /**
                     * 获取开始操作时间
                     * @return StartOperateTime 开始操作时间
                     * 
                     */
                    std::string GetStartOperateTime() const;

                    /**
                     * 设置开始操作时间
                     * @param _startOperateTime 开始操作时间
                     * 
                     */
                    void SetStartOperateTime(const std::string& _startOperateTime);

                    /**
                     * 判断参数 StartOperateTime 是否已赋值
                     * @return StartOperateTime 是否已赋值
                     * 
                     */
                    bool StartOperateTimeHasBeenSet() const;

                    /**
                     * 获取截止操作时间
                     * @return EndOperateTime 截止操作时间
                     * 
                     */
                    std::string GetEndOperateTime() const;

                    /**
                     * 设置截止操作时间
                     * @param _endOperateTime 截止操作时间
                     * 
                     */
                    void SetEndOperateTime(const std::string& _endOperateTime);

                    /**
                     * 判断参数 EndOperateTime 是否已赋值
                     * @return EndOperateTime 是否已赋值
                     * 
                     */
                    bool EndOperateTimeHasBeenSet() const;

                    /**
                     * 获取分页，页码
                     * @return Page 分页，页码
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置分页，页码
                     * @param _page 分页，页码
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取分页，页内条数
                     * @return Size 分页，页内条数
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置分页，页内条数
                     * @param _size 分页，页内条数
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取按更新时间排序排序
--desc
--asc
默认desc
                     * @return SortType 按更新时间排序排序
--desc
--asc
默认desc
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置按更新时间排序排序
--desc
--asc
默认desc
                     * @param _sortType 按更新时间排序排序
--desc
--asc
默认desc
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取排序字段，如创建时间：
CreateTime
                     * @return SortItem 排序字段，如创建时间：
CreateTime
                     * 
                     */
                    std::string GetSortItem() const;

                    /**
                     * 设置排序字段，如创建时间：
CreateTime
                     * @param _sortItem 排序字段，如创建时间：
CreateTime
                     * 
                     */
                    void SetSortItem(const std::string& _sortItem);

                    /**
                     * 判断参数 SortItem 是否已赋值
                     * @return SortItem 是否已赋值
                     * 
                     */
                    bool SortItemHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 操作类型
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 操作人Id
                     */
                    std::string m_ownerId;
                    bool m_ownerIdHasBeenSet;

                    /**
                     * 开始操作时间
                     */
                    std::string m_startOperateTime;
                    bool m_startOperateTimeHasBeenSet;

                    /**
                     * 截止操作时间
                     */
                    std::string m_endOperateTime;
                    bool m_endOperateTimeHasBeenSet;

                    /**
                     * 分页，页码
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 分页，页内条数
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 按更新时间排序排序
--desc
--asc
默认desc
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * 排序字段，如创建时间：
CreateTime
                     */
                    std::string m_sortItem;
                    bool m_sortItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_LISTBATCHJOBREQUEST_H_
