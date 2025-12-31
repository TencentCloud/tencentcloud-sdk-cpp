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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SWITCHERROR_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SWITCHERROR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 开关切换错误
                */
                class SwitchError : public AbstractModel
                {
                public:
                    SwitchError();
                    ~SwitchError() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开关唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrIns 开关唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrIns() const;

                    /**
                     * 设置开关唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errIns 开关唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrIns(const std::string& _errIns);

                    /**
                     * 判断参数 ErrIns 是否已赋值
                     * @return ErrIns 是否已赋值
                     * 
                     */
                    bool ErrInsHasBeenSet() const;

                    /**
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrMsg 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errMsg 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取错误类型区分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrKey 错误类型区分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrKey() const;

                    /**
                     * 设置错误类型区分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errKey 错误类型区分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrKey(const std::string& _errKey);

                    /**
                     * 判断参数 ErrKey 是否已赋值
                     * @return ErrKey 是否已赋值
                     * 
                     */
                    bool ErrKeyHasBeenSet() const;

                    /**
                     * 获取错误时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InsertTime 错误时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置错误时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _insertTime 错误时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                private:

                    /**
                     * 开关唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errIns;
                    bool m_errInsHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 错误类型区分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errKey;
                    bool m_errKeyHasBeenSet;

                    /**
                     * 错误时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SWITCHERROR_H_
