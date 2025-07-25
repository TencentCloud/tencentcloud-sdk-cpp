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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_MINIAPPCREATEFLOWPAGEOPTION_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_MINIAPPCREATEFLOWPAGEOPTION_H_

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
                * 小程序发起页面个性化配置参数
                */
                class MiniAppCreateFlowPageOption : public AbstractModel
                {
                public:
                    MiniAppCreateFlowPageOption();
                    ~MiniAppCreateFlowPageOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发起后隐藏签署码
                     * @return HideSignCodeAfterStart 发起后隐藏签署码
                     * 
                     */
                    bool GetHideSignCodeAfterStart() const;

                    /**
                     * 设置发起后隐藏签署码
                     * @param _hideSignCodeAfterStart 发起后隐藏签署码
                     * 
                     */
                    void SetHideSignCodeAfterStart(const bool& _hideSignCodeAfterStart);

                    /**
                     * 判断参数 HideSignCodeAfterStart 是否已赋值
                     * @return HideSignCodeAfterStart 是否已赋值
                     * 
                     */
                    bool HideSignCodeAfterStartHasBeenSet() const;

                private:

                    /**
                     * 发起后隐藏签署码
                     */
                    bool m_hideSignCodeAfterStart;
                    bool m_hideSignCodeAfterStartHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_MINIAPPCREATEFLOWPAGEOPTION_H_
