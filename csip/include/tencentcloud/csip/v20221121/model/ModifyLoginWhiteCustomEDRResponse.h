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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYLOGINWHITECUSTOMEDRRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYLOGINWHITECUSTOMEDRRESPONSE_H_

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
                * ModifyLoginWhiteCustomEDR返回参数结构体
                */
                class ModifyLoginWhiteCustomEDRResponse : public AbstractModel
                {
                public:
                    ModifyLoginWhiteCustomEDRResponse();
                    ~ModifyLoginWhiteCustomEDRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>失败的账号</p>
                     * @return FailedAppIds <p>失败的账号</p>
                     * 
                     */
                    std::vector<uint64_t> GetFailedAppIds() const;

                    /**
                     * 判断参数 FailedAppIds 是否已赋值
                     * @return FailedAppIds 是否已赋值
                     * 
                     */
                    bool FailedAppIdsHasBeenSet() const;

                private:

                    /**
                     * <p>失败的账号</p>
                     */
                    std::vector<uint64_t> m_failedAppIds;
                    bool m_failedAppIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYLOGINWHITECUSTOMEDRRESPONSE_H_
