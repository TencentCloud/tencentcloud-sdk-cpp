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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CHECKCNAMESTATUSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CHECKCNAMESTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CnameStatus.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CheckCnameStatus返回参数结构体
                */
                class CheckCnameStatusResponse : public AbstractModel
                {
                public:
                    CheckCnameStatusResponse();
                    ~CheckCnameStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取加速域名 CNAME 状态信息列表。
                     * @return CnameStatus 加速域名 CNAME 状态信息列表。
                     * 
                     */
                    std::vector<CnameStatus> GetCnameStatus() const;

                    /**
                     * 判断参数 CnameStatus 是否已赋值
                     * @return CnameStatus 是否已赋值
                     * 
                     */
                    bool CnameStatusHasBeenSet() const;

                private:

                    /**
                     * 加速域名 CNAME 状态信息列表。
                     */
                    std::vector<CnameStatus> m_cnameStatus;
                    bool m_cnameStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CHECKCNAMESTATUSRESPONSE_H_
