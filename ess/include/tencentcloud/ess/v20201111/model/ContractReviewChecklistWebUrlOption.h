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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CONTRACTREVIEWCHECKLISTWEBURLOPTION_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CONTRACTREVIEWCHECKLISTWEBURLOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 合同审查清单个性化参数，用于控制页面的展示内容
                */
                class ContractReviewChecklistWebUrlOption : public AbstractModel
                {
                public:
                    ContractReviewChecklistWebUrlOption();
                    ~ContractReviewChecklistWebUrlOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取禁用新建清单功能。默认 false，设置为 true 会隐藏界面的新建按钮。
                     * @return DisableCreateChecklist 禁用新建清单功能。默认 false，设置为 true 会隐藏界面的新建按钮。
                     * 
                     */
                    bool GetDisableCreateChecklist() const;

                    /**
                     * 设置禁用新建清单功能。默认 false，设置为 true 会隐藏界面的新建按钮。
                     * @param _disableCreateChecklist 禁用新建清单功能。默认 false，设置为 true 会隐藏界面的新建按钮。
                     * 
                     */
                    void SetDisableCreateChecklist(const bool& _disableCreateChecklist);

                    /**
                     * 判断参数 DisableCreateChecklist 是否已赋值
                     * @return DisableCreateChecklist 是否已赋值
                     * 
                     */
                    bool DisableCreateChecklistHasBeenSet() const;

                private:

                    /**
                     * 禁用新建清单功能。默认 false，设置为 true 会隐藏界面的新建按钮。
                     */
                    bool m_disableCreateChecklist;
                    bool m_disableCreateChecklistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CONTRACTREVIEWCHECKLISTWEBURLOPTION_H_
