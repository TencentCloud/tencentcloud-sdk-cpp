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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CLUSTERFWPREACCESSCHECKSTAGE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CLUSTERFWPREACCESSCHECKSTAGE_H_

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
                * 单个阶段的实时检查状态
                */
                class ClusterFwPreAccessCheckStage : public AbstractModel
                {
                public:
                    ClusterFwPreAccessCheckStage();
                    ~ClusterFwPreAccessCheckStage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检查项 key，与发起检查接口返回的 CheckItems[].Stage 一一对应
                     * @return Stage 检查项 key，与发起检查接口返回的 CheckItems[].Stage 一一对应
                     * 
                     */
                    std::string GetStage() const;

                    /**
                     * 设置检查项 key，与发起检查接口返回的 CheckItems[].Stage 一一对应
                     * @param _stage 检查项 key，与发起检查接口返回的 CheckItems[].Stage 一一对应
                     * 
                     */
                    void SetStage(const std::string& _stage);

                    /**
                     * 判断参数 Stage 是否已赋值
                     * @return Stage 是否已赋值
                     * 
                     */
                    bool StageHasBeenSet() const;

                    /**
                     * 获取该检查项状态，0：进行中，1：通过，2：失败
                     * @return Status 该检查项状态，0：进行中，1：通过，2：失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置该检查项状态，0：进行中，1：通过，2：失败
                     * @param _status 该检查项状态，0：进行中，1：通过，2：失败
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取失败时的错误码（仅 Status=2 时有值）
                     * @return ErrorCode 失败时的错误码（仅 Status=2 时有值）
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 设置失败时的错误码（仅 Status=2 时有值）
                     * @param _errorCode 失败时的错误码（仅 Status=2 时有值）
                     * 
                     */
                    void SetErrorCode(const std::string& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取失败时的具体错误信息（仅 Status=2 时有值）
                     * @return ErrorMessage 失败时的具体错误信息（仅 Status=2 时有值）
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置失败时的具体错误信息（仅 Status=2 时有值）
                     * @param _errorMessage 失败时的具体错误信息（仅 Status=2 时有值）
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                private:

                    /**
                     * 检查项 key，与发起检查接口返回的 CheckItems[].Stage 一一对应
                     */
                    std::string m_stage;
                    bool m_stageHasBeenSet;

                    /**
                     * 该检查项状态，0：进行中，1：通过，2：失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 失败时的错误码（仅 Status=2 时有值）
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 失败时的具体错误信息（仅 Status=2 时有值）
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CLUSTERFWPREACCESSCHECKSTAGE_H_
