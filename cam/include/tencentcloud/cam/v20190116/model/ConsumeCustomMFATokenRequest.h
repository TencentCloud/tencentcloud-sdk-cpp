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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_CONSUMECUSTOMMFATOKENREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_CONSUMECUSTOMMFATOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * ConsumeCustomMFAToken请求参数结构体
                */
                class ConsumeCustomMFATokenRequest : public AbstractModel
                {
                public:
                    ConsumeCustomMFATokenRequest();
                    ~ConsumeCustomMFATokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义多因子验证Token
                     * @return MFAToken 自定义多因子验证Token
                     * 
                     */
                    std::string GetMFAToken() const;

                    /**
                     * 设置自定义多因子验证Token
                     * @param _mFAToken 自定义多因子验证Token
                     * 
                     */
                    void SetMFAToken(const std::string& _mFAToken);

                    /**
                     * 判断参数 MFAToken 是否已赋值
                     * @return MFAToken 是否已赋值
                     * 
                     */
                    bool MFATokenHasBeenSet() const;

                private:

                    /**
                     * 自定义多因子验证Token
                     */
                    std::string m_mFAToken;
                    bool m_mFATokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CONSUMECUSTOMMFATOKENREQUEST_H_
