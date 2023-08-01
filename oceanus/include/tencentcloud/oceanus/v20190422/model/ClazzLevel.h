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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_CLAZZLEVEL_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_CLAZZLEVEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * {
"Clazz": "c1", // java类全路径
"Level": "WARN" // 日志级别  TRACE，DEBUG、INFO、WARN、ERROR
}
                */
                class ClazzLevel : public AbstractModel
                {
                public:
                    ClazzLevel();
                    ~ClazzLevel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取java类全路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Clazz java类全路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClazz() const;

                    /**
                     * 设置java类全路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clazz java类全路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClazz(const std::string& _clazz);

                    /**
                     * 判断参数 Clazz 是否已赋值
                     * @return Clazz 是否已赋值
                     * 
                     */
                    bool ClazzHasBeenSet() const;

                    /**
                     * 获取日志级别  TRACE，DEBUG、INFO、WARN、ERROR
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 日志级别  TRACE，DEBUG、INFO、WARN、ERROR
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置日志级别  TRACE，DEBUG、INFO、WARN、ERROR
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _level 日志级别  TRACE，DEBUG、INFO、WARN、ERROR
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                private:

                    /**
                     * java类全路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clazz;
                    bool m_clazzHasBeenSet;

                    /**
                     * 日志级别  TRACE，DEBUG、INFO、WARN、ERROR
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_CLAZZLEVEL_H_
