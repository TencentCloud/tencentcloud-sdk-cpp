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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCEUSAGES_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCEUSAGES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 高防包资产实例的使用信息统计
                */
                class BGPInstanceUsages : public AbstractModel
                {
                public:
                    BGPInstanceUsages();
                    ~BGPInstanceUsages() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取已使用的防护次数，单位次
                     * @return ProtectCountUsage 已使用的防护次数，单位次
                     * 
                     */
                    uint64_t GetProtectCountUsage() const;

                    /**
                     * 设置已使用的防护次数，单位次
                     * @param _protectCountUsage 已使用的防护次数，单位次
                     * 
                     */
                    void SetProtectCountUsage(const uint64_t& _protectCountUsage);

                    /**
                     * 判断参数 ProtectCountUsage 是否已赋值
                     * @return ProtectCountUsage 是否已赋值
                     * 
                     */
                    bool ProtectCountUsageHasBeenSet() const;

                    /**
                     * 获取已防护的IP数，单位个
                     * @return ProtectIPNumberUsage 已防护的IP数，单位个
                     * 
                     */
                    uint64_t GetProtectIPNumberUsage() const;

                    /**
                     * 设置已防护的IP数，单位个
                     * @param _protectIPNumberUsage 已防护的IP数，单位个
                     * 
                     */
                    void SetProtectIPNumberUsage(const uint64_t& _protectIPNumberUsage);

                    /**
                     * 判断参数 ProtectIPNumberUsage 是否已赋值
                     * @return ProtectIPNumberUsage 是否已赋值
                     * 
                     */
                    bool ProtectIPNumberUsageHasBeenSet() const;

                    /**
                     * 获取最近7天的攻击次数，单位次
                     * @return Last7DayAttackCount 最近7天的攻击次数，单位次
                     * 
                     */
                    uint64_t GetLast7DayAttackCount() const;

                    /**
                     * 设置最近7天的攻击次数，单位次
                     * @param _last7DayAttackCount 最近7天的攻击次数，单位次
                     * 
                     */
                    void SetLast7DayAttackCount(const uint64_t& _last7DayAttackCount);

                    /**
                     * 判断参数 Last7DayAttackCount 是否已赋值
                     * @return Last7DayAttackCount 是否已赋值
                     * 
                     */
                    bool Last7DayAttackCountHasBeenSet() const;

                private:

                    /**
                     * 已使用的防护次数，单位次
                     */
                    uint64_t m_protectCountUsage;
                    bool m_protectCountUsageHasBeenSet;

                    /**
                     * 已防护的IP数，单位个
                     */
                    uint64_t m_protectIPNumberUsage;
                    bool m_protectIPNumberUsageHasBeenSet;

                    /**
                     * 最近7天的攻击次数，单位次
                     */
                    uint64_t m_last7DayAttackCount;
                    bool m_last7DayAttackCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCEUSAGES_H_
