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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEDBDIAGREPORTTASKREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEDBDIAGREPORTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * CreateDBDiagReportTask请求参数结构体
                */
                class CreateDBDiagReportTaskRequest : public AbstractModel
                {
                public:
                    CreateDBDiagReportTaskRequest();
                    ~CreateDBDiagReportTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。TDSQL MySQL数据库类型，实例ID应填写为“实例ID&amp;分片ID”的格式。</p>
                     * @return InstanceId <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。TDSQL MySQL数据库类型，实例ID应填写为“实例ID&amp;分片ID”的格式。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。TDSQL MySQL数据库类型，实例ID应填写为“实例ID&amp;分片ID”的格式。</p>
                     * @param _instanceId <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。TDSQL MySQL数据库类型，实例ID应填写为“实例ID&amp;分片ID”的格式。</p>
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
                     * 获取<p>开始时间，如“2020-11-08T14:00:00+08:00”。</p>
                     * @return StartTime <p>开始时间，如“2020-11-08T14:00:00+08:00”。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间，如“2020-11-08T14:00:00+08:00”。</p>
                     * @param _startTime <p>开始时间，如“2020-11-08T14:00:00+08:00”。</p>
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
                     * 获取<p>结束时间，如“2020-11-09T14:00:00+08:00”。</p>
                     * @return EndTime <p>结束时间，如“2020-11-09T14:00:00+08:00”。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间，如“2020-11-09T14:00:00+08:00”。</p>
                     * @param _endTime <p>结束时间，如“2020-11-09T14:00:00+08:00”。</p>
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
                     * 获取<p>是否发送邮件: 0 - 否，1 - 是。</p>
                     * @return SendMailFlag <p>是否发送邮件: 0 - 否，1 - 是。</p>
                     * 
                     */
                    int64_t GetSendMailFlag() const;

                    /**
                     * 设置<p>是否发送邮件: 0 - 否，1 - 是。</p>
                     * @param _sendMailFlag <p>是否发送邮件: 0 - 否，1 - 是。</p>
                     * 
                     */
                    void SetSendMailFlag(const int64_t& _sendMailFlag);

                    /**
                     * 判断参数 SendMailFlag 是否已赋值
                     * @return SendMailFlag 是否已赋值
                     * 
                     */
                    bool SendMailFlagHasBeenSet() const;

                    /**
                     * 获取<p>接收邮件的联系人ID数组。</p>
                     * @return ContactPerson <p>接收邮件的联系人ID数组。</p>
                     * 
                     */
                    std::vector<int64_t> GetContactPerson() const;

                    /**
                     * 设置<p>接收邮件的联系人ID数组。</p>
                     * @param _contactPerson <p>接收邮件的联系人ID数组。</p>
                     * 
                     */
                    void SetContactPerson(const std::vector<int64_t>& _contactPerson);

                    /**
                     * 判断参数 ContactPerson 是否已赋值
                     * @return ContactPerson 是否已赋值
                     * 
                     */
                    bool ContactPersonHasBeenSet() const;

                    /**
                     * 获取<p>接收邮件的联系组ID数组。</p>
                     * @return ContactGroup <p>接收邮件的联系组ID数组。</p>
                     * 
                     */
                    std::vector<int64_t> GetContactGroup() const;

                    /**
                     * 设置<p>接收邮件的联系组ID数组。</p>
                     * @param _contactGroup <p>接收邮件的联系组ID数组。</p>
                     * 
                     */
                    void SetContactGroup(const std::vector<int64_t>& _contactGroup);

                    /**
                     * 判断参数 ContactGroup 是否已赋值
                     * @return ContactGroup 是否已赋值
                     * 
                     */
                    bool ContactGroupHasBeenSet() const;

                    /**
                     * 获取<p>服务产品类型，支持值：&quot;mysql&quot; - 云数据库 MySQL；&quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;redis&quot; - 云数据库 Redis，&quot;mongodb&quot; - 云数据库 MongoDB，&quot;mariadb&quot; - 云数据库 MariaDB，&quot;dcdb&quot; - 云数据库 TDSQL MySQL，默认为&quot;mysql&quot;。</p>
                     * @return Product <p>服务产品类型，支持值：&quot;mysql&quot; - 云数据库 MySQL；&quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;redis&quot; - 云数据库 Redis，&quot;mongodb&quot; - 云数据库 MongoDB，&quot;mariadb&quot; - 云数据库 MariaDB，&quot;dcdb&quot; - 云数据库 TDSQL MySQL，默认为&quot;mysql&quot;。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>服务产品类型，支持值：&quot;mysql&quot; - 云数据库 MySQL；&quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;redis&quot; - 云数据库 Redis，&quot;mongodb&quot; - 云数据库 MongoDB，&quot;mariadb&quot; - 云数据库 MariaDB，&quot;dcdb&quot; - 云数据库 TDSQL MySQL，默认为&quot;mysql&quot;。</p>
                     * @param _product <p>服务产品类型，支持值：&quot;mysql&quot; - 云数据库 MySQL；&quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;redis&quot; - 云数据库 Redis，&quot;mongodb&quot; - 云数据库 MongoDB，&quot;mariadb&quot; - 云数据库 MariaDB，&quot;dcdb&quot; - 云数据库 TDSQL MySQL，默认为&quot;mysql&quot;。</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。TDSQL MySQL数据库类型，实例ID应填写为“实例ID&amp;分片ID”的格式。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>开始时间，如“2020-11-08T14:00:00+08:00”。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间，如“2020-11-09T14:00:00+08:00”。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>是否发送邮件: 0 - 否，1 - 是。</p>
                     */
                    int64_t m_sendMailFlag;
                    bool m_sendMailFlagHasBeenSet;

                    /**
                     * <p>接收邮件的联系人ID数组。</p>
                     */
                    std::vector<int64_t> m_contactPerson;
                    bool m_contactPersonHasBeenSet;

                    /**
                     * <p>接收邮件的联系组ID数组。</p>
                     */
                    std::vector<int64_t> m_contactGroup;
                    bool m_contactGroupHasBeenSet;

                    /**
                     * <p>服务产品类型，支持值：&quot;mysql&quot; - 云数据库 MySQL；&quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;redis&quot; - 云数据库 Redis，&quot;mongodb&quot; - 云数据库 MongoDB，&quot;mariadb&quot; - 云数据库 MariaDB，&quot;dcdb&quot; - 云数据库 TDSQL MySQL，默认为&quot;mysql&quot;。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEDBDIAGREPORTTASKREQUEST_H_
