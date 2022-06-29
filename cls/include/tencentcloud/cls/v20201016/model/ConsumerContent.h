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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CONSUMERCONTENT_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CONSUMERCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 投递任务出入参 Content
                */
                class ConsumerContent : public AbstractModel
                {
                public:
                    ConsumerContent();
                    ~ConsumerContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否投递 TAG 信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableTag 是否投递 TAG 信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetEnableTag() const;

                    /**
                     * 设置是否投递 TAG 信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EnableTag 是否投递 TAG 信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnableTag(const bool& _enableTag);

                    /**
                     * 判断参数 EnableTag 是否已赋值
                     * @return EnableTag 是否已赋值
                     */
                    bool EnableTagHasBeenSet() const;

                    /**
                     * 获取需要投递的元数据列表，目前仅支持：\_\_SOURCE\_\_，\_\_FILENAME\_\_和\_\_TIMESTAMP\_\_
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetaFields 需要投递的元数据列表，目前仅支持：\_\_SOURCE\_\_，\_\_FILENAME\_\_和\_\_TIMESTAMP\_\_
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetMetaFields() const;

                    /**
                     * 设置需要投递的元数据列表，目前仅支持：\_\_SOURCE\_\_，\_\_FILENAME\_\_和\_\_TIMESTAMP\_\_
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MetaFields 需要投递的元数据列表，目前仅支持：\_\_SOURCE\_\_，\_\_FILENAME\_\_和\_\_TIMESTAMP\_\_
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMetaFields(const std::vector<std::string>& _metaFields);

                    /**
                     * 判断参数 MetaFields 是否已赋值
                     * @return MetaFields 是否已赋值
                     */
                    bool MetaFieldsHasBeenSet() const;

                    /**
                     * 获取当EnableTag为true时，必须填写TagJsonNotTiled字段，TagJsonNotTiled用于标识tag信息是否json平铺，TagJsonNotTiled为true时不平铺，false时平铺
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagJsonNotTiled 当EnableTag为true时，必须填写TagJsonNotTiled字段，TagJsonNotTiled用于标识tag信息是否json平铺，TagJsonNotTiled为true时不平铺，false时平铺
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetTagJsonNotTiled() const;

                    /**
                     * 设置当EnableTag为true时，必须填写TagJsonNotTiled字段，TagJsonNotTiled用于标识tag信息是否json平铺，TagJsonNotTiled为true时不平铺，false时平铺
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TagJsonNotTiled 当EnableTag为true时，必须填写TagJsonNotTiled字段，TagJsonNotTiled用于标识tag信息是否json平铺，TagJsonNotTiled为true时不平铺，false时平铺
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTagJsonNotTiled(const bool& _tagJsonNotTiled);

                    /**
                     * 判断参数 TagJsonNotTiled 是否已赋值
                     * @return TagJsonNotTiled 是否已赋值
                     */
                    bool TagJsonNotTiledHasBeenSet() const;

                    /**
                     * 获取投递时间戳精度，可选项 [1:秒；2:毫秒] ，默认是秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimestampAccuracy 投递时间戳精度，可选项 [1:秒；2:毫秒] ，默认是秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTimestampAccuracy() const;

                    /**
                     * 设置投递时间戳精度，可选项 [1:秒；2:毫秒] ，默认是秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TimestampAccuracy 投递时间戳精度，可选项 [1:秒；2:毫秒] ，默认是秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTimestampAccuracy(const int64_t& _timestampAccuracy);

                    /**
                     * 判断参数 TimestampAccuracy 是否已赋值
                     * @return TimestampAccuracy 是否已赋值
                     */
                    bool TimestampAccuracyHasBeenSet() const;

                private:

                    /**
                     * 是否投递 TAG 信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableTag;
                    bool m_enableTagHasBeenSet;

                    /**
                     * 需要投递的元数据列表，目前仅支持：\_\_SOURCE\_\_，\_\_FILENAME\_\_和\_\_TIMESTAMP\_\_
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_metaFields;
                    bool m_metaFieldsHasBeenSet;

                    /**
                     * 当EnableTag为true时，必须填写TagJsonNotTiled字段，TagJsonNotTiled用于标识tag信息是否json平铺，TagJsonNotTiled为true时不平铺，false时平铺
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_tagJsonNotTiled;
                    bool m_tagJsonNotTiledHasBeenSet;

                    /**
                     * 投递时间戳精度，可选项 [1:秒；2:毫秒] ，默认是秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timestampAccuracy;
                    bool m_timestampAccuracyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONSUMERCONTENT_H_
