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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_COSASSET_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_COSASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 数据资产报告-cos的敏感资产报告详情
                */
                class CosAsset : public AbstractModel
                {
                public:
                    CosAsset();
                    ~CosAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取桶的个数
                     * @return BucketNums 桶的个数
                     * 
                     */
                    int64_t GetBucketNums() const;

                    /**
                     * 设置桶的个数
                     * @param _bucketNums 桶的个数
                     * 
                     */
                    void SetBucketNums(const int64_t& _bucketNums);

                    /**
                     * 判断参数 BucketNums 是否已赋值
                     * @return BucketNums 是否已赋值
                     * 
                     */
                    bool BucketNumsHasBeenSet() const;

                    /**
                     * 获取敏感桶的个数
                     * @return SensitiveBucketNums 敏感桶的个数
                     * 
                     */
                    int64_t GetSensitiveBucketNums() const;

                    /**
                     * 设置敏感桶的个数
                     * @param _sensitiveBucketNums 敏感桶的个数
                     * 
                     */
                    void SetSensitiveBucketNums(const int64_t& _sensitiveBucketNums);

                    /**
                     * 判断参数 SensitiveBucketNums 是否已赋值
                     * @return SensitiveBucketNums 是否已赋值
                     * 
                     */
                    bool SensitiveBucketNumsHasBeenSet() const;

                    /**
                     * 获取文件个数
                     * @return FileNums 文件个数
                     * 
                     */
                    int64_t GetFileNums() const;

                    /**
                     * 设置文件个数
                     * @param _fileNums 文件个数
                     * 
                     */
                    void SetFileNums(const int64_t& _fileNums);

                    /**
                     * 判断参数 FileNums 是否已赋值
                     * @return FileNums 是否已赋值
                     * 
                     */
                    bool FileNumsHasBeenSet() const;

                    /**
                     * 获取敏感文件的个数
                     * @return SensitiveFileNums 敏感文件的个数
                     * 
                     */
                    int64_t GetSensitiveFileNums() const;

                    /**
                     * 设置敏感文件的个数
                     * @param _sensitiveFileNums 敏感文件的个数
                     * 
                     */
                    void SetSensitiveFileNums(const int64_t& _sensitiveFileNums);

                    /**
                     * 判断参数 SensitiveFileNums 是否已赋值
                     * @return SensitiveFileNums 是否已赋值
                     * 
                     */
                    bool SensitiveFileNumsHasBeenSet() const;

                private:

                    /**
                     * 桶的个数
                     */
                    int64_t m_bucketNums;
                    bool m_bucketNumsHasBeenSet;

                    /**
                     * 敏感桶的个数
                     */
                    int64_t m_sensitiveBucketNums;
                    bool m_sensitiveBucketNumsHasBeenSet;

                    /**
                     * 文件个数
                     */
                    int64_t m_fileNums;
                    bool m_fileNumsHasBeenSet;

                    /**
                     * 敏感文件的个数
                     */
                    int64_t m_sensitiveFileNums;
                    bool m_sensitiveFileNumsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_COSASSET_H_
