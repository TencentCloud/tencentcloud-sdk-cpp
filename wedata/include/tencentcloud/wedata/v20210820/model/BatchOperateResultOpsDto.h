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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHOPERATERESULTOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHOPERATERESULTOPSDTO_H_

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
                * 实例批量操作结果类
                */
                class BatchOperateResultOpsDto : public AbstractModel
                {
                public:
                    BatchOperateResultOpsDto();
                    ~BatchOperateResultOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 设置结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _result 结果
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取错误id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorId 错误id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorId() const;

                    /**
                     * 设置错误id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorId 错误id
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

                    /**
                     * 获取错误说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorDesc 错误说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorDesc() const;

                    /**
                     * 设置错误说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorDesc 错误说明
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
                     * 获取异步操作id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AsyncActionId 异步操作id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAsyncActionId() const;

                    /**
                     * 设置异步操作id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _asyncActionId 异步操作id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAsyncActionId(const std::string& _asyncActionId);

                    /**
                     * 判断参数 AsyncActionId 是否已赋值
                     * @return AsyncActionId 是否已赋值
                     * 
                     */
                    bool AsyncActionIdHasBeenSet() const;

                private:

                    /**
                     * 结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 错误id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorId;
                    bool m_errorIdHasBeenSet;

                    /**
                     * 错误说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorDesc;
                    bool m_errorDescHasBeenSet;

                    /**
                     * 异步操作id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_asyncActionId;
                    bool m_asyncActionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHOPERATERESULTOPSDTO_H_
