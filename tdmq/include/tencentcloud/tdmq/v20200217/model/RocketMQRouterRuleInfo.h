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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQROUTERRULEINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQROUTERRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RouterRocketMQSource.h>
#include <tencentcloud/tdmq/v20200217/model/RouterRocketMQTarget.h>
#include <tencentcloud/tdmq/v20200217/model/RouterMessageServiceSource.h>
#include <tencentcloud/tdmq/v20200217/model/RouterMessageServiceTarget.h>
#include <tencentcloud/tdmq/v20200217/model/RouterTencentRocketMQSource.h>
#include <tencentcloud/tdmq/v20200217/model/RouterTencentRocketMQTarget.h>
#include <tencentcloud/tdmq/v20200217/model/RouterTencentMQTTSource.h>
#include <tencentcloud/tdmq/v20200217/model/RouterTencentMQTTTarget.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * rocketmq router规则基本信息
                */
                class RocketMQRouterRuleInfo : public AbstractModel
                {
                public:
                    RocketMQRouterRuleInfo();
                    ~RocketMQRouterRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>源类型。<br>OPEN_SOURCE_ROCKETMQ：开源rocketmq<br>ALI_ROCKETMQ：阿里云rocketmq<br>TENCENT_ROCKETMQ：腾讯云rocketmq<br>TENCENT_MQTT：腾讯云MQTT<br>ALI_MNS：阿里云mns</p>
                     * @return SourceType <p>源类型。<br>OPEN_SOURCE_ROCKETMQ：开源rocketmq<br>ALI_ROCKETMQ：阿里云rocketmq<br>TENCENT_ROCKETMQ：腾讯云rocketmq<br>TENCENT_MQTT：腾讯云MQTT<br>ALI_MNS：阿里云mns</p>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>源类型。<br>OPEN_SOURCE_ROCKETMQ：开源rocketmq<br>ALI_ROCKETMQ：阿里云rocketmq<br>TENCENT_ROCKETMQ：腾讯云rocketmq<br>TENCENT_MQTT：腾讯云MQTT<br>ALI_MNS：阿里云mns</p>
                     * @param _sourceType <p>源类型。<br>OPEN_SOURCE_ROCKETMQ：开源rocketmq<br>ALI_ROCKETMQ：阿里云rocketmq<br>TENCENT_ROCKETMQ：腾讯云rocketmq<br>TENCENT_MQTT：腾讯云MQTT<br>ALI_MNS：阿里云mns</p>
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>目标类型。<br>枚举和SourceType字段一样</p>
                     * @return TargetType <p>目标类型。<br>枚举和SourceType字段一样</p>
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置<p>目标类型。<br>枚举和SourceType字段一样</p>
                     * @param _targetType <p>目标类型。<br>枚举和SourceType字段一样</p>
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取<p>规则备注，创建后任务后可以修改</p>
                     * @return RemarkName <p>规则备注，创建后任务后可以修改</p>
                     * 
                     */
                    std::string GetRemarkName() const;

                    /**
                     * 设置<p>规则备注，创建后任务后可以修改</p>
                     * @param _remarkName <p>规则备注，创建后任务后可以修改</p>
                     * 
                     */
                    void SetRemarkName(const std::string& _remarkName);

                    /**
                     * 判断参数 RemarkName 是否已赋值
                     * @return RemarkName 是否已赋值
                     * 
                     */
                    bool RemarkNameHasBeenSet() const;

                    /**
                     * 获取<p>阿里云rocketmq源信息</p>
                     * @return AliRocketMQSource <p>阿里云rocketmq源信息</p>
                     * 
                     */
                    RouterRocketMQSource GetAliRocketMQSource() const;

                    /**
                     * 设置<p>阿里云rocketmq源信息</p>
                     * @param _aliRocketMQSource <p>阿里云rocketmq源信息</p>
                     * 
                     */
                    void SetAliRocketMQSource(const RouterRocketMQSource& _aliRocketMQSource);

                    /**
                     * 判断参数 AliRocketMQSource 是否已赋值
                     * @return AliRocketMQSource 是否已赋值
                     * 
                     */
                    bool AliRocketMQSourceHasBeenSet() const;

                    /**
                     * 获取<p>阿里云rocketmq目标信息</p>
                     * @return AliRocketMQTarget <p>阿里云rocketmq目标信息</p>
                     * 
                     */
                    RouterRocketMQTarget GetAliRocketMQTarget() const;

                    /**
                     * 设置<p>阿里云rocketmq目标信息</p>
                     * @param _aliRocketMQTarget <p>阿里云rocketmq目标信息</p>
                     * 
                     */
                    void SetAliRocketMQTarget(const RouterRocketMQTarget& _aliRocketMQTarget);

                    /**
                     * 判断参数 AliRocketMQTarget 是否已赋值
                     * @return AliRocketMQTarget 是否已赋值
                     * 
                     */
                    bool AliRocketMQTargetHasBeenSet() const;

                    /**
                     * 获取<p>阿里云mns源信息</p>
                     * @return AliMessageServiceSource <p>阿里云mns源信息</p>
                     * 
                     */
                    RouterMessageServiceSource GetAliMessageServiceSource() const;

                    /**
                     * 设置<p>阿里云mns源信息</p>
                     * @param _aliMessageServiceSource <p>阿里云mns源信息</p>
                     * 
                     */
                    void SetAliMessageServiceSource(const RouterMessageServiceSource& _aliMessageServiceSource);

                    /**
                     * 判断参数 AliMessageServiceSource 是否已赋值
                     * @return AliMessageServiceSource 是否已赋值
                     * 
                     */
                    bool AliMessageServiceSourceHasBeenSet() const;

                    /**
                     * 获取<p>阿里云mns目标信息</p>
                     * @return AliMessageServiceTarget <p>阿里云mns目标信息</p>
                     * 
                     */
                    RouterMessageServiceTarget GetAliMessageServiceTarget() const;

                    /**
                     * 设置<p>阿里云mns目标信息</p>
                     * @param _aliMessageServiceTarget <p>阿里云mns目标信息</p>
                     * 
                     */
                    void SetAliMessageServiceTarget(const RouterMessageServiceTarget& _aliMessageServiceTarget);

                    /**
                     * 判断参数 AliMessageServiceTarget 是否已赋值
                     * @return AliMessageServiceTarget 是否已赋值
                     * 
                     */
                    bool AliMessageServiceTargetHasBeenSet() const;

                    /**
                     * 获取<p>腾讯云rocketmq源信息</p>
                     * @return TenRocketMQSource <p>腾讯云rocketmq源信息</p>
                     * 
                     */
                    RouterTencentRocketMQSource GetTenRocketMQSource() const;

                    /**
                     * 设置<p>腾讯云rocketmq源信息</p>
                     * @param _tenRocketMQSource <p>腾讯云rocketmq源信息</p>
                     * 
                     */
                    void SetTenRocketMQSource(const RouterTencentRocketMQSource& _tenRocketMQSource);

                    /**
                     * 判断参数 TenRocketMQSource 是否已赋值
                     * @return TenRocketMQSource 是否已赋值
                     * 
                     */
                    bool TenRocketMQSourceHasBeenSet() const;

                    /**
                     * 获取<p>腾讯云rocketmq目标信息</p>
                     * @return TenRocketMQTarget <p>腾讯云rocketmq目标信息</p>
                     * 
                     */
                    RouterTencentRocketMQTarget GetTenRocketMQTarget() const;

                    /**
                     * 设置<p>腾讯云rocketmq目标信息</p>
                     * @param _tenRocketMQTarget <p>腾讯云rocketmq目标信息</p>
                     * 
                     */
                    void SetTenRocketMQTarget(const RouterTencentRocketMQTarget& _tenRocketMQTarget);

                    /**
                     * 判断参数 TenRocketMQTarget 是否已赋值
                     * @return TenRocketMQTarget 是否已赋值
                     * 
                     */
                    bool TenRocketMQTargetHasBeenSet() const;

                    /**
                     * 获取<p>任务别名</p>
                     * @return AliasName <p>任务别名</p>
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置<p>任务别名</p>
                     * @param _aliasName <p>任务别名</p>
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取<p>腾讯云 MQTT 源集群信息</p>
                     * @return TenMQTTSource <p>腾讯云 MQTT 源集群信息</p>
                     * 
                     */
                    RouterTencentMQTTSource GetTenMQTTSource() const;

                    /**
                     * 设置<p>腾讯云 MQTT 源集群信息</p>
                     * @param _tenMQTTSource <p>腾讯云 MQTT 源集群信息</p>
                     * 
                     */
                    void SetTenMQTTSource(const RouterTencentMQTTSource& _tenMQTTSource);

                    /**
                     * 判断参数 TenMQTTSource 是否已赋值
                     * @return TenMQTTSource 是否已赋值
                     * 
                     */
                    bool TenMQTTSourceHasBeenSet() const;

                    /**
                     * 获取<p>腾讯云 MQTT 目标集群信息</p>
                     * @return TenMQTTTarget <p>腾讯云 MQTT 目标集群信息</p>
                     * 
                     */
                    RouterTencentMQTTTarget GetTenMQTTTarget() const;

                    /**
                     * 设置<p>腾讯云 MQTT 目标集群信息</p>
                     * @param _tenMQTTTarget <p>腾讯云 MQTT 目标集群信息</p>
                     * 
                     */
                    void SetTenMQTTTarget(const RouterTencentMQTTTarget& _tenMQTTTarget);

                    /**
                     * 判断参数 TenMQTTTarget 是否已赋值
                     * @return TenMQTTTarget 是否已赋值
                     * 
                     */
                    bool TenMQTTTargetHasBeenSet() const;

                private:

                    /**
                     * <p>源类型。<br>OPEN_SOURCE_ROCKETMQ：开源rocketmq<br>ALI_ROCKETMQ：阿里云rocketmq<br>TENCENT_ROCKETMQ：腾讯云rocketmq<br>TENCENT_MQTT：腾讯云MQTT<br>ALI_MNS：阿里云mns</p>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>目标类型。<br>枚举和SourceType字段一样</p>
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * <p>规则备注，创建后任务后可以修改</p>
                     */
                    std::string m_remarkName;
                    bool m_remarkNameHasBeenSet;

                    /**
                     * <p>阿里云rocketmq源信息</p>
                     */
                    RouterRocketMQSource m_aliRocketMQSource;
                    bool m_aliRocketMQSourceHasBeenSet;

                    /**
                     * <p>阿里云rocketmq目标信息</p>
                     */
                    RouterRocketMQTarget m_aliRocketMQTarget;
                    bool m_aliRocketMQTargetHasBeenSet;

                    /**
                     * <p>阿里云mns源信息</p>
                     */
                    RouterMessageServiceSource m_aliMessageServiceSource;
                    bool m_aliMessageServiceSourceHasBeenSet;

                    /**
                     * <p>阿里云mns目标信息</p>
                     */
                    RouterMessageServiceTarget m_aliMessageServiceTarget;
                    bool m_aliMessageServiceTargetHasBeenSet;

                    /**
                     * <p>腾讯云rocketmq源信息</p>
                     */
                    RouterTencentRocketMQSource m_tenRocketMQSource;
                    bool m_tenRocketMQSourceHasBeenSet;

                    /**
                     * <p>腾讯云rocketmq目标信息</p>
                     */
                    RouterTencentRocketMQTarget m_tenRocketMQTarget;
                    bool m_tenRocketMQTargetHasBeenSet;

                    /**
                     * <p>任务别名</p>
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * <p>腾讯云 MQTT 源集群信息</p>
                     */
                    RouterTencentMQTTSource m_tenMQTTSource;
                    bool m_tenMQTTSourceHasBeenSet;

                    /**
                     * <p>腾讯云 MQTT 目标集群信息</p>
                     */
                    RouterTencentMQTTTarget m_tenMQTTTarget;
                    bool m_tenMQTTTargetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQROUTERRULEINFO_H_
