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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKEIDTOKENSTATUSRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKEIDTOKENSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * CheckEidTokenStatus返回参数结构体
                */
                class CheckEidTokenStatusResponse : public AbstractModel
                {
                public:
                    CheckEidTokenStatusResponse();
                    ~CheckEidTokenStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取状态。
- init：EidToken未验证。
- doing: EidToken验证中。
- finished: EidToken验证完成。
- timeout: EidToken已超时。
                     * @return Status 状态。
- init：EidToken未验证。
- doing: EidToken验证中。
- finished: EidToken验证完成。
- timeout: EidToken已超时。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 状态。
- init：EidToken未验证。
- doing: EidToken验证中。
- finished: EidToken验证完成。
- timeout: EidToken已超时。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKEIDTOKENSTATUSRESPONSE_H_
