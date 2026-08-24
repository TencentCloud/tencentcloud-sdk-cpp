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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DELETEDRILLPAIRRESULT_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DELETEDRILLPAIRRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 删除演练对结果
                */
                class DeleteDrillPairResult : public AbstractModel
                {
                public:
                    DeleteDrillPairResult();
                    ~DeleteDrillPairResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取演练对ID。
                     * @return DrillPairId 演练对ID。
                     * 
                     */
                    std::string GetDrillPairId() const;

                    /**
                     * 设置演练对ID。
                     * @param _drillPairId 演练对ID。
                     * 
                     */
                    void SetDrillPairId(const std::string& _drillPairId);

                    /**
                     * 判断参数 DrillPairId 是否已赋值
                     * @return DrillPairId 是否已赋值
                     * 
                     */
                    bool DrillPairIdHasBeenSet() const;

                    /**
                     * 获取删除结果码。成功为 Success，失败为对应错误码（如 InternalError.ComponentError）。
                     * @return Code 删除结果码。成功为 Success，失败为对应错误码（如 InternalError.ComponentError）。
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置删除结果码。成功为 Success，失败为对应错误码（如 InternalError.ComponentError）。
                     * @param _code 删除结果码。成功为 Success，失败为对应错误码（如 InternalError.ComponentError）。
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取删除结果描述信息，成功时为空串。
                     * @return Message 删除结果描述信息，成功时为空串。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置删除结果描述信息，成功时为空串。
                     * @param _message 删除结果描述信息，成功时为空串。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 演练对ID。
                     */
                    std::string m_drillPairId;
                    bool m_drillPairIdHasBeenSet;

                    /**
                     * 删除结果码。成功为 Success，失败为对应错误码（如 InternalError.ComponentError）。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 删除结果描述信息，成功时为空串。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DELETEDRILLPAIRRESULT_H_
