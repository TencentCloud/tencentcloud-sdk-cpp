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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_KONGUSERTAGKV_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_KONGUSERTAGKV_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 用户业务标签的 KV 表示（路由/服务标签分组）
                */
                class KongUserTagKV : public AbstractModel
                {
                public:
                    KongUserTagKV();
                    ~KongUserTagKV() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>标签 ID</p>
                     * @return TagId <p>标签 ID</p>
                     * 
                     */
                    uint64_t GetTagId() const;

                    /**
                     * 设置<p>标签 ID</p>
                     * @param _tagId <p>标签 ID</p>
                     * 
                     */
                    void SetTagId(const uint64_t& _tagId);

                    /**
                     * 判断参数 TagId 是否已赋值
                     * @return TagId 是否已赋值
                     * 
                     */
                    bool TagIdHasBeenSet() const;

                    /**
                     * 获取<p>标签 Key</p>
                     * @return TagKey <p>标签 Key</p>
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置<p>标签 Key</p>
                     * @param _tagKey <p>标签 Key</p>
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取<p>标签 Value</p>
                     * @return TagValue <p>标签 Value</p>
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置<p>标签 Value</p>
                     * @param _tagValue <p>标签 Value</p>
                     * 
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     * 
                     */
                    bool TagValueHasBeenSet() const;

                private:

                    /**
                     * <p>标签 ID</p>
                     */
                    uint64_t m_tagId;
                    bool m_tagIdHasBeenSet;

                    /**
                     * <p>标签 Key</p>
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * <p>标签 Value</p>
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGUSERTAGKV_H_
