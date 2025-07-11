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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_KONGUPSTREAMLIST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_KONGUPSTREAMLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/KongUpstreamPreview.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * kong后端upstream列表
                */
                class KongUpstreamList : public AbstractModel
                {
                public:
                    KongUpstreamList();
                    ~KongUpstreamList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取无
                     * @return UpstreamList 无
                     * 
                     */
                    std::vector<KongUpstreamPreview> GetUpstreamList() const;

                    /**
                     * 设置无
                     * @param _upstreamList 无
                     * 
                     */
                    void SetUpstreamList(const std::vector<KongUpstreamPreview>& _upstreamList);

                    /**
                     * 判断参数 UpstreamList 是否已赋值
                     * @return UpstreamList 是否已赋值
                     * 
                     */
                    bool UpstreamListHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    std::vector<KongUpstreamPreview> m_upstreamList;
                    bool m_upstreamListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGUPSTREAMLIST_H_
