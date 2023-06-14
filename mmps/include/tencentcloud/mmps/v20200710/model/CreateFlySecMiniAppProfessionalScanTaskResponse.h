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

#ifndef TENCENTCLOUD_MMPS_V20200710_MODEL_CREATEFLYSECMINIAPPPROFESSIONALSCANTASKRESPONSE_H_
#define TENCENTCLOUD_MMPS_V20200710_MODEL_CREATEFLYSECMINIAPPPROFESSIONALSCANTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mmps
    {
        namespace V20200710
        {
            namespace Model
            {
                /**
                * CreateFlySecMiniAppProfessionalScanTask返回参数结构体
                */
                class CreateFlySecMiniAppProfessionalScanTaskResponse : public AbstractModel
                {
                public:
                    CreateFlySecMiniAppProfessionalScanTaskResponse();
                    ~CreateFlySecMiniAppProfessionalScanTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回值, 0:成功, 其他值请查看“返回值”定义
                     * @return Ret 返回值, 0:成功, 其他值请查看“返回值”定义
                     * 
                     */
                    int64_t GetRet() const;

                    /**
                     * 判断参数 Ret 是否已赋值
                     * @return Ret 是否已赋值
                     * 
                     */
                    bool RetHasBeenSet() const;

                private:

                    /**
                     * 返回值, 0:成功, 其他值请查看“返回值”定义
                     */
                    int64_t m_ret;
                    bool m_retHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MMPS_V20200710_MODEL_CREATEFLYSECMINIAPPPROFESSIONALSCANTASKRESPONSE_H_
