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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUPASSOCIATIONSTATISTICS_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUPASSOCIATIONSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/InstanceStatistic.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 安全组关联的资源统计
                */
                class SecurityGroupAssociationStatistics : public AbstractModel
                {
                public:
                    SecurityGroupAssociationStatistics();
                    ~SecurityGroupAssociationStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取安全组实例ID。
                     * @return SecurityGroupId 安全组实例ID。
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组实例ID。
                     * @param _securityGroupId 安全组实例ID。
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取ECM实例数。
                     * @return ECM ECM实例数。
                     * 
                     */
                    int64_t GetECM() const;

                    /**
                     * 设置ECM实例数。
                     * @param _eCM ECM实例数。
                     * 
                     */
                    void SetECM(const int64_t& _eCM);

                    /**
                     * 判断参数 ECM 是否已赋值
                     * @return ECM 是否已赋值
                     * 
                     */
                    bool ECMHasBeenSet() const;

                    /**
                     * 获取ECM模块数。
                     * @return Module ECM模块数。
                     * 
                     */
                    int64_t GetModule() const;

                    /**
                     * 设置ECM模块数。
                     * @param _module ECM模块数。
                     * 
                     */
                    void SetModule(const int64_t& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取弹性网卡实例数。
                     * @return ENI 弹性网卡实例数。
                     * 
                     */
                    int64_t GetENI() const;

                    /**
                     * 设置弹性网卡实例数。
                     * @param _eNI 弹性网卡实例数。
                     * 
                     */
                    void SetENI(const int64_t& _eNI);

                    /**
                     * 判断参数 ENI 是否已赋值
                     * @return ENI 是否已赋值
                     * 
                     */
                    bool ENIHasBeenSet() const;

                    /**
                     * 获取被安全组引用数。
                     * @return SG 被安全组引用数。
                     * 
                     */
                    int64_t GetSG() const;

                    /**
                     * 设置被安全组引用数。
                     * @param _sG 被安全组引用数。
                     * 
                     */
                    void SetSG(const int64_t& _sG);

                    /**
                     * 判断参数 SG 是否已赋值
                     * @return SG 是否已赋值
                     * 
                     */
                    bool SGHasBeenSet() const;

                    /**
                     * 获取负载均衡实例数。
                     * @return CLB 负载均衡实例数。
                     * 
                     */
                    int64_t GetCLB() const;

                    /**
                     * 设置负载均衡实例数。
                     * @param _cLB 负载均衡实例数。
                     * 
                     */
                    void SetCLB(const int64_t& _cLB);

                    /**
                     * 判断参数 CLB 是否已赋值
                     * @return CLB 是否已赋值
                     * 
                     */
                    bool CLBHasBeenSet() const;

                    /**
                     * 获取全量实例的绑定统计。
                     * @return InstanceStatistics 全量实例的绑定统计。
                     * 
                     */
                    std::vector<InstanceStatistic> GetInstanceStatistics() const;

                    /**
                     * 设置全量实例的绑定统计。
                     * @param _instanceStatistics 全量实例的绑定统计。
                     * 
                     */
                    void SetInstanceStatistics(const std::vector<InstanceStatistic>& _instanceStatistics);

                    /**
                     * 判断参数 InstanceStatistics 是否已赋值
                     * @return InstanceStatistics 是否已赋值
                     * 
                     */
                    bool InstanceStatisticsHasBeenSet() const;

                    /**
                     * 获取所有资源的总计数（不包含被安全组引用数）。
                     * @return TotalCount 所有资源的总计数（不包含被安全组引用数）。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置所有资源的总计数（不包含被安全组引用数）。
                     * @param _totalCount 所有资源的总计数（不包含被安全组引用数）。
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 安全组实例ID。
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * ECM实例数。
                     */
                    int64_t m_eCM;
                    bool m_eCMHasBeenSet;

                    /**
                     * ECM模块数。
                     */
                    int64_t m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 弹性网卡实例数。
                     */
                    int64_t m_eNI;
                    bool m_eNIHasBeenSet;

                    /**
                     * 被安全组引用数。
                     */
                    int64_t m_sG;
                    bool m_sGHasBeenSet;

                    /**
                     * 负载均衡实例数。
                     */
                    int64_t m_cLB;
                    bool m_cLBHasBeenSet;

                    /**
                     * 全量实例的绑定统计。
                     */
                    std::vector<InstanceStatistic> m_instanceStatistics;
                    bool m_instanceStatisticsHasBeenSet;

                    /**
                     * 所有资源的总计数（不包含被安全组引用数）。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUPASSOCIATIONSTATISTICS_H_
