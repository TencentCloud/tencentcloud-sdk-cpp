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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBESAFEAUTHFLAGCOLLREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBESAFEAUTHFLAGCOLLREQUEST_H_

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
                * DescribeSafeAuthFlagColl请求参数结构体
                */
                class DescribeSafeAuthFlagCollRequest : public AbstractModel
                {
                public:
                    DescribeSafeAuthFlagCollRequest();
                    ~DescribeSafeAuthFlagCollRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取子账号
                     * @return SubUin 子账号
                     * 
                     */
                    uint64_t GetSubUin() const;

                    /**
                     * 设置子账号
                     * @param _subUin 子账号
                     * 
                     */
                    void SetSubUin(const uint64_t& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                private:

                    /**
                     * 子账号
                     */
                    uint64_t m_subUin;
                    bool m_subUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBESAFEAUTHFLAGCOLLREQUEST_H_
