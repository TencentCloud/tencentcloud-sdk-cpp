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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWAPPROVERSRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWAPPROVERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/FillError.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateFlowApprovers返回参数结构体
                */
                class CreateFlowApproversResponse : public AbstractModel
                {
                public:
                    CreateFlowApproversResponse();
                    ~CreateFlowApproversResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取批量补充签署人时，补充失败的报错说明

注:`目前仅补充动态签署人时会返回补充失败的原因`
                     * @return FillError 批量补充签署人时，补充失败的报错说明

注:`目前仅补充动态签署人时会返回补充失败的原因`
                     * 
                     */
                    std::vector<FillError> GetFillError() const;

                    /**
                     * 判断参数 FillError 是否已赋值
                     * @return FillError 是否已赋值
                     * 
                     */
                    bool FillErrorHasBeenSet() const;

                private:

                    /**
                     * 批量补充签署人时，补充失败的报错说明

注:`目前仅补充动态签署人时会返回补充失败的原因`
                     */
                    std::vector<FillError> m_fillError;
                    bool m_fillErrorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWAPPROVERSRESPONSE_H_
