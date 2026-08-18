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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONSUMPTIONDETAIL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONSUMPTIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ConsumptionClassification.h>
#include <tencentcloud/adp/v20260520/model/ConsumptionUsage.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 资源消耗明细
                */
                class ConsumptionDetail : public AbstractModel
                {
                public:
                    ConsumptionDetail();
                    ~ConsumptionDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>消耗分类（类型/目标/场景/套餐包）</p>
                     * @return Classification <p>消耗分类（类型/目标/场景/套餐包）</p>
                     * 
                     */
                    ConsumptionClassification GetClassification() const;

                    /**
                     * 设置<p>消耗分类（类型/目标/场景/套餐包）</p>
                     * @param _classification <p>消耗分类（类型/目标/场景/套餐包）</p>
                     * 
                     */
                    void SetClassification(const ConsumptionClassification& _classification);

                    /**
                     * 判断参数 Classification 是否已赋值
                     * @return Classification 是否已赋值
                     * 
                     */
                    bool ClassificationHasBeenSet() const;

                    /**
                     * 获取<p>消耗发生时间，Unix 秒</p>
                     * @return EventTime <p>消耗发生时间，Unix 秒</p>
                     * 
                     */
                    std::string GetEventTime() const;

                    /**
                     * 设置<p>消耗发生时间，Unix 秒</p>
                     * @param _eventTime <p>消耗发生时间，Unix 秒</p>
                     * 
                     */
                    void SetEventTime(const std::string& _eventTime);

                    /**
                     * 判断参数 EventTime 是否已赋值
                     * @return EventTime 是否已赋值
                     * 
                     */
                    bool EventTimeHasBeenSet() const;

                    /**
                     * 获取<p>用量来源类型</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>METRIC_SOURCE_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>METRIC_SOURCE_TYPE_APP</td><td>1</td><td>应用开发</td></tr><tr><td>METRIC_SOURCE_TYPE_KB</td><td>2</td><td>知识库</td></tr><tr><td>METRIC_SOURCE_TYPE_WIDGET</td><td>3</td><td>Widget</td></tr><tr><td>METRIC_SOURCE_TYPE_OPEN_CLAW</td><td>4</td><td>ClawPro</td></tr><tr><td>METRIC_SOURCE_TYPE_KB_RECALL_TEST</td><td>5</td><td>知识库召回测试</td></tr><tr><td>METRIC_SOURCE_TYPE_WORKBENCH</td><td>6</td><td>智能工作台</td></tr><tr><td>METRIC_SOURCE_TYPE_MODEL_API</td><td>7</td><td>模型 API 调用</td></tr></tbody></table>
                     * @return MetricSourceType <p>用量来源类型</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>METRIC_SOURCE_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>METRIC_SOURCE_TYPE_APP</td><td>1</td><td>应用开发</td></tr><tr><td>METRIC_SOURCE_TYPE_KB</td><td>2</td><td>知识库</td></tr><tr><td>METRIC_SOURCE_TYPE_WIDGET</td><td>3</td><td>Widget</td></tr><tr><td>METRIC_SOURCE_TYPE_OPEN_CLAW</td><td>4</td><td>ClawPro</td></tr><tr><td>METRIC_SOURCE_TYPE_KB_RECALL_TEST</td><td>5</td><td>知识库召回测试</td></tr><tr><td>METRIC_SOURCE_TYPE_WORKBENCH</td><td>6</td><td>智能工作台</td></tr><tr><td>METRIC_SOURCE_TYPE_MODEL_API</td><td>7</td><td>模型 API 调用</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetMetricSourceType() const;

                    /**
                     * 设置<p>用量来源类型</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>METRIC_SOURCE_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>METRIC_SOURCE_TYPE_APP</td><td>1</td><td>应用开发</td></tr><tr><td>METRIC_SOURCE_TYPE_KB</td><td>2</td><td>知识库</td></tr><tr><td>METRIC_SOURCE_TYPE_WIDGET</td><td>3</td><td>Widget</td></tr><tr><td>METRIC_SOURCE_TYPE_OPEN_CLAW</td><td>4</td><td>ClawPro</td></tr><tr><td>METRIC_SOURCE_TYPE_KB_RECALL_TEST</td><td>5</td><td>知识库召回测试</td></tr><tr><td>METRIC_SOURCE_TYPE_WORKBENCH</td><td>6</td><td>智能工作台</td></tr><tr><td>METRIC_SOURCE_TYPE_MODEL_API</td><td>7</td><td>模型 API 调用</td></tr></tbody></table>
                     * @param _metricSourceType <p>用量来源类型</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>METRIC_SOURCE_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>METRIC_SOURCE_TYPE_APP</td><td>1</td><td>应用开发</td></tr><tr><td>METRIC_SOURCE_TYPE_KB</td><td>2</td><td>知识库</td></tr><tr><td>METRIC_SOURCE_TYPE_WIDGET</td><td>3</td><td>Widget</td></tr><tr><td>METRIC_SOURCE_TYPE_OPEN_CLAW</td><td>4</td><td>ClawPro</td></tr><tr><td>METRIC_SOURCE_TYPE_KB_RECALL_TEST</td><td>5</td><td>知识库召回测试</td></tr><tr><td>METRIC_SOURCE_TYPE_WORKBENCH</td><td>6</td><td>智能工作台</td></tr><tr><td>METRIC_SOURCE_TYPE_MODEL_API</td><td>7</td><td>模型 API 调用</td></tr></tbody></table>
                     * 
                     */
                    void SetMetricSourceType(const int64_t& _metricSourceType);

                    /**
                     * 判断参数 MetricSourceType 是否已赋值
                     * @return MetricSourceType 是否已赋值
                     * 
                     */
                    bool MetricSourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>名称</p>
                     * @return Name <p>名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称</p>
                     * @param _name <p>名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>空间名称</p>
                     * @return SpaceName <p>空间名称</p>
                     * 
                     */
                    std::string GetSpaceName() const;

                    /**
                     * 设置<p>空间名称</p>
                     * @param _spaceName <p>空间名称</p>
                     * 
                     */
                    void SetSpaceName(const std::string& _spaceName);

                    /**
                     * 判断参数 SpaceName 是否已赋值
                     * @return SpaceName 是否已赋值
                     * 
                     */
                    bool SpaceNameHasBeenSet() const;

                    /**
                     * 获取<p>消耗用量（数值/单位/PU 消耗）</p>
                     * @return Usage <p>消耗用量（数值/单位/PU 消耗）</p>
                     * 
                     */
                    ConsumptionUsage GetUsage() const;

                    /**
                     * 设置<p>消耗用量（数值/单位/PU 消耗）</p>
                     * @param _usage <p>消耗用量（数值/单位/PU 消耗）</p>
                     * 
                     */
                    void SetUsage(const ConsumptionUsage& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取<p>用户名称</p>
                     * @return UserName <p>用户名称</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名称</p>
                     * @param _userName <p>用户名称</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                private:

                    /**
                     * <p>消耗分类（类型/目标/场景/套餐包）</p>
                     */
                    ConsumptionClassification m_classification;
                    bool m_classificationHasBeenSet;

                    /**
                     * <p>消耗发生时间，Unix 秒</p>
                     */
                    std::string m_eventTime;
                    bool m_eventTimeHasBeenSet;

                    /**
                     * <p>用量来源类型</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>METRIC_SOURCE_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>METRIC_SOURCE_TYPE_APP</td><td>1</td><td>应用开发</td></tr><tr><td>METRIC_SOURCE_TYPE_KB</td><td>2</td><td>知识库</td></tr><tr><td>METRIC_SOURCE_TYPE_WIDGET</td><td>3</td><td>Widget</td></tr><tr><td>METRIC_SOURCE_TYPE_OPEN_CLAW</td><td>4</td><td>ClawPro</td></tr><tr><td>METRIC_SOURCE_TYPE_KB_RECALL_TEST</td><td>5</td><td>知识库召回测试</td></tr><tr><td>METRIC_SOURCE_TYPE_WORKBENCH</td><td>6</td><td>智能工作台</td></tr><tr><td>METRIC_SOURCE_TYPE_MODEL_API</td><td>7</td><td>模型 API 调用</td></tr></tbody></table>
                     */
                    int64_t m_metricSourceType;
                    bool m_metricSourceTypeHasBeenSet;

                    /**
                     * <p>名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>空间名称</p>
                     */
                    std::string m_spaceName;
                    bool m_spaceNameHasBeenSet;

                    /**
                     * <p>消耗用量（数值/单位/PU 消耗）</p>
                     */
                    ConsumptionUsage m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * <p>用户名称</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONSUMPTIONDETAIL_H_
