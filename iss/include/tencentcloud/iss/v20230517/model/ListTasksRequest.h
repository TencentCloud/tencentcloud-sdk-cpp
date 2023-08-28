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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTTASKSREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * ListTasks请求参数结构体
                */
                class ListTasksRequest : public AbstractModel
                {
                public:
                    ListTasksRequest();
                    ~ListTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页码，默认为1
                     * @return PageNumber 页码，默认为1
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页码，默认为1
                     * @param _pageNumber 页码，默认为1
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
                     * 获取每页数量，默认为10
                     * @return PageSize 每页数量，默认为10
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页数量，默认为10
                     * @param _pageSize 每页数量，默认为10
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
                     * 获取默认不根据该字段进行筛选，否则根据设备操作类型进行筛选，对应任务的Action字段，批量任务操作类型以Batch开头。目前值有：BatchDeleteUserDevice，BatchDisableDevice，BatchEnableDevice，DeleteUserDevice，DisableDevice，EnableDevice
                     * @return Operation 默认不根据该字段进行筛选，否则根据设备操作类型进行筛选，对应任务的Action字段，批量任务操作类型以Batch开头。目前值有：BatchDeleteUserDevice，BatchDisableDevice，BatchEnableDevice，DeleteUserDevice，DisableDevice，EnableDevice
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置默认不根据该字段进行筛选，否则根据设备操作类型进行筛选，对应任务的Action字段，批量任务操作类型以Batch开头。目前值有：BatchDeleteUserDevice，BatchDisableDevice，BatchEnableDevice，DeleteUserDevice，DisableDevice，EnableDevice
                     * @param _operation 默认不根据该字段进行筛选，否则根据设备操作类型进行筛选，对应任务的Action字段，批量任务操作类型以Batch开头。目前值有：BatchDeleteUserDevice，BatchDisableDevice，BatchEnableDevice，DeleteUserDevice，DisableDevice，EnableDevice
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取默认不根据该字段进行筛选，否则根据任务状态进行筛选。状态码：1-NEW，2-RUNNING，3-COMPLETED，4-FAILED
                     * @return Status 默认不根据该字段进行筛选，否则根据任务状态进行筛选。状态码：1-NEW，2-RUNNING，3-COMPLETED，4-FAILED
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置默认不根据该字段进行筛选，否则根据任务状态进行筛选。状态码：1-NEW，2-RUNNING，3-COMPLETED，4-FAILED
                     * @param _status 默认不根据该字段进行筛选，否则根据任务状态进行筛选。状态码：1-NEW，2-RUNNING，3-COMPLETED，4-FAILED
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 页码，默认为1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数量，默认为10
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 默认不根据该字段进行筛选，否则根据设备操作类型进行筛选，对应任务的Action字段，批量任务操作类型以Batch开头。目前值有：BatchDeleteUserDevice，BatchDisableDevice，BatchEnableDevice，DeleteUserDevice，DisableDevice，EnableDevice
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 默认不根据该字段进行筛选，否则根据任务状态进行筛选。状态码：1-NEW，2-RUNNING，3-COMPLETED，4-FAILED
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTTASKSREQUEST_H_
