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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_SUBSCRIBECHECKSTEPTIP_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_SUBSCRIBECHECKSTEPTIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 订阅校验任务的提示信息
                */
                class SubscribeCheckStepTip : public AbstractModel
                {
                public:
                    SubscribeCheckStepTip();
                    ~SubscribeCheckStepTip() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取错误或告警的详细信息
                     * @return Message 错误或告警的详细信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误或告警的详细信息
                     * @param _message 错误或告警的详细信息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取帮助文档
                     * @return HelpDoc 帮助文档
                     * 
                     */
                    std::string GetHelpDoc() const;

                    /**
                     * 设置帮助文档
                     * @param _helpDoc 帮助文档
                     * 
                     */
                    void SetHelpDoc(const std::string& _helpDoc);

                    /**
                     * 判断参数 HelpDoc 是否已赋值
                     * @return HelpDoc 是否已赋值
                     * 
                     */
                    bool HelpDocHasBeenSet() const;

                private:

                    /**
                     * 错误或告警的详细信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 帮助文档
                     */
                    std::string m_helpDoc;
                    bool m_helpDocHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_SUBSCRIBECHECKSTEPTIP_H_
