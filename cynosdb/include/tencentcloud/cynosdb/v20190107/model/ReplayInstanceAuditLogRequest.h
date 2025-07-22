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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REPLAYINSTANCEAUDITLOGREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REPLAYINSTANCEAUDITLOGREQUEST_H_

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
                * ReplayInstanceAuditLog请求参数结构体
                */
                class ReplayInstanceAuditLogRequest : public AbstractModel
                {
                public:
                    ReplayInstanceAuditLogRequest();
                    ~ReplayInstanceAuditLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源集群id
                     * @return SourceClusterId 源集群id
                     * 
                     */
                    std::string GetSourceClusterId() const;

                    /**
                     * 设置源集群id
                     * @param _sourceClusterId 源集群id
                     * 
                     */
                    void SetSourceClusterId(const std::string& _sourceClusterId);

                    /**
                     * 判断参数 SourceClusterId 是否已赋值
                     * @return SourceClusterId 是否已赋值
                     * 
                     */
                    bool SourceClusterIdHasBeenSet() const;

                    /**
                     * 获取源实例id
                     * @return SourceInstanceId 源实例id
                     * 
                     */
                    std::string GetSourceInstanceId() const;

                    /**
                     * 设置源实例id
                     * @param _sourceInstanceId 源实例id
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
                     * 获取目标集群id
目标集群必须为原始集群三天内克隆出的集群。
                     * @return TargetClusterId 目标集群id
目标集群必须为原始集群三天内克隆出的集群。
                     * 
                     */
                    std::string GetTargetClusterId() const;

                    /**
                     * 设置目标集群id
目标集群必须为原始集群三天内克隆出的集群。
                     * @param _targetClusterId 目标集群id
目标集群必须为原始集群三天内克隆出的集群。
                     * 
                     */
                    void SetTargetClusterId(const std::string& _targetClusterId);

                    /**
                     * 判断参数 TargetClusterId 是否已赋值
                     * @return TargetClusterId 是否已赋值
                     * 
                     */
                    bool TargetClusterIdHasBeenSet() const;

                    /**
                     * 获取目标实例id
                     * @return TargetInstanceId 目标实例id
                     * 
                     */
                    std::string GetTargetInstanceId() const;

                    /**
                     * 设置目标实例id
                     * @param _targetInstanceId 目标实例id
                     * 
                     */
                    void SetTargetInstanceId(const std::string& _targetInstanceId);

                    /**
                     * 判断参数 TargetInstanceId 是否已赋值
                     * @return TargetInstanceId 是否已赋值
                     * 
                     */
                    bool TargetInstanceIdHasBeenSet() const;

                    /**
                     * 获取用户名.需要host为%的用户名
                     * @return TargetUserName 用户名.需要host为%的用户名
                     * 
                     */
                    std::string GetTargetUserName() const;

                    /**
                     * 设置用户名.需要host为%的用户名
                     * @param _targetUserName 用户名.需要host为%的用户名
                     * 
                     */
                    void SetTargetUserName(const std::string& _targetUserName);

                    /**
                     * 判断参数 TargetUserName 是否已赋值
                     * @return TargetUserName 是否已赋值
                     * 
                     */
                    bool TargetUserNameHasBeenSet() const;

                    /**
                     * 获取密码
                     * @return TargetPassword 密码
                     * 
                     */
                    std::string GetTargetPassword() const;

                    /**
                     * 设置密码
                     * @param _targetPassword 密码
                     * 
                     */
                    void SetTargetPassword(const std::string& _targetPassword);

                    /**
                     * 判断参数 TargetPassword 是否已赋值
                     * @return TargetPassword 是否已赋值
                     * 
                     */
                    bool TargetPasswordHasBeenSet() const;

                    /**
                     * 获取开始时间。时间格式为：yyyy-DD-mm hh:mm:ss
                     * @return StartTime 开始时间。时间格式为：yyyy-DD-mm hh:mm:ss
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间。时间格式为：yyyy-DD-mm hh:mm:ss
                     * @param _startTime 开始时间。时间格式为：yyyy-DD-mm hh:mm:ss
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
                     * 获取结束时间。时间格式为：yyyy-DD-mm hh:mm:ss
                     * @return EndTime 结束时间。时间格式为：yyyy-DD-mm hh:mm:ss
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间。时间格式为：yyyy-DD-mm hh:mm:ss
                     * @param _endTime 结束时间。时间格式为：yyyy-DD-mm hh:mm:ss
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 源集群id
                     */
                    std::string m_sourceClusterId;
                    bool m_sourceClusterIdHasBeenSet;

                    /**
                     * 源实例id
                     */
                    std::string m_sourceInstanceId;
                    bool m_sourceInstanceIdHasBeenSet;

                    /**
                     * 目标集群id
目标集群必须为原始集群三天内克隆出的集群。
                     */
                    std::string m_targetClusterId;
                    bool m_targetClusterIdHasBeenSet;

                    /**
                     * 目标实例id
                     */
                    std::string m_targetInstanceId;
                    bool m_targetInstanceIdHasBeenSet;

                    /**
                     * 用户名.需要host为%的用户名
                     */
                    std::string m_targetUserName;
                    bool m_targetUserNameHasBeenSet;

                    /**
                     * 密码
                     */
                    std::string m_targetPassword;
                    bool m_targetPasswordHasBeenSet;

                    /**
                     * 开始时间。时间格式为：yyyy-DD-mm hh:mm:ss
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间。时间格式为：yyyy-DD-mm hh:mm:ss
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REPLAYINSTANCEAUDITLOGREQUEST_H_
