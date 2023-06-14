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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHRETURN_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHRETURN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 操作结果
                */
                class BatchReturn : public AbstractModel
                {
                public:
                    BatchReturn();
                    ~BatchReturn() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行结果
                     * @return Result 执行结果
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 设置执行结果
                     * @param _result 执行结果
                     * 
                     */
                    void SetResult(const bool& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取执行情况备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorDesc 执行情况备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorDesc() const;

                    /**
                     * 设置执行情况备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorDesc 执行情况备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorDesc(const std::string& _errorDesc);

                    /**
                     * 判断参数 ErrorDesc 是否已赋值
                     * @return ErrorDesc 是否已赋值
                     * 
                     */
                    bool ErrorDescHasBeenSet() const;

                    /**
                     * 获取执行情况id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorId 执行情况id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorId() const;

                    /**
                     * 设置执行情况id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorId 执行情况id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorId(const std::string& _errorId);

                    /**
                     * 判断参数 ErrorId 是否已赋值
                     * @return ErrorId 是否已赋值
                     * 
                     */
                    bool ErrorIdHasBeenSet() const;

                private:

                    /**
                     * 执行结果
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 执行情况备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorDesc;
                    bool m_errorDescHasBeenSet;

                    /**
                     * 执行情况id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorId;
                    bool m_errorIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHRETURN_H_
