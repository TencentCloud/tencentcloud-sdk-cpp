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

#ifndef TENCENTCLOUD_IC_V20190307_MODEL_RENEWCARDSREQUEST_H_
#define TENCENTCLOUD_IC_V20190307_MODEL_RENEWCARDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ic
    {
        namespace V20190307
        {
            namespace Model
            {
                /**
                * RenewCards请求参数结构体
                */
                class RenewCardsRequest : public AbstractModel
                {
                public:
                    RenewCardsRequest();
                    ~RenewCardsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return Sdkappid 应用ID
                     * 
                     */
                    uint64_t GetSdkappid() const;

                    /**
                     * 设置应用ID
                     * @param _sdkappid 应用ID
                     * 
                     */
                    void SetSdkappid(const uint64_t& _sdkappid);

                    /**
                     * 判断参数 Sdkappid 是否已赋值
                     * @return Sdkappid 是否已赋值
                     * 
                     */
                    bool SdkappidHasBeenSet() const;

                    /**
                     * 获取续费的iccid
                     * @return Iccids 续费的iccid
                     * 
                     */
                    std::vector<std::string> GetIccids() const;

                    /**
                     * 设置续费的iccid
                     * @param _iccids 续费的iccid
                     * 
                     */
                    void SetIccids(const std::vector<std::string>& _iccids);

                    /**
                     * 判断参数 Iccids 是否已赋值
                     * @return Iccids 是否已赋值
                     * 
                     */
                    bool IccidsHasBeenSet() const;

                    /**
                     * 获取续费的周期（单位：月）
                     * @return RenewNum 续费的周期（单位：月）
                     * 
                     */
                    uint64_t GetRenewNum() const;

                    /**
                     * 设置续费的周期（单位：月）
                     * @param _renewNum 续费的周期（单位：月）
                     * 
                     */
                    void SetRenewNum(const uint64_t& _renewNum);

                    /**
                     * 判断参数 RenewNum 是否已赋值
                     * @return RenewNum 是否已赋值
                     * 
                     */
                    bool RenewNumHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    uint64_t m_sdkappid;
                    bool m_sdkappidHasBeenSet;

                    /**
                     * 续费的iccid
                     */
                    std::vector<std::string> m_iccids;
                    bool m_iccidsHasBeenSet;

                    /**
                     * 续费的周期（单位：月）
                     */
                    uint64_t m_renewNum;
                    bool m_renewNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IC_V20190307_MODEL_RENEWCARDSREQUEST_H_
