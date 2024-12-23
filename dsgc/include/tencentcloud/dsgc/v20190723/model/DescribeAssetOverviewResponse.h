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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEASSETOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEASSETOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeAssetOverview返回参数结构体
                */
                class DescribeAssetOverviewResponse : public AbstractModel
                {
                public:
                    DescribeAssetOverviewResponse();
                    ~DescribeAssetOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库实例id
                     * @return DBInstanceNums 数据库实例id
                     * 
                     */
                    int64_t GetDBInstanceNums() const;

                    /**
                     * 判断参数 DBInstanceNums 是否已赋值
                     * @return DBInstanceNums 是否已赋值
                     * 
                     */
                    bool DBInstanceNumsHasBeenSet() const;

                    /**
                     * 获取数据库个数
                     * @return DBNums 数据库个数
                     * 
                     */
                    int64_t GetDBNums() const;

                    /**
                     * 判断参数 DBNums 是否已赋值
                     * @return DBNums 是否已赋值
                     * 
                     */
                    bool DBNumsHasBeenSet() const;

                    /**
                     * 获取表的个数
                     * @return TableNums 表的个数
                     * 
                     */
                    int64_t GetTableNums() const;

                    /**
                     * 判断参数 TableNums 是否已赋值
                     * @return TableNums 是否已赋值
                     * 
                     */
                    bool TableNumsHasBeenSet() const;

                    /**
                     * 获取字段个数
                     * @return FieldNums 字段个数
                     * 
                     */
                    int64_t GetFieldNums() const;

                    /**
                     * 判断参数 FieldNums 是否已赋值
                     * @return FieldNums 是否已赋值
                     * 
                     */
                    bool FieldNumsHasBeenSet() const;

                    /**
                     * 获取数据库实例的分布情况
                     * @return DBInstanceDistribution 数据库实例的分布情况
                     * 
                     */
                    std::vector<Note> GetDBInstanceDistribution() const;

                    /**
                     * 判断参数 DBInstanceDistribution 是否已赋值
                     * @return DBInstanceDistribution 是否已赋值
                     * 
                     */
                    bool DBInstanceDistributionHasBeenSet() const;

                    /**
                     * 获取db分布情况
                     * @return DBDistribution db分布情况
                     * 
                     */
                    std::vector<Note> GetDBDistribution() const;

                    /**
                     * 判断参数 DBDistribution 是否已赋值
                     * @return DBDistribution 是否已赋值
                     * 
                     */
                    bool DBDistributionHasBeenSet() const;

                    /**
                     * 获取cos桶的数量
                     * @return BucketNums cos桶的数量
                     * 
                     */
                    int64_t GetBucketNums() const;

                    /**
                     * 判断参数 BucketNums 是否已赋值
                     * @return BucketNums 是否已赋值
                     * 
                     */
                    bool BucketNumsHasBeenSet() const;

                    /**
                     * 获取文件个数
                     * @return FileNums 文件个数
                     * 
                     */
                    int64_t GetFileNums() const;

                    /**
                     * 判断参数 FileNums 是否已赋值
                     * @return FileNums 是否已赋值
                     * 
                     */
                    bool FileNumsHasBeenSet() const;

                    /**
                     * 获取用于对用户进行提示信息
                     * @return Remark 用于对用户进行提示信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取es实例数量
                     * @return EsInstanceNums es实例数量
                     * 
                     */
                    uint64_t GetEsInstanceNums() const;

                    /**
                     * 判断参数 EsInstanceNums 是否已赋值
                     * @return EsInstanceNums 是否已赋值
                     * 
                     */
                    bool EsInstanceNumsHasBeenSet() const;

                    /**
                     * 获取es索引数量
                     * @return EsIndexNums es索引数量
                     * 
                     */
                    uint64_t GetEsIndexNums() const;

                    /**
                     * 判断参数 EsIndexNums 是否已赋值
                     * @return EsIndexNums 是否已赋值
                     * 
                     */
                    bool EsIndexNumsHasBeenSet() const;

                    /**
                     * 获取es字段数量
                     * @return EsFieldNums es字段数量
                     * 
                     */
                    uint64_t GetEsFieldNums() const;

                    /**
                     * 判断参数 EsFieldNums 是否已赋值
                     * @return EsFieldNums 是否已赋值
                     * 
                     */
                    bool EsFieldNumsHasBeenSet() const;

                    /**
                     * 获取mongo实例数量
                     * @return MongoInstanceNums mongo实例数量
                     * 
                     */
                    uint64_t GetMongoInstanceNums() const;

                    /**
                     * 判断参数 MongoInstanceNums 是否已赋值
                     * @return MongoInstanceNums 是否已赋值
                     * 
                     */
                    bool MongoInstanceNumsHasBeenSet() const;

                    /**
                     * 获取mongo数据库数量
                     * @return MongoDbNums mongo数据库数量
                     * 
                     */
                    uint64_t GetMongoDbNums() const;

                    /**
                     * 判断参数 MongoDbNums 是否已赋值
                     * @return MongoDbNums 是否已赋值
                     * 
                     */
                    bool MongoDbNumsHasBeenSet() const;

                    /**
                     * 获取mongo集合数量
                     * @return MongoColNums mongo集合数量
                     * 
                     */
                    uint64_t GetMongoColNums() const;

                    /**
                     * 判断参数 MongoColNums 是否已赋值
                     * @return MongoColNums 是否已赋值
                     * 
                     */
                    bool MongoColNumsHasBeenSet() const;

                    /**
                     * 获取mongo字段数量
                     * @return MongoFieldNums mongo字段数量
                     * 
                     */
                    uint64_t GetMongoFieldNums() const;

                    /**
                     * 判断参数 MongoFieldNums 是否已赋值
                     * @return MongoFieldNums 是否已赋值
                     * 
                     */
                    bool MongoFieldNumsHasBeenSet() const;

                private:

                    /**
                     * 数据库实例id
                     */
                    int64_t m_dBInstanceNums;
                    bool m_dBInstanceNumsHasBeenSet;

                    /**
                     * 数据库个数
                     */
                    int64_t m_dBNums;
                    bool m_dBNumsHasBeenSet;

                    /**
                     * 表的个数
                     */
                    int64_t m_tableNums;
                    bool m_tableNumsHasBeenSet;

                    /**
                     * 字段个数
                     */
                    int64_t m_fieldNums;
                    bool m_fieldNumsHasBeenSet;

                    /**
                     * 数据库实例的分布情况
                     */
                    std::vector<Note> m_dBInstanceDistribution;
                    bool m_dBInstanceDistributionHasBeenSet;

                    /**
                     * db分布情况
                     */
                    std::vector<Note> m_dBDistribution;
                    bool m_dBDistributionHasBeenSet;

                    /**
                     * cos桶的数量
                     */
                    int64_t m_bucketNums;
                    bool m_bucketNumsHasBeenSet;

                    /**
                     * 文件个数
                     */
                    int64_t m_fileNums;
                    bool m_fileNumsHasBeenSet;

                    /**
                     * 用于对用户进行提示信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * es实例数量
                     */
                    uint64_t m_esInstanceNums;
                    bool m_esInstanceNumsHasBeenSet;

                    /**
                     * es索引数量
                     */
                    uint64_t m_esIndexNums;
                    bool m_esIndexNumsHasBeenSet;

                    /**
                     * es字段数量
                     */
                    uint64_t m_esFieldNums;
                    bool m_esFieldNumsHasBeenSet;

                    /**
                     * mongo实例数量
                     */
                    uint64_t m_mongoInstanceNums;
                    bool m_mongoInstanceNumsHasBeenSet;

                    /**
                     * mongo数据库数量
                     */
                    uint64_t m_mongoDbNums;
                    bool m_mongoDbNumsHasBeenSet;

                    /**
                     * mongo集合数量
                     */
                    uint64_t m_mongoColNums;
                    bool m_mongoColNumsHasBeenSet;

                    /**
                     * mongo字段数量
                     */
                    uint64_t m_mongoFieldNums;
                    bool m_mongoFieldNumsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEASSETOVERVIEWRESPONSE_H_
