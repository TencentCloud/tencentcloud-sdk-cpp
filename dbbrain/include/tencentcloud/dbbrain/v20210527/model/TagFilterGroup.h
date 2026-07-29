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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TAGFILTERGROUP_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TAGFILTERGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/TagPair.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 标签过滤组。组内 TagPairs 之间为 OR 关系；不同 TagFilterGroup 之间为 AND 关系。
                */
                class TagFilterGroup : public AbstractModel
                {
                public:
                    TagFilterGroup();
                    ~TagFilterGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>过滤条件-标签组</p>
                     * @return TagPairs <p>过滤条件-标签组</p>
                     * 
                     */
                    std::vector<TagPair> GetTagPairs() const;

                    /**
                     * 设置<p>过滤条件-标签组</p>
                     * @param _tagPairs <p>过滤条件-标签组</p>
                     * 
                     */
                    void SetTagPairs(const std::vector<TagPair>& _tagPairs);

                    /**
                     * 判断参数 TagPairs 是否已赋值
                     * @return TagPairs 是否已赋值
                     * 
                     */
                    bool TagPairsHasBeenSet() const;

                private:

                    /**
                     * <p>过滤条件-标签组</p>
                     */
                    std::vector<TagPair> m_tagPairs;
                    bool m_tagPairsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TAGFILTERGROUP_H_
