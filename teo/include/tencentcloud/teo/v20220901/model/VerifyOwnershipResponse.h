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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_VERIFYOWNERSHIPRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_VERIFYOWNERSHIPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * VerifyOwnership返回参数结构体
                */
                class VerifyOwnershipResponse : public AbstractModel
                {
                public:
                    VerifyOwnershipResponse();
                    ~VerifyOwnershipResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取归属权验证结果。
<li>success：验证成功；</li>
<li>fail：验证失败。</li>
                     * @return Status 归属权验证结果。
<li>success：验证成功；</li>
<li>fail：验证失败。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取当验证结果为不通过时，该字段会返回原因，协助您排查问题。
                     * @return Result 当验证结果为不通过时，该字段会返回原因，协助您排查问题。
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 归属权验证结果。
<li>success：验证成功；</li>
<li>fail：验证失败。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 当验证结果为不通过时，该字段会返回原因，协助您排查问题。
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_VERIFYOWNERSHIPRESPONSE_H_
