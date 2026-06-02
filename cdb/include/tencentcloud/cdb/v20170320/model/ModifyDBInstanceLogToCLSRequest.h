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
#include <tencentcloud/cdb/v20170320/model/TagInfoItem.h>


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
                     * 获取<p>实例 ID，可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * @return InstanceId <p>实例 ID，可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID，可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * @param _instanceId <p>实例 ID，可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
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
                     * 获取<p>日志类型。error：错误日志，slowlog：慢日志。</p>
                     * @return LogType <p>日志类型。error：错误日志，slowlog：慢日志。</p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>日志类型。error：错误日志，slowlog：慢日志。</p>
                     * @param _logType <p>日志类型。error：错误日志，slowlog：慢日志。</p>
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
                     * 获取<p>需要创建日志集时为日志集名称；选择已有日志集时，为日志集 ID。默认为空。<br>说明：当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。</p>
                     * @return Logset <p>需要创建日志集时为日志集名称；选择已有日志集时，为日志集 ID。默认为空。<br>说明：当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。</p>
                     * 
                     */
                    std::string GetLogset() const;

                    /**
                     * 设置<p>需要创建日志集时为日志集名称；选择已有日志集时，为日志集 ID。默认为空。<br>说明：当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。</p>
                     * @param _logset <p>需要创建日志集时为日志集名称；选择已有日志集时，为日志集 ID。默认为空。<br>说明：当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。</p>
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
                     * 获取<p>需要创建日志主题时为日志主题名称；选择已有日志主题时，为日志主题 ID。默认为空。<br>说明：当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。</p>
                     * @return LogTopic <p>需要创建日志主题时为日志主题名称；选择已有日志主题时，为日志主题 ID。默认为空。<br>说明：当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。</p>
                     * 
                     */
                    std::string GetLogTopic() const;

                    /**
                     * 设置<p>需要创建日志主题时为日志主题名称；选择已有日志主题时，为日志主题 ID。默认为空。<br>说明：当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。</p>
                     * @param _logTopic <p>需要创建日志主题时为日志主题名称；选择已有日志主题时，为日志主题 ID。默认为空。<br>说明：当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。</p>
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
                     * 获取<p>日志主题有效期，不填写时，默认30天，最大值3600。</p>
                     * @return Period <p>日志主题有效期，不填写时，默认30天，最大值3600。</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>日志主题有效期，不填写时，默认30天，最大值3600。</p>
                     * @param _period <p>日志主题有效期，不填写时，默认30天，最大值3600。</p>
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
                     * 获取<p>创建日志主题时，是否创建索引，默认为 false。</p>
                     * @return CreateIndex <p>创建日志主题时，是否创建索引，默认为 false。</p>
                     * 
                     */
                    bool GetCreateIndex() const;

                    /**
                     * 设置<p>创建日志主题时，是否创建索引，默认为 false。</p>
                     * @param _createIndex <p>创建日志主题时，是否创建索引，默认为 false。</p>
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
                     * 获取<p>CLS 所在地域，不填择默认为 Region 的参数值。</p>
                     * @return ClsRegion <p>CLS 所在地域，不填择默认为 Region 的参数值。</p>
                     * 
                     */
                    std::string GetClsRegion() const;

                    /**
                     * 设置<p>CLS 所在地域，不填择默认为 Region 的参数值。</p>
                     * @param _clsRegion <p>CLS 所在地域，不填择默认为 Region 的参数值。</p>
                     * 
                     */
                    void SetClsRegion(const std::string& _clsRegion);

                    /**
                     * 判断参数 ClsRegion 是否已赋值
                     * @return ClsRegion 是否已赋值
                     * 
                     */
                    bool ClsRegionHasBeenSet() const;

                    /**
                     * 获取<p>创建日志集和日志主题的时候可选，最多不能超过10个标签</p>
                     * @return ResourceTags <p>创建日志集和日志主题的时候可选，最多不能超过10个标签</p>
                     * 
                     */
                    std::vector<TagInfoItem> GetResourceTags() const;

                    /**
                     * 设置<p>创建日志集和日志主题的时候可选，最多不能超过10个标签</p>
                     * @param _resourceTags <p>创建日志集和日志主题的时候可选，最多不能超过10个标签</p>
                     * 
                     */
                    void SetResourceTags(const std::vector<TagInfoItem>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID，可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>日志类型。error：错误日志，slowlog：慢日志。</p>
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
                     * <p>需要创建日志集时为日志集名称；选择已有日志集时，为日志集 ID。默认为空。<br>说明：当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。</p>
                     */
                    std::string m_logset;
                    bool m_logsetHasBeenSet;

                    /**
                     * <p>是否需要创建日志主题。默认为 false。</p>
                     */
                    bool m_createLogTopic;
                    bool m_createLogTopicHasBeenSet;

                    /**
                     * <p>需要创建日志主题时为日志主题名称；选择已有日志主题时，为日志主题 ID。默认为空。<br>说明：当参数 Status 的值为 ON 时，Logset 和 LogTopic 参数必须填一个。</p>
                     */
                    std::string m_logTopic;
                    bool m_logTopicHasBeenSet;

                    /**
                     * <p>日志主题有效期，不填写时，默认30天，最大值3600。</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>创建日志主题时，是否创建索引，默认为 false。</p>
                     */
                    bool m_createIndex;
                    bool m_createIndexHasBeenSet;

                    /**
                     * <p>CLS 所在地域，不填择默认为 Region 的参数值。</p>
                     */
                    std::string m_clsRegion;
                    bool m_clsRegionHasBeenSet;

                    /**
                     * <p>创建日志集和日志主题的时候可选，最多不能超过10个标签</p>
                     */
                    std::vector<TagInfoItem> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCELOGTOCLSREQUEST_H_
