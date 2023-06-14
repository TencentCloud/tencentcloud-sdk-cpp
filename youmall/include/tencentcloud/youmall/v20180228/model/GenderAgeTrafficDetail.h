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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_GENDERAGETRAFFICDETAIL_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_GENDERAGETRAFFICDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 性别年龄分组下的客流信息
                */
                class GenderAgeTrafficDetail : public AbstractModel
                {
                public:
                    GenderAgeTrafficDetail();
                    ~GenderAgeTrafficDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取性别: 0男1女
                     * @return Gender 性别: 0男1女
                     * 
                     */
                    uint64_t GetGender() const;

                    /**
                     * 设置性别: 0男1女
                     * @param _gender 性别: 0男1女
                     * 
                     */
                    void SetGender(const uint64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取年龄区间，枚举值：0-17、18-23、24-30、31-40、41-50、51-60、>60
                     * @return AgeGap 年龄区间，枚举值：0-17、18-23、24-30、31-40、41-50、51-60、>60
                     * 
                     */
                    std::string GetAgeGap() const;

                    /**
                     * 设置年龄区间，枚举值：0-17、18-23、24-30、31-40、41-50、51-60、>60
                     * @param _ageGap 年龄区间，枚举值：0-17、18-23、24-30、31-40、41-50、51-60、>60
                     * 
                     */
                    void SetAgeGap(const std::string& _ageGap);

                    /**
                     * 判断参数 AgeGap 是否已赋值
                     * @return AgeGap 是否已赋值
                     * 
                     */
                    bool AgeGapHasBeenSet() const;

                    /**
                     * 获取客流量
                     * @return TrafficCount 客流量
                     * 
                     */
                    uint64_t GetTrafficCount() const;

                    /**
                     * 设置客流量
                     * @param _trafficCount 客流量
                     * 
                     */
                    void SetTrafficCount(const uint64_t& _trafficCount);

                    /**
                     * 判断参数 TrafficCount 是否已赋值
                     * @return TrafficCount 是否已赋值
                     * 
                     */
                    bool TrafficCountHasBeenSet() const;

                private:

                    /**
                     * 性别: 0男1女
                     */
                    uint64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 年龄区间，枚举值：0-17、18-23、24-30、31-40、41-50、51-60、>60
                     */
                    std::string m_ageGap;
                    bool m_ageGapHasBeenSet;

                    /**
                     * 客流量
                     */
                    uint64_t m_trafficCount;
                    bool m_trafficCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_GENDERAGETRAFFICDETAIL_H_
