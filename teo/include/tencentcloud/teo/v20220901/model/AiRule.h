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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_AIRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_AIRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * AI规则引擎防护
                */
                class AiRule : public AbstractModel
                {
                public:
                    AiRule();
                    ~AiRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AI规则引擎状态，取值有：
<li> smart_status_close：关闭；</li>
<li> smart_status_open：拦截处置；</li>
<li> smart_status_observe：观察处置。</li>
                     * @return Mode AI规则引擎状态，取值有：
<li> smart_status_close：关闭；</li>
<li> smart_status_open：拦截处置；</li>
<li> smart_status_observe：观察处置。</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置AI规则引擎状态，取值有：
<li> smart_status_close：关闭；</li>
<li> smart_status_open：拦截处置；</li>
<li> smart_status_observe：观察处置。</li>
                     * @param _mode AI规则引擎状态，取值有：
<li> smart_status_close：关闭；</li>
<li> smart_status_open：拦截处置；</li>
<li> smart_status_observe：观察处置。</li>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * AI规则引擎状态，取值有：
<li> smart_status_close：关闭；</li>
<li> smart_status_open：拦截处置；</li>
<li> smart_status_observe：观察处置。</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_AIRULE_H_
