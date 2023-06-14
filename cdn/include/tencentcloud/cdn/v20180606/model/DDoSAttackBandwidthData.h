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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DDOSATTACKBANDWIDTHDATA_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DDOSATTACKBANDWIDTHDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * ddos攻击带宽峰值数据
                */
                class DDoSAttackBandwidthData : public AbstractModel
                {
                public:
                    DDoSAttackBandwidthData();
                    ~DDoSAttackBandwidthData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ddos攻击类型，当值为all的时候表示所有的攻击类型的总带宽峰值
                     * @return AttackType ddos攻击类型，当值为all的时候表示所有的攻击类型的总带宽峰值
                     * 
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置ddos攻击类型，当值为all的时候表示所有的攻击类型的总带宽峰值
                     * @param _attackType ddos攻击类型，当值为all的时候表示所有的攻击类型的总带宽峰值
                     * 
                     */
                    void SetAttackType(const std::string& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     * 
                     */
                    bool AttackTypeHasBeenSet() const;

                    /**
                     * 获取ddos攻击带宽大小
                     * @return Value ddos攻击带宽大小
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置ddos攻击带宽大小
                     * @param _value ddos攻击带宽大小
                     * 
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取攻击时间点
                     * @return Time 攻击时间点
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置攻击时间点
                     * @param _time 攻击时间点
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                private:

                    /**
                     * ddos攻击类型，当值为all的时候表示所有的攻击类型的总带宽峰值
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * ddos攻击带宽大小
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 攻击时间点
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DDOSATTACKBANDWIDTHDATA_H_
