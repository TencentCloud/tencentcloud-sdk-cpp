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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_IPSTRATEGY_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_IPSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/DesApisStatus.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * ip策略
                */
                class IPStrategy : public AbstractModel
                {
                public:
                    IPStrategy();
                    ~IPStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyId 策略唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置策略唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyId 策略唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取用户自定义策略名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyName 用户自定义策略名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置用户自定义策略名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyName 用户自定义策略名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取策略类型。支持WHITE（白名单）和BLACK（黑名单）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyType 策略类型。支持WHITE（白名单）和BLACK（黑名单）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置策略类型。支持WHITE（白名单）和BLACK（黑名单）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyType 策略类型。支持WHITE（白名单）和BLACK（黑名单）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategyType(const std::string& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取IP列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyData IP列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStrategyData() const;

                    /**
                     * 设置IP列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyData IP列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategyData(const std::string& _strategyData);

                    /**
                     * 判断参数 StrategyData 是否已赋值
                     * @return StrategyData 是否已赋值
                     * 
                     */
                    bool StrategyDataHasBeenSet() const;

                    /**
                     * 获取创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取修改时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifiedTime 修改时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置修改时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifiedTime 修改时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取最后修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceId 最后修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置最后修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceId 最后修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取策略绑定的API数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindApiTotalCount 策略绑定的API数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBindApiTotalCount() const;

                    /**
                     * 设置策略绑定的API数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bindApiTotalCount 策略绑定的API数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBindApiTotalCount(const int64_t& _bindApiTotalCount);

                    /**
                     * 判断参数 BindApiTotalCount 是否已赋值
                     * @return BindApiTotalCount 是否已赋值
                     * 
                     */
                    bool BindApiTotalCountHasBeenSet() const;

                    /**
                     * 获取绑定的API详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindApis 绑定的API详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DesApisStatus> GetBindApis() const;

                    /**
                     * 设置绑定的API详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bindApis 绑定的API详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBindApis(const std::vector<DesApisStatus>& _bindApis);

                    /**
                     * 判断参数 BindApis 是否已赋值
                     * @return BindApis 是否已赋值
                     * 
                     */
                    bool BindApisHasBeenSet() const;

                private:

                    /**
                     * 策略唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 用户自定义策略名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * 策略类型。支持WHITE（白名单）和BLACK（黑名单）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * IP列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strategyData;
                    bool m_strategyDataHasBeenSet;

                    /**
                     * 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 修改时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 最后修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 策略绑定的API数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bindApiTotalCount;
                    bool m_bindApiTotalCountHasBeenSet;

                    /**
                     * 绑定的API详情。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DesApisStatus> m_bindApis;
                    bool m_bindApisHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_IPSTRATEGY_H_
