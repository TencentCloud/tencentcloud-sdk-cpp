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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_VITALSIGNSINFO_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_VITALSIGNSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 生命体征风险
                */
                class VitalSignsInfo : public AbstractModel
                {
                public:
                    VitalSignsInfo();
                    ~VitalSignsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否包含风险
                     * @return Hit 是否包含风险
                     * 
                     */
                    bool GetHit() const;

                    /**
                     * 设置是否包含风险
                     * @param _hit 是否包含风险
                     * 
                     */
                    void SetHit(const bool& _hit);

                    /**
                     * 判断参数 Hit 是否已赋值
                     * @return Hit 是否已赋值
                     * 
                     */
                    bool HitHasBeenSet() const;

                    /**
                     * 获取提示
                     * @return Tips 提示
                     * 
                     */
                    std::string GetTips() const;

                    /**
                     * 设置提示
                     * @param _tips 提示
                     * 
                     */
                    void SetTips(const std::string& _tips);

                    /**
                     * 判断参数 Tips 是否已赋值
                     * @return Tips 是否已赋值
                     * 
                     */
                    bool TipsHasBeenSet() const;

                private:

                    /**
                     * 是否包含风险
                     */
                    bool m_hit;
                    bool m_hitHasBeenSet;

                    /**
                     * 提示
                     */
                    std::string m_tips;
                    bool m_tipsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_VITALSIGNSINFO_H_
