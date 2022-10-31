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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_CONFIGURESYNCJOBREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_CONFIGURESYNCJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/Endpoint.h>
#include <tencentcloud/dts/v20211206/model/Options.h>
#include <tencentcloud/dts/v20211206/model/Objects.h>


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
                     * 获取同步实例id（即标识一个同步作业），形如sync-werwfs23
                     * @return JobId 同步实例id（即标识一个同步作业），形如sync-werwfs23
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置同步实例id（即标识一个同步作业），形如sync-werwfs23
                     * @param JobId 同步实例id（即标识一个同步作业），形如sync-werwfs23
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取源端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)、noProxy,注意具体可选值依赖当前链路
                     * @return SrcAccessType 源端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)、noProxy,注意具体可选值依赖当前链路
                     */
                    std::string GetSrcAccessType() const;

                    /**
                     * 设置源端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)、noProxy,注意具体可选值依赖当前链路
                     * @param SrcAccessType 源端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)、noProxy,注意具体可选值依赖当前链路
                     */
                    void SetSrcAccessType(const std::string& _srcAccessType);

                    /**
                     * 判断参数 SrcAccessType 是否已赋值
                     * @return SrcAccessType 是否已赋值
                     */
                    bool SrcAccessTypeHasBeenSet() const;

                    /**
                     * 获取源端信息
                     * @return SrcInfo 源端信息
                     */
                    Endpoint GetSrcInfo() const;

                    /**
                     * 设置源端信息
                     * @param SrcInfo 源端信息
                     */
                    void SetSrcInfo(const Endpoint& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取目标端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)、noProxy,注意具体可选值依赖当前链路
                     * @return DstAccessType 目标端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)、noProxy,注意具体可选值依赖当前链路
                     */
                    std::string GetDstAccessType() const;

                    /**
                     * 设置目标端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)、noProxy,注意具体可选值依赖当前链路
                     * @param DstAccessType 目标端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)、noProxy,注意具体可选值依赖当前链路
                     */
                    void SetDstAccessType(const std::string& _dstAccessType);

                    /**
                     * 判断参数 DstAccessType 是否已赋值
                     * @return DstAccessType 是否已赋值
                     */
                    bool DstAccessTypeHasBeenSet() const;

                    /**
                     * 获取目标端信息
                     * @return DstInfo 目标端信息
                     */
                    Endpoint GetDstInfo() const;

                    /**
                     * 设置目标端信息
                     * @param DstInfo 目标端信息
                     */
                    void SetDstInfo(const Endpoint& _dstInfo);

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     */
                    bool DstInfoHasBeenSet() const;

                    /**
                     * 获取同步任务选项
                     * @return Options 同步任务选项
                     */
                    Options GetOptions() const;

                    /**
                     * 设置同步任务选项
                     * @param Options 同步任务选项
                     */
                    void SetOptions(const Options& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     */
                    bool OptionsHasBeenSet() const;

                    /**
                     * 获取同步库表对象信息
                     * @return Objects 同步库表对象信息
                     */
                    Objects GetObjects() const;

                    /**
                     * 设置同步库表对象信息
                     * @param Objects 同步库表对象信息
                     */
                    void SetObjects(const Objects& _objects);

                    /**
                     * 判断参数 Objects 是否已赋值
                     * @return Objects 是否已赋值
                     */
                    bool ObjectsHasBeenSet() const;

                    /**
                     * 获取同步任务名称
                     * @return JobName 同步任务名称
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置同步任务名称
                     * @param JobName 同步任务名称
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取运行模式，取值如：Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)
                     * @return RunMode 运行模式，取值如：Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置运行模式，取值如：Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)
                     * @param RunMode 运行模式，取值如：Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)
                     */
                    void SetRunMode(const std::string& _runMode);

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取期待启动时间，当RunMode取值为Timed时，此值必填，形如："2006-01-02 15:04:05"
                     * @return ExpectRunTime 期待启动时间，当RunMode取值为Timed时，此值必填，形如："2006-01-02 15:04:05"
                     */
                    std::string GetExpectRunTime() const;

                    /**
                     * 设置期待启动时间，当RunMode取值为Timed时，此值必填，形如："2006-01-02 15:04:05"
                     * @param ExpectRunTime 期待启动时间，当RunMode取值为Timed时，此值必填，形如："2006-01-02 15:04:05"
                     */
                    void SetExpectRunTime(const std::string& _expectRunTime);

                    /**
                     * 判断参数 ExpectRunTime 是否已赋值
                     * @return ExpectRunTime 是否已赋值
                     */
                    bool ExpectRunTimeHasBeenSet() const;

                private:

                    /**
                     * 同步实例id（即标识一个同步作业），形如sync-werwfs23
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 源端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)、noProxy,注意具体可选值依赖当前链路
                     */
                    std::string m_srcAccessType;
                    bool m_srcAccessTypeHasBeenSet;

                    /**
                     * 源端信息
                     */
                    Endpoint m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * 目标端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)、noProxy,注意具体可选值依赖当前链路
                     */
                    std::string m_dstAccessType;
                    bool m_dstAccessTypeHasBeenSet;

                    /**
                     * 目标端信息
                     */
                    Endpoint m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * 同步任务选项
                     */
                    Options m_options;
                    bool m_optionsHasBeenSet;

                    /**
                     * 同步库表对象信息
                     */
                    Objects m_objects;
                    bool m_objectsHasBeenSet;

                    /**
                     * 同步任务名称
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 运行模式，取值如：Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * 期待启动时间，当RunMode取值为Timed时，此值必填，形如："2006-01-02 15:04:05"
                     */
                    std::string m_expectRunTime;
                    bool m_expectRunTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_CONFIGURESYNCJOBREQUEST_H_
