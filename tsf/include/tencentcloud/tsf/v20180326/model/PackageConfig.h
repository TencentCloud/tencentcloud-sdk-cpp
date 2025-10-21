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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_PACKAGECONFIG_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_PACKAGECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 程序包相关配置信息
                */
                class PackageConfig : public AbstractModel
                {
                public:
                    PackageConfig();
                    ~PackageConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取程序包存储空间大小，单位字节
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpaceSize 程序包存储空间大小，单位字节
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSpaceSize() const;

                    /**
                     * 设置程序包存储空间大小，单位字节
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spaceSize 程序包存储空间大小，单位字节
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpaceSize(const uint64_t& _spaceSize);

                    /**
                     * 判断参数 SpaceSize 是否已赋值
                     * @return SpaceSize 是否已赋值
                     * 
                     */
                    bool SpaceSizeHasBeenSet() const;

                private:

                    /**
                     * 程序包存储空间大小，单位字节
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_spaceSize;
                    bool m_spaceSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_PACKAGECONFIG_H_
