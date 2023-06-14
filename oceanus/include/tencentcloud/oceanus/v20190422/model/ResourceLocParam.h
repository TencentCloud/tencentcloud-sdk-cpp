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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCELOCPARAM_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCELOCPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 资源参数描述
                */
                class ResourceLocParam : public AbstractModel
                {
                public:
                    ResourceLocParam();
                    ~ResourceLocParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源bucket
                     * @return Bucket 资源bucket
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置资源bucket
                     * @param _bucket 资源bucket
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
                     * 获取资源路径
                     * @return Path 资源路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置资源路径
                     * @param _path 资源路径
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取资源所在地域，如果不填，则使用Resource的Region
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 资源所在地域，如果不填，则使用Resource的Region
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置资源所在地域，如果不填，则使用Resource的Region
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 资源所在地域，如果不填，则使用Resource的Region
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 资源bucket
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 资源路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 资源所在地域，如果不填，则使用Resource的Region
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCELOCPARAM_H_
