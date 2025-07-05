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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYLIVEVIDEOREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYLIVEVIDEOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * ModifyLiveVideo请求参数结构体
                */
                class ModifyLiveVideoRequest : public AbstractModel
                {
                public:
                    ModifyLiveVideoRequest();
                    ~ModifyLiveVideoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取视频ID 列表, 大小限制(100)
                     * @return IntIDs 视频ID 列表, 大小限制(100)
                     * 
                     */
                    std::vector<int64_t> GetIntIDs() const;

                    /**
                     * 设置视频ID 列表, 大小限制(100)
                     * @param _intIDs 视频ID 列表, 大小限制(100)
                     * 
                     */
                    void SetIntIDs(const std::vector<int64_t>& _intIDs);

                    /**
                     * 判断参数 IntIDs 是否已赋值
                     * @return IntIDs 是否已赋值
                     * 
                     */
                    bool IntIDsHasBeenSet() const;

                    /**
                     * 获取过期时间 秒 (-1: 为永不过期)
                     * @return ExpireTime 过期时间 秒 (-1: 为永不过期)
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置过期时间 秒 (-1: 为永不过期)
                     * @param _expireTime 过期时间 秒 (-1: 为永不过期)
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 视频ID 列表, 大小限制(100)
                     */
                    std::vector<int64_t> m_intIDs;
                    bool m_intIDsHasBeenSet;

                    /**
                     * 过期时间 秒 (-1: 为永不过期)
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYLIVEVIDEOREQUEST_H_
