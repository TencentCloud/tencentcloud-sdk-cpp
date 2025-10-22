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
                     * 获取实例 ID，可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     * @return InstanceId 实例 ID，可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     * @param _instanceId 实例 ID，可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
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
                     * 获取日志类型。error：错误日志，slowlog：慢日志。
                     * @return LogType 日志类型。error：错误日志，slowlog：慢日志。
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置日志类型。error：错误日志，slowlog：慢日志。
                     * @param _logType 日志类型。error：错误日志，slowlog：慢日志。
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
                     * 获取投递状态。ON：开启，OFF：关闭。
                     * @return Status 投递状态。ON：开启，OFF：关闭。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置投递状态。ON：开启，OFF：关闭。
                     * @param _status 投递状态。ON：开启，OFF：关闭。
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
                     * 获取是否需要创建日志集。默认为 false。
                     * @return CreateLogset 是否需要创建日志集。默认为 false。
                     * 
                     */
                    bool GetCreateLogset() const;

                    /**
                     * 设置是否需要创建日志集。默认为 false。
                     * @param _createLogset 是否需要创建日志集。默认为 false。
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
                     * 获取需要创建日志集时为日志集名称；选择已有日志集时，为日志集 ID。默认为空。
说明：当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。
                     * @return Logset 需要创建日志集时为日志集名称；选择已有日志集时，为日志集 ID。默认为空。
说明：当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。
                     * 
                     */
                    std::string GetLogset() const;

                    /**
                     * 设置需要创建日志集时为日志集名称；选择已有日志集时，为日志集 ID。默认为空。
说明：当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。
                     * @param _logset 需要创建日志集时为日志集名称；选择已有日志集时，为日志集 ID。默认为空。
说明：当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。
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
                     * 获取是否需要创建日志主题。默认为 false。
                     * @return CreateLogTopic 是否需要创建日志主题。默认为 false。
                     * 
                     */
                    bool GetCreateLogTopic() const;

                    /**
                     * 设置是否需要创建日志主题。默认为 false。
                     * @param _createLogTopic 是否需要创建日志主题。默认为 false。
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
                     * 获取需要创建日志主题时为日志主题名称；选择已有日志主题时，为日志主题 ID。默认为空。
说明：当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。
                     * @return LogTopic 需要创建日志主题时为日志主题名称；选择已有日志主题时，为日志主题 ID。默认为空。
说明：当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。
                     * 
                     */
                    std::string GetLogTopic() const;

                    /**
                     * 设置需要创建日志主题时为日志主题名称；选择已有日志主题时，为日志主题 ID。默认为空。
说明：当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。
                     * @param _logTopic 需要创建日志主题时为日志主题名称；选择已有日志主题时，为日志主题 ID。默认为空。
说明：当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。
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
                     * 获取日志主题有效期，不填写时，默认30天，最大值3600。
                     * @return Period 日志主题有效期，不填写时，默认30天，最大值3600。
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置日志主题有效期，不填写时，默认30天，最大值3600。
                     * @param _period 日志主题有效期，不填写时，默认30天，最大值3600。
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
                     * 获取创建日志主题时，是否创建索引，默认为 false。
                     * @return CreateIndex 创建日志主题时，是否创建索引，默认为 false。
                     * 
                     */
                    bool GetCreateIndex() const;

                    /**
                     * 设置创建日志主题时，是否创建索引，默认为 false。
                     * @param _createIndex 创建日志主题时，是否创建索引，默认为 false。
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
                     * 获取CLS 所在地域，不填择默认为 Region 的参数值。
                     * @return ClsRegion CLS 所在地域，不填择默认为 Region 的参数值。
                     * 
                     */
                    std::string GetClsRegion() const;

                    /**
                     * 设置CLS 所在地域，不填择默认为 Region 的参数值。
                     * @param _clsRegion CLS 所在地域，不填择默认为 Region 的参数值。
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
                     * 实例 ID，可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 日志类型。error：错误日志，slowlog：慢日志。
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 投递状态。ON：开启，OFF：关闭。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否需要创建日志集。默认为 false。
                     */
                    bool m_createLogset;
                    bool m_createLogsetHasBeenSet;

                    /**
                     * 需要创建日志集时为日志集名称；选择已有日志集时，为日志集 ID。默认为空。
说明：当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。
                     */
                    std::string m_logset;
                    bool m_logsetHasBeenSet;

                    /**
                     * 是否需要创建日志主题。默认为 false。
                     */
                    bool m_createLogTopic;
                    bool m_createLogTopicHasBeenSet;

                    /**
                     * 需要创建日志主题时为日志主题名称；选择已有日志主题时，为日志主题 ID。默认为空。
说明：当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。
                     */
                    std::string m_logTopic;
                    bool m_logTopicHasBeenSet;

                    /**
                     * 日志主题有效期，不填写时，默认30天，最大值3600。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 创建日志主题时，是否创建索引，默认为 false。
                     */
                    bool m_createIndex;
                    bool m_createIndexHasBeenSet;

                    /**
                     * CLS 所在地域，不填择默认为 Region 的参数值。
                     */
                    std::string m_clsRegion;
                    bool m_clsRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCELOGTOCLSREQUEST_H_
