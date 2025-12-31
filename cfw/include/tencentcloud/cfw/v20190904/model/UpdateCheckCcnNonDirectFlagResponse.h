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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_UPDATECHECKCCNNONDIRECTFLAGRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_UPDATECHECKCCNNONDIRECTFLAGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * UpdateCheckCcnNonDirectFlag返回参数结构体
                */
                class UpdateCheckCcnNonDirectFlagResponse : public AbstractModel
                {
                public:
                    UpdateCheckCcnNonDirectFlagResponse();
                    ~UpdateCheckCcnNonDirectFlagResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取检测更新状态
"Checked"：重新检测完成
"Checking": 正在重新检测中，请稍后刷新状态查看
                     * @return Message 检测更新状态
"Checked"：重新检测完成
"Checking": 正在重新检测中，请稍后刷新状态查看
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 检测更新状态
"Checked"：重新检测完成
"Checking": 正在重新检测中，请稍后刷新状态查看
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_UPDATECHECKCCNNONDIRECTFLAGRESPONSE_H_
