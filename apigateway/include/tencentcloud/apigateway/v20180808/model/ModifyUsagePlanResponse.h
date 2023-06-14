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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYUSAGEPLANRESPONSE_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYUSAGEPLANRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/UsagePlanInfo.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * ModifyUsagePlan返回参数结构体
                */
                class ModifyUsagePlanResponse : public AbstractModel
                {
                public:
                    ModifyUsagePlanResponse();
                    ~ModifyUsagePlanResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取使用计划详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 使用计划详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UsagePlanInfo GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 使用计划详情。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UsagePlanInfo m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYUSAGEPLANRESPONSE_H_
