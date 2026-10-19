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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_VOLUMEUSAGEDETAIL_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_VOLUMEUSAGEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 纯按量计费版本使用详情
                */
                class VolumeUsageDetail : public AbstractModel
                {
                public:
                    VolumeUsageDetail();
                    ~VolumeUsageDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>防护IP数</p><p>默认值：0</p>
                     * @return PublicIpUsed <p>防护IP数</p><p>默认值：0</p>
                     * 
                     */
                    int64_t GetPublicIpUsed() const;

                    /**
                     * 设置<p>防护IP数</p><p>默认值：0</p>
                     * @param _publicIpUsed <p>防护IP数</p><p>默认值：0</p>
                     * 
                     */
                    void SetPublicIpUsed(const int64_t& _publicIpUsed);

                    /**
                     * 判断参数 PublicIpUsed 是否已赋值
                     * @return PublicIpUsed 是否已赋值
                     * 
                     */
                    bool PublicIpUsedHasBeenSet() const;

                    /**
                     * 获取<p>防护实例数</p><p>默认值：0</p>
                     * @return InstanceUsed <p>防护实例数</p><p>默认值：0</p>
                     * 
                     */
                    int64_t GetInstanceUsed() const;

                    /**
                     * 设置<p>防护实例数</p><p>默认值：0</p>
                     * @param _instanceUsed <p>防护实例数</p><p>默认值：0</p>
                     * 
                     */
                    void SetInstanceUsed(const int64_t& _instanceUsed);

                    /**
                     * 判断参数 InstanceUsed 是否已赋值
                     * @return InstanceUsed 是否已赋值
                     * 
                     */
                    bool InstanceUsedHasBeenSet() const;

                    /**
                     * 获取<p>统计日期</p>
                     * @return StatDate <p>统计日期</p>
                     * 
                     */
                    std::string GetStatDate() const;

                    /**
                     * 设置<p>统计日期</p>
                     * @param _statDate <p>统计日期</p>
                     * 
                     */
                    void SetStatDate(const std::string& _statDate);

                    /**
                     * 判断参数 StatDate 是否已赋值
                     * @return StatDate 是否已赋值
                     * 
                     */
                    bool StatDateHasBeenSet() const;

                    /**
                     * 获取<p>处理流量</p>
                     * @return TodayTrafficGB <p>处理流量</p>
                     * 
                     */
                    double GetTodayTrafficGB() const;

                    /**
                     * 设置<p>处理流量</p>
                     * @param _todayTrafficGB <p>处理流量</p>
                     * 
                     */
                    void SetTodayTrafficGB(const double& _todayTrafficGB);

                    /**
                     * 判断参数 TodayTrafficGB 是否已赋值
                     * @return TodayTrafficGB 是否已赋值
                     * 
                     */
                    bool TodayTrafficGBHasBeenSet() const;

                    /**
                     * 获取<p>防护天数</p>
                     * @return ProtectDays <p>防护天数</p>
                     * 
                     */
                    int64_t GetProtectDays() const;

                    /**
                     * 设置<p>防护天数</p>
                     * @param _protectDays <p>防护天数</p>
                     * 
                     */
                    void SetProtectDays(const int64_t& _protectDays);

                    /**
                     * 判断参数 ProtectDays 是否已赋值
                     * @return ProtectDays 是否已赋值
                     * 
                     */
                    bool ProtectDaysHasBeenSet() const;

                private:

                    /**
                     * <p>防护IP数</p><p>默认值：0</p>
                     */
                    int64_t m_publicIpUsed;
                    bool m_publicIpUsedHasBeenSet;

                    /**
                     * <p>防护实例数</p><p>默认值：0</p>
                     */
                    int64_t m_instanceUsed;
                    bool m_instanceUsedHasBeenSet;

                    /**
                     * <p>统计日期</p>
                     */
                    std::string m_statDate;
                    bool m_statDateHasBeenSet;

                    /**
                     * <p>处理流量</p>
                     */
                    double m_todayTrafficGB;
                    bool m_todayTrafficGBHasBeenSet;

                    /**
                     * <p>防护天数</p>
                     */
                    int64_t m_protectDays;
                    bool m_protectDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_VOLUMEUSAGEDETAIL_H_
