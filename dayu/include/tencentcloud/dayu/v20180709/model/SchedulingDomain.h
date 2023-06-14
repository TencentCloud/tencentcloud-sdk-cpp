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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_SCHEDULINGDOMAIN_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_SCHEDULINGDOMAIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 调度域名信息
                */
                class SchedulingDomain : public AbstractModel
                {
                public:
                    SchedulingDomain();
                    ~SchedulingDomain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取调度域名
                     * @return Domain 调度域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置调度域名
                     * @param _domain 调度域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取BGP线路IP列表
                     * @return BGPIpList BGP线路IP列表
                     * 
                     */
                    std::vector<std::string> GetBGPIpList() const;

                    /**
                     * 设置BGP线路IP列表
                     * @param _bGPIpList BGP线路IP列表
                     * 
                     */
                    void SetBGPIpList(const std::vector<std::string>& _bGPIpList);

                    /**
                     * 判断参数 BGPIpList 是否已赋值
                     * @return BGPIpList 是否已赋值
                     * 
                     */
                    bool BGPIpListHasBeenSet() const;

                    /**
                     * 获取电信线路IP列表
                     * @return CTCCIpList 电信线路IP列表
                     * 
                     */
                    std::vector<std::string> GetCTCCIpList() const;

                    /**
                     * 设置电信线路IP列表
                     * @param _cTCCIpList 电信线路IP列表
                     * 
                     */
                    void SetCTCCIpList(const std::vector<std::string>& _cTCCIpList);

                    /**
                     * 判断参数 CTCCIpList 是否已赋值
                     * @return CTCCIpList 是否已赋值
                     * 
                     */
                    bool CTCCIpListHasBeenSet() const;

                    /**
                     * 获取联通线路IP列表
                     * @return CUCCIpList 联通线路IP列表
                     * 
                     */
                    std::vector<std::string> GetCUCCIpList() const;

                    /**
                     * 设置联通线路IP列表
                     * @param _cUCCIpList 联通线路IP列表
                     * 
                     */
                    void SetCUCCIpList(const std::vector<std::string>& _cUCCIpList);

                    /**
                     * 判断参数 CUCCIpList 是否已赋值
                     * @return CUCCIpList 是否已赋值
                     * 
                     */
                    bool CUCCIpListHasBeenSet() const;

                    /**
                     * 获取移动线路IP列表
                     * @return CMCCIpList 移动线路IP列表
                     * 
                     */
                    std::vector<std::string> GetCMCCIpList() const;

                    /**
                     * 设置移动线路IP列表
                     * @param _cMCCIpList 移动线路IP列表
                     * 
                     */
                    void SetCMCCIpList(const std::vector<std::string>& _cMCCIpList);

                    /**
                     * 判断参数 CMCCIpList 是否已赋值
                     * @return CMCCIpList 是否已赋值
                     * 
                     */
                    bool CMCCIpListHasBeenSet() const;

                    /**
                     * 获取海外线路IP列表
                     * @return OverseaIpList 海外线路IP列表
                     * 
                     */
                    std::vector<std::string> GetOverseaIpList() const;

                    /**
                     * 设置海外线路IP列表
                     * @param _overseaIpList 海外线路IP列表
                     * 
                     */
                    void SetOverseaIpList(const std::vector<std::string>& _overseaIpList);

                    /**
                     * 判断参数 OverseaIpList 是否已赋值
                     * @return OverseaIpList 是否已赋值
                     * 
                     */
                    bool OverseaIpListHasBeenSet() const;

                    /**
                     * 获取调度方式，当前仅支持优先级, 取值为priority
                     * @return Method 调度方式，当前仅支持优先级, 取值为priority
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置调度方式，当前仅支持优先级, 取值为priority
                     * @param _method 调度方式，当前仅支持优先级, 取值为priority
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取ttl
                     * @return TTL ttl
                     * 
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置ttl
                     * @param _tTL ttl
                     * 
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     * 
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 调度域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * BGP线路IP列表
                     */
                    std::vector<std::string> m_bGPIpList;
                    bool m_bGPIpListHasBeenSet;

                    /**
                     * 电信线路IP列表
                     */
                    std::vector<std::string> m_cTCCIpList;
                    bool m_cTCCIpListHasBeenSet;

                    /**
                     * 联通线路IP列表
                     */
                    std::vector<std::string> m_cUCCIpList;
                    bool m_cUCCIpListHasBeenSet;

                    /**
                     * 移动线路IP列表
                     */
                    std::vector<std::string> m_cMCCIpList;
                    bool m_cMCCIpListHasBeenSet;

                    /**
                     * 海外线路IP列表
                     */
                    std::vector<std::string> m_overseaIpList;
                    bool m_overseaIpListHasBeenSet;

                    /**
                     * 调度方式，当前仅支持优先级, 取值为priority
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * ttl
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_SCHEDULINGDOMAIN_H_
