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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_SYNCJOBINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_SYNCJOBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/Options.h>
#include <tencentcloud/dts/v20211206/model/Objects.h>
#include <tencentcloud/dts/v20211206/model/Endpoint.h>
#include <tencentcloud/dts/v20211206/model/SyncDBEndpointInfos.h>
#include <tencentcloud/dts/v20211206/model/TagItem.h>
#include <tencentcloud/dts/v20211206/model/SyncDetailInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 同步任务信息
                */
                class SyncJobInfo : public AbstractModel
                {
                public:
                    SyncJobInfo();
                    ~SyncJobInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>同步任务id，如：sync-btso140</p>
                     * @return JobId <p>同步任务id，如：sync-btso140</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>同步任务id，如：sync-btso140</p>
                     * @param _jobId <p>同步任务id，如：sync-btso140</p>
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
                     * 获取<p>同步任务名</p>
                     * @return JobName <p>同步任务名</p>
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置<p>同步任务名</p>
                     * @param _jobName <p>同步任务名</p>
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
                     * 获取<p>付款方式，PostPay(按量付费)、PrePay(包年包月)</p>
                     * @return PayMode <p>付款方式，PostPay(按量付费)、PrePay(包年包月)</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>付款方式，PostPay(按量付费)、PrePay(包年包月)</p>
                     * @param _payMode <p>付款方式，PostPay(按量付费)、PrePay(包年包月)</p>
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>运行模式，Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)</p>
                     * @return RunMode <p>运行模式，Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)</p>
                     * 
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置<p>运行模式，Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)</p>
                     * @param _runMode <p>运行模式，Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)</p>
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
                     * 获取<p>期待运行时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @return ExpectRunTime <p>期待运行时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    std::string GetExpectRunTime() const;

                    /**
                     * 设置<p>期待运行时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @param _expectRunTime <p>期待运行时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
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
                     * 获取<p>支持的所有操作</p>
                     * @return AllActions <p>支持的所有操作</p>
                     * 
                     */
                    std::vector<std::string> GetAllActions() const;

                    /**
                     * 设置<p>支持的所有操作</p>
                     * @param _allActions <p>支持的所有操作</p>
                     * 
                     */
                    void SetAllActions(const std::vector<std::string>& _allActions);

                    /**
                     * 判断参数 AllActions 是否已赋值
                     * @return AllActions 是否已赋值
                     * 
                     */
                    bool AllActionsHasBeenSet() const;

                    /**
                     * 获取<p>当前状态能进行的操作</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Actions <p>当前状态能进行的操作</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetActions() const;

                    /**
                     * 设置<p>当前状态能进行的操作</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _actions <p>当前状态能进行的操作</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActions(const std::vector<std::string>& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     * 
                     */
                    bool ActionsHasBeenSet() const;

                    /**
                     * 获取<p>同步选项</p>
                     * @return Options <p>同步选项</p>
                     * 
                     */
                    Options GetOptions() const;

                    /**
                     * 设置<p>同步选项</p>
                     * @param _options <p>同步选项</p>
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
                     * 获取<p>同步库表对象</p>
                     * @return Objects <p>同步库表对象</p>
                     * 
                     */
                    Objects GetObjects() const;

                    /**
                     * 设置<p>同步库表对象</p>
                     * @param _objects <p>同步库表对象</p>
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
                     * 获取<p>任务规格</p>
                     * @return Specification <p>任务规格</p>
                     * 
                     */
                    std::string GetSpecification() const;

                    /**
                     * 设置<p>任务规格</p>
                     * @param _specification <p>任务规格</p>
                     * 
                     */
                    void SetSpecification(const std::string& _specification);

                    /**
                     * 判断参数 Specification 是否已赋值
                     * @return Specification 是否已赋值
                     * 
                     */
                    bool SpecificationHasBeenSet() const;

                    /**
                     * 获取<p>过期时间，格式为 yyyy-mm-dd hh:mm:ss</p>
                     * @return ExpireTime <p>过期时间，格式为 yyyy-mm-dd hh:mm:ss</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>过期时间，格式为 yyyy-mm-dd hh:mm:ss</p>
                     * @param _expireTime <p>过期时间，格式为 yyyy-mm-dd hh:mm:ss</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>源端地域，如：ap-guangzhou等</p>
                     * @return SrcRegion <p>源端地域，如：ap-guangzhou等</p>
                     * 
                     */
                    std::string GetSrcRegion() const;

                    /**
                     * 设置<p>源端地域，如：ap-guangzhou等</p>
                     * @param _srcRegion <p>源端地域，如：ap-guangzhou等</p>
                     * 
                     */
                    void SetSrcRegion(const std::string& _srcRegion);

                    /**
                     * 判断参数 SrcRegion 是否已赋值
                     * @return SrcRegion 是否已赋值
                     * 
                     */
                    bool SrcRegionHasBeenSet() const;

                    /**
                     * 获取<p>源端数据库类型，mysql,tdsqlmysql,mariadb,cynosdbmysql(表示tdsql-c实例),tdstore,percona,postgresql,mongodb等。</p>
                     * @return SrcDatabaseType <p>源端数据库类型，mysql,tdsqlmysql,mariadb,cynosdbmysql(表示tdsql-c实例),tdstore,percona,postgresql,mongodb等。</p>
                     * 
                     */
                    std::string GetSrcDatabaseType() const;

                    /**
                     * 设置<p>源端数据库类型，mysql,tdsqlmysql,mariadb,cynosdbmysql(表示tdsql-c实例),tdstore,percona,postgresql,mongodb等。</p>
                     * @param _srcDatabaseType <p>源端数据库类型，mysql,tdsqlmysql,mariadb,cynosdbmysql(表示tdsql-c实例),tdstore,percona,postgresql,mongodb等。</p>
                     * 
                     */
                    void SetSrcDatabaseType(const std::string& _srcDatabaseType);

                    /**
                     * 判断参数 SrcDatabaseType 是否已赋值
                     * @return SrcDatabaseType 是否已赋值
                     * 
                     */
                    bool SrcDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取<p>源端接入类型，cdb(云数据库)、cvm(云服务器自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)</p>
                     * @return SrcAccessType <p>源端接入类型，cdb(云数据库)、cvm(云服务器自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)</p>
                     * 
                     */
                    std::string GetSrcAccessType() const;

                    /**
                     * 设置<p>源端接入类型，cdb(云数据库)、cvm(云服务器自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)</p>
                     * @param _srcAccessType <p>源端接入类型，cdb(云数据库)、cvm(云服务器自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)</p>
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
                     * 获取<p>源端信息，单节点数据库使用</p>
                     * @return SrcInfo <p>源端信息，单节点数据库使用</p>
                     * 
                     */
                    Endpoint GetSrcInfo() const;

                    /**
                     * 设置<p>源端信息，单节点数据库使用</p>
                     * @param _srcInfo <p>源端信息，单节点数据库使用</p>
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
                     * 获取<p>源端信息，若SrcNodeType=cluster，则源端信息在这个字段里，mongodb链路使用此参数透传。</p>
                     * @return SrcInfos <p>源端信息，若SrcNodeType=cluster，则源端信息在这个字段里，mongodb链路使用此参数透传。</p>
                     * 
                     */
                    SyncDBEndpointInfos GetSrcInfos() const;

                    /**
                     * 设置<p>源端信息，若SrcNodeType=cluster，则源端信息在这个字段里，mongodb链路使用此参数透传。</p>
                     * @param _srcInfos <p>源端信息，若SrcNodeType=cluster，则源端信息在这个字段里，mongodb链路使用此参数透传。</p>
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
                     * 获取<p>目标端地域，如：ap-guangzhou等</p>
                     * @return DstRegion <p>目标端地域，如：ap-guangzhou等</p>
                     * 
                     */
                    std::string GetDstRegion() const;

                    /**
                     * 设置<p>目标端地域，如：ap-guangzhou等</p>
                     * @param _dstRegion <p>目标端地域，如：ap-guangzhou等</p>
                     * 
                     */
                    void SetDstRegion(const std::string& _dstRegion);

                    /**
                     * 判断参数 DstRegion 是否已赋值
                     * @return DstRegion 是否已赋值
                     * 
                     */
                    bool DstRegionHasBeenSet() const;

                    /**
                     * 获取<p>目标端数据库类型，mysql,tdsqlmysql,mariadb,cynosdbmysql(表示tdsql-c实例),tdstore,percona,postgresql,mongodb等。</p>
                     * @return DstDatabaseType <p>目标端数据库类型，mysql,tdsqlmysql,mariadb,cynosdbmysql(表示tdsql-c实例),tdstore,percona,postgresql,mongodb等。</p>
                     * 
                     */
                    std::string GetDstDatabaseType() const;

                    /**
                     * 设置<p>目标端数据库类型，mysql,tdsqlmysql,mariadb,cynosdbmysql(表示tdsql-c实例),tdstore,percona,postgresql,mongodb等。</p>
                     * @param _dstDatabaseType <p>目标端数据库类型，mysql,tdsqlmysql,mariadb,cynosdbmysql(表示tdsql-c实例),tdstore,percona,postgresql,mongodb等。</p>
                     * 
                     */
                    void SetDstDatabaseType(const std::string& _dstDatabaseType);

                    /**
                     * 判断参数 DstDatabaseType 是否已赋值
                     * @return DstDatabaseType 是否已赋值
                     * 
                     */
                    bool DstDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取<p>目标端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)</p>
                     * @return DstAccessType <p>目标端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)</p>
                     * 
                     */
                    std::string GetDstAccessType() const;

                    /**
                     * 设置<p>目标端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)</p>
                     * @param _dstAccessType <p>目标端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)</p>
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
                     * 获取<p>目标端信息，单节点数据库使用</p>
                     * @return DstInfo <p>目标端信息，单节点数据库使用</p>
                     * 
                     */
                    Endpoint GetDstInfo() const;

                    /**
                     * 设置<p>目标端信息，单节点数据库使用</p>
                     * @param _dstInfo <p>目标端信息，单节点数据库使用</p>
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
                     * 获取<p>目标端信息，若SrcNodeType=cluster，则源端信息在这个字段里，mongodb链路使用此参数透传。</p>
                     * @return DstInfos <p>目标端信息，若SrcNodeType=cluster，则源端信息在这个字段里，mongodb链路使用此参数透传。</p>
                     * 
                     */
                    SyncDBEndpointInfos GetDstInfos() const;

                    /**
                     * 设置<p>目标端信息，若SrcNodeType=cluster，则源端信息在这个字段里，mongodb链路使用此参数透传。</p>
                     * @param _dstInfos <p>目标端信息，若SrcNodeType=cluster，则源端信息在这个字段里，mongodb链路使用此参数透传。</p>
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
                     * 获取<p>创建时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @return CreateTime <p>创建时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @param _createTime <p>创建时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>开始时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @return StartTime <p>开始时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @param _startTime <p>开始时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
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
                     * 获取<p>任务状态，UnInitialized(未初始化)、Initialized(已初始化)、Checking(校验中)、CheckPass(校验通过)、CheckNotPass(校验不通过)、ReadyRunning(准备运行)、Running(运行中)、Pausing(暂停中)、Paused(已暂停)、Stopping(停止中)、Stopped(已结束)、ResumableErr(任务错误)、Resuming(恢复中)、Failed(失败)、Released(已释放)、Resetting(重置中)、Unknown(未知)</p>
                     * @return Status <p>任务状态，UnInitialized(未初始化)、Initialized(已初始化)、Checking(校验中)、CheckPass(校验通过)、CheckNotPass(校验不通过)、ReadyRunning(准备运行)、Running(运行中)、Pausing(暂停中)、Paused(已暂停)、Stopping(停止中)、Stopped(已结束)、ResumableErr(任务错误)、Resuming(恢复中)、Failed(失败)、Released(已释放)、Resetting(重置中)、Unknown(未知)</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态，UnInitialized(未初始化)、Initialized(已初始化)、Checking(校验中)、CheckPass(校验通过)、CheckNotPass(校验不通过)、ReadyRunning(准备运行)、Running(运行中)、Pausing(暂停中)、Paused(已暂停)、Stopping(停止中)、Stopped(已结束)、ResumableErr(任务错误)、Resuming(恢复中)、Failed(失败)、Released(已释放)、Resetting(重置中)、Unknown(未知)</p>
                     * @param _status <p>任务状态，UnInitialized(未初始化)、Initialized(已初始化)、Checking(校验中)、CheckPass(校验通过)、CheckNotPass(校验不通过)、ReadyRunning(准备运行)、Running(运行中)、Pausing(暂停中)、Paused(已暂停)、Stopping(停止中)、Stopped(已结束)、ResumableErr(任务错误)、Resuming(恢复中)、Failed(失败)、Released(已释放)、Resetting(重置中)、Unknown(未知)</p>
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
                     * 获取<p>结束时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @return EndTime <p>结束时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @param _endTime <p>结束时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>标签相关信息</p>
                     * @return Tags <p>标签相关信息</p>
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置<p>标签相关信息</p>
                     * @param _tags <p>标签相关信息</p>
                     * 
                     */
                    void SetTags(const std::vector<TagItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>同步任务运行步骤信息</p>
                     * @return Detail <p>同步任务运行步骤信息</p>
                     * 
                     */
                    SyncDetailInfo GetDetail() const;

                    /**
                     * 设置<p>同步任务运行步骤信息</p>
                     * @param _detail <p>同步任务运行步骤信息</p>
                     * 
                     */
                    void SetDetail(const SyncDetailInfo& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取<p>用于计费的状态，可能取值有：Normal(正常状态)、Resizing(变配中)、Renewing(续费中)、Isolating(隔离中)、Isolated(已隔离)、Offlining(下线中)、Offlined(已下线)、NotBilled(未计费)、Recovering(解隔离)、PostPay2Prepaying(按量计费转包年包月中)、PrePay2Postpaying(包年包月转按量计费中)</p>
                     * @return TradeStatus <p>用于计费的状态，可能取值有：Normal(正常状态)、Resizing(变配中)、Renewing(续费中)、Isolating(隔离中)、Isolated(已隔离)、Offlining(下线中)、Offlined(已下线)、NotBilled(未计费)、Recovering(解隔离)、PostPay2Prepaying(按量计费转包年包月中)、PrePay2Postpaying(包年包月转按量计费中)</p>
                     * 
                     */
                    std::string GetTradeStatus() const;

                    /**
                     * 设置<p>用于计费的状态，可能取值有：Normal(正常状态)、Resizing(变配中)、Renewing(续费中)、Isolating(隔离中)、Isolated(已隔离)、Offlining(下线中)、Offlined(已下线)、NotBilled(未计费)、Recovering(解隔离)、PostPay2Prepaying(按量计费转包年包月中)、PrePay2Postpaying(包年包月转按量计费中)</p>
                     * @param _tradeStatus <p>用于计费的状态，可能取值有：Normal(正常状态)、Resizing(变配中)、Renewing(续费中)、Isolating(隔离中)、Isolated(已隔离)、Offlining(下线中)、Offlined(已下线)、NotBilled(未计费)、Recovering(解隔离)、PostPay2Prepaying(按量计费转包年包月中)、PrePay2Postpaying(包年包月转按量计费中)</p>
                     * 
                     */
                    void SetTradeStatus(const std::string& _tradeStatus);

                    /**
                     * 判断参数 TradeStatus 是否已赋值
                     * @return TradeStatus 是否已赋值
                     * 
                     */
                    bool TradeStatusHasBeenSet() const;

                    /**
                     * 获取<p>同步链路规格，如micro,small,medium,large</p>
                     * @return InstanceClass <p>同步链路规格，如micro,small,medium,large</p>
                     * 
                     */
                    std::string GetInstanceClass() const;

                    /**
                     * 设置<p>同步链路规格，如micro,small,medium,large</p>
                     * @param _instanceClass <p>同步链路规格，如micro,small,medium,large</p>
                     * 
                     */
                    void SetInstanceClass(const std::string& _instanceClass);

                    /**
                     * 判断参数 InstanceClass 是否已赋值
                     * @return InstanceClass 是否已赋值
                     * 
                     */
                    bool InstanceClassHasBeenSet() const;

                    /**
                     * 获取<p>自动续费标识，当PayMode值为PrePay则此项配置有意义，取值为：1（表示自动续费）、0（不自动续费）</p>
                     * @return AutoRenew <p>自动续费标识，当PayMode值为PrePay则此项配置有意义，取值为：1（表示自动续费）、0（不自动续费）</p>
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置<p>自动续费标识，当PayMode值为PrePay则此项配置有意义，取值为：1（表示自动续费）、0（不自动续费）</p>
                     * @param _autoRenew <p>自动续费标识，当PayMode值为PrePay则此项配置有意义，取值为：1（表示自动续费）、0（不自动续费）</p>
                     * 
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>下线时间，格式为 yyyy-mm-dd hh:mm:ss</p>
                     * @return OfflineTime <p>下线时间，格式为 yyyy-mm-dd hh:mm:ss</p>
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置<p>下线时间，格式为 yyyy-mm-dd hh:mm:ss</p>
                     * @param _offlineTime <p>下线时间，格式为 yyyy-mm-dd hh:mm:ss</p>
                     * 
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     * 
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取<p>动态修改对象，修改任务的状态等</p>
                     * @return OptObjStatus <p>动态修改对象，修改任务的状态等</p>
                     * 
                     */
                    std::string GetOptObjStatus() const;

                    /**
                     * 设置<p>动态修改对象，修改任务的状态等</p>
                     * @param _optObjStatus <p>动态修改对象，修改任务的状态等</p>
                     * 
                     */
                    void SetOptObjStatus(const std::string& _optObjStatus);

                    /**
                     * 判断参数 OptObjStatus 是否已赋值
                     * @return OptObjStatus 是否已赋值
                     * 
                     */
                    bool OptObjStatusHasBeenSet() const;

                    /**
                     * 获取<p>自动重试时间段设置</p>
                     * @return AutoRetryTimeRangeMinutes <p>自动重试时间段设置</p>
                     * 
                     */
                    int64_t GetAutoRetryTimeRangeMinutes() const;

                    /**
                     * 设置<p>自动重试时间段设置</p>
                     * @param _autoRetryTimeRangeMinutes <p>自动重试时间段设置</p>
                     * 
                     */
                    void SetAutoRetryTimeRangeMinutes(const int64_t& _autoRetryTimeRangeMinutes);

                    /**
                     * 判断参数 AutoRetryTimeRangeMinutes 是否已赋值
                     * @return AutoRetryTimeRangeMinutes 是否已赋值
                     * 
                     */
                    bool AutoRetryTimeRangeMinutesHasBeenSet() const;

                    /**
                     * 获取<p>全量导出可重入标识：enum::&quot;yes&quot;/&quot;no&quot;。yes表示当前任务可重入、no表示当前任务处于全量导出且不可重入阶段；如果在该值为no时重启任务导出流程不支持断点续传</p>
                     * @return DumperResumeCtrl <p>全量导出可重入标识：enum::&quot;yes&quot;/&quot;no&quot;。yes表示当前任务可重入、no表示当前任务处于全量导出且不可重入阶段；如果在该值为no时重启任务导出流程不支持断点续传</p>
                     * 
                     */
                    std::string GetDumperResumeCtrl() const;

                    /**
                     * 设置<p>全量导出可重入标识：enum::&quot;yes&quot;/&quot;no&quot;。yes表示当前任务可重入、no表示当前任务处于全量导出且不可重入阶段；如果在该值为no时重启任务导出流程不支持断点续传</p>
                     * @param _dumperResumeCtrl <p>全量导出可重入标识：enum::&quot;yes&quot;/&quot;no&quot;。yes表示当前任务可重入、no表示当前任务处于全量导出且不可重入阶段；如果在该值为no时重启任务导出流程不支持断点续传</p>
                     * 
                     */
                    void SetDumperResumeCtrl(const std::string& _dumperResumeCtrl);

                    /**
                     * 判断参数 DumperResumeCtrl 是否已赋值
                     * @return DumperResumeCtrl 是否已赋值
                     * 
                     */
                    bool DumperResumeCtrlHasBeenSet() const;

                private:

                    /**
                     * <p>同步任务id，如：sync-btso140</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>同步任务名</p>
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * <p>付款方式，PostPay(按量付费)、PrePay(包年包月)</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>运行模式，Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)</p>
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * <p>期待运行时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     */
                    std::string m_expectRunTime;
                    bool m_expectRunTimeHasBeenSet;

                    /**
                     * <p>支持的所有操作</p>
                     */
                    std::vector<std::string> m_allActions;
                    bool m_allActionsHasBeenSet;

                    /**
                     * <p>当前状态能进行的操作</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * <p>同步选项</p>
                     */
                    Options m_options;
                    bool m_optionsHasBeenSet;

                    /**
                     * <p>同步库表对象</p>
                     */
                    Objects m_objects;
                    bool m_objectsHasBeenSet;

                    /**
                     * <p>任务规格</p>
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * <p>过期时间，格式为 yyyy-mm-dd hh:mm:ss</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>源端地域，如：ap-guangzhou等</p>
                     */
                    std::string m_srcRegion;
                    bool m_srcRegionHasBeenSet;

                    /**
                     * <p>源端数据库类型，mysql,tdsqlmysql,mariadb,cynosdbmysql(表示tdsql-c实例),tdstore,percona,postgresql,mongodb等。</p>
                     */
                    std::string m_srcDatabaseType;
                    bool m_srcDatabaseTypeHasBeenSet;

                    /**
                     * <p>源端接入类型，cdb(云数据库)、cvm(云服务器自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)</p>
                     */
                    std::string m_srcAccessType;
                    bool m_srcAccessTypeHasBeenSet;

                    /**
                     * <p>源端信息，单节点数据库使用</p>
                     */
                    Endpoint m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * <p>枚举值：cluster、single。源库为单节点数据库使用single，多节点使用cluster</p>
                     */
                    std::string m_srcNodeType;
                    bool m_srcNodeTypeHasBeenSet;

                    /**
                     * <p>源端信息，若SrcNodeType=cluster，则源端信息在这个字段里，mongodb链路使用此参数透传。</p>
                     */
                    SyncDBEndpointInfos m_srcInfos;
                    bool m_srcInfosHasBeenSet;

                    /**
                     * <p>目标端地域，如：ap-guangzhou等</p>
                     */
                    std::string m_dstRegion;
                    bool m_dstRegionHasBeenSet;

                    /**
                     * <p>目标端数据库类型，mysql,tdsqlmysql,mariadb,cynosdbmysql(表示tdsql-c实例),tdstore,percona,postgresql,mongodb等。</p>
                     */
                    std::string m_dstDatabaseType;
                    bool m_dstDatabaseTypeHasBeenSet;

                    /**
                     * <p>目标端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)</p>
                     */
                    std::string m_dstAccessType;
                    bool m_dstAccessTypeHasBeenSet;

                    /**
                     * <p>目标端信息，单节点数据库使用</p>
                     */
                    Endpoint m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * <p>枚举值：cluster、single。目标库为单节点数据库使用single，多节点使用cluster</p>
                     */
                    std::string m_dstNodeType;
                    bool m_dstNodeTypeHasBeenSet;

                    /**
                     * <p>目标端信息，若SrcNodeType=cluster，则源端信息在这个字段里，mongodb链路使用此参数透传。</p>
                     */
                    SyncDBEndpointInfos m_dstInfos;
                    bool m_dstInfosHasBeenSet;

                    /**
                     * <p>创建时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>开始时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>任务状态，UnInitialized(未初始化)、Initialized(已初始化)、Checking(校验中)、CheckPass(校验通过)、CheckNotPass(校验不通过)、ReadyRunning(准备运行)、Running(运行中)、Pausing(暂停中)、Paused(已暂停)、Stopping(停止中)、Stopped(已结束)、ResumableErr(任务错误)、Resuming(恢复中)、Failed(失败)、Released(已释放)、Resetting(重置中)、Unknown(未知)</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>结束时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>标签相关信息</p>
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>同步任务运行步骤信息</p>
                     */
                    SyncDetailInfo m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * <p>用于计费的状态，可能取值有：Normal(正常状态)、Resizing(变配中)、Renewing(续费中)、Isolating(隔离中)、Isolated(已隔离)、Offlining(下线中)、Offlined(已下线)、NotBilled(未计费)、Recovering(解隔离)、PostPay2Prepaying(按量计费转包年包月中)、PrePay2Postpaying(包年包月转按量计费中)</p>
                     */
                    std::string m_tradeStatus;
                    bool m_tradeStatusHasBeenSet;

                    /**
                     * <p>同步链路规格，如micro,small,medium,large</p>
                     */
                    std::string m_instanceClass;
                    bool m_instanceClassHasBeenSet;

                    /**
                     * <p>自动续费标识，当PayMode值为PrePay则此项配置有意义，取值为：1（表示自动续费）、0（不自动续费）</p>
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>下线时间，格式为 yyyy-mm-dd hh:mm:ss</p>
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * <p>动态修改对象，修改任务的状态等</p>
                     */
                    std::string m_optObjStatus;
                    bool m_optObjStatusHasBeenSet;

                    /**
                     * <p>自动重试时间段设置</p>
                     */
                    int64_t m_autoRetryTimeRangeMinutes;
                    bool m_autoRetryTimeRangeMinutesHasBeenSet;

                    /**
                     * <p>全量导出可重入标识：enum::&quot;yes&quot;/&quot;no&quot;。yes表示当前任务可重入、no表示当前任务处于全量导出且不可重入阶段；如果在该值为no时重启任务导出流程不支持断点续传</p>
                     */
                    std::string m_dumperResumeCtrl;
                    bool m_dumperResumeCtrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_SYNCJOBINFO_H_
