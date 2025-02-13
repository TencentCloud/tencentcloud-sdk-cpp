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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRISKDNSPOLICYRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRISKDNSPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyRiskDnsPolicy返回参数结构体
                */
                class ModifyRiskDnsPolicyResponse : public AbstractModel
                {
                public:
                    ModifyRiskDnsPolicyResponse();
                    ~ModifyRiskDnsPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取0：没有重复，1：和现有策略重复
                     * @return Repeat 0：没有重复，1：和现有策略重复
                     * 
                     */
                    int64_t GetRepeat() const;

                    /**
                     * 判断参数 Repeat 是否已赋值
                     * @return Repeat 是否已赋值
                     * 
                     */
                    bool RepeatHasBeenSet() const;

                private:

                    /**
                     * 0：没有重复，1：和现有策略重复
                     */
                    int64_t m_repeat;
                    bool m_repeatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRISKDNSPOLICYRESPONSE_H_
