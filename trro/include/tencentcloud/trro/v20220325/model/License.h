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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_LICENSE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_LICENSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * 按授权查看的license列表
                */
                class License : public AbstractModel
                {
                public:
                    License();
                    ~License() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该类型的license个数
                     * @return Count 该类型的license个数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置该类型的license个数
                     * @param _count 该类型的license个数
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取license状态：0:未绑定；1:已绑定；2:已停服；3:已退费
                     * @return Status license状态：0:未绑定；1:已绑定；2:已停服；3:已退费
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置license状态：0:未绑定；1:已绑定；2:已停服；3:已退费
                     * @param _status license状态：0:未绑定；1:已绑定；2:已停服；3:已退费
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
                     * 获取到期时间戳：s
                     * @return ExpireTime 到期时间戳：s
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置到期时间戳：s
                     * @param _expireTime 到期时间戳：s
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取服务时长：s
                     * @return Duration 服务时长：s
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置服务时长：s
                     * @param _duration 服务时长：s
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取剩余天数：天
                     * @return RemainDay 剩余天数：天
                     * 
                     */
                    int64_t GetRemainDay() const;

                    /**
                     * 设置剩余天数：天
                     * @param _remainDay 剩余天数：天
                     * 
                     */
                    void SetRemainDay(const int64_t& _remainDay);

                    /**
                     * 判断参数 RemainDay 是否已赋值
                     * @return RemainDay 是否已赋值
                     * 
                     */
                    bool RemainDayHasBeenSet() const;

                    /**
                     * 获取该类型的licenseId列表
                     * @return LicenseIds 该类型的licenseId列表
                     * 
                     */
                    std::vector<std::string> GetLicenseIds() const;

                    /**
                     * 设置该类型的licenseId列表
                     * @param _licenseIds 该类型的licenseId列表
                     * 
                     */
                    void SetLicenseIds(const std::vector<std::string>& _licenseIds);

                    /**
                     * 判断参数 LicenseIds 是否已赋值
                     * @return LicenseIds 是否已赋值
                     * 
                     */
                    bool LicenseIdsHasBeenSet() const;

                private:

                    /**
                     * 该类型的license个数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * license状态：0:未绑定；1:已绑定；2:已停服；3:已退费
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 到期时间戳：s
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 服务时长：s
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 剩余天数：天
                     */
                    int64_t m_remainDay;
                    bool m_remainDayHasBeenSet;

                    /**
                     * 该类型的licenseId列表
                     */
                    std::vector<std::string> m_licenseIds;
                    bool m_licenseIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_LICENSE_H_
