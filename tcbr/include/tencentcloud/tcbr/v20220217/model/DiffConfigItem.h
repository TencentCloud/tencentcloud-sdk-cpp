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
                     * 获取配置项 Key
MinNum 最小副本数
MaxNum 最大副本数
PolicyDetails 扩缩容策略
AccessTypes 访问类型
TimerScale 定时扩缩容
InternalAccess 内网访问
OperationMode 运行模式 noScale | condScale | alwaysScale | custom ｜ manualScale
SessionAffinity 会话亲和性 open | close
CpuSpecs cpu 规格
MemSpecs mem规格
EnvParam 环境变量
LogPath 日志采集路径
Port 端口
Dockerfile dockerfile 文件名
BuildDir 目标目录
Tag 服务标签
LogType 日志类型 none | default | custom 
LogSetId 日志集Id
LogTopicId 日志主题ID
LogParseType 日志解析类型 json ｜ line
EntryPoint entrypoint 命令
Cmd cmd命令
VpcConf 网络信息
                     * @return Key 配置项 Key
MinNum 最小副本数
MaxNum 最大副本数
PolicyDetails 扩缩容策略
AccessTypes 访问类型
TimerScale 定时扩缩容
InternalAccess 内网访问
OperationMode 运行模式 noScale | condScale | alwaysScale | custom ｜ manualScale
SessionAffinity 会话亲和性 open | close
CpuSpecs cpu 规格
MemSpecs mem规格
EnvParam 环境变量
LogPath 日志采集路径
Port 端口
Dockerfile dockerfile 文件名
BuildDir 目标目录
Tag 服务标签
LogType 日志类型 none | default | custom 
LogSetId 日志集Id
LogTopicId 日志主题ID
LogParseType 日志解析类型 json ｜ line
EntryPoint entrypoint 命令
Cmd cmd命令
VpcConf 网络信息
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置配置项 Key
MinNum 最小副本数
MaxNum 最大副本数
PolicyDetails 扩缩容策略
AccessTypes 访问类型
TimerScale 定时扩缩容
InternalAccess 内网访问
OperationMode 运行模式 noScale | condScale | alwaysScale | custom ｜ manualScale
SessionAffinity 会话亲和性 open | close
CpuSpecs cpu 规格
MemSpecs mem规格
EnvParam 环境变量
LogPath 日志采集路径
Port 端口
Dockerfile dockerfile 文件名
BuildDir 目标目录
Tag 服务标签
LogType 日志类型 none | default | custom 
LogSetId 日志集Id
LogTopicId 日志主题ID
LogParseType 日志解析类型 json ｜ line
EntryPoint entrypoint 命令
Cmd cmd命令
VpcConf 网络信息
                     * @param _key 配置项 Key
MinNum 最小副本数
MaxNum 最大副本数
PolicyDetails 扩缩容策略
AccessTypes 访问类型
TimerScale 定时扩缩容
InternalAccess 内网访问
OperationMode 运行模式 noScale | condScale | alwaysScale | custom ｜ manualScale
SessionAffinity 会话亲和性 open | close
CpuSpecs cpu 规格
MemSpecs mem规格
EnvParam 环境变量
LogPath 日志采集路径
Port 端口
Dockerfile dockerfile 文件名
BuildDir 目标目录
Tag 服务标签
LogType 日志类型 none | default | custom 
LogSetId 日志集Id
LogTopicId 日志主题ID
LogParseType 日志解析类型 json ｜ line
EntryPoint entrypoint 命令
Cmd cmd命令
VpcConf 网络信息
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
                     * 获取字符串类型配置项值
InternalAccess、OperationMode、SessionAffinity、EnvParam、LogPath、Dockerfile、BuildDir、Tag、LogType、LogSetId、LogTopicId、LogParseType
                     * @return Value 字符串类型配置项值
InternalAccess、OperationMode、SessionAffinity、EnvParam、LogPath、Dockerfile、BuildDir、Tag、LogType、LogSetId、LogTopicId、LogParseType
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置字符串类型配置项值
InternalAccess、OperationMode、SessionAffinity、EnvParam、LogPath、Dockerfile、BuildDir、Tag、LogType、LogSetId、LogTopicId、LogParseType
                     * @param _value 字符串类型配置项值
InternalAccess、OperationMode、SessionAffinity、EnvParam、LogPath、Dockerfile、BuildDir、Tag、LogType、LogSetId、LogTopicId、LogParseType
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
                     * 获取int 类型配置项值
MinNum、MaxNum、Port
                     * @return IntValue int 类型配置项值
MinNum、MaxNum、Port
                     * 
                     */
                    int64_t GetIntValue() const;

                    /**
                     * 设置int 类型配置项值
MinNum、MaxNum、Port
                     * @param _intValue int 类型配置项值
MinNum、MaxNum、Port
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
                     * 获取bool 类型配置项值
                     * @return BoolValue bool 类型配置项值
                     * 
                     */
                    bool GetBoolValue() const;

                    /**
                     * 设置bool 类型配置项值
                     * @param _boolValue bool 类型配置项值
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
                     * 获取浮点型配置项值
CpuSpecs、MemSpecs
                     * @return FloatValue 浮点型配置项值
CpuSpecs、MemSpecs
                     * 
                     */
                    double GetFloatValue() const;

                    /**
                     * 设置浮点型配置项值
CpuSpecs、MemSpecs
                     * @param _floatValue 浮点型配置项值
CpuSpecs、MemSpecs
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
                     * 获取字符串数组配置项值
AccessTypes，EntryPoint，Cmd
                     * @return ArrayValue 字符串数组配置项值
AccessTypes，EntryPoint，Cmd
                     * 
                     */
                    std::vector<std::string> GetArrayValue() const;

                    /**
                     * 设置字符串数组配置项值
AccessTypes，EntryPoint，Cmd
                     * @param _arrayValue 字符串数组配置项值
AccessTypes，EntryPoint，Cmd
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
                     * 获取扩缩容策略配置项值
                     * @return PolicyDetails 扩缩容策略配置项值
                     * 
                     */
                    std::vector<HpaPolicy> GetPolicyDetails() const;

                    /**
                     * 设置扩缩容策略配置项值
                     * @param _policyDetails 扩缩容策略配置项值
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
                     * 获取定时扩缩容配置项值
                     * @return TimerScale 定时扩缩容配置项值
                     * 
                     */
                    std::vector<TimerScale> GetTimerScale() const;

                    /**
                     * 设置定时扩缩容配置项值
                     * @param _timerScale 定时扩缩容配置项值
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
                     * 获取配置内网访问时网络信息
                     * @return VpcConf 配置内网访问时网络信息
                     * 
                     */
                    VpcConf GetVpcConf() const;

                    /**
                     * 设置配置内网访问时网络信息
                     * @param _vpcConf 配置内网访问时网络信息
                     * 
                     */
                    void SetVpcConf(const VpcConf& _vpcConf);

                    /**
                     * 判断参数 VpcConf 是否已赋值
                     * @return VpcConf 是否已赋值
                     * 
                     */
                    bool VpcConfHasBeenSet() const;

                private:

                    /**
                     * 配置项 Key
MinNum 最小副本数
MaxNum 最大副本数
PolicyDetails 扩缩容策略
AccessTypes 访问类型
TimerScale 定时扩缩容
InternalAccess 内网访问
OperationMode 运行模式 noScale | condScale | alwaysScale | custom ｜ manualScale
SessionAffinity 会话亲和性 open | close
CpuSpecs cpu 规格
MemSpecs mem规格
EnvParam 环境变量
LogPath 日志采集路径
Port 端口
Dockerfile dockerfile 文件名
BuildDir 目标目录
Tag 服务标签
LogType 日志类型 none | default | custom 
LogSetId 日志集Id
LogTopicId 日志主题ID
LogParseType 日志解析类型 json ｜ line
EntryPoint entrypoint 命令
Cmd cmd命令
VpcConf 网络信息
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 字符串类型配置项值
InternalAccess、OperationMode、SessionAffinity、EnvParam、LogPath、Dockerfile、BuildDir、Tag、LogType、LogSetId、LogTopicId、LogParseType
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * int 类型配置项值
MinNum、MaxNum、Port
                     */
                    int64_t m_intValue;
                    bool m_intValueHasBeenSet;

                    /**
                     * bool 类型配置项值
                     */
                    bool m_boolValue;
                    bool m_boolValueHasBeenSet;

                    /**
                     * 浮点型配置项值
CpuSpecs、MemSpecs
                     */
                    double m_floatValue;
                    bool m_floatValueHasBeenSet;

                    /**
                     * 字符串数组配置项值
AccessTypes，EntryPoint，Cmd
                     */
                    std::vector<std::string> m_arrayValue;
                    bool m_arrayValueHasBeenSet;

                    /**
                     * 扩缩容策略配置项值
                     */
                    std::vector<HpaPolicy> m_policyDetails;
                    bool m_policyDetailsHasBeenSet;

                    /**
                     * 定时扩缩容配置项值
                     */
                    std::vector<TimerScale> m_timerScale;
                    bool m_timerScaleHasBeenSet;

                    /**
                     * 配置内网访问时网络信息
                     */
                    VpcConf m_vpcConf;
                    bool m_vpcConfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_DIFFCONFIGITEM_H_
