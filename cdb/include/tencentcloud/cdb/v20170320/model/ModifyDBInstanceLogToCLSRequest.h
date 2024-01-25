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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCELOGTOCLSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCELOGTOCLSREQUEST_H_

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
                * ModifyDBInstanceLogToCLS请求参数结构体
                */
                class ModifyDBInstanceLogToCLSRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceLogToCLSRequest();
                    ~ModifyDBInstanceLogToCLSRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取日志类型：error/slowlog
                     * @return LogType 日志类型：error/slowlog
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置日志类型：error/slowlog
                     * @param _logType 日志类型：error/slowlog
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
                     * 获取投递状态：ON/OFF
                     * @return Status 投递状态：ON/OFF
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置投递状态：ON/OFF
                     * @param _status 投递状态：ON/OFF
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否需要创建日志集
                     * @return CreateLogset 是否需要创建日志集
                     * 
                     */
                    bool GetCreateLogset() const;

                    /**
                     * 设置是否需要创建日志集
                     * @param _createLogset 是否需要创建日志集
                     * 
                     */
                    void SetCreateLogset(const bool& _createLogset);

                    /**
                     * 判断参数 CreateLogset 是否已赋值
                     * @return CreateLogset 是否已赋值
                     * 
                     */
                    bool CreateLogsetHasBeenSet() const;

                    /**
                     * 获取需要创建日志集时为日志集名称；选择已有日志集时，为日志集ID
                     * @return Logset 需要创建日志集时为日志集名称；选择已有日志集时，为日志集ID
                     * 
                     */
                    std::string GetLogset() const;

                    /**
                     * 设置需要创建日志集时为日志集名称；选择已有日志集时，为日志集ID
                     * @param _logset 需要创建日志集时为日志集名称；选择已有日志集时，为日志集ID
                     * 
                     */
                    void SetLogset(const std::string& _logset);

                    /**
                     * 判断参数 Logset 是否已赋值
                     * @return Logset 是否已赋值
                     * 
                     */
                    bool LogsetHasBeenSet() const;

                    /**
                     * 获取是否需要创建日志主题
                     * @return CreateLogTopic 是否需要创建日志主题
                     * 
                     */
                    bool GetCreateLogTopic() const;

                    /**
                     * 设置是否需要创建日志主题
                     * @param _createLogTopic 是否需要创建日志主题
                     * 
                     */
                    void SetCreateLogTopic(const bool& _createLogTopic);

                    /**
                     * 判断参数 CreateLogTopic 是否已赋值
                     * @return CreateLogTopic 是否已赋值
                     * 
                     */
                    bool CreateLogTopicHasBeenSet() const;

                    /**
                     * 获取需要创建日志主题时为日志主题名称；选择已有日志主题时，为日志主题ID
                     * @return LogTopic 需要创建日志主题时为日志主题名称；选择已有日志主题时，为日志主题ID
                     * 
                     */
                    std::string GetLogTopic() const;

                    /**
                     * 设置需要创建日志主题时为日志主题名称；选择已有日志主题时，为日志主题ID
                     * @param _logTopic 需要创建日志主题时为日志主题名称；选择已有日志主题时，为日志主题ID
                     * 
                     */
                    void SetLogTopic(const std::string& _logTopic);

                    /**
                     * 判断参数 LogTopic 是否已赋值
                     * @return LogTopic 是否已赋值
                     * 
                     */
                    bool LogTopicHasBeenSet() const;

                    /**
                     * 获取日志主题有效期，不填写时，默认30天
                     * @return Period 日志主题有效期，不填写时，默认30天
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置日志主题有效期，不填写时，默认30天
                     * @param _period 日志主题有效期，不填写时，默认30天
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取创建日志主题时，是否创建索引
                     * @return CreateIndex 创建日志主题时，是否创建索引
                     * 
                     */
                    bool GetCreateIndex() const;

                    /**
                     * 设置创建日志主题时，是否创建索引
                     * @param _createIndex 创建日志主题时，是否创建索引
                     * 
                     */
                    void SetCreateIndex(const bool& _createIndex);

                    /**
                     * 判断参数 CreateIndex 是否已赋值
                     * @return CreateIndex 是否已赋值
                     * 
                     */
                    bool CreateIndexHasBeenSet() const;

                    /**
                     * 获取CLS所在地域
                     * @return ClsRegion CLS所在地域
                     * 
                     */
                    std::string GetClsRegion() const;

                    /**
                     * 设置CLS所在地域
                     * @param _clsRegion CLS所在地域
                     * 
                     */
                    void SetClsRegion(const std::string& _clsRegion);

                    /**
                     * 判断参数 ClsRegion 是否已赋值
                     * @return ClsRegion 是否已赋值
                     * 
                     */
                    bool ClsRegionHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 日志类型：error/slowlog
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 投递状态：ON/OFF
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否需要创建日志集
                     */
                    bool m_createLogset;
                    bool m_createLogsetHasBeenSet;

                    /**
                     * 需要创建日志集时为日志集名称；选择已有日志集时，为日志集ID
                     */
                    std::string m_logset;
                    bool m_logsetHasBeenSet;

                    /**
                     * 是否需要创建日志主题
                     */
                    bool m_createLogTopic;
                    bool m_createLogTopicHasBeenSet;

                    /**
                     * 需要创建日志主题时为日志主题名称；选择已有日志主题时，为日志主题ID
                     */
                    std::string m_logTopic;
                    bool m_logTopicHasBeenSet;

                    /**
                     * 日志主题有效期，不填写时，默认30天
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 创建日志主题时，是否创建索引
                     */
                    bool m_createIndex;
                    bool m_createIndexHasBeenSet;

                    /**
                     * CLS所在地域
                     */
                    std::string m_clsRegion;
                    bool m_clsRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCELOGTOCLSREQUEST_H_
