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

#ifndef TENCENTCLOUD_TICS_V20181115_MODEL_DESCRIBETHREATINFORESPONSE_H_
#define TENCENTCLOUD_TICS_V20181115_MODEL_DESCRIBETHREATINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tics
    {
        namespace V20181115
        {
            namespace Model
            {
                /**
                * DescribeThreatInfo返回参数结构体
                */
                class DescribeThreatInfoResponse : public AbstractModel
                {
                public:
                    DescribeThreatInfoResponse();
                    ~DescribeThreatInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否有数据，0代表有数据，1代表没有数据
                     * @return ReturnCode 是否有数据，0代表有数据，1代表没有数据
                     * 
                     */
                    uint64_t GetReturnCode() const;

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                    /**
                     * 获取判定结果，如：black、white、grey
                     * @return Result 判定结果，如：black、white、grey
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取置信度，取值0-100
                     * @return Confidence 置信度，取值0-100
                     * 
                     */
                    uint64_t GetConfidence() const;

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取威胁类型。
botnet = 僵尸网络
trojan = 木马
ransomware = 勒索软件
worm = 蠕虫
dga = 域名生成算法
c2 = c&c
compromised = 失陷主机
dynamicIP = 动态IP
proxy = 代理
idc = idc 机房
whitelist = 白名单
tor = 暗网
miner = 挖矿
maleware site = 恶意站点
malware IP = 恶意IP
等等
                     * @return ThreatTypes 威胁类型。
botnet = 僵尸网络
trojan = 木马
ransomware = 勒索软件
worm = 蠕虫
dga = 域名生成算法
c2 = c&c
compromised = 失陷主机
dynamicIP = 动态IP
proxy = 代理
idc = idc 机房
whitelist = 白名单
tor = 暗网
miner = 挖矿
maleware site = 恶意站点
malware IP = 恶意IP
等等
                     * 
                     */
                    std::vector<std::string> GetThreatTypes() const;

                    /**
                     * 判断参数 ThreatTypes 是否已赋值
                     * @return ThreatTypes 是否已赋值
                     * 
                     */
                    bool ThreatTypesHasBeenSet() const;

                    /**
                     * 获取恶意标签，对应的团伙，家族等信息。
                     * @return Tags 恶意标签，对应的团伙，家族等信息。
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取当前状态
active = 活跃
sinkholed = sinkholed
inactive = 不活跃
unknown = 未知
expired = 过期
                     * @return Status 当前状态
active = 活跃
sinkholed = sinkholed
inactive = 不活跃
unknown = 未知
expired = 过期
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取情报相关的上下文，参数option=1 的时候提供
每个数据默认为3 条
                     * @return Context 情报相关的上下文，参数option=1 的时候提供
每个数据默认为3 条
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                private:

                    /**
                     * 是否有数据，0代表有数据，1代表没有数据
                     */
                    uint64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * 判定结果，如：black、white、grey
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 置信度，取值0-100
                     */
                    uint64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 威胁类型。
botnet = 僵尸网络
trojan = 木马
ransomware = 勒索软件
worm = 蠕虫
dga = 域名生成算法
c2 = c&c
compromised = 失陷主机
dynamicIP = 动态IP
proxy = 代理
idc = idc 机房
whitelist = 白名单
tor = 暗网
miner = 挖矿
maleware site = 恶意站点
malware IP = 恶意IP
等等
                     */
                    std::vector<std::string> m_threatTypes;
                    bool m_threatTypesHasBeenSet;

                    /**
                     * 恶意标签，对应的团伙，家族等信息。
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 当前状态
active = 活跃
sinkholed = sinkholed
inactive = 不活跃
unknown = 未知
expired = 过期
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 情报相关的上下文，参数option=1 的时候提供
每个数据默认为3 条
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TICS_V20181115_MODEL_DESCRIBETHREATINFORESPONSE_H_
