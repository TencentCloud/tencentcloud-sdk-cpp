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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DYNAMICINDEX_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DYNAMICINDEX_H_

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
                * 动态更新索引配置
                */
                class DynamicIndex : public AbstractModel
                {
                public:
                    DynamicIndex();
                    ~DynamicIndex() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取动态索引配置开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 动态索引配置开关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置动态索引配置开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 动态索引配置开关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 动态索引配置开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DYNAMICINDEX_H_
