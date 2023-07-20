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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BASELINEDETAILRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BASELINEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/BaselineDto.h>
#include <tencentcloud/wedata/v20210820/model/CreateAlarmRuleRequest.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * BaselineDetailResponse
                */
                class BaselineDetailResponse : public AbstractModel
                {
                public:
                    BaselineDetailResponse();
                    ~BaselineDetailResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BaselineDto 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BaselineDto GetBaselineDto() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _baselineDto 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBaselineDto(const BaselineDto& _baselineDto);

                    /**
                     * 判断参数 BaselineDto 是否已赋值
                     * @return BaselineDto 是否已赋值
                     * 
                     */
                    bool BaselineDtoHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BaselineCreateAlarmRuleRequest 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CreateAlarmRuleRequest GetBaselineCreateAlarmRuleRequest() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _baselineCreateAlarmRuleRequest 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBaselineCreateAlarmRuleRequest(const CreateAlarmRuleRequest& _baselineCreateAlarmRuleRequest);

                    /**
                     * 判断参数 BaselineCreateAlarmRuleRequest 是否已赋值
                     * @return BaselineCreateAlarmRuleRequest 是否已赋值
                     * 
                     */
                    bool BaselineCreateAlarmRuleRequestHasBeenSet() const;

                    /**
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsNewAlarm 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsNewAlarm() const;

                    /**
                     * 设置无
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isNewAlarm 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsNewAlarm(const bool& _isNewAlarm);

                    /**
                     * 判断参数 IsNewAlarm 是否已赋值
                     * @return IsNewAlarm 是否已赋值
                     * 
                     */
                    bool IsNewAlarmHasBeenSet() const;

                private:

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaselineDto m_baselineDto;
                    bool m_baselineDtoHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CreateAlarmRuleRequest m_baselineCreateAlarmRuleRequest;
                    bool m_baselineCreateAlarmRuleRequestHasBeenSet;

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isNewAlarm;
                    bool m_isNewAlarmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BASELINEDETAILRESPONSE_H_
