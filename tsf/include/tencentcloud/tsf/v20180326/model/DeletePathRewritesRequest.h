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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DELETEPATHREWRITESREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DELETEPATHREWRITESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DeletePathRewrites请求参数结构体
                */
                class DeletePathRewritesRequest : public AbstractModel
                {
                public:
                    DeletePathRewritesRequest();
                    ~DeletePathRewritesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取路径重写规则IDs
                     * @return PathRewriteIds 路径重写规则IDs
                     * 
                     */
                    std::vector<std::string> GetPathRewriteIds() const;

                    /**
                     * 设置路径重写规则IDs
                     * @param _pathRewriteIds 路径重写规则IDs
                     * 
                     */
                    void SetPathRewriteIds(const std::vector<std::string>& _pathRewriteIds);

                    /**
                     * 判断参数 PathRewriteIds 是否已赋值
                     * @return PathRewriteIds 是否已赋值
                     * 
                     */
                    bool PathRewriteIdsHasBeenSet() const;

                private:

                    /**
                     * 路径重写规则IDs
                     */
                    std::vector<std::string> m_pathRewriteIds;
                    bool m_pathRewriteIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DELETEPATHREWRITESREQUEST_H_
