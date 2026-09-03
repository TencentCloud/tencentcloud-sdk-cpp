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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATASETMOUNT_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATASETMOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/EvalDatasetConfig.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 数据文件名（可选），JSONL/parquet 文件名，位于挂载目录下；后训练场景等价于旧 Dataset 字段。数据集 COS 路径指向具体文件时后端自动提取文件名，无需填写
                */
                class DatasetMount : public AbstractModel
                {
                public:
                    DatasetMount();
                    ~DatasetMount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据集ID</p>
                     * @return DatasetId <p>数据集ID</p>
                     * 
                     */
                    std::string GetDatasetId() const;

                    /**
                     * 设置<p>数据集ID</p>
                     * @param _datasetId <p>数据集ID</p>
                     * 
                     */
                    void SetDatasetId(const std::string& _datasetId);

                    /**
                     * 判断参数 DatasetId 是否已赋值
                     * @return DatasetId 是否已赋值
                     * 
                     */
                    bool DatasetIdHasBeenSet() const;

                    /**
                     * 获取<p>数据集名称</p>
                     * @return DatasetName <p>数据集名称</p>
                     * 
                     */
                    std::string GetDatasetName() const;

                    /**
                     * 设置<p>数据集名称</p>
                     * @param _datasetName <p>数据集名称</p>
                     * 
                     */
                    void SetDatasetName(const std::string& _datasetName);

                    /**
                     * 判断参数 DatasetName 是否已赋值
                     * @return DatasetName 是否已赋值
                     * 
                     */
                    bool DatasetNameHasBeenSet() const;

                    /**
                     * 获取<p>挂载信息</p>
                     * @return Catalog <p>挂载信息</p>
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置<p>挂载信息</p>
                     * @param _catalog <p>挂载信息</p>
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取<p>验证集信息</p>
                     * @return Eval <p>验证集信息</p>
                     * 
                     */
                    EvalDatasetConfig GetEval() const;

                    /**
                     * 设置<p>验证集信息</p>
                     * @param _eval <p>验证集信息</p>
                     * 
                     */
                    void SetEval(const EvalDatasetConfig& _eval);

                    /**
                     * 判断参数 Eval 是否已赋值
                     * @return Eval 是否已赋值
                     * 
                     */
                    bool EvalHasBeenSet() const;

                    /**
                     * 获取<p>数据集为单个文件时，若需挂载单个文件，需提供文件名</p>
                     * @return FileName <p>数据集为单个文件时，若需挂载单个文件，需提供文件名</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>数据集为单个文件时，若需挂载单个文件，需提供文件名</p>
                     * @param _fileName <p>数据集为单个文件时，若需挂载单个文件，需提供文件名</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                private:

                    /**
                     * <p>数据集ID</p>
                     */
                    std::string m_datasetId;
                    bool m_datasetIdHasBeenSet;

                    /**
                     * <p>数据集名称</p>
                     */
                    std::string m_datasetName;
                    bool m_datasetNameHasBeenSet;

                    /**
                     * <p>挂载信息</p>
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * <p>验证集信息</p>
                     */
                    EvalDatasetConfig m_eval;
                    bool m_evalHasBeenSet;

                    /**
                     * <p>数据集为单个文件时，若需挂载单个文件，需提供文件名</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATASETMOUNT_H_
