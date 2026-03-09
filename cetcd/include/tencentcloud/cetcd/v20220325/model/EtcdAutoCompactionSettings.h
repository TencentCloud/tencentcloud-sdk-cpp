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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDAUTOCOMPACTIONSETTINGS_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDAUTOCOMPACTIONSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * etcd自动压缩设置
                */
                class EtcdAutoCompactionSettings : public AbstractModel
                {
                public:
                    EtcdAutoCompactionSettings();
                    ~EtcdAutoCompactionSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自动压缩模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoCompactionMode 自动压缩模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAutoCompactionMode() const;

                    /**
                     * 设置自动压缩模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoCompactionMode 自动压缩模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoCompactionMode(const std::string& _autoCompactionMode);

                    /**
                     * 判断参数 AutoCompactionMode 是否已赋值
                     * @return AutoCompactionMode 是否已赋值
                     * 
                     */
                    bool AutoCompactionModeHasBeenSet() const;

                    /**
                     * 获取自动压缩保留时间/revison数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoCompactionRetention 自动压缩保留时间/revison数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAutoCompactionRetention() const;

                    /**
                     * 设置自动压缩保留时间/revison数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoCompactionRetention 自动压缩保留时间/revison数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoCompactionRetention(const std::string& _autoCompactionRetention);

                    /**
                     * 判断参数 AutoCompactionRetention 是否已赋值
                     * @return AutoCompactionRetention 是否已赋值
                     * 
                     */
                    bool AutoCompactionRetentionHasBeenSet() const;

                private:

                    /**
                     * 自动压缩模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_autoCompactionMode;
                    bool m_autoCompactionModeHasBeenSet;

                    /**
                     * 自动压缩保留时间/revison数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_autoCompactionRetention;
                    bool m_autoCompactionRetentionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDAUTOCOMPACTIONSETTINGS_H_
