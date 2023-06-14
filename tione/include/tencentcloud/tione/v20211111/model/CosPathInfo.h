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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_COSPATHINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_COSPATHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * cos的路径信息
                */
                class CosPathInfo : public AbstractModel
                {
                public:
                    CosPathInfo();
                    ~CosPathInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储桶
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bucket 存储桶
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置存储桶
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bucket 存储桶
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 所在地域
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

                    /**
                     * 获取路径列表，目前只支持单个
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Paths 路径列表，目前只支持单个
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPaths() const;

                    /**
                     * 设置路径列表，目前只支持单个
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paths 路径列表，目前只支持单个
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaths(const std::vector<std::string>& _paths);

                    /**
                     * 判断参数 Paths 是否已赋值
                     * @return Paths 是否已赋值
                     * 
                     */
                    bool PathsHasBeenSet() const;

                private:

                    /**
                     * 存储桶
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 路径列表，目前只支持单个
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_paths;
                    bool m_pathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_COSPATHINFO_H_
