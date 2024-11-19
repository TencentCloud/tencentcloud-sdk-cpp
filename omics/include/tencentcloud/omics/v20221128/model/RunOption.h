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
                     * @return FinalWorkflowOutputsDir 输出归档COS路径。
                     * 
                     */
                    std::string GetFinalWorkflowOutputsDir() const;

                    /**
                     * 设置输出归档COS路径。
                     * @param _finalWorkflowOutputsDir 输出归档COS路径。
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
                     * @return UseRelativeOutputPaths 是否使用相对目录归档输出。
                     * 
                     */
                    bool GetUseRelativeOutputPaths() const;

                    /**
                     * 设置是否使用相对目录归档输出。
                     * @param _useRelativeOutputPaths 是否使用相对目录归档输出。
                     * 
                     */
                    void SetUseRelativeOutputPaths(const bool& _useRelativeOutputPaths);

                    /**
                     * 判断参数 UseRelativeOutputPaths 是否已赋值
                     * @return UseRelativeOutputPaths 是否已赋值
                     * 
                     */
                    bool UseRelativeOutputPathsHasBeenSet() const;

                    /**
                     * 获取是否添加运行信息到输出目录中
                     * @return AddRunInfoToOutputDir 是否添加运行信息到输出目录中
                     * 
                     */
                    bool GetAddRunInfoToOutputDir() const;

                    /**
                     * 设置是否添加运行信息到输出目录中
                     * @param _addRunInfoToOutputDir 是否添加运行信息到输出目录中
                     * 
                     */
                    void SetAddRunInfoToOutputDir(const bool& _addRunInfoToOutputDir);

                    /**
                     * 判断参数 AddRunInfoToOutputDir 是否已赋值
                     * @return AddRunInfoToOutputDir 是否已赋值
                     * 
                     */
                    bool AddRunInfoToOutputDirHasBeenSet() const;

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
                     */
                    std::string m_finalWorkflowOutputsDir;
                    bool m_finalWorkflowOutputsDirHasBeenSet;

                    /**
                     * 是否使用相对目录归档输出。
                     */
                    bool m_useRelativeOutputPaths;
                    bool m_useRelativeOutputPathsHasBeenSet;

                    /**
                     * 是否添加运行信息到输出目录中
                     */
                    bool m_addRunInfoToOutputDir;
                    bool m_addRunInfoToOutputDirHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RUNOPTION_H_
