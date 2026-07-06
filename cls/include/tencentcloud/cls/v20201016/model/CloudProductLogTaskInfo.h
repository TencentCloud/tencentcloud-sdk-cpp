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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CLOUDPRODUCTLOGTASKINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CLOUDPRODUCTLOGTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 云产品日志投递任务信息
                */
                class CloudProductLogTaskInfo : public AbstractModel
                {
                public:
                    CloudProductLogTaskInfo();
                    ~CloudProductLogTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>日志服务地域</p>
                     * @return ClsRegion <p>日志服务地域</p>
                     * 
                     */
                    std::string GetClsRegion() const;

                    /**
                     * 设置<p>日志服务地域</p>
                     * @param _clsRegion <p>日志服务地域</p>
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
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>日志集ID</p>
                     * @return LogsetId <p>日志集ID</p>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置<p>日志集ID</p>
                     * @param _logsetId <p>日志集ID</p>
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
                     * 获取<p>日志主题ID</p>
                     * @return TopicId <p>日志主题ID</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题ID</p>
                     * @param _topicId <p>日志主题ID</p>
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
                     * 获取<p>日志配置拓展信息， 一般用于存储额外的日志投递配置</p>
                     * @return Extend <p>日志配置拓展信息， 一般用于存储额外的日志投递配置</p>
                     * 
                     */
                    std::string GetExtend() const;

                    /**
                     * 设置<p>日志配置拓展信息， 一般用于存储额外的日志投递配置</p>
                     * @param _extend <p>日志配置拓展信息， 一般用于存储额外的日志投递配置</p>
                     * 
                     */
                    void SetExtend(const std::string& _extend);

                    /**
                     * 判断参数 Extend 是否已赋值
                     * @return Extend 是否已赋值
                     * 
                     */
                    bool ExtendHasBeenSet() const;

                    /**
                     * 获取<p>日志类型，支持枚举：CDS-AUDIT、CDS-RISK、CDB-AUDIT、TDSQL-C-AUDIT、MongoDB-AUDIT、MongoDB-SlowLog、MongoDB-ErrorLog、TDMYSQL-SLOW、DCDB-AUDIT、DCDB-SLOW、DCDB-ERROR、MariaDB-AUDIT、MariaDB-SLOW、MariaDB-ERROR、PostgreSQL-SLOW、PostgreSQL-ERROR、PostgreSQL-AUDIT、BH-FILELOG、BH-COMMANDLOG、APIS-ACCESS</p>
                     * @return LogType <p>日志类型，支持枚举：CDS-AUDIT、CDS-RISK、CDB-AUDIT、TDSQL-C-AUDIT、MongoDB-AUDIT、MongoDB-SlowLog、MongoDB-ErrorLog、TDMYSQL-SLOW、DCDB-AUDIT、DCDB-SLOW、DCDB-ERROR、MariaDB-AUDIT、MariaDB-SLOW、MariaDB-ERROR、PostgreSQL-SLOW、PostgreSQL-ERROR、PostgreSQL-AUDIT、BH-FILELOG、BH-COMMANDLOG、APIS-ACCESS</p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>日志类型，支持枚举：CDS-AUDIT、CDS-RISK、CDB-AUDIT、TDSQL-C-AUDIT、MongoDB-AUDIT、MongoDB-SlowLog、MongoDB-ErrorLog、TDMYSQL-SLOW、DCDB-AUDIT、DCDB-SLOW、DCDB-ERROR、MariaDB-AUDIT、MariaDB-SLOW、MariaDB-ERROR、PostgreSQL-SLOW、PostgreSQL-ERROR、PostgreSQL-AUDIT、BH-FILELOG、BH-COMMANDLOG、APIS-ACCESS</p>
                     * @param _logType <p>日志类型，支持枚举：CDS-AUDIT、CDS-RISK、CDB-AUDIT、TDSQL-C-AUDIT、MongoDB-AUDIT、MongoDB-SlowLog、MongoDB-ErrorLog、TDMYSQL-SLOW、DCDB-AUDIT、DCDB-SLOW、DCDB-ERROR、MariaDB-AUDIT、MariaDB-SLOW、MariaDB-ERROR、PostgreSQL-SLOW、PostgreSQL-ERROR、PostgreSQL-AUDIT、BH-FILELOG、BH-COMMANDLOG、APIS-ACCESS</p>
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
                     * 获取<p>任务状态， 0创建中 1创建完成 2 删除中</p>
                     * @return Status <p>任务状态， 0创建中 1创建完成 2 删除中</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>任务状态， 0创建中 1创建完成 2 删除中</p>
                     * @param _status <p>任务状态， 0创建中 1创建完成 2 删除中</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>投递任务关联topic的标签信息</p>
                     * @return TopicTags <p>投递任务关联topic的标签信息</p>
                     * 
                     */
                    std::vector<Tag> GetTopicTags() const;

                    /**
                     * 设置<p>投递任务关联topic的标签信息</p>
                     * @param _topicTags <p>投递任务关联topic的标签信息</p>
                     * 
                     */
                    void SetTopicTags(const std::vector<Tag>& _topicTags);

                    /**
                     * 判断参数 TopicTags 是否已赋值
                     * @return TopicTags 是否已赋值
                     * 
                     */
                    bool TopicTagsHasBeenSet() const;

                    /**
                     * 获取<p>投递任务关联logset的标签信息</p>
                     * @return LogsetTags <p>投递任务关联logset的标签信息</p>
                     * 
                     */
                    std::vector<Tag> GetLogsetTags() const;

                    /**
                     * 设置<p>投递任务关联logset的标签信息</p>
                     * @param _logsetTags <p>投递任务关联logset的标签信息</p>
                     * 
                     */
                    void SetLogsetTags(const std::vector<Tag>& _logsetTags);

                    /**
                     * 判断参数 LogsetTags 是否已赋值
                     * @return LogsetTags 是否已赋值
                     * 
                     */
                    bool LogsetTagsHasBeenSet() const;

                private:

                    /**
                     * <p>日志服务地域</p>
                     */
                    std::string m_clsRegion;
                    bool m_clsRegionHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>日志集ID</p>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>日志主题ID</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>日志配置拓展信息， 一般用于存储额外的日志投递配置</p>
                     */
                    std::string m_extend;
                    bool m_extendHasBeenSet;

                    /**
                     * <p>日志类型，支持枚举：CDS-AUDIT、CDS-RISK、CDB-AUDIT、TDSQL-C-AUDIT、MongoDB-AUDIT、MongoDB-SlowLog、MongoDB-ErrorLog、TDMYSQL-SLOW、DCDB-AUDIT、DCDB-SLOW、DCDB-ERROR、MariaDB-AUDIT、MariaDB-SLOW、MariaDB-ERROR、PostgreSQL-SLOW、PostgreSQL-ERROR、PostgreSQL-AUDIT、BH-FILELOG、BH-COMMANDLOG、APIS-ACCESS</p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>任务状态， 0创建中 1创建完成 2 删除中</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>投递任务关联topic的标签信息</p>
                     */
                    std::vector<Tag> m_topicTags;
                    bool m_topicTagsHasBeenSet;

                    /**
                     * <p>投递任务关联logset的标签信息</p>
                     */
                    std::vector<Tag> m_logsetTags;
                    bool m_logsetTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CLOUDPRODUCTLOGTASKINFO_H_
