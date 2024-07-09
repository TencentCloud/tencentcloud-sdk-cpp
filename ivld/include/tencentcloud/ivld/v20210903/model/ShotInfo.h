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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_SHOTINFO_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_SHOTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 输入的镜头信息的描述
                */
                class ShotInfo : public AbstractModel
                {
                public:
                    ShotInfo();
                    ~ShotInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜头开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTimeStamp 镜头开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetStartTimeStamp() const;

                    /**
                     * 设置镜头开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTimeStamp 镜头开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTimeStamp(const double& _startTimeStamp);

                    /**
                     * 判断参数 StartTimeStamp 是否已赋值
                     * @return StartTimeStamp 是否已赋值
                     * 
                     */
                    bool StartTimeStampHasBeenSet() const;

                    /**
                     * 获取镜头结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTimeStamp 镜头结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetEndTimeStamp() const;

                    /**
                     * 设置镜头结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTimeStamp 镜头结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTimeStamp(const double& _endTimeStamp);

                    /**
                     * 判断参数 EndTimeStamp 是否已赋值
                     * @return EndTimeStamp 是否已赋值
                     * 
                     */
                    bool EndTimeStampHasBeenSet() const;

                private:

                    /**
                     * 镜头开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_startTimeStamp;
                    bool m_startTimeStampHasBeenSet;

                    /**
                     * 镜头结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_endTimeStamp;
                    bool m_endTimeStampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_SHOTINFO_H_
