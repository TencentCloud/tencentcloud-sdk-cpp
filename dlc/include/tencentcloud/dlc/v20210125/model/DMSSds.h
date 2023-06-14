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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DMSSDS_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DMSSDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>
#include <tencentcloud/dlc/v20210125/model/DMSColumnOrder.h>
#include <tencentcloud/dlc/v20210125/model/DMSColumn.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 元数据存储描述属性
                */
                class DMSSds : public AbstractModel
                {
                public:
                    DMSSds();
                    ~DMSSds() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Location 存储地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置存储地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _location 存储地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取输入格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputFormat 输入格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInputFormat() const;

                    /**
                     * 设置输入格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputFormat 输入格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputFormat(const std::string& _inputFormat);

                    /**
                     * 判断参数 InputFormat 是否已赋值
                     * @return InputFormat 是否已赋值
                     * 
                     */
                    bool InputFormatHasBeenSet() const;

                    /**
                     * 获取输出格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputFormat 输出格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutputFormat() const;

                    /**
                     * 设置输出格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputFormat 输出格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputFormat(const std::string& _outputFormat);

                    /**
                     * 判断参数 OutputFormat 是否已赋值
                     * @return OutputFormat 是否已赋值
                     * 
                     */
                    bool OutputFormatHasBeenSet() const;

                    /**
                     * 获取bucket数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NumBuckets bucket数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNumBuckets() const;

                    /**
                     * 设置bucket数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _numBuckets bucket数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNumBuckets(const int64_t& _numBuckets);

                    /**
                     * 判断参数 NumBuckets 是否已赋值
                     * @return NumBuckets 是否已赋值
                     * 
                     */
                    bool NumBucketsHasBeenSet() const;

                    /**
                     * 获取是是否压缩
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Compressed 是是否压缩
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCompressed() const;

                    /**
                     * 设置是是否压缩
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compressed 是是否压缩
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompressed(const bool& _compressed);

                    /**
                     * 判断参数 Compressed 是否已赋值
                     * @return Compressed 是否已赋值
                     * 
                     */
                    bool CompressedHasBeenSet() const;

                    /**
                     * 获取是否有子目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StoredAsSubDirectories 是否有子目录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetStoredAsSubDirectories() const;

                    /**
                     * 设置是否有子目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storedAsSubDirectories 是否有子目录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStoredAsSubDirectories(const bool& _storedAsSubDirectories);

                    /**
                     * 判断参数 StoredAsSubDirectories 是否已赋值
                     * @return StoredAsSubDirectories 是否已赋值
                     * 
                     */
                    bool StoredAsSubDirectoriesHasBeenSet() const;

                    /**
                     * 获取序列化lib
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SerdeLib 序列化lib
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSerdeLib() const;

                    /**
                     * 设置序列化lib
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serdeLib 序列化lib
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSerdeLib(const std::string& _serdeLib);

                    /**
                     * 判断参数 SerdeLib 是否已赋值
                     * @return SerdeLib 是否已赋值
                     * 
                     */
                    bool SerdeLibHasBeenSet() const;

                    /**
                     * 获取序列化名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SerdeName 序列化名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSerdeName() const;

                    /**
                     * 设置序列化名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serdeName 序列化名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSerdeName(const std::string& _serdeName);

                    /**
                     * 判断参数 SerdeName 是否已赋值
                     * @return SerdeName 是否已赋值
                     * 
                     */
                    bool SerdeNameHasBeenSet() const;

                    /**
                     * 获取桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BucketCols 桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBucketCols() const;

                    /**
                     * 设置桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bucketCols 桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBucketCols(const std::vector<std::string>& _bucketCols);

                    /**
                     * 判断参数 BucketCols 是否已赋值
                     * @return BucketCols 是否已赋值
                     * 
                     */
                    bool BucketColsHasBeenSet() const;

                    /**
                     * 获取序列化参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SerdeParams 序列化参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KVPair> GetSerdeParams() const;

                    /**
                     * 设置序列化参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serdeParams 序列化参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSerdeParams(const std::vector<KVPair>& _serdeParams);

                    /**
                     * 判断参数 SerdeParams 是否已赋值
                     * @return SerdeParams 是否已赋值
                     * 
                     */
                    bool SerdeParamsHasBeenSet() const;

                    /**
                     * 获取附加参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params 附加参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KVPair> GetParams() const;

                    /**
                     * 设置附加参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _params 附加参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParams(const std::vector<KVPair>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取列排序(Expired)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SortCols 列排序(Expired)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DMSColumnOrder GetSortCols() const;

                    /**
                     * 设置列排序(Expired)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sortCols 列排序(Expired)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSortCols(const DMSColumnOrder& _sortCols);

                    /**
                     * 判断参数 SortCols 是否已赋值
                     * @return SortCols 是否已赋值
                     * 
                     */
                    bool SortColsHasBeenSet() const;

                    /**
                     * 获取列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cols 列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DMSColumn> GetCols() const;

                    /**
                     * 设置列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cols 列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCols(const std::vector<DMSColumn>& _cols);

                    /**
                     * 判断参数 Cols 是否已赋值
                     * @return Cols 是否已赋值
                     * 
                     */
                    bool ColsHasBeenSet() const;

                    /**
                     * 获取列排序字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SortColumns 列排序字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DMSColumnOrder> GetSortColumns() const;

                    /**
                     * 设置列排序字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sortColumns 列排序字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSortColumns(const std::vector<DMSColumnOrder>& _sortColumns);

                    /**
                     * 判断参数 SortColumns 是否已赋值
                     * @return SortColumns 是否已赋值
                     * 
                     */
                    bool SortColumnsHasBeenSet() const;

                private:

                    /**
                     * 存储地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 输入格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputFormat;
                    bool m_inputFormatHasBeenSet;

                    /**
                     * 输出格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outputFormat;
                    bool m_outputFormatHasBeenSet;

                    /**
                     * bucket数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_numBuckets;
                    bool m_numBucketsHasBeenSet;

                    /**
                     * 是是否压缩
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_compressed;
                    bool m_compressedHasBeenSet;

                    /**
                     * 是否有子目录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_storedAsSubDirectories;
                    bool m_storedAsSubDirectoriesHasBeenSet;

                    /**
                     * 序列化lib
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serdeLib;
                    bool m_serdeLibHasBeenSet;

                    /**
                     * 序列化名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serdeName;
                    bool m_serdeNameHasBeenSet;

                    /**
                     * 桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_bucketCols;
                    bool m_bucketColsHasBeenSet;

                    /**
                     * 序列化参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KVPair> m_serdeParams;
                    bool m_serdeParamsHasBeenSet;

                    /**
                     * 附加参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KVPair> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 列排序(Expired)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DMSColumnOrder m_sortCols;
                    bool m_sortColsHasBeenSet;

                    /**
                     * 列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DMSColumn> m_cols;
                    bool m_colsHasBeenSet;

                    /**
                     * 列排序字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DMSColumnOrder> m_sortColumns;
                    bool m_sortColumnsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DMSSDS_H_
