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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_BRUTEATTACK_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_BRUTEATTACK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 暴力破解列表
                */
                class BruteAttack : public AbstractModel
                {
                public:
                    BruteAttack();
                    ~BruteAttack() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件ID。
                     * @return Id 事件ID。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置事件ID。
                     * @param _id 事件ID。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取主机IP。
                     * @return MachineIp 主机IP。
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置主机IP。
                     * @param _machineIp 主机IP。
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取破解事件状态
<li>BRUTEATTACK_FAIL_ACCOUNT： 暴力破解事件-失败(存在帐号)  </li>
<li>BRUTEATTACK_FAIL_NOACCOUNT：暴力破解事件-失败(帐号不存在)</li>
<li>BRUTEATTACK_SUCCESS：暴力破解事件-成功</li>
                     * @return Status 破解事件状态
<li>BRUTEATTACK_FAIL_ACCOUNT： 暴力破解事件-失败(存在帐号)  </li>
<li>BRUTEATTACK_FAIL_NOACCOUNT：暴力破解事件-失败(帐号不存在)</li>
<li>BRUTEATTACK_SUCCESS：暴力破解事件-成功</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置破解事件状态
<li>BRUTEATTACK_FAIL_ACCOUNT： 暴力破解事件-失败(存在帐号)  </li>
<li>BRUTEATTACK_FAIL_NOACCOUNT：暴力破解事件-失败(帐号不存在)</li>
<li>BRUTEATTACK_SUCCESS：暴力破解事件-成功</li>
                     * @param _status 破解事件状态
<li>BRUTEATTACK_FAIL_ACCOUNT： 暴力破解事件-失败(存在帐号)  </li>
<li>BRUTEATTACK_FAIL_NOACCOUNT：暴力破解事件-失败(帐号不存在)</li>
<li>BRUTEATTACK_SUCCESS：暴力破解事件-成功</li>
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
                     * 获取用户名称。
                     * @return UserName 用户名称。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名称。
                     * @param _userName 用户名称。
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取城市ID。
                     * @return City 城市ID。
                     * 
                     */
                    uint64_t GetCity() const;

                    /**
                     * 设置城市ID。
                     * @param _city 城市ID。
                     * 
                     */
                    void SetCity(const uint64_t& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取国家ID。
                     * @return Country 国家ID。
                     * 
                     */
                    uint64_t GetCountry() const;

                    /**
                     * 设置国家ID。
                     * @param _country 国家ID。
                     * 
                     */
                    void SetCountry(const uint64_t& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取省份ID。
                     * @return Province 省份ID。
                     * 
                     */
                    uint64_t GetProvince() const;

                    /**
                     * 设置省份ID。
                     * @param _province 省份ID。
                     * 
                     */
                    void SetProvince(const uint64_t& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取来源IP。
                     * @return SrcIp 来源IP。
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置来源IP。
                     * @param _srcIp 来源IP。
                     * 
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取尝试破解次数。
                     * @return Count 尝试破解次数。
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置尝试破解次数。
                     * @param _count 尝试破解次数。
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取发生时间。
                     * @return CreateTime 发生时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置发生时间。
                     * @param _createTime 发生时间。
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
                     * 获取主机名称。
                     * @return MachineName 主机名称。
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置主机名称。
                     * @param _machineName 主机名称。
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取云镜客户端唯一标识UUID。
                     * @return Uuid 云镜客户端唯一标识UUID。
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置云镜客户端唯一标识UUID。
                     * @param _uuid 云镜客户端唯一标识UUID。
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取是否专业版。
                     * @return IsProVersion 是否专业版。
                     * 
                     */
                    bool GetIsProVersion() const;

                    /**
                     * 设置是否专业版。
                     * @param _isProVersion 是否专业版。
                     * 
                     */
                    void SetIsProVersion(const bool& _isProVersion);

                    /**
                     * 判断参数 IsProVersion 是否已赋值
                     * @return IsProVersion 是否已赋值
                     * 
                     */
                    bool IsProVersionHasBeenSet() const;

                    /**
                     * 获取阻断状态。
                     * @return BanStatus 阻断状态。
                     * 
                     */
                    std::string GetBanStatus() const;

                    /**
                     * 设置阻断状态。
                     * @param _banStatus 阻断状态。
                     * 
                     */
                    void SetBanStatus(const std::string& _banStatus);

                    /**
                     * 判断参数 BanStatus 是否已赋值
                     * @return BanStatus 是否已赋值
                     * 
                     */
                    bool BanStatusHasBeenSet() const;

                    /**
                     * 获取机器UUID
                     * @return Quuid 机器UUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置机器UUID
                     * @param _quuid 机器UUID
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                private:

                    /**
                     * 事件ID。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 主机IP。
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 破解事件状态
<li>BRUTEATTACK_FAIL_ACCOUNT： 暴力破解事件-失败(存在帐号)  </li>
<li>BRUTEATTACK_FAIL_NOACCOUNT：暴力破解事件-失败(帐号不存在)</li>
<li>BRUTEATTACK_SUCCESS：暴力破解事件-成功</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 用户名称。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 城市ID。
                     */
                    uint64_t m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 国家ID。
                     */
                    uint64_t m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 省份ID。
                     */
                    uint64_t m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 来源IP。
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * 尝试破解次数。
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 发生时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 主机名称。
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 云镜客户端唯一标识UUID。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 是否专业版。
                     */
                    bool m_isProVersion;
                    bool m_isProVersionHasBeenSet;

                    /**
                     * 阻断状态。
                     */
                    std::string m_banStatus;
                    bool m_banStatusHasBeenSet;

                    /**
                     * 机器UUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_BRUTEATTACK_H_
