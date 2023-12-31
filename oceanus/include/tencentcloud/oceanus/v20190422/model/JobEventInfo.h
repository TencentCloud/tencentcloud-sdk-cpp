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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBEVENTINFO_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBEVENTINFO_H_

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
                * 事件信息
                */
                class JobEventInfo : public AbstractModel
                {
                public:
                    JobEventInfo();
                    ~JobEventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取异常事件总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorEventTotal 异常事件总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetErrorEventTotal() const;

                    /**
                     * 设置异常事件总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorEventTotal 异常事件总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorEventTotal(const int64_t& _errorEventTotal);

                    /**
                     * 判断参数 ErrorEventTotal 是否已赋值
                     * @return ErrorEventTotal 是否已赋值
                     * 
                     */
                    bool ErrorEventTotalHasBeenSet() const;

                private:

                    /**
                     * 异常事件总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_errorEventTotal;
                    bool m_errorEventTotalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBEVENTINFO_H_
