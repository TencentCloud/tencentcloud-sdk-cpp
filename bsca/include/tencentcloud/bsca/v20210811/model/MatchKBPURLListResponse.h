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

#ifndef TENCENTCLOUD_BSCA_V20210811_MODEL_MATCHKBPURLLISTRESPONSE_H_
#define TENCENTCLOUD_BSCA_V20210811_MODEL_MATCHKBPURLLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bsca/v20210811/model/PURL.h>


namespace TencentCloud
{
    namespace Bsca
    {
        namespace V20210811
        {
            namespace Model
            {
                /**
                * MatchKBPURLList返回参数结构体
                */
                class MatchKBPURLListResponse : public AbstractModel
                {
                public:
                    MatchKBPURLListResponse();
                    ~MatchKBPURLListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取组件列表。
                     * @return PURLList 组件列表。
                     * 
                     */
                    std::vector<PURL> GetPURLList() const;

                    /**
                     * 判断参数 PURLList 是否已赋值
                     * @return PURLList 是否已赋值
                     * 
                     */
                    bool PURLListHasBeenSet() const;

                    /**
                     * 获取是否命中数据库。
                     * @return Hit 是否命中数据库。
                     * 
                     */
                    bool GetHit() const;

                    /**
                     * 判断参数 Hit 是否已赋值
                     * @return Hit 是否已赋值
                     * 
                     */
                    bool HitHasBeenSet() const;

                private:

                    /**
                     * 组件列表。
                     */
                    std::vector<PURL> m_pURLList;
                    bool m_pURLListHasBeenSet;

                    /**
                     * 是否命中数据库。
                     */
                    bool m_hit;
                    bool m_hitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BSCA_V20210811_MODEL_MATCHKBPURLLISTRESPONSE_H_
