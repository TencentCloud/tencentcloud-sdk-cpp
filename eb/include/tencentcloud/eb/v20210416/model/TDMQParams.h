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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_TDMQPARAMS_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_TDMQPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * TDMQ参数详情
                */
                class TDMQParams : public AbstractModel
                {
                public:
                    TDMQParams();
                    ~TDMQParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterType 集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterType 集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取集群支撑网接入点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterEndPoint 集群支撑网接入点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterEndPoint() const;

                    /**
                     * 设置集群支撑网接入点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterEndPoint 集群支撑网接入点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterEndPoint(const std::string& _clusterEndPoint);

                    /**
                     * 判断参数 ClusterEndPoint 是否已赋值
                     * @return ClusterEndPoint 是否已赋值
                     * 
                     */
                    bool ClusterEndPointHasBeenSet() const;

                private:

                    /**
                     * 集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 集群支撑网接入点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterEndPoint;
                    bool m_clusterEndPointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_TDMQPARAMS_H_
