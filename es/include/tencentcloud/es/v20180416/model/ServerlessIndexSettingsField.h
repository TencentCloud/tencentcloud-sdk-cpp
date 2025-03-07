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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_SERVERLESSINDEXSETTINGSFIELD_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_SERVERLESSINDEXSETTINGSFIELD_H_

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
                class ServerlessIndexSettingsField : public AbstractModel
                {
                public:
                    ServerlessIndexSettingsField();
                    ~ServerlessIndexSettingsField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取索引主分片数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NumberOfShards 索引主分片数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNumberOfShards() const;

                    /**
                     * 设置索引主分片数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _numberOfShards 索引主分片数
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
                     * 获取索引刷新频率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RefreshInterval 索引刷新频率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRefreshInterval() const;

                    /**
                     * 设置索引刷新频率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _refreshInterval 索引刷新频率
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
                     * 获取自定义参数
                     * @return CustomSetting 自定义参数
                     * 
                     */
                    std::string GetCustomSetting() const;

                    /**
                     * 设置自定义参数
                     * @param _customSetting 自定义参数
                     * 
                     */
                    void SetCustomSetting(const std::string& _customSetting);

                    /**
                     * 判断参数 CustomSetting 是否已赋值
                     * @return CustomSetting 是否已赋值
                     * 
                     */
                    bool CustomSettingHasBeenSet() const;

                private:

                    /**
                     * 索引主分片数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_numberOfShards;
                    bool m_numberOfShardsHasBeenSet;

                    /**
                     * 索引刷新频率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_refreshInterval;
                    bool m_refreshIntervalHasBeenSet;

                    /**
                     * 自定义参数
                     */
                    std::string m_customSetting;
                    bool m_customSettingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_SERVERLESSINDEXSETTINGSFIELD_H_
