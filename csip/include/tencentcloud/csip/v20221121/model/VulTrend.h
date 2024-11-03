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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULTREND_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULTREND_H_

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
                * 漏洞趋势-攻击趋势、影响用户、影响资产
                */
                class VulTrend : public AbstractModel
                {
                public:
                    VulTrend();
                    ~VulTrend() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取影响的资产数
                     * @return AffectAssetCount 影响的资产数
                     * 
                     */
                    int64_t GetAffectAssetCount() const;

                    /**
                     * 设置影响的资产数
                     * @param _affectAssetCount 影响的资产数
                     * 
                     */
                    void SetAffectAssetCount(const int64_t& _affectAssetCount);

                    /**
                     * 判断参数 AffectAssetCount 是否已赋值
                     * @return AffectAssetCount 是否已赋值
                     * 
                     */
                    bool AffectAssetCountHasBeenSet() const;

                    /**
                     * 获取影响的用户数
                     * @return AffectUserCount 影响的用户数
                     * 
                     */
                    int64_t GetAffectUserCount() const;

                    /**
                     * 设置影响的用户数
                     * @param _affectUserCount 影响的用户数
                     * 
                     */
                    void SetAffectUserCount(const int64_t& _affectUserCount);

                    /**
                     * 判断参数 AffectUserCount 是否已赋值
                     * @return AffectUserCount 是否已赋值
                     * 
                     */
                    bool AffectUserCountHasBeenSet() const;

                    /**
                     * 获取攻击数
                     * @return AttackCount 攻击数
                     * 
                     */
                    int64_t GetAttackCount() const;

                    /**
                     * 设置攻击数
                     * @param _attackCount 攻击数
                     * 
                     */
                    void SetAttackCount(const int64_t& _attackCount);

                    /**
                     * 判断参数 AttackCount 是否已赋值
                     * @return AttackCount 是否已赋值
                     * 
                     */
                    bool AttackCountHasBeenSet() const;

                    /**
                     * 获取时间
                     * @return Date 时间
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置时间
                     * @param _date 时间
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                private:

                    /**
                     * 影响的资产数
                     */
                    int64_t m_affectAssetCount;
                    bool m_affectAssetCountHasBeenSet;

                    /**
                     * 影响的用户数
                     */
                    int64_t m_affectUserCount;
                    bool m_affectUserCountHasBeenSet;

                    /**
                     * 攻击数
                     */
                    int64_t m_attackCount;
                    bool m_attackCountHasBeenSet;

                    /**
                     * 时间
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULTREND_H_
