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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECREATEMYSQLRESULT_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECREATEMYSQLRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 查询开通Mysql结果
                */
                class DescribeCreateMySQLResult : public AbstractModel
                {
                public:
                    DescribeCreateMySQLResult();
                    ~DescribeCreateMySQLResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取状态 notexist | init | doing | success | fail
                     * @return Status 状态 notexist | init | doing | success | fail
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态 notexist | init | doing | success | fail
                     * @param _status 状态 notexist | init | doing | success | fail
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailReason 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failReason 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取是否冻结
                     * @return FreezeStatus 是否冻结
                     * 
                     */
                    bool GetFreezeStatus() const;

                    /**
                     * 设置是否冻结
                     * @param _freezeStatus 是否冻结
                     * 
                     */
                    void SetFreezeStatus(const bool& _freezeStatus);

                    /**
                     * 判断参数 FreezeStatus 是否已赋值
                     * @return FreezeStatus 是否已赋值
                     * 
                     */
                    bool FreezeStatusHasBeenSet() const;

                private:

                    /**
                     * 状态 notexist | init | doing | success | fail
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * 是否冻结
                     */
                    bool m_freezeStatus;
                    bool m_freezeStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECREATEMYSQLRESULT_H_
