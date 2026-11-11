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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_INDEXSETTINGSFIELD_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_INDEXSETTINGSFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 索引配置字段
                */
                class IndexSettingsField : public AbstractModel
                {
                public:
                    IndexSettingsField();
                    ~IndexSettingsField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>索引主分片数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NumberOfShards <p>索引主分片数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNumberOfShards() const;

                    /**
                     * 设置<p>索引主分片数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _numberOfShards <p>索引主分片数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNumberOfShards(const std::string& _numberOfShards);

                    /**
                     * 判断参数 NumberOfShards 是否已赋值
                     * @return NumberOfShards 是否已赋值
                     * 
                     */
                    bool NumberOfShardsHasBeenSet() const;

                    /**
                     * 获取<p>索引副本分片数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NumberOfReplicas <p>索引副本分片数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNumberOfReplicas() const;

                    /**
                     * 设置<p>索引副本分片数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _numberOfReplicas <p>索引副本分片数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNumberOfReplicas(const std::string& _numberOfReplicas);

                    /**
                     * 判断参数 NumberOfReplicas 是否已赋值
                     * @return NumberOfReplicas 是否已赋值
                     * 
                     */
                    bool NumberOfReplicasHasBeenSet() const;

                    /**
                     * 获取<p>索引刷新频率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RefreshInterval <p>索引刷新频率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRefreshInterval() const;

                    /**
                     * 设置<p>索引刷新频率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _refreshInterval <p>索引刷新频率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRefreshInterval(const std::string& _refreshInterval);

                    /**
                     * 判断参数 RefreshInterval 是否已赋值
                     * @return RefreshInterval 是否已赋值
                     * 
                     */
                    bool RefreshIntervalHasBeenSet() const;

                    /**
                     * 获取<p>动态字段识别开关</p>
                     * @return Dynamic <p>动态字段识别开关</p>
                     * 
                     */
                    std::string GetDynamic() const;

                    /**
                     * 设置<p>动态字段识别开关</p>
                     * @param _dynamic <p>动态字段识别开关</p>
                     * 
                     */
                    void SetDynamic(const std::string& _dynamic);

                    /**
                     * 判断参数 Dynamic 是否已赋值
                     * @return Dynamic 是否已赋值
                     * 
                     */
                    bool DynamicHasBeenSet() const;

                    /**
                     * 获取<p>索引字段数上限</p>
                     * @return TotalFieldsLimit <p>索引字段数上限</p>
                     * 
                     */
                    std::string GetTotalFieldsLimit() const;

                    /**
                     * 设置<p>索引字段数上限</p>
                     * @param _totalFieldsLimit <p>索引字段数上限</p>
                     * 
                     */
                    void SetTotalFieldsLimit(const std::string& _totalFieldsLimit);

                    /**
                     * 判断参数 TotalFieldsLimit 是否已赋值
                     * @return TotalFieldsLimit 是否已赋值
                     * 
                     */
                    bool TotalFieldsLimitHasBeenSet() const;

                private:

                    /**
                     * <p>索引主分片数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_numberOfShards;
                    bool m_numberOfShardsHasBeenSet;

                    /**
                     * <p>索引副本分片数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_numberOfReplicas;
                    bool m_numberOfReplicasHasBeenSet;

                    /**
                     * <p>索引刷新频率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_refreshInterval;
                    bool m_refreshIntervalHasBeenSet;

                    /**
                     * <p>动态字段识别开关</p>
                     */
                    std::string m_dynamic;
                    bool m_dynamicHasBeenSet;

                    /**
                     * <p>索引字段数上限</p>
                     */
                    std::string m_totalFieldsLimit;
                    bool m_totalFieldsLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_INDEXSETTINGSFIELD_H_
