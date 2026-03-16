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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATECLOUDPRODUCTLOGCOLLECTIONREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATECLOUDPRODUCTLOGCOLLECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateCloudProductLogCollection请求参数结构体
                */
                class CreateCloudProductLogCollectionRequest : public AbstractModel
                {
                public:
                    CreateCloudProductLogCollectionRequest();
                    ~CreateCloudProductLogCollectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p><ul><li>通过各个接入云产品官方文档获取</li></ul>
                     * @return InstanceId <p>实例ID</p><ul><li>通过各个接入云产品官方文档获取</li></ul>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p><ul><li>通过各个接入云产品官方文档获取</li></ul>
                     * @param _instanceId <p>实例ID</p><ul><li>通过各个接入云产品官方文档获取</li></ul>
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
                     * 获取<p>云产品标识，支持枚举：CDS、CWP、CDB、TDSQL-C、MongoDB、TDStore、DCDB、MariaDB、PostgreSQL、BH、APIS</p>
                     * @return AssumerName <p>云产品标识，支持枚举：CDS、CWP、CDB、TDSQL-C、MongoDB、TDStore、DCDB、MariaDB、PostgreSQL、BH、APIS</p>
                     * 
                     */
                    std::string GetAssumerName() const;

                    /**
                     * 设置<p>云产品标识，支持枚举：CDS、CWP、CDB、TDSQL-C、MongoDB、TDStore、DCDB、MariaDB、PostgreSQL、BH、APIS</p>
                     * @param _assumerName <p>云产品标识，支持枚举：CDS、CWP、CDB、TDSQL-C、MongoDB、TDStore、DCDB、MariaDB、PostgreSQL、BH、APIS</p>
                     * 
                     */
                    void SetAssumerName(const std::string& _assumerName);

                    /**
                     * 判断参数 AssumerName 是否已赋值
                     * @return AssumerName 是否已赋值
                     * 
                     */
                    bool AssumerNameHasBeenSet() const;

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
                     * 获取<p>云产品地域。 不同日志类型(LogType)地域入参格式存在差异， 请参考如下示例：</p><ul><li>CDS所有日志类型：ap-guangzhou</li><li>CDB-AUDIT: gz</li><li>TDSQL-C-AUDIT:  gz</li><li>MongoDB-AUDIT:  gz</li><li>MongoDB-SlowLog：ap-guangzhou</li><li>MongoDB-ErrorLog：ap-guangzhou</li><li>TDMYSQL-SLOW：gz</li><li>DCDB所有日志类型：gz</li><li>MariaDB所有日志类型：gz</li><li>PostgreSQL所有日志类型：gz</li><li>BH所有日志类型：overseas-polaris(中国香港地区和其他)/fsi-polaris(金融区)/general-polaris(普通区)/intl-sg-prod(国际站)</li><li>APIS所有日志类型：gz</li></ul>
                     * @return CloudProductRegion <p>云产品地域。 不同日志类型(LogType)地域入参格式存在差异， 请参考如下示例：</p><ul><li>CDS所有日志类型：ap-guangzhou</li><li>CDB-AUDIT: gz</li><li>TDSQL-C-AUDIT:  gz</li><li>MongoDB-AUDIT:  gz</li><li>MongoDB-SlowLog：ap-guangzhou</li><li>MongoDB-ErrorLog：ap-guangzhou</li><li>TDMYSQL-SLOW：gz</li><li>DCDB所有日志类型：gz</li><li>MariaDB所有日志类型：gz</li><li>PostgreSQL所有日志类型：gz</li><li>BH所有日志类型：overseas-polaris(中国香港地区和其他)/fsi-polaris(金融区)/general-polaris(普通区)/intl-sg-prod(国际站)</li><li>APIS所有日志类型：gz</li></ul>
                     * 
                     */
                    std::string GetCloudProductRegion() const;

                    /**
                     * 设置<p>云产品地域。 不同日志类型(LogType)地域入参格式存在差异， 请参考如下示例：</p><ul><li>CDS所有日志类型：ap-guangzhou</li><li>CDB-AUDIT: gz</li><li>TDSQL-C-AUDIT:  gz</li><li>MongoDB-AUDIT:  gz</li><li>MongoDB-SlowLog：ap-guangzhou</li><li>MongoDB-ErrorLog：ap-guangzhou</li><li>TDMYSQL-SLOW：gz</li><li>DCDB所有日志类型：gz</li><li>MariaDB所有日志类型：gz</li><li>PostgreSQL所有日志类型：gz</li><li>BH所有日志类型：overseas-polaris(中国香港地区和其他)/fsi-polaris(金融区)/general-polaris(普通区)/intl-sg-prod(国际站)</li><li>APIS所有日志类型：gz</li></ul>
                     * @param _cloudProductRegion <p>云产品地域。 不同日志类型(LogType)地域入参格式存在差异， 请参考如下示例：</p><ul><li>CDS所有日志类型：ap-guangzhou</li><li>CDB-AUDIT: gz</li><li>TDSQL-C-AUDIT:  gz</li><li>MongoDB-AUDIT:  gz</li><li>MongoDB-SlowLog：ap-guangzhou</li><li>MongoDB-ErrorLog：ap-guangzhou</li><li>TDMYSQL-SLOW：gz</li><li>DCDB所有日志类型：gz</li><li>MariaDB所有日志类型：gz</li><li>PostgreSQL所有日志类型：gz</li><li>BH所有日志类型：overseas-polaris(中国香港地区和其他)/fsi-polaris(金融区)/general-polaris(普通区)/intl-sg-prod(国际站)</li><li>APIS所有日志类型：gz</li></ul>
                     * 
                     */
                    void SetCloudProductRegion(const std::string& _cloudProductRegion);

                    /**
                     * 判断参数 CloudProductRegion 是否已赋值
                     * @return CloudProductRegion 是否已赋值
                     * 
                     */
                    bool CloudProductRegionHasBeenSet() const;

                    /**
                     * 获取<p>CLS目标地域</p><ul><li>支持地域参考  <a href="https://cloud.tencent.com/document/api/614/56474#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">地域列表</a> 文档</li></ul>
                     * @return ClsRegion <p>CLS目标地域</p><ul><li>支持地域参考  <a href="https://cloud.tencent.com/document/api/614/56474#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">地域列表</a> 文档</li></ul>
                     * 
                     */
                    std::string GetClsRegion() const;

                    /**
                     * 设置<p>CLS目标地域</p><ul><li>支持地域参考  <a href="https://cloud.tencent.com/document/api/614/56474#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">地域列表</a> 文档</li></ul>
                     * @param _clsRegion <p>CLS目标地域</p><ul><li>支持地域参考  <a href="https://cloud.tencent.com/document/api/614/56474#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">地域列表</a> 文档</li></ul>
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
                     * 获取<p>日志集名称，未填LogsetId时必填。若日志集不存在, 将自动创建</p>
                     * @return LogsetName <p>日志集名称，未填LogsetId时必填。若日志集不存在, 将自动创建</p>
                     * 
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置<p>日志集名称，未填LogsetId时必填。若日志集不存在, 将自动创建</p>
                     * @param _logsetName <p>日志集名称，未填LogsetId时必填。若日志集不存在, 将自动创建</p>
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
                     * 获取<p>日志主题名称，在未填TopicId时必填。 若日志主题不存在，将自动创建</p>
                     * @return TopicName <p>日志主题名称，在未填TopicId时必填。 若日志主题不存在，将自动创建</p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>日志主题名称，在未填TopicId时必填。 若日志主题不存在，将自动创建</p>
                     * @param _topicName <p>日志主题名称，在未填TopicId时必填。 若日志主题不存在，将自动创建</p>
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
                     * 获取<p>日志配置扩展信息， 一般用于存储额外的日志投递配置</p>
                     * @return Extend <p>日志配置扩展信息， 一般用于存储额外的日志投递配置</p>
                     * 
                     */
                    std::string GetExtend() const;

                    /**
                     * 设置<p>日志配置扩展信息， 一般用于存储额外的日志投递配置</p>
                     * @param _extend <p>日志配置扩展信息， 一般用于存储额外的日志投递配置</p>
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
                     * 获取<p>日志集id</p><ul><li>通过<a href="https://cloud.tencent.com/document/api/614/58624">获取日志集列表</a>获取日志集Id。</li></ul>
                     * @return LogsetId <p>日志集id</p><ul><li>通过<a href="https://cloud.tencent.com/document/api/614/58624">获取日志集列表</a>获取日志集Id。</li></ul>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置<p>日志集id</p><ul><li>通过<a href="https://cloud.tencent.com/document/api/614/58624">获取日志集列表</a>获取日志集Id。</li></ul>
                     * @param _logsetId <p>日志集id</p><ul><li>通过<a href="https://cloud.tencent.com/document/api/614/58624">获取日志集列表</a>获取日志集Id。</li></ul>
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
                     * 获取<p>日志主题id</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * @return TopicId <p>日志主题id</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题id</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * @param _topicId <p>日志主题id</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
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
                     * 获取<p>标签描述列表，通过指定该参数可以同时绑定标签到相应的主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。</p>
                     * @return Tags <p>标签描述列表，通过指定该参数可以同时绑定标签到相应的主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签描述列表，通过指定该参数可以同时绑定标签到相应的主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。</p>
                     * @param _tags <p>标签描述列表，通过指定该参数可以同时绑定标签到相应的主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p><ul><li>通过各个接入云产品官方文档获取</li></ul>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>云产品标识，支持枚举：CDS、CWP、CDB、TDSQL-C、MongoDB、TDStore、DCDB、MariaDB、PostgreSQL、BH、APIS</p>
                     */
                    std::string m_assumerName;
                    bool m_assumerNameHasBeenSet;

                    /**
                     * <p>日志类型，支持枚举：CDS-AUDIT、CDS-RISK、CDB-AUDIT、TDSQL-C-AUDIT、MongoDB-AUDIT、MongoDB-SlowLog、MongoDB-ErrorLog、TDMYSQL-SLOW、DCDB-AUDIT、DCDB-SLOW、DCDB-ERROR、MariaDB-AUDIT、MariaDB-SLOW、MariaDB-ERROR、PostgreSQL-SLOW、PostgreSQL-ERROR、PostgreSQL-AUDIT、BH-FILELOG、BH-COMMANDLOG、APIS-ACCESS</p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>云产品地域。 不同日志类型(LogType)地域入参格式存在差异， 请参考如下示例：</p><ul><li>CDS所有日志类型：ap-guangzhou</li><li>CDB-AUDIT: gz</li><li>TDSQL-C-AUDIT:  gz</li><li>MongoDB-AUDIT:  gz</li><li>MongoDB-SlowLog：ap-guangzhou</li><li>MongoDB-ErrorLog：ap-guangzhou</li><li>TDMYSQL-SLOW：gz</li><li>DCDB所有日志类型：gz</li><li>MariaDB所有日志类型：gz</li><li>PostgreSQL所有日志类型：gz</li><li>BH所有日志类型：overseas-polaris(中国香港地区和其他)/fsi-polaris(金融区)/general-polaris(普通区)/intl-sg-prod(国际站)</li><li>APIS所有日志类型：gz</li></ul>
                     */
                    std::string m_cloudProductRegion;
                    bool m_cloudProductRegionHasBeenSet;

                    /**
                     * <p>CLS目标地域</p><ul><li>支持地域参考  <a href="https://cloud.tencent.com/document/api/614/56474#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">地域列表</a> 文档</li></ul>
                     */
                    std::string m_clsRegion;
                    bool m_clsRegionHasBeenSet;

                    /**
                     * <p>日志集名称，未填LogsetId时必填。若日志集不存在, 将自动创建</p>
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * <p>日志主题名称，在未填TopicId时必填。 若日志主题不存在，将自动创建</p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>日志配置扩展信息， 一般用于存储额外的日志投递配置</p>
                     */
                    std::string m_extend;
                    bool m_extendHasBeenSet;

                    /**
                     * <p>日志集id</p><ul><li>通过<a href="https://cloud.tencent.com/document/api/614/58624">获取日志集列表</a>获取日志集Id。</li></ul>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>日志主题id</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>标签描述列表，通过指定该参数可以同时绑定标签到相应的主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATECLOUDPRODUCTLOGCOLLECTIONREQUEST_H_
