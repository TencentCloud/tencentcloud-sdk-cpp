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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_MODIFYCONNECTIONCONFIGREQUEST_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_MODIFYCONNECTIONCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * ModifyConnectionConfig请求参数结构体
                */
                class ModifyConnectionConfigRequest : public AbstractModel
                {
                public:
                    ModifyConnectionConfigRequest();
                    ~ModifyConnectionConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，如：kee-6ubh****。
                     * @return InstanceId 实例 ID，如：kee-6ubh****。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，如：kee-6ubh****。
                     * @param _instanceId 实例 ID，如：kee-6ubh****。
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
                     * 获取单分片附加带宽，取值范围[0,512]，单位：MB。
<ul><li>开启副本只读时，实例总带宽  = 单分片附加带宽 * 分片数 + 标准带宽 * 分片数 * Max ([只读副本数量, 1])，标准架构的分片数 = 1。</li><li>没有开启副本只读时，实例总带宽 = 单分片附加带宽 * 分片数 + 标准带宽 * 分片数，标准架构的分片数 = 1。</li></ul>
                     * @return Bandwidth 单分片附加带宽，取值范围[0,512]，单位：MB。
<ul><li>开启副本只读时，实例总带宽  = 单分片附加带宽 * 分片数 + 标准带宽 * 分片数 * Max ([只读副本数量, 1])，标准架构的分片数 = 1。</li><li>没有开启副本只读时，实例总带宽 = 单分片附加带宽 * 分片数 + 标准带宽 * 分片数，标准架构的分片数 = 1。</li></ul>
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置单分片附加带宽，取值范围[0,512]，单位：MB。
<ul><li>开启副本只读时，实例总带宽  = 单分片附加带宽 * 分片数 + 标准带宽 * 分片数 * Max ([只读副本数量, 1])，标准架构的分片数 = 1。</li><li>没有开启副本只读时，实例总带宽 = 单分片附加带宽 * 分片数 + 标准带宽 * 分片数，标准架构的分片数 = 1。</li></ul>
                     * @param _bandwidth 单分片附加带宽，取值范围[0,512]，单位：MB。
<ul><li>开启副本只读时，实例总带宽  = 单分片附加带宽 * 分片数 + 标准带宽 * 分片数 * Max ([只读副本数量, 1])，标准架构的分片数 = 1。</li><li>没有开启副本只读时，实例总带宽 = 单分片附加带宽 * 分片数 + 标准带宽 * 分片数，标准架构的分片数 = 1。</li></ul>
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取单分片的总连接数。
<ul>默认为10000，整个实例的最大连接数为单个分片的最大连接数 x 分片数量。标准架构分片数量为1。
<li>关闭副本只读：每个分片的最大连接数的取值范围为[10000,40000]。</li><li>开启副本只读：每个分片的最大连接数的取值范围为 [10000,10000 x (副本数 + 3)]。</li></ul>
                     * @return ClientLimit 单分片的总连接数。
<ul>默认为10000，整个实例的最大连接数为单个分片的最大连接数 x 分片数量。标准架构分片数量为1。
<li>关闭副本只读：每个分片的最大连接数的取值范围为[10000,40000]。</li><li>开启副本只读：每个分片的最大连接数的取值范围为 [10000,10000 x (副本数 + 3)]。</li></ul>
                     * 
                     */
                    int64_t GetClientLimit() const;

                    /**
                     * 设置单分片的总连接数。
<ul>默认为10000，整个实例的最大连接数为单个分片的最大连接数 x 分片数量。标准架构分片数量为1。
<li>关闭副本只读：每个分片的最大连接数的取值范围为[10000,40000]。</li><li>开启副本只读：每个分片的最大连接数的取值范围为 [10000,10000 x (副本数 + 3)]。</li></ul>
                     * @param _clientLimit 单分片的总连接数。
<ul>默认为10000，整个实例的最大连接数为单个分片的最大连接数 x 分片数量。标准架构分片数量为1。
<li>关闭副本只读：每个分片的最大连接数的取值范围为[10000,40000]。</li><li>开启副本只读：每个分片的最大连接数的取值范围为 [10000,10000 x (副本数 + 3)]。</li></ul>
                     * 
                     */
                    void SetClientLimit(const int64_t& _clientLimit);

                    /**
                     * 判断参数 ClientLimit 是否已赋值
                     * @return ClientLimit 是否已赋值
                     * 
                     */
                    bool ClientLimitHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，如：kee-6ubh****。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 单分片附加带宽，取值范围[0,512]，单位：MB。
<ul><li>开启副本只读时，实例总带宽  = 单分片附加带宽 * 分片数 + 标准带宽 * 分片数 * Max ([只读副本数量, 1])，标准架构的分片数 = 1。</li><li>没有开启副本只读时，实例总带宽 = 单分片附加带宽 * 分片数 + 标准带宽 * 分片数，标准架构的分片数 = 1。</li></ul>
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 单分片的总连接数。
<ul>默认为10000，整个实例的最大连接数为单个分片的最大连接数 x 分片数量。标准架构分片数量为1。
<li>关闭副本只读：每个分片的最大连接数的取值范围为[10000,40000]。</li><li>开启副本只读：每个分片的最大连接数的取值范围为 [10000,10000 x (副本数 + 3)]。</li></ul>
                     */
                    int64_t m_clientLimit;
                    bool m_clientLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_MODIFYCONNECTIONCONFIGREQUEST_H_
