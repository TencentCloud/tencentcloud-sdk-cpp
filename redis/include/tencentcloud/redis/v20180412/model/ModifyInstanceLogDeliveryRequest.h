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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCELOGDELIVERYREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCELOGDELIVERYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyInstanceLogDelivery请求参数结构体
                */
                class ModifyInstanceLogDeliveryRequest : public AbstractModel
                {
                public:
                    ModifyInstanceLogDeliveryRequest();
                    ~ModifyInstanceLogDeliveryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @return InstanceId 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @param _instanceId 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
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
                     * 获取日志类型。当前仅支持设置为slowlog，指慢查询日志。
                     * @return LogType 日志类型。当前仅支持设置为slowlog，指慢查询日志。
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置日志类型。当前仅支持设置为slowlog，指慢查询日志。
                     * @param _logType 日志类型。当前仅支持设置为slowlog，指慢查询日志。
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
                     * 获取日志投递开启状态。
- true：开启。
- false：关闭。
                     * @return Enabled 日志投递开启状态。
- true：开启。
- false：关闭。
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置日志投递开启状态。
- true：开启。
- false：关闭。
                     * @param _enabled 日志投递开启状态。
- true：开启。
- false：关闭。
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取投递的日志集ID。通过接口[DescribeLogsets](https://cloud.tencent.com/document/api/614/58624)获取到日志集ID。
                     * @return LogsetId 投递的日志集ID。通过接口[DescribeLogsets](https://cloud.tencent.com/document/api/614/58624)获取到日志集ID。
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置投递的日志集ID。通过接口[DescribeLogsets](https://cloud.tencent.com/document/api/614/58624)获取到日志集ID。
                     * @param _logsetId 投递的日志集ID。通过接口[DescribeLogsets](https://cloud.tencent.com/document/api/614/58624)获取到日志集ID。
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取投递的日志主题ID。通过接口[DescribeTopics](https://cloud.tencent.com/document/api/614/56454)获取到日志主题ID。
                     * @return TopicId 投递的日志主题ID。通过接口[DescribeTopics](https://cloud.tencent.com/document/api/614/56454)获取到日志主题ID。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置投递的日志主题ID。通过接口[DescribeTopics](https://cloud.tencent.com/document/api/614/56454)获取到日志主题ID。
                     * @param _topicId 投递的日志主题ID。通过接口[DescribeTopics](https://cloud.tencent.com/document/api/614/56454)获取到日志主题ID。
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取日志集名称。**LogsetId**为空时必传，系统会以LogsetName为名称来创建新的日志集并投递日志。
                     * @return LogsetName 日志集名称。**LogsetId**为空时必传，系统会以LogsetName为名称来创建新的日志集并投递日志。
                     * 
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置日志集名称。**LogsetId**为空时必传，系统会以LogsetName为名称来创建新的日志集并投递日志。
                     * @param _logsetName 日志集名称。**LogsetId**为空时必传，系统会以LogsetName为名称来创建新的日志集并投递日志。
                     * 
                     */
                    void SetLogsetName(const std::string& _logsetName);

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     * 
                     */
                    bool LogsetNameHasBeenSet() const;

                    /**
                     * 获取日志主题名称。**TopicId**为空时必传，系统会以TopicName为名称来创建新的日志主题并投递日志。
                     * @return TopicName 日志主题名称。**TopicId**为空时必传，系统会以TopicName为名称来创建新的日志主题并投递日志。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置日志主题名称。**TopicId**为空时必传，系统会以TopicName为名称来创建新的日志主题并投递日志。
                     * @param _topicName 日志主题名称。**TopicId**为空时必传，系统会以TopicName为名称来创建新的日志主题并投递日志。
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取日志集所在地域，不传默认使用实例所在地域。
                     * @return LogRegion 日志集所在地域，不传默认使用实例所在地域。
                     * 
                     */
                    std::string GetLogRegion() const;

                    /**
                     * 设置日志集所在地域，不传默认使用实例所在地域。
                     * @param _logRegion 日志集所在地域，不传默认使用实例所在地域。
                     * 
                     */
                    void SetLogRegion(const std::string& _logRegion);

                    /**
                     * 判断参数 LogRegion 是否已赋值
                     * @return LogRegion 是否已赋值
                     * 
                     */
                    bool LogRegionHasBeenSet() const;

                    /**
                     * 获取日志存储时间，默认为30天，可选范围1-3600天。
                     * @return Period 日志存储时间，默认为30天，可选范围1-3600天。
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置日志存储时间，默认为30天，可选范围1-3600天。
                     * @param _period 日志存储时间，默认为30天，可选范围1-3600天。
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
                     * 获取创建日志主题时，是否创建索引。
                     * @return CreateIndex 创建日志主题时，是否创建索引。
                     * 
                     */
                    bool GetCreateIndex() const;

                    /**
                     * 设置创建日志主题时，是否创建索引。
                     * @param _createIndex 创建日志主题时，是否创建索引。
                     * 
                     */
                    void SetCreateIndex(const bool& _createIndex);

                    /**
                     * 判断参数 CreateIndex 是否已赋值
                     * @return CreateIndex 是否已赋值
                     * 
                     */
                    bool CreateIndexHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 日志类型。当前仅支持设置为slowlog，指慢查询日志。
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 日志投递开启状态。
- true：开启。
- false：关闭。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 投递的日志集ID。通过接口[DescribeLogsets](https://cloud.tencent.com/document/api/614/58624)获取到日志集ID。
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 投递的日志主题ID。通过接口[DescribeTopics](https://cloud.tencent.com/document/api/614/56454)获取到日志主题ID。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 日志集名称。**LogsetId**为空时必传，系统会以LogsetName为名称来创建新的日志集并投递日志。
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * 日志主题名称。**TopicId**为空时必传，系统会以TopicName为名称来创建新的日志主题并投递日志。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 日志集所在地域，不传默认使用实例所在地域。
                     */
                    std::string m_logRegion;
                    bool m_logRegionHasBeenSet;

                    /**
                     * 日志存储时间，默认为30天，可选范围1-3600天。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 创建日志主题时，是否创建索引。
                     */
                    bool m_createIndex;
                    bool m_createIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCELOGDELIVERYREQUEST_H_
