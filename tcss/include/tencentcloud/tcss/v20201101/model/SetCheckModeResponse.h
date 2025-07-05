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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SETCHECKMODERESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SETCHECKMODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * SetCheckMode返回参数结构体
                */
                class SetCheckModeResponse : public AbstractModel
                {
                public:
                    SetCheckModeResponse();
                    ~SetCheckModeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取"Succ"表示设置成功，"Failed"表示设置失败
                     * @return SetCheckResult "Succ"表示设置成功，"Failed"表示设置失败
                     * 
                     */
                    std::string GetSetCheckResult() const;

                    /**
                     * 判断参数 SetCheckResult 是否已赋值
                     * @return SetCheckResult 是否已赋值
                     * 
                     */
                    bool SetCheckResultHasBeenSet() const;

                private:

                    /**
                     * "Succ"表示设置成功，"Failed"表示设置失败
                     */
                    std::string m_setCheckResult;
                    bool m_setCheckResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SETCHECKMODERESPONSE_H_
