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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_RESOURCETAG_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_RESOURCETAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * 标签对象，包含tagKey & tagValue
                */
                class ResourceTag : public AbstractModel
                {
                public:
                    ResourceTag();
                    ~ResourceTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签键key
                     * @return TagKey 标签键key
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置标签键key
                     * @param _tagKey 标签键key
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
                     * 获取标签值value
                     * @return TagValue 标签值value
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置标签值value
                     * @param _tagValue 标签值value
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
                     * 标签键key
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * 标签值value
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_RESOURCETAG_H_
