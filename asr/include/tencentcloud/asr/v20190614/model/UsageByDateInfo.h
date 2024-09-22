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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_USAGEBYDATEINFO_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_USAGEBYDATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * 用户用量信息
                */
                class UsageByDateInfo : public AbstractModel
                {
                public:
                    UsageByDateInfo();
                    ~UsageByDateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取业务类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizName 业务类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBizName() const;

                    /**
                     * 设置业务类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizName 业务类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizName(const std::string& _bizName);

                    /**
                     * 判断参数 BizName 是否已赋值
                     * @return BizName 是否已赋值
                     * 
                     */
                    bool BizNameHasBeenSet() const;

                    /**
                     * 获取识别次数
单位：次
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Count 识别次数
单位：次
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置识别次数
单位：次
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _count 识别次数
单位：次
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取识别时长
单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 识别时长
单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置识别时长
单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration 识别时长
单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * 业务类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bizName;
                    bool m_bizNameHasBeenSet;

                    /**
                     * 识别次数
单位：次
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 识别时长
单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_USAGEBYDATEINFO_H_
