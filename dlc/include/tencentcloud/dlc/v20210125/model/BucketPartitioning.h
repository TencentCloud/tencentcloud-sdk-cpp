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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_BUCKETPARTITIONING_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_BUCKETPARTITIONING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * tcc BucketPartitioning定义
                */
                class BucketPartitioning : public AbstractModel
                {
                public:
                    BucketPartitioning();
                    ~BucketPartitioning() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>分桶字段</p>
                     * @return FieldNames <p>分桶字段</p>
                     * 
                     */
                    std::vector<std::string> GetFieldNames() const;

                    /**
                     * 设置<p>分桶字段</p>
                     * @param _fieldNames <p>分桶字段</p>
                     * 
                     */
                    void SetFieldNames(const std::vector<std::string>& _fieldNames);

                    /**
                     * 判断参数 FieldNames 是否已赋值
                     * @return FieldNames 是否已赋值
                     * 
                     */
                    bool FieldNamesHasBeenSet() const;

                    /**
                     * 获取<p>分桶数</p>
                     * @return NumBuckets <p>分桶数</p>
                     * 
                     */
                    uint64_t GetNumBuckets() const;

                    /**
                     * 设置<p>分桶数</p>
                     * @param _numBuckets <p>分桶数</p>
                     * 
                     */
                    void SetNumBuckets(const uint64_t& _numBuckets);

                    /**
                     * 判断参数 NumBuckets 是否已赋值
                     * @return NumBuckets 是否已赋值
                     * 
                     */
                    bool NumBucketsHasBeenSet() const;

                private:

                    /**
                     * <p>分桶字段</p>
                     */
                    std::vector<std::string> m_fieldNames;
                    bool m_fieldNamesHasBeenSet;

                    /**
                     * <p>分桶数</p>
                     */
                    uint64_t m_numBuckets;
                    bool m_numBucketsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_BUCKETPARTITIONING_H_
