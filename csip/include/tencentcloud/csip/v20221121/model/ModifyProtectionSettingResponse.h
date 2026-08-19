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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPROTECTIONSETTINGRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPROTECTIONSETTINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyProtectionSetting返回参数结构体
                */
                class ModifyProtectionSettingResponse : public AbstractModel
                {
                public:
                    ModifyProtectionSettingResponse();
                    ~ModifyProtectionSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取绑定失败的QUUID,失败原因为未绑定重保授权包
                     * @return FailList 绑定失败的QUUID,失败原因为未绑定重保授权包
                     * 
                     */
                    std::vector<std::string> GetFailList() const;

                    /**
                     * 判断参数 FailList 是否已赋值
                     * @return FailList 是否已赋值
                     * 
                     */
                    bool FailListHasBeenSet() const;

                private:

                    /**
                     * 绑定失败的QUUID,失败原因为未绑定重保授权包
                     */
                    std::vector<std::string> m_failList;
                    bool m_failListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPROTECTIONSETTINGRESPONSE_H_
