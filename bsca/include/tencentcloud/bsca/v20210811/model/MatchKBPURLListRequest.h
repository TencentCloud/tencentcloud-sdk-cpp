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

#ifndef TENCENTCLOUD_BSCA_V20210811_MODEL_MATCHKBPURLLISTREQUEST_H_
#define TENCENTCLOUD_BSCA_V20210811_MODEL_MATCHKBPURLLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bsca
    {
        namespace V20210811
        {
            namespace Model
            {
                /**
                * MatchKBPURLList请求参数结构体
                */
                class MatchKBPURLListRequest : public AbstractModel
                {
                public:
                    MatchKBPURLListRequest();
                    ~MatchKBPURLListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SHA1。
                     * @return SHA1 SHA1。
                     * 
                     */
                    std::string GetSHA1() const;

                    /**
                     * 设置SHA1。
                     * @param _sHA1 SHA1。
                     * 
                     */
                    void SetSHA1(const std::string& _sHA1);

                    /**
                     * 判断参数 SHA1 是否已赋值
                     * @return SHA1 是否已赋值
                     * 
                     */
                    bool SHA1HasBeenSet() const;

                private:

                    /**
                     * SHA1。
                     */
                    std::string m_sHA1;
                    bool m_sHA1HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BSCA_V20210811_MODEL_MATCHKBPURLLISTREQUEST_H_
