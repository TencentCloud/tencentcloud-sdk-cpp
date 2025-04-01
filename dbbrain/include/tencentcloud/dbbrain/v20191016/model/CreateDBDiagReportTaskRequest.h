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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_CREATEDBDIAGREPORTTASKREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_CREATEDBDIAGREPORTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
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
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
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
                     * 获取开始时间，如“2020-11-08T14:00:00+08:00”。
                     * @return StartTime 开始时间，如“2020-11-08T14:00:00+08:00”。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，如“2020-11-08T14:00:00+08:00”。
                     * @param _startTime 开始时间，如“2020-11-08T14:00:00+08:00”。
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
                     * 获取结束时间，如“2020-11-09T14:00:00+08:00”。
                     * @return EndTime 结束时间，如“2020-11-09T14:00:00+08:00”。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，如“2020-11-09T14:00:00+08:00”。
                     * @param _endTime 结束时间，如“2020-11-09T14:00:00+08:00”。
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
                     * 获取是否发送邮件: 0 - 否，1 - 是。
                     * @return SendMailFlag 是否发送邮件: 0 - 否，1 - 是。
                     * 
                     */
                    int64_t GetSendMailFlag() const;

                    /**
                     * 设置是否发送邮件: 0 - 否，1 - 是。
                     * @param _sendMailFlag 是否发送邮件: 0 - 否，1 - 是。
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
                     * 获取接收邮件的联系人ID数组。
                     * @return ContactPerson 接收邮件的联系人ID数组。
                     * 
                     */
                    std::vector<int64_t> GetContactPerson() const;

                    /**
                     * 设置接收邮件的联系人ID数组。
                     * @param _contactPerson 接收邮件的联系人ID数组。
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
                     * 获取接收邮件的联系组ID数组。
                     * @return ContactGroup 接收邮件的联系组ID数组。
                     * 
                     */
                    std::vector<int64_t> GetContactGroup() const;

                    /**
                     * 设置接收邮件的联系组ID数组。
                     * @param _contactGroup 接收邮件的联系组ID数组。
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
                     * 获取服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，"redis" - 云数据库 Redis，默认值为"mysql"。
                     * @return Product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，"redis" - 云数据库 Redis，默认值为"mysql"。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，"redis" - 云数据库 Redis，默认值为"mysql"。
                     * @param _product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，"redis" - 云数据库 Redis，默认值为"mysql"。
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
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 开始时间，如“2020-11-08T14:00:00+08:00”。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，如“2020-11-09T14:00:00+08:00”。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 是否发送邮件: 0 - 否，1 - 是。
                     */
                    int64_t m_sendMailFlag;
                    bool m_sendMailFlagHasBeenSet;

                    /**
                     * 接收邮件的联系人ID数组。
                     */
                    std::vector<int64_t> m_contactPerson;
                    bool m_contactPersonHasBeenSet;

                    /**
                     * 接收邮件的联系组ID数组。
                     */
                    std::vector<int64_t> m_contactGroup;
                    bool m_contactGroupHasBeenSet;

                    /**
                     * 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，"redis" - 云数据库 Redis，默认值为"mysql"。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_CREATEDBDIAGREPORTTASKREQUEST_H_
