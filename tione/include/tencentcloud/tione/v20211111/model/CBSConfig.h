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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CBSCONFIG_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CBSCONFIG_H_

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
        namespace V20211111
        {
            namespace Model
            {
                /**
                * CBS存储配置
                */
                class CBSConfig : public AbstractModel
                {
                public:
                    CBSConfig();
                    ~CBSConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeSizeInGB 存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVolumeSizeInGB() const;

                    /**
                     * 设置存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeSizeInGB 存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVolumeSizeInGB(const int64_t& _volumeSizeInGB);

                    /**
                     * 判断参数 VolumeSizeInGB 是否已赋值
                     * @return VolumeSizeInGB 是否已赋值
                     * 
                     */
                    bool VolumeSizeInGBHasBeenSet() const;

                private:

                    /**
                     * 存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_volumeSizeInGB;
                    bool m_volumeSizeInGBHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CBSCONFIG_H_
