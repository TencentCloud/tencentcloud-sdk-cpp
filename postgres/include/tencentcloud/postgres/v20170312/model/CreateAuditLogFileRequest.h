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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEAUDITLOGFILEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEAUDITLOGFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/AuditLogFilter.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateAuditLogFile请求参数结构体
                */
                class CreateAuditLogFileRequest : public AbstractModel
                {
                public:
                    CreateAuditLogFileRequest();
                    ~CreateAuditLogFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>开始时间</p><p>参数格式：2026-03-25 00:00:00</p>
                     * @return StartTime <p>开始时间</p><p>参数格式：2026-03-25 00:00:00</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p><p>参数格式：2026-03-25 00:00:00</p>
                     * @param _startTime <p>开始时间</p><p>参数格式：2026-03-25 00:00:00</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间</p><p>参数格式：2026-03-25 01:00:00</p>
                     * @return EndTime <p>结束时间</p><p>参数格式：2026-03-25 01:00:00</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p><p>参数格式：2026-03-25 01:00:00</p>
                     * @param _endTime <p>结束时间</p><p>参数格式：2026-03-25 01:00:00</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>产品名称</p><p>入参限制：postgres</p>
                     * @return Product <p>产品名称</p><p>入参限制：postgres</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>产品名称</p><p>入参限制：postgres</p>
                     * @param _product <p>产品名称</p><p>入参限制：postgres</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件</p>
                     * @return Filter <p>过滤条件</p>
                     * 
                     */
                    AuditLogFilter GetFilter() const;

                    /**
                     * 设置<p>过滤条件</p>
                     * @param _filter <p>过滤条件</p>
                     * 
                     */
                    void SetFilter(const AuditLogFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>开始时间</p><p>参数格式：2026-03-25 00:00:00</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p><p>参数格式：2026-03-25 01:00:00</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>产品名称</p><p>入参限制：postgres</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>过滤条件</p>
                     */
                    AuditLogFilter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEAUDITLOGFILEREQUEST_H_
