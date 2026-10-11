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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_BUCKETPARTITIONING_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_BUCKETPARTITIONING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 分桶分区策略
                */
                class BucketPartitioning : public AbstractModel
                {
                public:
                    BucketPartitioning();
                    ~BucketPartitioning() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分桶字段
                     * @return FiledNames 分桶字段
                     * 
                     */
                    std::vector<std::string> GetFiledNames() const;

                    /**
                     * 设置分桶字段
                     * @param _filedNames 分桶字段
                     * 
                     */
                    void SetFiledNames(const std::vector<std::string>& _filedNames);

                    /**
                     * 判断参数 FiledNames 是否已赋值
                     * @return FiledNames 是否已赋值
                     * 
                     */
                    bool FiledNamesHasBeenSet() const;

                    /**
                     * 获取分桶数
                     * @return NumBuckets 分桶数
                     * 
                     */
                    std::string GetNumBuckets() const;

                    /**
                     * 设置分桶数
                     * @param _numBuckets 分桶数
                     * 
                     */
                    void SetNumBuckets(const std::string& _numBuckets);

                    /**
                     * 判断参数 NumBuckets 是否已赋值
                     * @return NumBuckets 是否已赋值
                     * 
                     */
                    bool NumBucketsHasBeenSet() const;

                private:

                    /**
                     * 分桶字段
                     */
                    std::vector<std::string> m_filedNames;
                    bool m_filedNamesHasBeenSet;

                    /**
                     * 分桶数
                     */
                    std::string m_numBuckets;
                    bool m_numBucketsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_BUCKETPARTITIONING_H_
