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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_OUTPUTDATACONFIG_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_OUTPUTDATACONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * 输出数据配置
                */
                class OutputDataConfig : public AbstractModel
                {
                public:
                    OutputDataConfig();
                    ~OutputDataConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cos桶
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosOutputBucket cos桶
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCosOutputBucket() const;

                    /**
                     * 设置cos桶
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CosOutputBucket cos桶
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCosOutputBucket(const std::string& _cosOutputBucket);

                    /**
                     * 判断参数 CosOutputBucket 是否已赋值
                     * @return CosOutputBucket 是否已赋值
                     */
                    bool CosOutputBucketHasBeenSet() const;

                    /**
                     * 获取cos文件key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosOutputKeyPrefix cos文件key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCosOutputKeyPrefix() const;

                    /**
                     * 设置cos文件key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CosOutputKeyPrefix cos文件key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCosOutputKeyPrefix(const std::string& _cosOutputKeyPrefix);

                    /**
                     * 判断参数 CosOutputKeyPrefix 是否已赋值
                     * @return CosOutputKeyPrefix 是否已赋值
                     */
                    bool CosOutputKeyPrefixHasBeenSet() const;

                private:

                    /**
                     * cos桶
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosOutputBucket;
                    bool m_cosOutputBucketHasBeenSet;

                    /**
                     * cos文件key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosOutputKeyPrefix;
                    bool m_cosOutputKeyPrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_OUTPUTDATACONFIG_H_
