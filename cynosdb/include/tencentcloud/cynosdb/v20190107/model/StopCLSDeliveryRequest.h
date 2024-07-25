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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_STOPCLSDELIVERYREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_STOPCLSDELIVERYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * StopCLSDelivery请求参数结构体
                */
                class StopCLSDeliveryRequest : public AbstractModel
                {
                public:
                    StopCLSDeliveryRequest();
                    ~StopCLSDeliveryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取日志主题id
                     * @return CLSTopicIds 日志主题id
                     * 
                     */
                    std::vector<std::string> GetCLSTopicIds() const;

                    /**
                     * 设置日志主题id
                     * @param _cLSTopicIds 日志主题id
                     * 
                     */
                    void SetCLSTopicIds(const std::vector<std::string>& _cLSTopicIds);

                    /**
                     * 判断参数 CLSTopicIds 是否已赋值
                     * @return CLSTopicIds 是否已赋值
                     * 
                     */
                    bool CLSTopicIdsHasBeenSet() const;

                    /**
                     * 获取日志类型
                     * @return LogType 日志类型
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置日志类型
                     * @param _logType 日志类型
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取是否维护时间运行
                     * @return IsInMaintainPeriod 是否维护时间运行
                     * 
                     */
                    std::string GetIsInMaintainPeriod() const;

                    /**
                     * 设置是否维护时间运行
                     * @param _isInMaintainPeriod 是否维护时间运行
                     * 
                     */
                    void SetIsInMaintainPeriod(const std::string& _isInMaintainPeriod);

                    /**
                     * 判断参数 IsInMaintainPeriod 是否已赋值
                     * @return IsInMaintainPeriod 是否已赋值
                     * 
                     */
                    bool IsInMaintainPeriodHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 日志主题id
                     */
                    std::vector<std::string> m_cLSTopicIds;
                    bool m_cLSTopicIdsHasBeenSet;

                    /**
                     * 日志类型
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 是否维护时间运行
                     */
                    std::string m_isInMaintainPeriod;
                    bool m_isInMaintainPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_STOPCLSDELIVERYREQUEST_H_
