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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCELOGTOCLSREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCELOGTOCLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
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
                     * 获取<p>指定实例ID。例如：cmgo-p8vn****。请登录 MongoDB 控制台在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>指定实例ID。例如：cmgo-p8vn****。请登录 MongoDB 控制台在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>指定实例ID。例如：cmgo-p8vn****。请登录 MongoDB 控制台在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>指定实例ID。例如：cmgo-p8vn****。请登录 MongoDB 控制台在实例列表复制实例 ID。</p>
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
                     * 获取<p>日志类型。MongoDB-ErrorLog：错误日志，MongoDB-SlowLog：慢日志，MongoDB-OperationLog：操作日志</p>
                     * @return LogType <p>日志类型。MongoDB-ErrorLog：错误日志，MongoDB-SlowLog：慢日志，MongoDB-OperationLog：操作日志</p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>日志类型。MongoDB-ErrorLog：错误日志，MongoDB-SlowLog：慢日志，MongoDB-OperationLog：操作日志</p>
                     * @param _logType <p>日志类型。MongoDB-ErrorLog：错误日志，MongoDB-SlowLog：慢日志，MongoDB-OperationLog：操作日志</p>
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
                     * 获取<p>投递状态。ON：开启，OFF：关闭。</p>
                     * @return Status <p>投递状态。ON：开启，OFF：关闭。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>投递状态。ON：开启，OFF：关闭。</p>
                     * @param _status <p>投递状态。ON：开启，OFF：关闭。</p>
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
                     * 获取<p>是否需要创建日志集。默认为 false。</p>
                     * @return CreateLogset <p>是否需要创建日志集。默认为 false。</p>
                     * 
                     */
                    bool GetCreateLogset() const;

                    /**
                     * 设置<p>是否需要创建日志集。默认为 false。</p>
                     * @param _createLogset <p>是否需要创建日志集。默认为 false。</p>
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
                     * 获取<p>需要创建日志集时为日志集名称；选择已有日志集时，为日志集 ID。默认为空。 说明：1. 当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。2.  当参数 CreateLogset 的值为 true 时，Logset 填日志集命名，例如 my_test，否则需要填日志集 id，例如 6adsaw-****。</p>
                     * @return Logset <p>需要创建日志集时为日志集名称；选择已有日志集时，为日志集 ID。默认为空。 说明：1. 当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。2.  当参数 CreateLogset 的值为 true 时，Logset 填日志集命名，例如 my_test，否则需要填日志集 id，例如 6adsaw-****。</p>
                     * 
                     */
                    std::string GetLogset() const;

                    /**
                     * 设置<p>需要创建日志集时为日志集名称；选择已有日志集时，为日志集 ID。默认为空。 说明：1. 当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。2.  当参数 CreateLogset 的值为 true 时，Logset 填日志集命名，例如 my_test，否则需要填日志集 id，例如 6adsaw-****。</p>
                     * @param _logset <p>需要创建日志集时为日志集名称；选择已有日志集时，为日志集 ID。默认为空。 说明：1. 当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。2.  当参数 CreateLogset 的值为 true 时，Logset 填日志集命名，例如 my_test，否则需要填日志集 id，例如 6adsaw-****。</p>
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
                     * 获取<p>是否需要创建日志主题。默认为 false。</p>
                     * @return CreateLogTopic <p>是否需要创建日志主题。默认为 false。</p>
                     * 
                     */
                    bool GetCreateLogTopic() const;

                    /**
                     * 设置<p>是否需要创建日志主题。默认为 false。</p>
                     * @param _createLogTopic <p>是否需要创建日志主题。默认为 false。</p>
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
                     * 获取<p>需要创建日志主题时为日志主题名称；选择已有日志主题时，为日志主题 ID。默认为空。 说明：1. 当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。2. 2.  当参数 CreateLogTopic 的值为 true 时，LogTopic 填日志主题命名，例如 my_test，否则需要填日志主题id，例如 6adsaw-****。</p>
                     * @return LogTopic <p>需要创建日志主题时为日志主题名称；选择已有日志主题时，为日志主题 ID。默认为空。 说明：1. 当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。2. 2.  当参数 CreateLogTopic 的值为 true 时，LogTopic 填日志主题命名，例如 my_test，否则需要填日志主题id，例如 6adsaw-****。</p>
                     * 
                     */
                    std::string GetLogTopic() const;

                    /**
                     * 设置<p>需要创建日志主题时为日志主题名称；选择已有日志主题时，为日志主题 ID。默认为空。 说明：1. 当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。2. 2.  当参数 CreateLogTopic 的值为 true 时，LogTopic 填日志主题命名，例如 my_test，否则需要填日志主题id，例如 6adsaw-****。</p>
                     * @param _logTopic <p>需要创建日志主题时为日志主题名称；选择已有日志主题时，为日志主题 ID。默认为空。 说明：1. 当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。2. 2.  当参数 CreateLogTopic 的值为 true 时，LogTopic 填日志主题命名，例如 my_test，否则需要填日志主题id，例如 6adsaw-****。</p>
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
                     * 获取<p>CLS 所在地域，不填则默认为 Region 的参数值。</p>
                     * @return CLSRegion <p>CLS 所在地域，不填则默认为 Region 的参数值。</p>
                     * 
                     */
                    std::string GetCLSRegion() const;

                    /**
                     * 设置<p>CLS 所在地域，不填则默认为 Region 的参数值。</p>
                     * @param _cLSRegion <p>CLS 所在地域，不填则默认为 Region 的参数值。</p>
                     * 
                     */
                    void SetCLSRegion(const std::string& _cLSRegion);

                    /**
                     * 判断参数 CLSRegion 是否已赋值
                     * @return CLSRegion 是否已赋值
                     * 
                     */
                    bool CLSRegionHasBeenSet() const;

                private:

                    /**
                     * <p>指定实例ID。例如：cmgo-p8vn****。请登录 MongoDB 控制台在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>日志类型。MongoDB-ErrorLog：错误日志，MongoDB-SlowLog：慢日志，MongoDB-OperationLog：操作日志</p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>投递状态。ON：开启，OFF：关闭。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>是否需要创建日志集。默认为 false。</p>
                     */
                    bool m_createLogset;
                    bool m_createLogsetHasBeenSet;

                    /**
                     * <p>需要创建日志集时为日志集名称；选择已有日志集时，为日志集 ID。默认为空。 说明：1. 当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。2.  当参数 CreateLogset 的值为 true 时，Logset 填日志集命名，例如 my_test，否则需要填日志集 id，例如 6adsaw-****。</p>
                     */
                    std::string m_logset;
                    bool m_logsetHasBeenSet;

                    /**
                     * <p>是否需要创建日志主题。默认为 false。</p>
                     */
                    bool m_createLogTopic;
                    bool m_createLogTopicHasBeenSet;

                    /**
                     * <p>需要创建日志主题时为日志主题名称；选择已有日志主题时，为日志主题 ID。默认为空。 说明：1. 当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。2. 2.  当参数 CreateLogTopic 的值为 true 时，LogTopic 填日志主题命名，例如 my_test，否则需要填日志主题id，例如 6adsaw-****。</p>
                     */
                    std::string m_logTopic;
                    bool m_logTopicHasBeenSet;

                    /**
                     * <p>CLS 所在地域，不填则默认为 Region 的参数值。</p>
                     */
                    std::string m_cLSRegion;
                    bool m_cLSRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCELOGTOCLSREQUEST_H_
