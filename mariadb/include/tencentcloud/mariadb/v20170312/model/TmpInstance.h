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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_TMPINSTANCE_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_TMPINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 临时实例
                */
                class TmpInstance : public AbstractModel
                {
                public:
                    TmpInstance();
                    ~TmpInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用ID
                     * @return AppId 应用ID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置应用ID
                     * @param _appId 应用ID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

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
                     * 获取实例备注
                     * @return InstanceRemark 实例备注
                     * 
                     */
                    std::string GetInstanceRemark() const;

                    /**
                     * 设置实例备注
                     * @param _instanceRemark 实例备注
                     * 
                     */
                    void SetInstanceRemark(const std::string& _instanceRemark);

                    /**
                     * 判断参数 InstanceRemark 是否已赋值
                     * @return InstanceRemark 是否已赋值
                     * 
                     */
                    bool InstanceRemarkHasBeenSet() const;

                    /**
                     * 获取0:非临时实例 ,1:无效临时实例, 2:回档成功的有效临时实例
                     * @return TempType 0:非临时实例 ,1:无效临时实例, 2:回档成功的有效临时实例
                     * 
                     */
                    int64_t GetTempType() const;

                    /**
                     * 设置0:非临时实例 ,1:无效临时实例, 2:回档成功的有效临时实例
                     * @param _tempType 0:非临时实例 ,1:无效临时实例, 2:回档成功的有效临时实例
                     * 
                     */
                    void SetTempType(const int64_t& _tempType);

                    /**
                     * 判断参数 TempType 是否已赋值
                     * @return TempType 是否已赋值
                     * 
                     */
                    bool TempTypeHasBeenSet() const;

                    /**
                     * 获取实例状态,0:待初始化,1:流程处理中,2:有效状态,-1:已隔离，-2：已下线
                     * @return Status 实例状态,0:待初始化,1:流程处理中,2:有效状态,-1:已隔离，-2：已下线
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态,0:待初始化,1:流程处理中,2:有效状态,-1:已隔离，-2：已下线
                     * @param _status 实例状态,0:待初始化,1:流程处理中,2:有效状态,-1:已隔离，-2：已下线
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例 ID，形如：tdsql-ow728lmc。
                     * @return InstanceId 实例 ID，形如：tdsql-ow728lmc。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，形如：tdsql-ow728lmc。
                     * @param _instanceId 实例 ID，形如：tdsql-ow728lmc。
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
                     * 获取实例虚IP
                     * @return Vip 实例虚IP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置实例虚IP
                     * @param _vip 实例虚IP
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取实例虚端口
                     * @return Vport 实例虚端口
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置实例虚端口
                     * @param _vport 实例虚端口
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取有效期结束时间
                     * @return PeriodEndTime 有效期结束时间
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置有效期结束时间
                     * @param _periodEndTime 有效期结束时间
                     * 
                     */
                    void SetPeriodEndTime(const std::string& _periodEndTime);

                    /**
                     * 判断参数 PeriodEndTime 是否已赋值
                     * @return PeriodEndTime 是否已赋值
                     * 
                     */
                    bool PeriodEndTimeHasBeenSet() const;

                    /**
                     * 获取源实例 ID，形如：tdsql-ow728lmc。
                     * @return SrcInstanceId 源实例 ID，形如：tdsql-ow728lmc。
                     * 
                     */
                    std::string GetSrcInstanceId() const;

                    /**
                     * 设置源实例 ID，形如：tdsql-ow728lmc。
                     * @param _srcInstanceId 源实例 ID，形如：tdsql-ow728lmc。
                     * 
                     */
                    void SetSrcInstanceId(const std::string& _srcInstanceId);

                    /**
                     * 判断参数 SrcInstanceId 是否已赋值
                     * @return SrcInstanceId 是否已赋值
                     * 
                     */
                    bool SrcInstanceIdHasBeenSet() const;

                    /**
                     * 获取实例状态描述
                     * @return StatusDesc 实例状态描述
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置实例状态描述
                     * @param _statusDesc 实例状态描述
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取实例所在地域
                     * @return Region 实例所在地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例所在地域
                     * @param _region 实例所在地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取实例所在可用区
                     * @return Zone 实例所在可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例所在可用区
                     * @param _zone 实例所在可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取实例虚IPv6
                     * @return Vipv6 实例虚IPv6
                     * 
                     */
                    std::string GetVipv6() const;

                    /**
                     * 设置实例虚IPv6
                     * @param _vipv6 实例虚IPv6
                     * 
                     */
                    void SetVipv6(const std::string& _vipv6);

                    /**
                     * 判断参数 Vipv6 是否已赋值
                     * @return Vipv6 是否已赋值
                     * 
                     */
                    bool Vipv6HasBeenSet() const;

                    /**
                     * 获取实例IPv6标志
                     * @return Ipv6Flag 实例IPv6标志
                     * 
                     */
                    uint64_t GetIpv6Flag() const;

                    /**
                     * 设置实例IPv6标志
                     * @param _ipv6Flag 实例IPv6标志
                     * 
                     */
                    void SetIpv6Flag(const uint64_t& _ipv6Flag);

                    /**
                     * 判断参数 Ipv6Flag 是否已赋值
                     * @return Ipv6Flag 是否已赋值
                     * 
                     */
                    bool Ipv6FlagHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例备注
                     */
                    std::string m_instanceRemark;
                    bool m_instanceRemarkHasBeenSet;

                    /**
                     * 0:非临时实例 ,1:无效临时实例, 2:回档成功的有效临时实例
                     */
                    int64_t m_tempType;
                    bool m_tempTypeHasBeenSet;

                    /**
                     * 实例状态,0:待初始化,1:流程处理中,2:有效状态,-1:已隔离，-2：已下线
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例 ID，形如：tdsql-ow728lmc。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例虚IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 实例虚端口
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 有效期结束时间
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * 源实例 ID，形如：tdsql-ow728lmc。
                     */
                    std::string m_srcInstanceId;
                    bool m_srcInstanceIdHasBeenSet;

                    /**
                     * 实例状态描述
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 实例所在地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例所在可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例虚IPv6
                     */
                    std::string m_vipv6;
                    bool m_vipv6HasBeenSet;

                    /**
                     * 实例IPv6标志
                     */
                    uint64_t m_ipv6Flag;
                    bool m_ipv6FlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_TMPINSTANCE_H_
