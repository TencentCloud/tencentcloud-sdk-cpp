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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_ASSETCOSDETAIL_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_ASSETCOSDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/Note.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 数据资产报告-cos的资产详情
                */
                class AssetCosDetail : public AbstractModel
                {
                public:
                    AssetCosDetail();
                    ~AssetCosDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取桶的名
                     * @return Bucket 桶的名
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置桶的名
                     * @param _bucket 桶的名
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
                     * 获取数据源类型
                     * @return DataType 数据源类型
                     * 
                     */
                    std::string GetDataType() const;

                    /**
                     * 设置数据源类型
                     * @param _dataType 数据源类型
                     * 
                     */
                    void SetDataType(const std::string& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     * 
                     */
                    bool DataTypeHasBeenSet() const;

                    /**
                     * 获取文件的个数
                     * @return FileNums 文件的个数
                     * 
                     */
                    int64_t GetFileNums() const;

                    /**
                     * 设置文件的个数
                     * @param _fileNums 文件的个数
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
                     * 获取敏感的文件个数
                     * @return SensitiveFileNums 敏感的文件个数
                     * 
                     */
                    int64_t GetSensitiveFileNums() const;

                    /**
                     * 设置敏感的文件个数
                     * @param _sensitiveFileNums 敏感的文件个数
                     * 
                     */
                    void SetSensitiveFileNums(const int64_t& _sensitiveFileNums);

                    /**
                     * 判断参数 SensitiveFileNums 是否已赋值
                     * @return SensitiveFileNums 是否已赋值
                     * 
                     */
                    bool SensitiveFileNumsHasBeenSet() const;

                    /**
                     * 获取敏感分布
                     * @return DistributionData 敏感分布
                     * 
                     */
                    std::vector<Note> GetDistributionData() const;

                    /**
                     * 设置敏感分布
                     * @param _distributionData 敏感分布
                     * 
                     */
                    void SetDistributionData(const std::vector<Note>& _distributionData);

                    /**
                     * 判断参数 DistributionData 是否已赋值
                     * @return DistributionData 是否已赋值
                     * 
                     */
                    bool DistributionDataHasBeenSet() const;

                    /**
                     * 获取cos文件的敏感数据个数
                     * @return MatchedNum cos文件的敏感数据个数
                     * 
                     */
                    int64_t GetMatchedNum() const;

                    /**
                     * 设置cos文件的敏感数据个数
                     * @param _matchedNum cos文件的敏感数据个数
                     * 
                     */
                    void SetMatchedNum(const int64_t& _matchedNum);

                    /**
                     * 判断参数 MatchedNum 是否已赋值
                     * @return MatchedNum 是否已赋值
                     * 
                     */
                    bool MatchedNumHasBeenSet() const;

                private:

                    /**
                     * 桶的名
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 数据源类型
                     */
                    std::string m_dataType;
                    bool m_dataTypeHasBeenSet;

                    /**
                     * 文件的个数
                     */
                    int64_t m_fileNums;
                    bool m_fileNumsHasBeenSet;

                    /**
                     * 敏感的文件个数
                     */
                    int64_t m_sensitiveFileNums;
                    bool m_sensitiveFileNumsHasBeenSet;

                    /**
                     * 敏感分布
                     */
                    std::vector<Note> m_distributionData;
                    bool m_distributionDataHasBeenSet;

                    /**
                     * cos文件的敏感数据个数
                     */
                    int64_t m_matchedNum;
                    bool m_matchedNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_ASSETCOSDETAIL_H_
