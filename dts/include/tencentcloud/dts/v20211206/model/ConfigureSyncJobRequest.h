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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_CONFIGURESYNCJOBREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_CONFIGURESYNCJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/Objects.h>
#include <tencentcloud/dts/v20211206/model/Endpoint.h>
#include <tencentcloud/dts/v20211206/model/SyncDBEndpointInfos.h>
#include <tencentcloud/dts/v20211206/model/Options.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * ConfigureSyncJob请求参数结构体
                */
                class ConfigureSyncJobRequest : public AbstractModel
                {
                public:
                    ConfigureSyncJobRequest();
                    ~ConfigureSyncJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>同步实例id（即标识一个同步作业），形如sync-werwfs23，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
                     * @return JobId <p>同步实例id（即标识一个同步作业），形如sync-werwfs23，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>同步实例id（即标识一个同步作业），形如sync-werwfs23，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
                     * @param _jobId <p>同步实例id（即标识一个同步作业），形如sync-werwfs23，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取<p>源端接入类型，cdb(云数据库)、cvm(云服务器自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云),注意具体可选值依赖当前链路</p>
                     * @return SrcAccessType <p>源端接入类型，cdb(云数据库)、cvm(云服务器自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云),注意具体可选值依赖当前链路</p>
                     * 
                     */
                    std::string GetSrcAccessType() const;

                    /**
                     * 设置<p>源端接入类型，cdb(云数据库)、cvm(云服务器自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云),注意具体可选值依赖当前链路</p>
                     * @param _srcAccessType <p>源端接入类型，cdb(云数据库)、cvm(云服务器自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云),注意具体可选值依赖当前链路</p>
                     * 
                     */
                    void SetSrcAccessType(const std::string& _srcAccessType);

                    /**
                     * 判断参数 SrcAccessType 是否已赋值
                     * @return SrcAccessType 是否已赋值
                     * 
                     */
                    bool SrcAccessTypeHasBeenSet() const;

                    /**
                     * 获取<p>目标端接入类型，cdb(云数据库)、cvm(云服务器自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)、ckafka(CKafka实例),注意具体可选值依赖当前链路</p>
                     * @return DstAccessType <p>目标端接入类型，cdb(云数据库)、cvm(云服务器自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)、ckafka(CKafka实例),注意具体可选值依赖当前链路</p>
                     * 
                     */
                    std::string GetDstAccessType() const;

                    /**
                     * 设置<p>目标端接入类型，cdb(云数据库)、cvm(云服务器自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)、ckafka(CKafka实例),注意具体可选值依赖当前链路</p>
                     * @param _dstAccessType <p>目标端接入类型，cdb(云数据库)、cvm(云服务器自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)、ckafka(CKafka实例),注意具体可选值依赖当前链路</p>
                     * 
                     */
                    void SetDstAccessType(const std::string& _dstAccessType);

                    /**
                     * 判断参数 DstAccessType 是否已赋值
                     * @return DstAccessType 是否已赋值
                     * 
                     */
                    bool DstAccessTypeHasBeenSet() const;

                    /**
                     * 获取<p>同步库表对象信息</p>
                     * @return Objects <p>同步库表对象信息</p>
                     * 
                     */
                    Objects GetObjects() const;

                    /**
                     * 设置<p>同步库表对象信息</p>
                     * @param _objects <p>同步库表对象信息</p>
                     * 
                     */
                    void SetObjects(const Objects& _objects);

                    /**
                     * 判断参数 Objects 是否已赋值
                     * @return Objects 是否已赋值
                     * 
                     */
                    bool ObjectsHasBeenSet() const;

                    /**
                     * 获取<p>同步任务名称</p>
                     * @return JobName <p>同步任务名称</p>
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置<p>同步任务名称</p>
                     * @param _jobName <p>同步任务名称</p>
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取<p>配置任务模式，默认值为fullMode</p><p>枚举值：</p><ul><li>fullMode： 正常模式</li></ul>
                     * @return JobMode <p>配置任务模式，默认值为fullMode</p><p>枚举值：</p><ul><li>fullMode： 正常模式</li></ul>
                     * 
                     */
                    std::string GetJobMode() const;

                    /**
                     * 设置<p>配置任务模式，默认值为fullMode</p><p>枚举值：</p><ul><li>fullMode： 正常模式</li></ul>
                     * @param _jobMode <p>配置任务模式，默认值为fullMode</p><p>枚举值：</p><ul><li>fullMode： 正常模式</li></ul>
                     * 
                     */
                    void SetJobMode(const std::string& _jobMode);

                    /**
                     * 判断参数 JobMode 是否已赋值
                     * @return JobMode 是否已赋值
                     * 
                     */
                    bool JobModeHasBeenSet() const;

                    /**
                     * 获取<p>运行模式，取值如：Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)</p>
                     * @return RunMode <p>运行模式，取值如：Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)</p>
                     * 
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置<p>运行模式，取值如：Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)</p>
                     * @param _runMode <p>运行模式，取值如：Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)</p>
                     * 
                     */
                    void SetRunMode(const std::string& _runMode);

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     * 
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取<p>期待启动时间，当RunMode取值为Timed时，此值必填，形如：&quot;2006-01-02 15:04:05&quot;</p>
                     * @return ExpectRunTime <p>期待启动时间，当RunMode取值为Timed时，此值必填，形如：&quot;2006-01-02 15:04:05&quot;</p>
                     * 
                     */
                    std::string GetExpectRunTime() const;

                    /**
                     * 设置<p>期待启动时间，当RunMode取值为Timed时，此值必填，形如：&quot;2006-01-02 15:04:05&quot;</p>
                     * @param _expectRunTime <p>期待启动时间，当RunMode取值为Timed时，此值必填，形如：&quot;2006-01-02 15:04:05&quot;</p>
                     * 
                     */
                    void SetExpectRunTime(const std::string& _expectRunTime);

                    /**
                     * 判断参数 ExpectRunTime 是否已赋值
                     * @return ExpectRunTime 是否已赋值
                     * 
                     */
                    bool ExpectRunTimeHasBeenSet() const;

                    /**
                     * 获取<p>源端tdsql连接方式：proxy-通过tdsql proxy主机访问各个set节点，注意只有在自研上云的网络环境下才能通过这种方式连接，SrcInfos中只需要提供proxy主机信息。set-直连set节点，如选择直连set方式，需要正确填写proxy主机信息及所有set节点信息。源端是tdsqlmysql类型必填。</p>
                     * @return SrcConnectType <p>源端tdsql连接方式：proxy-通过tdsql proxy主机访问各个set节点，注意只有在自研上云的网络环境下才能通过这种方式连接，SrcInfos中只需要提供proxy主机信息。set-直连set节点，如选择直连set方式，需要正确填写proxy主机信息及所有set节点信息。源端是tdsqlmysql类型必填。</p>
                     * 
                     */
                    std::string GetSrcConnectType() const;

                    /**
                     * 设置<p>源端tdsql连接方式：proxy-通过tdsql proxy主机访问各个set节点，注意只有在自研上云的网络环境下才能通过这种方式连接，SrcInfos中只需要提供proxy主机信息。set-直连set节点，如选择直连set方式，需要正确填写proxy主机信息及所有set节点信息。源端是tdsqlmysql类型必填。</p>
                     * @param _srcConnectType <p>源端tdsql连接方式：proxy-通过tdsql proxy主机访问各个set节点，注意只有在自研上云的网络环境下才能通过这种方式连接，SrcInfos中只需要提供proxy主机信息。set-直连set节点，如选择直连set方式，需要正确填写proxy主机信息及所有set节点信息。源端是tdsqlmysql类型必填。</p>
                     * 
                     */
                    void SetSrcConnectType(const std::string& _srcConnectType);

                    /**
                     * 判断参数 SrcConnectType 是否已赋值
                     * @return SrcConnectType 是否已赋值
                     * 
                     */
                    bool SrcConnectTypeHasBeenSet() const;

                    /**
                     * 获取<p>源端信息，单机版类型数据库配置使用，且SrcNodeType传single。例如mysql、percona、mariadb等。</p>
                     * @return SrcInfo <p>源端信息，单机版类型数据库配置使用，且SrcNodeType传single。例如mysql、percona、mariadb等。</p>
                     * 
                     */
                    Endpoint GetSrcInfo() const;

                    /**
                     * 设置<p>源端信息，单机版类型数据库配置使用，且SrcNodeType传single。例如mysql、percona、mariadb等。</p>
                     * @param _srcInfo <p>源端信息，单机版类型数据库配置使用，且SrcNodeType传single。例如mysql、percona、mariadb等。</p>
                     * 
                     */
                    void SetSrcInfo(const Endpoint& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     * 
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取<p>源端信息，分布式类型数据库配置使用，且SrcNodeType传cluster。例如分布式数据库tdsqlmysql等，mongodb使用此参数透传。</p>
                     * @return SrcInfos <p>源端信息，分布式类型数据库配置使用，且SrcNodeType传cluster。例如分布式数据库tdsqlmysql等，mongodb使用此参数透传。</p>
                     * 
                     */
                    SyncDBEndpointInfos GetSrcInfos() const;

                    /**
                     * 设置<p>源端信息，分布式类型数据库配置使用，且SrcNodeType传cluster。例如分布式数据库tdsqlmysql等，mongodb使用此参数透传。</p>
                     * @param _srcInfos <p>源端信息，分布式类型数据库配置使用，且SrcNodeType传cluster。例如分布式数据库tdsqlmysql等，mongodb使用此参数透传。</p>
                     * 
                     */
                    void SetSrcInfos(const SyncDBEndpointInfos& _srcInfos);

                    /**
                     * 判断参数 SrcInfos 是否已赋值
                     * @return SrcInfos 是否已赋值
                     * 
                     */
                    bool SrcInfosHasBeenSet() const;

                    /**
                     * 获取<p>枚举值：cluster、single。源库为单节点数据库使用single，多节点使用cluster</p>
                     * @return SrcNodeType <p>枚举值：cluster、single。源库为单节点数据库使用single，多节点使用cluster</p>
                     * 
                     */
                    std::string GetSrcNodeType() const;

                    /**
                     * 设置<p>枚举值：cluster、single。源库为单节点数据库使用single，多节点使用cluster</p>
                     * @param _srcNodeType <p>枚举值：cluster、single。源库为单节点数据库使用single，多节点使用cluster</p>
                     * 
                     */
                    void SetSrcNodeType(const std::string& _srcNodeType);

                    /**
                     * 判断参数 SrcNodeType 是否已赋值
                     * @return SrcNodeType 是否已赋值
                     * 
                     */
                    bool SrcNodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>目标端信息，单机版类型数据库配置使用，且SrcNodeType传single。例如mysql、percona、mariadb等。</p>
                     * @return DstInfo <p>目标端信息，单机版类型数据库配置使用，且SrcNodeType传single。例如mysql、percona、mariadb等。</p>
                     * 
                     */
                    Endpoint GetDstInfo() const;

                    /**
                     * 设置<p>目标端信息，单机版类型数据库配置使用，且SrcNodeType传single。例如mysql、percona、mariadb等。</p>
                     * @param _dstInfo <p>目标端信息，单机版类型数据库配置使用，且SrcNodeType传single。例如mysql、percona、mariadb等。</p>
                     * 
                     */
                    void SetDstInfo(const Endpoint& _dstInfo);

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     * 
                     */
                    bool DstInfoHasBeenSet() const;

                    /**
                     * 获取<p>目标端信息，分布式类型数据库配置使用，且SrcNodeType传cluster。例如分布式数据库tdsqlmysql等，mongodb使用此参数透传。</p>
                     * @return DstInfos <p>目标端信息，分布式类型数据库配置使用，且SrcNodeType传cluster。例如分布式数据库tdsqlmysql等，mongodb使用此参数透传。</p>
                     * 
                     */
                    SyncDBEndpointInfos GetDstInfos() const;

                    /**
                     * 设置<p>目标端信息，分布式类型数据库配置使用，且SrcNodeType传cluster。例如分布式数据库tdsqlmysql等，mongodb使用此参数透传。</p>
                     * @param _dstInfos <p>目标端信息，分布式类型数据库配置使用，且SrcNodeType传cluster。例如分布式数据库tdsqlmysql等，mongodb使用此参数透传。</p>
                     * 
                     */
                    void SetDstInfos(const SyncDBEndpointInfos& _dstInfos);

                    /**
                     * 判断参数 DstInfos 是否已赋值
                     * @return DstInfos 是否已赋值
                     * 
                     */
                    bool DstInfosHasBeenSet() const;

                    /**
                     * 获取<p>枚举值：cluster、single。目标库为单节点数据库使用single，多节点使用cluster</p>
                     * @return DstNodeType <p>枚举值：cluster、single。目标库为单节点数据库使用single，多节点使用cluster</p>
                     * 
                     */
                    std::string GetDstNodeType() const;

                    /**
                     * 设置<p>枚举值：cluster、single。目标库为单节点数据库使用single，多节点使用cluster</p>
                     * @param _dstNodeType <p>枚举值：cluster、single。目标库为单节点数据库使用single，多节点使用cluster</p>
                     * 
                     */
                    void SetDstNodeType(const std::string& _dstNodeType);

                    /**
                     * 判断参数 DstNodeType 是否已赋值
                     * @return DstNodeType 是否已赋值
                     * 
                     */
                    bool DstNodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>同步任务选项；该字段下的RateLimitOption暂时无法生效、如果需要修改限速、可通过ModifySyncRateLimit接口完成限速</p>
                     * @return Options <p>同步任务选项；该字段下的RateLimitOption暂时无法生效、如果需要修改限速、可通过ModifySyncRateLimit接口完成限速</p>
                     * 
                     */
                    Options GetOptions() const;

                    /**
                     * 设置<p>同步任务选项；该字段下的RateLimitOption暂时无法生效、如果需要修改限速、可通过ModifySyncRateLimit接口完成限速</p>
                     * @param _options <p>同步任务选项；该字段下的RateLimitOption暂时无法生效、如果需要修改限速、可通过ModifySyncRateLimit接口完成限速</p>
                     * 
                     */
                    void SetOptions(const Options& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                    /**
                     * 获取<p>自动重试的时间段、可设置5至720分钟、0表示不重试</p>
                     * @return AutoRetryTimeRangeMinutes <p>自动重试的时间段、可设置5至720分钟、0表示不重试</p>
                     * 
                     */
                    int64_t GetAutoRetryTimeRangeMinutes() const;

                    /**
                     * 设置<p>自动重试的时间段、可设置5至720分钟、0表示不重试</p>
                     * @param _autoRetryTimeRangeMinutes <p>自动重试的时间段、可设置5至720分钟、0表示不重试</p>
                     * 
                     */
                    void SetAutoRetryTimeRangeMinutes(const int64_t& _autoRetryTimeRangeMinutes);

                    /**
                     * 判断参数 AutoRetryTimeRangeMinutes 是否已赋值
                     * @return AutoRetryTimeRangeMinutes 是否已赋值
                     * 
                     */
                    bool AutoRetryTimeRangeMinutesHasBeenSet() const;

                private:

                    /**
                     * <p>同步实例id（即标识一个同步作业），形如sync-werwfs23，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>源端接入类型，cdb(云数据库)、cvm(云服务器自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云),注意具体可选值依赖当前链路</p>
                     */
                    std::string m_srcAccessType;
                    bool m_srcAccessTypeHasBeenSet;

                    /**
                     * <p>目标端接入类型，cdb(云数据库)、cvm(云服务器自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)、ckafka(CKafka实例),注意具体可选值依赖当前链路</p>
                     */
                    std::string m_dstAccessType;
                    bool m_dstAccessTypeHasBeenSet;

                    /**
                     * <p>同步库表对象信息</p>
                     */
                    Objects m_objects;
                    bool m_objectsHasBeenSet;

                    /**
                     * <p>同步任务名称</p>
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * <p>配置任务模式，默认值为fullMode</p><p>枚举值：</p><ul><li>fullMode： 正常模式</li></ul>
                     */
                    std::string m_jobMode;
                    bool m_jobModeHasBeenSet;

                    /**
                     * <p>运行模式，取值如：Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)</p>
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * <p>期待启动时间，当RunMode取值为Timed时，此值必填，形如：&quot;2006-01-02 15:04:05&quot;</p>
                     */
                    std::string m_expectRunTime;
                    bool m_expectRunTimeHasBeenSet;

                    /**
                     * <p>源端tdsql连接方式：proxy-通过tdsql proxy主机访问各个set节点，注意只有在自研上云的网络环境下才能通过这种方式连接，SrcInfos中只需要提供proxy主机信息。set-直连set节点，如选择直连set方式，需要正确填写proxy主机信息及所有set节点信息。源端是tdsqlmysql类型必填。</p>
                     */
                    std::string m_srcConnectType;
                    bool m_srcConnectTypeHasBeenSet;

                    /**
                     * <p>源端信息，单机版类型数据库配置使用，且SrcNodeType传single。例如mysql、percona、mariadb等。</p>
                     */
                    Endpoint m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * <p>源端信息，分布式类型数据库配置使用，且SrcNodeType传cluster。例如分布式数据库tdsqlmysql等，mongodb使用此参数透传。</p>
                     */
                    SyncDBEndpointInfos m_srcInfos;
                    bool m_srcInfosHasBeenSet;

                    /**
                     * <p>枚举值：cluster、single。源库为单节点数据库使用single，多节点使用cluster</p>
                     */
                    std::string m_srcNodeType;
                    bool m_srcNodeTypeHasBeenSet;

                    /**
                     * <p>目标端信息，单机版类型数据库配置使用，且SrcNodeType传single。例如mysql、percona、mariadb等。</p>
                     */
                    Endpoint m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * <p>目标端信息，分布式类型数据库配置使用，且SrcNodeType传cluster。例如分布式数据库tdsqlmysql等，mongodb使用此参数透传。</p>
                     */
                    SyncDBEndpointInfos m_dstInfos;
                    bool m_dstInfosHasBeenSet;

                    /**
                     * <p>枚举值：cluster、single。目标库为单节点数据库使用single，多节点使用cluster</p>
                     */
                    std::string m_dstNodeType;
                    bool m_dstNodeTypeHasBeenSet;

                    /**
                     * <p>同步任务选项；该字段下的RateLimitOption暂时无法生效、如果需要修改限速、可通过ModifySyncRateLimit接口完成限速</p>
                     */
                    Options m_options;
                    bool m_optionsHasBeenSet;

                    /**
                     * <p>自动重试的时间段、可设置5至720分钟、0表示不重试</p>
                     */
                    int64_t m_autoRetryTimeRangeMinutes;
                    bool m_autoRetryTimeRangeMinutesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_CONFIGURESYNCJOBREQUEST_H_
