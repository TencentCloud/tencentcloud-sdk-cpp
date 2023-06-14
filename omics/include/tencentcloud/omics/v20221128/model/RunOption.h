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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_RUNOPTION_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_RUNOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * 运行应用选项。
                */
                class RunOption : public AbstractModel
                {
                public:
                    RunOption();
                    ~RunOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取运行失败模式，取值范围：
- ContinueWhilePossible
- NoNewCalls
                     * @return FailureMode 运行失败模式，取值范围：
- ContinueWhilePossible
- NoNewCalls
                     * 
                     */
                    std::string GetFailureMode() const;

                    /**
                     * 设置运行失败模式，取值范围：
- ContinueWhilePossible
- NoNewCalls
                     * @param _failureMode 运行失败模式，取值范围：
- ContinueWhilePossible
- NoNewCalls
                     * 
                     */
                    void SetFailureMode(const std::string& _failureMode);

                    /**
                     * 判断参数 FailureMode 是否已赋值
                     * @return FailureMode 是否已赋值
                     * 
                     */
                    bool FailureModeHasBeenSet() const;

                    /**
                     * 获取是否使用Call-Caching功能。
                     * @return UseCallCache 是否使用Call-Caching功能。
                     * 
                     */
                    bool GetUseCallCache() const;

                    /**
                     * 设置是否使用Call-Caching功能。
                     * @param _useCallCache 是否使用Call-Caching功能。
                     * 
                     */
                    void SetUseCallCache(const bool& _useCallCache);

                    /**
                     * 判断参数 UseCallCache 是否已赋值
                     * @return UseCallCache 是否已赋值
                     * 
                     */
                    bool UseCallCacheHasBeenSet() const;

                    /**
                     * 获取是否使用错误挂起功能。
                     * @return UseErrorOnHold 是否使用错误挂起功能。
                     * 
                     */
                    bool GetUseErrorOnHold() const;

                    /**
                     * 设置是否使用错误挂起功能。
                     * @param _useErrorOnHold 是否使用错误挂起功能。
                     * 
                     */
                    void SetUseErrorOnHold(const bool& _useErrorOnHold);

                    /**
                     * 判断参数 UseErrorOnHold 是否已赋值
                     * @return UseErrorOnHold 是否已赋值
                     * 
                     */
                    bool UseErrorOnHoldHasBeenSet() const;

                    /**
                     * 获取输出归档COS路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinalWorkflowOutputsDir 输出归档COS路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFinalWorkflowOutputsDir() const;

                    /**
                     * 设置输出归档COS路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _finalWorkflowOutputsDir 输出归档COS路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFinalWorkflowOutputsDir(const std::string& _finalWorkflowOutputsDir);

                    /**
                     * 判断参数 FinalWorkflowOutputsDir 是否已赋值
                     * @return FinalWorkflowOutputsDir 是否已赋值
                     * 
                     */
                    bool FinalWorkflowOutputsDirHasBeenSet() const;

                    /**
                     * 获取是否使用相对目录归档输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UseRelativeOutputPaths 是否使用相对目录归档输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetUseRelativeOutputPaths() const;

                    /**
                     * 设置是否使用相对目录归档输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _useRelativeOutputPaths 是否使用相对目录归档输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUseRelativeOutputPaths(const bool& _useRelativeOutputPaths);

                    /**
                     * 判断参数 UseRelativeOutputPaths 是否已赋值
                     * @return UseRelativeOutputPaths 是否已赋值
                     * 
                     */
                    bool UseRelativeOutputPathsHasBeenSet() const;

                private:

                    /**
                     * 运行失败模式，取值范围：
- ContinueWhilePossible
- NoNewCalls
                     */
                    std::string m_failureMode;
                    bool m_failureModeHasBeenSet;

                    /**
                     * 是否使用Call-Caching功能。
                     */
                    bool m_useCallCache;
                    bool m_useCallCacheHasBeenSet;

                    /**
                     * 是否使用错误挂起功能。
                     */
                    bool m_useErrorOnHold;
                    bool m_useErrorOnHoldHasBeenSet;

                    /**
                     * 输出归档COS路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_finalWorkflowOutputsDir;
                    bool m_finalWorkflowOutputsDirHasBeenSet;

                    /**
                     * 是否使用相对目录归档输出。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_useRelativeOutputPaths;
                    bool m_useRelativeOutputPathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RUNOPTION_H_
