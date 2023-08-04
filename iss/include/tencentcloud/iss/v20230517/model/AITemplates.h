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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_AITEMPLATES_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_AITEMPLATES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/AIConfig.h>
#include <tencentcloud/iss/v20230517/model/SnapshotConfig.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * AI模板信息
                */
                class AITemplates : public AbstractModel
                {
                public:
                    AITemplates();
                    ~AITemplates() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AI 类别。可选值 AI(AI 分析)和 Snapshot(截图)，Templates 列表中只能出现一种类型。
                     * @return Tag AI 类别。可选值 AI(AI 分析)和 Snapshot(截图)，Templates 列表中只能出现一种类型。
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置AI 类别。可选值 AI(AI 分析)和 Snapshot(截图)，Templates 列表中只能出现一种类型。
                     * @param _tag AI 类别。可选值 AI(AI 分析)和 Snapshot(截图)，Templates 列表中只能出现一种类型。
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取AI 分析配置。和"SnapshotConfig"二选一。
                     * @return AIConfig AI 分析配置。和"SnapshotConfig"二选一。
                     * 
                     */
                    AIConfig GetAIConfig() const;

                    /**
                     * 设置AI 分析配置。和"SnapshotConfig"二选一。
                     * @param _aIConfig AI 分析配置。和"SnapshotConfig"二选一。
                     * 
                     */
                    void SetAIConfig(const AIConfig& _aIConfig);

                    /**
                     * 判断参数 AIConfig 是否已赋值
                     * @return AIConfig 是否已赋值
                     * 
                     */
                    bool AIConfigHasBeenSet() const;

                    /**
                     * 获取截图配置。和"AIConfig"二选一。
                     * @return SnapshotConfig 截图配置。和"AIConfig"二选一。
                     * 
                     */
                    SnapshotConfig GetSnapshotConfig() const;

                    /**
                     * 设置截图配置。和"AIConfig"二选一。
                     * @param _snapshotConfig 截图配置。和"AIConfig"二选一。
                     * 
                     */
                    void SetSnapshotConfig(const SnapshotConfig& _snapshotConfig);

                    /**
                     * 判断参数 SnapshotConfig 是否已赋值
                     * @return SnapshotConfig 是否已赋值
                     * 
                     */
                    bool SnapshotConfigHasBeenSet() const;

                private:

                    /**
                     * AI 类别。可选值 AI(AI 分析)和 Snapshot(截图)，Templates 列表中只能出现一种类型。
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * AI 分析配置。和"SnapshotConfig"二选一。
                     */
                    AIConfig m_aIConfig;
                    bool m_aIConfigHasBeenSet;

                    /**
                     * 截图配置。和"AIConfig"二选一。
                     */
                    SnapshotConfig m_snapshotConfig;
                    bool m_snapshotConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_AITEMPLATES_H_
