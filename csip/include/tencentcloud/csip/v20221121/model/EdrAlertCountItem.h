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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTCOUNTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTCOUNTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * EDR告警数量统计项
                */
                class EdrAlertCountItem : public AbstractModel
                {
                public:
                    EdrAlertCountItem();
                    ~EdrAlertCountItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>查询实例ID</p>
                     * @return InstanceId <p>查询实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>查询实例ID</p>
                     * @param _instanceId <p>查询实例ID</p>
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
                     * 获取<p>总告警条数</p>
                     * @return TotalCount <p>总告警条数</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置<p>总告警条数</p>
                     * @param _totalCount <p>总告警条数</p>
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>病毒木马（VIRUS_TROJAN）数量</p>
                     * @return VirusTrojanCount <p>病毒木马（VIRUS_TROJAN）数量</p>
                     * 
                     */
                    int64_t GetVirusTrojanCount() const;

                    /**
                     * 设置<p>病毒木马（VIRUS_TROJAN）数量</p>
                     * @param _virusTrojanCount <p>病毒木马（VIRUS_TROJAN）数量</p>
                     * 
                     */
                    void SetVirusTrojanCount(const int64_t& _virusTrojanCount);

                    /**
                     * 判断参数 VirusTrojanCount 是否已赋值
                     * @return VirusTrojanCount 是否已赋值
                     * 
                     */
                    bool VirusTrojanCountHasBeenSet() const;

                    /**
                     * 获取<p>异常登录（ABNORMAL_LOGIN）数量</p>
                     * @return AbnormalLoginCount <p>异常登录（ABNORMAL_LOGIN）数量</p>
                     * 
                     */
                    int64_t GetAbnormalLoginCount() const;

                    /**
                     * 设置<p>异常登录（ABNORMAL_LOGIN）数量</p>
                     * @param _abnormalLoginCount <p>异常登录（ABNORMAL_LOGIN）数量</p>
                     * 
                     */
                    void SetAbnormalLoginCount(const int64_t& _abnormalLoginCount);

                    /**
                     * 判断参数 AbnormalLoginCount 是否已赋值
                     * @return AbnormalLoginCount 是否已赋值
                     * 
                     */
                    bool AbnormalLoginCountHasBeenSet() const;

                    /**
                     * 获取<p>主机行为（HOST_BEHAVIOR）数量</p>
                     * @return HostBehaviorCount <p>主机行为（HOST_BEHAVIOR）数量</p>
                     * 
                     */
                    int64_t GetHostBehaviorCount() const;

                    /**
                     * 设置<p>主机行为（HOST_BEHAVIOR）数量</p>
                     * @param _hostBehaviorCount <p>主机行为（HOST_BEHAVIOR）数量</p>
                     * 
                     */
                    void SetHostBehaviorCount(const int64_t& _hostBehaviorCount);

                    /**
                     * 判断参数 HostBehaviorCount 是否已赋值
                     * @return HostBehaviorCount 是否已赋值
                     * 
                     */
                    bool HostBehaviorCountHasBeenSet() const;

                    /**
                     * 获取<p>网络行为（NETWORK_BEHAVIOR）数量</p>
                     * @return NetworkBehaviorCount <p>网络行为（NETWORK_BEHAVIOR）数量</p>
                     * 
                     */
                    int64_t GetNetworkBehaviorCount() const;

                    /**
                     * 设置<p>网络行为（NETWORK_BEHAVIOR）数量</p>
                     * @param _networkBehaviorCount <p>网络行为（NETWORK_BEHAVIOR）数量</p>
                     * 
                     */
                    void SetNetworkBehaviorCount(const int64_t& _networkBehaviorCount);

                    /**
                     * 判断参数 NetworkBehaviorCount 是否已赋值
                     * @return NetworkBehaviorCount 是否已赋值
                     * 
                     */
                    bool NetworkBehaviorCountHasBeenSet() const;

                    /**
                     * 获取<p>存在告警的主机数量（仅 GlobalCount 模式有值）</p>
                     * @return InstancesCount <p>存在告警的主机数量（仅 GlobalCount 模式有值）</p>
                     * 
                     */
                    uint64_t GetInstancesCount() const;

                    /**
                     * 设置<p>存在告警的主机数量（仅 GlobalCount 模式有值）</p>
                     * @param _instancesCount <p>存在告警的主机数量（仅 GlobalCount 模式有值）</p>
                     * 
                     */
                    void SetInstancesCount(const uint64_t& _instancesCount);

                    /**
                     * 判断参数 InstancesCount 是否已赋值
                     * @return InstancesCount 是否已赋值
                     * 
                     */
                    bool InstancesCountHasBeenSet() const;

                private:

                    /**
                     * <p>查询实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>总告警条数</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>病毒木马（VIRUS_TROJAN）数量</p>
                     */
                    int64_t m_virusTrojanCount;
                    bool m_virusTrojanCountHasBeenSet;

                    /**
                     * <p>异常登录（ABNORMAL_LOGIN）数量</p>
                     */
                    int64_t m_abnormalLoginCount;
                    bool m_abnormalLoginCountHasBeenSet;

                    /**
                     * <p>主机行为（HOST_BEHAVIOR）数量</p>
                     */
                    int64_t m_hostBehaviorCount;
                    bool m_hostBehaviorCountHasBeenSet;

                    /**
                     * <p>网络行为（NETWORK_BEHAVIOR）数量</p>
                     */
                    int64_t m_networkBehaviorCount;
                    bool m_networkBehaviorCountHasBeenSet;

                    /**
                     * <p>存在告警的主机数量（仅 GlobalCount 模式有值）</p>
                     */
                    uint64_t m_instancesCount;
                    bool m_instancesCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTCOUNTITEM_H_
