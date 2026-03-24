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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBECONFIGDELIVERRESPONSE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBECONFIGDELIVERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * DescribeConfigDeliver返回参数结构体
                */
                class DescribeConfigDeliverResponse : public AbstractModel
                {
                public:
                    DescribeConfigDeliverResponse();
                    ~DescribeConfigDeliverResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取投递名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeliverName 投递名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeliverName() const;

                    /**
                     * 判断参数 DeliverName 是否已赋值
                     * @return DeliverName 是否已赋值
                     * 
                     */
                    bool DeliverNameHasBeenSet() const;

                    /**
                     * 获取资源六段式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetArn 资源六段式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetArn() const;

                    /**
                     * 判断参数 TargetArn 是否已赋值
                     * @return TargetArn 是否已赋值
                     * 
                     */
                    bool TargetArnHasBeenSet() const;

                    /**
                     * 获取投递状态 DeliverStatus：0 关闭  1 开启
                     * @return Status 投递状态 DeliverStatus：0 关闭  1 开启
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取日志前缀
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeliverPrefix 日志前缀
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeliverPrefix() const;

                    /**
                     * 判断参数 DeliverPrefix 是否已赋值
                     * @return DeliverPrefix 是否已赋值
                     * 
                     */
                    bool DeliverPrefixHasBeenSet() const;

                    /**
                     * 获取投递类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeliverType 投递类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeliverType() const;

                    /**
                     * 判断参数 DeliverType 是否已赋值
                     * @return DeliverType 是否已赋值
                     * 
                     */
                    bool DeliverTypeHasBeenSet() const;

                    /**
                     * 获取1：配置变更   2： 资源列表 3：全部
                     * @return DeliverContentType 1：配置变更   2： 资源列表 3：全部
                     * 
                     */
                    uint64_t GetDeliverContentType() const;

                    /**
                     * 判断参数 DeliverContentType 是否已赋值
                     * @return DeliverContentType 是否已赋值
                     * 
                     */
                    bool DeliverContentTypeHasBeenSet() const;

                private:

                    /**
                     * 投递名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deliverName;
                    bool m_deliverNameHasBeenSet;

                    /**
                     * 资源六段式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetArn;
                    bool m_targetArnHasBeenSet;

                    /**
                     * 投递状态 DeliverStatus：0 关闭  1 开启
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 日志前缀
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deliverPrefix;
                    bool m_deliverPrefixHasBeenSet;

                    /**
                     * 投递类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deliverType;
                    bool m_deliverTypeHasBeenSet;

                    /**
                     * 1：配置变更   2： 资源列表 3：全部
                     */
                    uint64_t m_deliverContentType;
                    bool m_deliverContentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBECONFIGDELIVERRESPONSE_H_
