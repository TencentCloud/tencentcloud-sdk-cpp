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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RESILIENTSTREAMCONF_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RESILIENTSTREAMCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 延播平滑吐流配置。
                */
                class ResilientStreamConf : public AbstractModel
                {
                public:
                    ResilientStreamConf();
                    ~ResilientStreamConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启延播平滑吐流，true开启，false不开启，默认不开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enable 是否开启延播平滑吐流，true开启，false不开启，默认不开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置是否开启延播平滑吐流，true开启，false不开启，默认不开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enable 是否开启延播平滑吐流，true开启，false不开启，默认不开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取延播时间，单位秒，目前支持的范围为10~300秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BufferTime 延播时间，单位秒，目前支持的范围为10~300秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetBufferTime() const;

                    /**
                     * 设置延播时间，单位秒，目前支持的范围为10~300秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bufferTime 延播时间，单位秒，目前支持的范围为10~300秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBufferTime(const uint64_t& _bufferTime);

                    /**
                     * 判断参数 BufferTime 是否已赋值
                     * @return BufferTime 是否已赋值
                     * 
                     */
                    bool BufferTimeHasBeenSet() const;

                private:

                    /**
                     * 是否开启延播平滑吐流，true开启，false不开启，默认不开启。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 延播时间，单位秒，目前支持的范围为10~300秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_bufferTime;
                    bool m_bufferTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RESILIENTSTREAMCONF_H_
