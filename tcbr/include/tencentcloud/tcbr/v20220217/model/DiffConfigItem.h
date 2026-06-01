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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_DIFFCONFIGITEM_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_DIFFCONFIGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/HpaPolicy.h>
#include <tencentcloud/tcbr/v20220217/model/TimerScale.h>
#include <tencentcloud/tcbr/v20220217/model/VpcConf.h>
#include <tencentcloud/tcbr/v20220217/model/VolumeConf.h>
#include <tencentcloud/tcbr/v20220217/model/PublicNetConf.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * 服务配置入参
                */
                class DiffConfigItem : public AbstractModel
                {
                public:
                    DiffConfigItem();
                    ~DiffConfigItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>配置项 Key<br>MinNum 最小副本数<br>MaxNum 最大副本数<br>PolicyDetails 扩缩容策略<br>AccessTypes 访问类型<br>TimerScale 定时扩缩容<br>InternalAccess 内网访问<br>OperationMode 运行模式 noScale | condScale | alwaysScale | custom ｜ manualScale<br>SessionAffinity 会话亲和性 open | close<br>CpuSpecs cpu 规格<br>MemSpecs mem规格<br>EnvParam 环境变量<br>LogPath 日志采集路径<br>Port 端口<br>Dockerfile dockerfile 文件名<br>BuildDir 目标目录<br>Tag 服务标签<br>LogType 日志类型 none | default | custom<br>LogSetId 日志集Id<br>LogTopicId 日志主题ID<br>LogParseType 日志解析类型 json ｜ line<br>EntryPoint entrypoint 命令<br>Cmd cmd命令<br>VpcConf 网络信息</p>
                     * @return Key <p>配置项 Key<br>MinNum 最小副本数<br>MaxNum 最大副本数<br>PolicyDetails 扩缩容策略<br>AccessTypes 访问类型<br>TimerScale 定时扩缩容<br>InternalAccess 内网访问<br>OperationMode 运行模式 noScale | condScale | alwaysScale | custom ｜ manualScale<br>SessionAffinity 会话亲和性 open | close<br>CpuSpecs cpu 规格<br>MemSpecs mem规格<br>EnvParam 环境变量<br>LogPath 日志采集路径<br>Port 端口<br>Dockerfile dockerfile 文件名<br>BuildDir 目标目录<br>Tag 服务标签<br>LogType 日志类型 none | default | custom<br>LogSetId 日志集Id<br>LogTopicId 日志主题ID<br>LogParseType 日志解析类型 json ｜ line<br>EntryPoint entrypoint 命令<br>Cmd cmd命令<br>VpcConf 网络信息</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>配置项 Key<br>MinNum 最小副本数<br>MaxNum 最大副本数<br>PolicyDetails 扩缩容策略<br>AccessTypes 访问类型<br>TimerScale 定时扩缩容<br>InternalAccess 内网访问<br>OperationMode 运行模式 noScale | condScale | alwaysScale | custom ｜ manualScale<br>SessionAffinity 会话亲和性 open | close<br>CpuSpecs cpu 规格<br>MemSpecs mem规格<br>EnvParam 环境变量<br>LogPath 日志采集路径<br>Port 端口<br>Dockerfile dockerfile 文件名<br>BuildDir 目标目录<br>Tag 服务标签<br>LogType 日志类型 none | default | custom<br>LogSetId 日志集Id<br>LogTopicId 日志主题ID<br>LogParseType 日志解析类型 json ｜ line<br>EntryPoint entrypoint 命令<br>Cmd cmd命令<br>VpcConf 网络信息</p>
                     * @param _key <p>配置项 Key<br>MinNum 最小副本数<br>MaxNum 最大副本数<br>PolicyDetails 扩缩容策略<br>AccessTypes 访问类型<br>TimerScale 定时扩缩容<br>InternalAccess 内网访问<br>OperationMode 运行模式 noScale | condScale | alwaysScale | custom ｜ manualScale<br>SessionAffinity 会话亲和性 open | close<br>CpuSpecs cpu 规格<br>MemSpecs mem规格<br>EnvParam 环境变量<br>LogPath 日志采集路径<br>Port 端口<br>Dockerfile dockerfile 文件名<br>BuildDir 目标目录<br>Tag 服务标签<br>LogType 日志类型 none | default | custom<br>LogSetId 日志集Id<br>LogTopicId 日志主题ID<br>LogParseType 日志解析类型 json ｜ line<br>EntryPoint entrypoint 命令<br>Cmd cmd命令<br>VpcConf 网络信息</p>
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>字符串类型配置项值<br>InternalAccess、OperationMode、SessionAffinity、EnvParam、LogPath、Dockerfile、BuildDir、Tag、LogType、LogSetId、LogTopicId、LogParseType</p>
                     * @return Value <p>字符串类型配置项值<br>InternalAccess、OperationMode、SessionAffinity、EnvParam、LogPath、Dockerfile、BuildDir、Tag、LogType、LogSetId、LogTopicId、LogParseType</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>字符串类型配置项值<br>InternalAccess、OperationMode、SessionAffinity、EnvParam、LogPath、Dockerfile、BuildDir、Tag、LogType、LogSetId、LogTopicId、LogParseType</p>
                     * @param _value <p>字符串类型配置项值<br>InternalAccess、OperationMode、SessionAffinity、EnvParam、LogPath、Dockerfile、BuildDir、Tag、LogType、LogSetId、LogTopicId、LogParseType</p>
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取<p>int 类型配置项值<br>MinNum、MaxNum、Port</p>
                     * @return IntValue <p>int 类型配置项值<br>MinNum、MaxNum、Port</p>
                     * 
                     */
                    int64_t GetIntValue() const;

                    /**
                     * 设置<p>int 类型配置项值<br>MinNum、MaxNum、Port</p>
                     * @param _intValue <p>int 类型配置项值<br>MinNum、MaxNum、Port</p>
                     * 
                     */
                    void SetIntValue(const int64_t& _intValue);

                    /**
                     * 判断参数 IntValue 是否已赋值
                     * @return IntValue 是否已赋值
                     * 
                     */
                    bool IntValueHasBeenSet() const;

                    /**
                     * 获取<p>bool 类型配置项值</p>
                     * @return BoolValue <p>bool 类型配置项值</p>
                     * 
                     */
                    bool GetBoolValue() const;

                    /**
                     * 设置<p>bool 类型配置项值</p>
                     * @param _boolValue <p>bool 类型配置项值</p>
                     * 
                     */
                    void SetBoolValue(const bool& _boolValue);

                    /**
                     * 判断参数 BoolValue 是否已赋值
                     * @return BoolValue 是否已赋值
                     * 
                     */
                    bool BoolValueHasBeenSet() const;

                    /**
                     * 获取<p>浮点型配置项值<br>CpuSpecs、MemSpecs</p>
                     * @return FloatValue <p>浮点型配置项值<br>CpuSpecs、MemSpecs</p>
                     * 
                     */
                    double GetFloatValue() const;

                    /**
                     * 设置<p>浮点型配置项值<br>CpuSpecs、MemSpecs</p>
                     * @param _floatValue <p>浮点型配置项值<br>CpuSpecs、MemSpecs</p>
                     * 
                     */
                    void SetFloatValue(const double& _floatValue);

                    /**
                     * 判断参数 FloatValue 是否已赋值
                     * @return FloatValue 是否已赋值
                     * 
                     */
                    bool FloatValueHasBeenSet() const;

                    /**
                     * 获取<p>字符串数组配置项值<br>AccessTypes，EntryPoint，Cmd</p>
                     * @return ArrayValue <p>字符串数组配置项值<br>AccessTypes，EntryPoint，Cmd</p>
                     * 
                     */
                    std::vector<std::string> GetArrayValue() const;

                    /**
                     * 设置<p>字符串数组配置项值<br>AccessTypes，EntryPoint，Cmd</p>
                     * @param _arrayValue <p>字符串数组配置项值<br>AccessTypes，EntryPoint，Cmd</p>
                     * 
                     */
                    void SetArrayValue(const std::vector<std::string>& _arrayValue);

                    /**
                     * 判断参数 ArrayValue 是否已赋值
                     * @return ArrayValue 是否已赋值
                     * 
                     */
                    bool ArrayValueHasBeenSet() const;

                    /**
                     * 获取<p>扩缩容策略配置项值</p>
                     * @return PolicyDetails <p>扩缩容策略配置项值</p>
                     * 
                     */
                    std::vector<HpaPolicy> GetPolicyDetails() const;

                    /**
                     * 设置<p>扩缩容策略配置项值</p>
                     * @param _policyDetails <p>扩缩容策略配置项值</p>
                     * 
                     */
                    void SetPolicyDetails(const std::vector<HpaPolicy>& _policyDetails);

                    /**
                     * 判断参数 PolicyDetails 是否已赋值
                     * @return PolicyDetails 是否已赋值
                     * 
                     */
                    bool PolicyDetailsHasBeenSet() const;

                    /**
                     * 获取<p>定时扩缩容配置项值</p>
                     * @return TimerScale <p>定时扩缩容配置项值</p>
                     * 
                     */
                    std::vector<TimerScale> GetTimerScale() const;

                    /**
                     * 设置<p>定时扩缩容配置项值</p>
                     * @param _timerScale <p>定时扩缩容配置项值</p>
                     * 
                     */
                    void SetTimerScale(const std::vector<TimerScale>& _timerScale);

                    /**
                     * 判断参数 TimerScale 是否已赋值
                     * @return TimerScale 是否已赋值
                     * 
                     */
                    bool TimerScaleHasBeenSet() const;

                    /**
                     * 获取<p>配置内网访问时网络信息</p>
                     * @return VpcConf <p>配置内网访问时网络信息</p>
                     * 
                     */
                    VpcConf GetVpcConf() const;

                    /**
                     * 设置<p>配置内网访问时网络信息</p>
                     * @param _vpcConf <p>配置内网访问时网络信息</p>
                     * 
                     */
                    void SetVpcConf(const VpcConf& _vpcConf);

                    /**
                     * 判断参数 VpcConf 是否已赋值
                     * @return VpcConf 是否已赋值
                     * 
                     */
                    bool VpcConfHasBeenSet() const;

                    /**
                     * 获取<p>存储配置信息</p>
                     * @return VolumesConf <p>存储配置信息</p>
                     * 
                     */
                    std::vector<VolumeConf> GetVolumesConf() const;

                    /**
                     * 设置<p>存储配置信息</p>
                     * @param _volumesConf <p>存储配置信息</p>
                     * 
                     */
                    void SetVolumesConf(const std::vector<VolumeConf>& _volumesConf);

                    /**
                     * 判断参数 VolumesConf 是否已赋值
                     * @return VolumesConf 是否已赋值
                     * 
                     */
                    bool VolumesConfHasBeenSet() const;

                    /**
                     * 获取<p>公网访问配置</p>
                     * @return PublicNetConf <p>公网访问配置</p>
                     * 
                     */
                    PublicNetConf GetPublicNetConf() const;

                    /**
                     * 设置<p>公网访问配置</p>
                     * @param _publicNetConf <p>公网访问配置</p>
                     * 
                     */
                    void SetPublicNetConf(const PublicNetConf& _publicNetConf);

                    /**
                     * 判断参数 PublicNetConf 是否已赋值
                     * @return PublicNetConf 是否已赋值
                     * 
                     */
                    bool PublicNetConfHasBeenSet() const;

                private:

                    /**
                     * <p>配置项 Key<br>MinNum 最小副本数<br>MaxNum 最大副本数<br>PolicyDetails 扩缩容策略<br>AccessTypes 访问类型<br>TimerScale 定时扩缩容<br>InternalAccess 内网访问<br>OperationMode 运行模式 noScale | condScale | alwaysScale | custom ｜ manualScale<br>SessionAffinity 会话亲和性 open | close<br>CpuSpecs cpu 规格<br>MemSpecs mem规格<br>EnvParam 环境变量<br>LogPath 日志采集路径<br>Port 端口<br>Dockerfile dockerfile 文件名<br>BuildDir 目标目录<br>Tag 服务标签<br>LogType 日志类型 none | default | custom<br>LogSetId 日志集Id<br>LogTopicId 日志主题ID<br>LogParseType 日志解析类型 json ｜ line<br>EntryPoint entrypoint 命令<br>Cmd cmd命令<br>VpcConf 网络信息</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>字符串类型配置项值<br>InternalAccess、OperationMode、SessionAffinity、EnvParam、LogPath、Dockerfile、BuildDir、Tag、LogType、LogSetId、LogTopicId、LogParseType</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>int 类型配置项值<br>MinNum、MaxNum、Port</p>
                     */
                    int64_t m_intValue;
                    bool m_intValueHasBeenSet;

                    /**
                     * <p>bool 类型配置项值</p>
                     */
                    bool m_boolValue;
                    bool m_boolValueHasBeenSet;

                    /**
                     * <p>浮点型配置项值<br>CpuSpecs、MemSpecs</p>
                     */
                    double m_floatValue;
                    bool m_floatValueHasBeenSet;

                    /**
                     * <p>字符串数组配置项值<br>AccessTypes，EntryPoint，Cmd</p>
                     */
                    std::vector<std::string> m_arrayValue;
                    bool m_arrayValueHasBeenSet;

                    /**
                     * <p>扩缩容策略配置项值</p>
                     */
                    std::vector<HpaPolicy> m_policyDetails;
                    bool m_policyDetailsHasBeenSet;

                    /**
                     * <p>定时扩缩容配置项值</p>
                     */
                    std::vector<TimerScale> m_timerScale;
                    bool m_timerScaleHasBeenSet;

                    /**
                     * <p>配置内网访问时网络信息</p>
                     */
                    VpcConf m_vpcConf;
                    bool m_vpcConfHasBeenSet;

                    /**
                     * <p>存储配置信息</p>
                     */
                    std::vector<VolumeConf> m_volumesConf;
                    bool m_volumesConfHasBeenSet;

                    /**
                     * <p>公网访问配置</p>
                     */
                    PublicNetConf m_publicNetConf;
                    bool m_publicNetConfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_DIFFCONFIGITEM_H_
