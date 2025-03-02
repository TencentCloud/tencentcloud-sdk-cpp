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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_INTENTIONACTIONRESULT_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_INTENTIONACTIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/IntentionActionResultDetail.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 意愿核身点头确认模式结果
                */
                class IntentionActionResult : public AbstractModel
                {
                public:
                    IntentionActionResult();
                    ~IntentionActionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取意愿核身结果详细数据，与每段点头确认过程一一对应
                     * @return Details 意愿核身结果详细数据，与每段点头确认过程一一对应
                     * 
                     */
                    std::vector<IntentionActionResultDetail> GetDetails() const;

                    /**
                     * 设置意愿核身结果详细数据，与每段点头确认过程一一对应
                     * @param _details 意愿核身结果详细数据，与每段点头确认过程一一对应
                     * 
                     */
                    void SetDetails(const std::vector<IntentionActionResultDetail>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * 意愿核身结果详细数据，与每段点头确认过程一一对应
                     */
                    std::vector<IntentionActionResultDetail> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_INTENTIONACTIONRESULT_H_
