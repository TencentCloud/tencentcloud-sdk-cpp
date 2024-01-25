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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEIMPORTABLEOFFLINETASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEIMPORTABLEOFFLINETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/OrderField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeImportableOfflineTask请求参数结构体
                */
                class DescribeImportableOfflineTaskRequest : public AbstractModel
                {
                public:
                    DescribeImportableOfflineTaskRequest();
                    ~DescribeImportableOfflineTaskRequest() = default;
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
                     * 获取页码
                     * @return PageNumber 页码
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页码
                     * @param _pageNumber 页码
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取页大小
                     * @return PageSize 页大小
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置页大小
                     * @param _pageSize 页大小
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
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取创建者列表
                     * @return CreaterList 创建者列表
                     * 
                     */
                    std::vector<std::string> GetCreaterList() const;

                    /**
                     * 设置创建者列表
                     * @param _createrList 创建者列表
                     * 
                     */
                    void SetCreaterList(const std::vector<std::string>& _createrList);

                    /**
                     * 判断参数 CreaterList 是否已赋值
                     * @return CreaterList 是否已赋值
                     * 
                     */
                    bool CreaterListHasBeenSet() const;

                    /**
                     * 获取责任人列表
                     * @return InChargeList 责任人列表
                     * 
                     */
                    std::vector<std::string> GetInChargeList() const;

                    /**
                     * 设置责任人列表
                     * @param _inChargeList 责任人列表
                     * 
                     */
                    void SetInChargeList(const std::vector<std::string>& _inChargeList);

                    /**
                     * 判断参数 InChargeList 是否已赋值
                     * @return InChargeList 是否已赋值
                     * 
                     */
                    bool InChargeListHasBeenSet() const;

                    /**
                     * 获取排序信息
最近修改时间：LastUpdate
                     * @return OrderFields 排序信息
最近修改时间：LastUpdate
                     * 
                     */
                    std::vector<OrderField> GetOrderFields() const;

                    /**
                     * 设置排序信息
最近修改时间：LastUpdate
                     * @param _orderFields 排序信息
最近修改时间：LastUpdate
                     * 
                     */
                    void SetOrderFields(const std::vector<OrderField>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 页大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 创建者列表
                     */
                    std::vector<std::string> m_createrList;
                    bool m_createrListHasBeenSet;

                    /**
                     * 责任人列表
                     */
                    std::vector<std::string> m_inChargeList;
                    bool m_inChargeListHasBeenSet;

                    /**
                     * 排序信息
最近修改时间：LastUpdate
                     */
                    std::vector<OrderField> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEIMPORTABLEOFFLINETASKREQUEST_H_
