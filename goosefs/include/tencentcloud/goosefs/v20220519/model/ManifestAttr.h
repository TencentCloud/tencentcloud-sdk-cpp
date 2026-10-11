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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_MANIFESTATTR_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_MANIFESTATTR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * 清单配置
                */
                class ManifestAttr : public AbstractModel
                {
                public:
                    ManifestAttr();
                    ~ManifestAttr() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>桶名字</p>
                     * @return Bucket <p>桶名字</p>
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置<p>桶名字</p>
                     * @param _bucket <p>桶名字</p>
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取<p>目录前缀</p>
                     * @return Prefix <p>目录前缀</p>
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置<p>目录前缀</p>
                     * @param _prefix <p>目录前缀</p>
                     * 
                     */
                    void SetPrefix(const std::string& _prefix);

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     * 
                     */
                    bool PrefixHasBeenSet() const;

                    /**
                     * 获取<p>文件属性</p>
                     * @return Attributes <p>文件属性</p>
                     * 
                     */
                    std::vector<std::string> GetAttributes() const;

                    /**
                     * 设置<p>文件属性</p>
                     * @param _attributes <p>文件属性</p>
                     * 
                     */
                    void SetAttributes(const std::vector<std::string>& _attributes);

                    /**
                     * 判断参数 Attributes 是否已赋值
                     * @return Attributes 是否已赋值
                     * 
                     */
                    bool AttributesHasBeenSet() const;

                    /**
                     * 获取<p>桶所在地域</p><p>桶所在的地域，可以不填，认为是实例所在地域</p>
                     * @return Region <p>桶所在地域</p><p>桶所在的地域，可以不填，认为是实例所在地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>桶所在地域</p><p>桶所在的地域，可以不填，认为是实例所在地域</p>
                     * @param _region <p>桶所在地域</p><p>桶所在的地域，可以不填，认为是实例所在地域</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * <p>桶名字</p>
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * <p>目录前缀</p>
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * <p>文件属性</p>
                     */
                    std::vector<std::string> m_attributes;
                    bool m_attributesHasBeenSet;

                    /**
                     * <p>桶所在地域</p><p>桶所在的地域，可以不填，认为是实例所在地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_MANIFESTATTR_H_
