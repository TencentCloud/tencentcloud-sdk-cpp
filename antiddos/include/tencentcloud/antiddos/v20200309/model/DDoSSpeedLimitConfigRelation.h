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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DDOSSPEEDLIMITCONFIGRELATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DDOSSPEEDLIMITCONFIGRELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/DDoSSpeedLimitConfig.h>
#include <tencentcloud/antiddos/v20200309/model/InstanceRelation.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DDoS访问限速配置相关信息
                */
                class DDoSSpeedLimitConfigRelation : public AbstractModel
                {
                public:
                    DDoSSpeedLimitConfigRelation();
                    ~DDoSSpeedLimitConfigRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DDoS访问限速配置
                     * @return SpeedLimitConfig DDoS访问限速配置
                     * 
                     */
                    DDoSSpeedLimitConfig GetSpeedLimitConfig() const;

                    /**
                     * 设置DDoS访问限速配置
                     * @param _speedLimitConfig DDoS访问限速配置
                     * 
                     */
                    void SetSpeedLimitConfig(const DDoSSpeedLimitConfig& _speedLimitConfig);

                    /**
                     * 判断参数 SpeedLimitConfig 是否已赋值
                     * @return SpeedLimitConfig 是否已赋值
                     * 
                     */
                    bool SpeedLimitConfigHasBeenSet() const;

                    /**
                     * 获取配置所属的资源实例
                     * @return InstanceDetailList 配置所属的资源实例
                     * 
                     */
                    std::vector<InstanceRelation> GetInstanceDetailList() const;

                    /**
                     * 设置配置所属的资源实例
                     * @param _instanceDetailList 配置所属的资源实例
                     * 
                     */
                    void SetInstanceDetailList(const std::vector<InstanceRelation>& _instanceDetailList);

                    /**
                     * 判断参数 InstanceDetailList 是否已赋值
                     * @return InstanceDetailList 是否已赋值
                     * 
                     */
                    bool InstanceDetailListHasBeenSet() const;

                private:

                    /**
                     * DDoS访问限速配置
                     */
                    DDoSSpeedLimitConfig m_speedLimitConfig;
                    bool m_speedLimitConfigHasBeenSet;

                    /**
                     * 配置所属的资源实例
                     */
                    std::vector<InstanceRelation> m_instanceDetailList;
                    bool m_instanceDetailListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DDOSSPEEDLIMITCONFIGRELATION_H_
