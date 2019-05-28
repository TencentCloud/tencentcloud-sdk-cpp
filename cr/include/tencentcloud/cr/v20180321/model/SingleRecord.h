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

#ifndef TENCENTCLOUD_CR_V20180321_MODEL_SINGLERECORD_H_
#define TENCENTCLOUD_CR_V20180321_MODEL_SINGLERECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cr
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * 录音信息
                */
                class SingleRecord : public AbstractModel
                {
                public:
                    SingleRecord();
                    ~SingleRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator);
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取案件编号。
                     * @return AccountNum 案件编号。
                     */
                    std::string GetAccountNum() const;

                    /**
                     * 设置案件编号。
                     * @param AccountNum 案件编号。
                     */
                    void SetAccountNum(const std::string& accountNum);

                    /**
                     * 判断参数 AccountNum 是否已赋值
                     * @return AccountNum 是否已赋值
                     */
                    bool AccountNumHasBeenSet() const;

                    /**
                     * 获取外呼日期。
                     * @return BizDate 外呼日期。
                     */
                    std::string GetBizDate() const;

                    /**
                     * 设置外呼日期。
                     * @param BizDate 外呼日期。
                     */
                    void SetBizDate(const std::string& bizDate);

                    /**
                     * 判断参数 BizDate 是否已赋值
                     * @return BizDate 是否已赋值
                     */
                    bool BizDateHasBeenSet() const;

                    /**
                     * 获取开始呼叫时间。
                     * @return CallStartTime 开始呼叫时间。
                     */
                    std::string GetCallStartTime() const;

                    /**
                     * 设置开始呼叫时间。
                     * @param CallStartTime 开始呼叫时间。
                     */
                    void SetCallStartTime(const std::string& callStartTime);

                    /**
                     * 判断参数 CallStartTime 是否已赋值
                     * @return CallStartTime 是否已赋值
                     */
                    bool CallStartTimeHasBeenSet() const;

                    /**
                     * 获取主叫号码。
                     * @return CallerPhone 主叫号码。
                     */
                    std::string GetCallerPhone() const;

                    /**
                     * 设置主叫号码。
                     * @param CallerPhone 主叫号码。
                     */
                    void SetCallerPhone(const std::string& callerPhone);

                    /**
                     * 判断参数 CallerPhone 是否已赋值
                     * @return CallerPhone 是否已赋值
                     */
                    bool CallerPhoneHasBeenSet() const;

                    /**
                     * 获取呼叫方向，O为呼出，I为呼入。
                     * @return Direction 呼叫方向，O为呼出，I为呼入。
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置呼叫方向，O为呼出，I为呼入。
                     * @param Direction 呼叫方向，O为呼出，I为呼入。
                     */
                    void SetDirection(const std::string& direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取通话时长。
                     * @return Duration 通话时长。
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置通话时长。
                     * @param Duration 通话时长。
                     */
                    void SetDuration(const int64_t& duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取产品ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductId 产品ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProductId 产品ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProductId(const std::string& productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取录音下载链接。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordCosUrl 录音下载链接。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRecordCosUrl() const;

                    /**
                     * 设置录音下载链接。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RecordCosUrl 录音下载链接。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRecordCosUrl(const std::string& recordCosUrl);

                    /**
                     * 判断参数 RecordCosUrl 是否已赋值
                     * @return RecordCosUrl 是否已赋值
                     */
                    bool RecordCosUrlHasBeenSet() const;

                private:

                    /**
                     * 案件编号。
                     */
                    std::string m_accountNum;
                    bool m_accountNumHasBeenSet;

                    /**
                     * 外呼日期。
                     */
                    std::string m_bizDate;
                    bool m_bizDateHasBeenSet;

                    /**
                     * 开始呼叫时间。
                     */
                    std::string m_callStartTime;
                    bool m_callStartTimeHasBeenSet;

                    /**
                     * 主叫号码。
                     */
                    std::string m_callerPhone;
                    bool m_callerPhoneHasBeenSet;

                    /**
                     * 呼叫方向，O为呼出，I为呼入。
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 通话时长。
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 产品ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 录音下载链接。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recordCosUrl;
                    bool m_recordCosUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CR_V20180321_MODEL_SINGLERECORD_H_
