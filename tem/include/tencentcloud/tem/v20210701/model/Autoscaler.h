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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_AUTOSCALER_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_AUTOSCALER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/HorizontalAutoscaler.h>
#include <tencentcloud/tem/v20210701/model/CronHorizontalAutoscaler.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 弹性伸缩策略组合
                */
                class Autoscaler : public AbstractModel
                {
                public:
                    Autoscaler();
                    ~Autoscaler() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取弹性伸缩最小实例数
                     * @return MinReplicas 弹性伸缩最小实例数
                     * 
                     */
                    int64_t GetMinReplicas() const;

                    /**
                     * 设置弹性伸缩最小实例数
                     * @param _minReplicas 弹性伸缩最小实例数
                     * 
                     */
                    void SetMinReplicas(const int64_t& _minReplicas);

                    /**
                     * 判断参数 MinReplicas 是否已赋值
                     * @return MinReplicas 是否已赋值
                     * 
                     */
                    bool MinReplicasHasBeenSet() const;

                    /**
                     * 获取弹性伸缩最大实例数
                     * @return MaxReplicas 弹性伸缩最大实例数
                     * 
                     */
                    int64_t GetMaxReplicas() const;

                    /**
                     * 设置弹性伸缩最大实例数
                     * @param _maxReplicas 弹性伸缩最大实例数
                     * 
                     */
                    void SetMaxReplicas(const int64_t& _maxReplicas);

                    /**
                     * 判断参数 MaxReplicas 是否已赋值
                     * @return MaxReplicas 是否已赋值
                     * 
                     */
                    bool MaxReplicasHasBeenSet() const;

                    /**
                     * 获取指标弹性伸缩策略(指标策略和定时策略必须填写一个)
                     * @return HorizontalAutoscaler 指标弹性伸缩策略(指标策略和定时策略必须填写一个)
                     * 
                     */
                    std::vector<HorizontalAutoscaler> GetHorizontalAutoscaler() const;

                    /**
                     * 设置指标弹性伸缩策略(指标策略和定时策略必须填写一个)
                     * @param _horizontalAutoscaler 指标弹性伸缩策略(指标策略和定时策略必须填写一个)
                     * 
                     */
                    void SetHorizontalAutoscaler(const std::vector<HorizontalAutoscaler>& _horizontalAutoscaler);

                    /**
                     * 判断参数 HorizontalAutoscaler 是否已赋值
                     * @return HorizontalAutoscaler 是否已赋值
                     * 
                     */
                    bool HorizontalAutoscalerHasBeenSet() const;

                    /**
                     * 获取定时弹性伸缩策略(指标策略和定时策略必须填写一个)
                     * @return CronHorizontalAutoscaler 定时弹性伸缩策略(指标策略和定时策略必须填写一个)
                     * 
                     */
                    std::vector<CronHorizontalAutoscaler> GetCronHorizontalAutoscaler() const;

                    /**
                     * 设置定时弹性伸缩策略(指标策略和定时策略必须填写一个)
                     * @param _cronHorizontalAutoscaler 定时弹性伸缩策略(指标策略和定时策略必须填写一个)
                     * 
                     */
                    void SetCronHorizontalAutoscaler(const std::vector<CronHorizontalAutoscaler>& _cronHorizontalAutoscaler);

                    /**
                     * 判断参数 CronHorizontalAutoscaler 是否已赋值
                     * @return CronHorizontalAutoscaler 是否已赋值
                     * 
                     */
                    bool CronHorizontalAutoscalerHasBeenSet() const;

                    /**
                     * 获取弹性伸缩ID
                     * @return AutoscalerId 弹性伸缩ID
                     * 
                     */
                    std::string GetAutoscalerId() const;

                    /**
                     * 设置弹性伸缩ID
                     * @param _autoscalerId 弹性伸缩ID
                     * 
                     */
                    void SetAutoscalerId(const std::string& _autoscalerId);

                    /**
                     * 判断参数 AutoscalerId 是否已赋值
                     * @return AutoscalerId 是否已赋值
                     * 
                     */
                    bool AutoscalerIdHasBeenSet() const;

                    /**
                     * 获取弹性伸缩名称
                     * @return AutoscalerName 弹性伸缩名称
                     * 
                     */
                    std::string GetAutoscalerName() const;

                    /**
                     * 设置弹性伸缩名称
                     * @param _autoscalerName 弹性伸缩名称
                     * 
                     */
                    void SetAutoscalerName(const std::string& _autoscalerName);

                    /**
                     * 判断参数 AutoscalerName 是否已赋值
                     * @return AutoscalerName 是否已赋值
                     * 
                     */
                    bool AutoscalerNameHasBeenSet() const;

                    /**
                     * 获取弹性伸缩描述
                     * @return Description 弹性伸缩描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置弹性伸缩描述
                     * @param _description 弹性伸缩描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取创建日期
                     * @return CreateDate 创建日期
                     * 
                     */
                    std::string GetCreateDate() const;

                    /**
                     * 设置创建日期
                     * @param _createDate 创建日期
                     * 
                     */
                    void SetCreateDate(const std::string& _createDate);

                    /**
                     * 判断参数 CreateDate 是否已赋值
                     * @return CreateDate 是否已赋值
                     * 
                     */
                    bool CreateDateHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyDate 修改时间
                     * 
                     */
                    std::string GetModifyDate() const;

                    /**
                     * 设置修改时间
                     * @param _modifyDate 修改时间
                     * 
                     */
                    void SetModifyDate(const std::string& _modifyDate);

                    /**
                     * 判断参数 ModifyDate 是否已赋值
                     * @return ModifyDate 是否已赋值
                     * 
                     */
                    bool ModifyDateHasBeenSet() const;

                    /**
                     * 获取启用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableDate 启用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnableDate() const;

                    /**
                     * 设置启用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableDate 启用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableDate(const std::string& _enableDate);

                    /**
                     * 判断参数 EnableDate 是否已赋值
                     * @return EnableDate 是否已赋值
                     * 
                     */
                    bool EnableDateHasBeenSet() const;

                    /**
                     * 获取是否启用
                     * @return Enabled 是否启用
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否启用
                     * @param _enabled 是否启用
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * 弹性伸缩最小实例数
                     */
                    int64_t m_minReplicas;
                    bool m_minReplicasHasBeenSet;

                    /**
                     * 弹性伸缩最大实例数
                     */
                    int64_t m_maxReplicas;
                    bool m_maxReplicasHasBeenSet;

                    /**
                     * 指标弹性伸缩策略(指标策略和定时策略必须填写一个)
                     */
                    std::vector<HorizontalAutoscaler> m_horizontalAutoscaler;
                    bool m_horizontalAutoscalerHasBeenSet;

                    /**
                     * 定时弹性伸缩策略(指标策略和定时策略必须填写一个)
                     */
                    std::vector<CronHorizontalAutoscaler> m_cronHorizontalAutoscaler;
                    bool m_cronHorizontalAutoscalerHasBeenSet;

                    /**
                     * 弹性伸缩ID
                     */
                    std::string m_autoscalerId;
                    bool m_autoscalerIdHasBeenSet;

                    /**
                     * 弹性伸缩名称
                     */
                    std::string m_autoscalerName;
                    bool m_autoscalerNameHasBeenSet;

                    /**
                     * 弹性伸缩描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建日期
                     */
                    std::string m_createDate;
                    bool m_createDateHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyDate;
                    bool m_modifyDateHasBeenSet;

                    /**
                     * 启用时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_enableDate;
                    bool m_enableDateHasBeenSet;

                    /**
                     * 是否启用
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_AUTOSCALER_H_
