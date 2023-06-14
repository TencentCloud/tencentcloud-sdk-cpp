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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYAUDITCONFIGREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYAUDITCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyAuditConfig请求参数结构体
                */
                class ModifyAuditConfigRequest : public AbstractModel
                {
                public:
                    ModifyAuditConfigRequest();
                    ~ModifyAuditConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
                     * @param _instanceId 实例 ID。
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
                     * 获取审计日志保存时长。支持值包括：
7 - 一周
30 - 一个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年；
                     * @return LogExpireDay 审计日志保存时长。支持值包括：
7 - 一周
30 - 一个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年；
                     * 
                     */
                    int64_t GetLogExpireDay() const;

                    /**
                     * 设置审计日志保存时长。支持值包括：
7 - 一周
30 - 一个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年；
                     * @param _logExpireDay 审计日志保存时长。支持值包括：
7 - 一周
30 - 一个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年；
                     * 
                     */
                    void SetLogExpireDay(const int64_t& _logExpireDay);

                    /**
                     * 判断参数 LogExpireDay 是否已赋值
                     * @return LogExpireDay 是否已赋值
                     * 
                     */
                    bool LogExpireDayHasBeenSet() const;

                    /**
                     * 获取是否关闭审计服务。可选值：true - 关闭审计服务；false - 不关闭审计服务。默认值为 false。
当关闭审计服务时，会删除用户的审计日志和文件，并删除该实例的所有审计策略。
CloseAudit、LogExpireDay必须至少提供一个，如果两个都提供则按照CloseAudit优先的逻辑处理。
                     * @return CloseAudit 是否关闭审计服务。可选值：true - 关闭审计服务；false - 不关闭审计服务。默认值为 false。
当关闭审计服务时，会删除用户的审计日志和文件，并删除该实例的所有审计策略。
CloseAudit、LogExpireDay必须至少提供一个，如果两个都提供则按照CloseAudit优先的逻辑处理。
                     * 
                     */
                    bool GetCloseAudit() const;

                    /**
                     * 设置是否关闭审计服务。可选值：true - 关闭审计服务；false - 不关闭审计服务。默认值为 false。
当关闭审计服务时，会删除用户的审计日志和文件，并删除该实例的所有审计策略。
CloseAudit、LogExpireDay必须至少提供一个，如果两个都提供则按照CloseAudit优先的逻辑处理。
                     * @param _closeAudit 是否关闭审计服务。可选值：true - 关闭审计服务；false - 不关闭审计服务。默认值为 false。
当关闭审计服务时，会删除用户的审计日志和文件，并删除该实例的所有审计策略。
CloseAudit、LogExpireDay必须至少提供一个，如果两个都提供则按照CloseAudit优先的逻辑处理。
                     * 
                     */
                    void SetCloseAudit(const bool& _closeAudit);

                    /**
                     * 判断参数 CloseAudit 是否已赋值
                     * @return CloseAudit 是否已赋值
                     * 
                     */
                    bool CloseAuditHasBeenSet() const;

                    /**
                     * 获取高频审计日志保存时长。支持值包括：
7 - 一周
30 - 一个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年；
                     * @return HighLogExpireDay 高频审计日志保存时长。支持值包括：
7 - 一周
30 - 一个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年；
                     * 
                     */
                    int64_t GetHighLogExpireDay() const;

                    /**
                     * 设置高频审计日志保存时长。支持值包括：
7 - 一周
30 - 一个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年；
                     * @param _highLogExpireDay 高频审计日志保存时长。支持值包括：
7 - 一周
30 - 一个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年；
                     * 
                     */
                    void SetHighLogExpireDay(const int64_t& _highLogExpireDay);

                    /**
                     * 判断参数 HighLogExpireDay 是否已赋值
                     * @return HighLogExpireDay 是否已赋值
                     * 
                     */
                    bool HighLogExpireDayHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 审计日志保存时长。支持值包括：
7 - 一周
30 - 一个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年；
                     */
                    int64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * 是否关闭审计服务。可选值：true - 关闭审计服务；false - 不关闭审计服务。默认值为 false。
当关闭审计服务时，会删除用户的审计日志和文件，并删除该实例的所有审计策略。
CloseAudit、LogExpireDay必须至少提供一个，如果两个都提供则按照CloseAudit优先的逻辑处理。
                     */
                    bool m_closeAudit;
                    bool m_closeAuditHasBeenSet;

                    /**
                     * 高频审计日志保存时长。支持值包括：
7 - 一周
30 - 一个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年；
                     */
                    int64_t m_highLogExpireDay;
                    bool m_highLogExpireDayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYAUDITCONFIGREQUEST_H_
