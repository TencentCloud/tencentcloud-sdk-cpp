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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_EVALDATASETCONFIG_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_EVALDATASETCONFIG_H_

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
                * 验证数据集配置（作为 DatasetMount 属性，与训练集一对一）
                */
                class EvalDatasetConfig : public AbstractModel
                {
                public:
                    EvalDatasetConfig();
                    ~EvalDatasetConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>验证集模式：none / split / separate</p>
                     * @return EvalMode <p>验证集模式：none / split / separate</p>
                     * 
                     */
                    std::string GetEvalMode() const;

                    /**
                     * 设置<p>验证集模式：none / split / separate</p>
                     * @param _evalMode <p>验证集模式：none / split / separate</p>
                     * 
                     */
                    void SetEvalMode(const std::string& _evalMode);

                    /**
                     * 判断参数 EvalMode 是否已赋值
                     * @return EvalMode 是否已赋值
                     * 
                     */
                    bool EvalModeHasBeenSet() const;

                    /**
                     * 获取<p>自动拆分比例（1-20，即 1%-20%），仅 split 生效</p>
                     * @return EvalSplitRatio <p>自动拆分比例（1-20，即 1%-20%），仅 split 生效</p>
                     * 
                     */
                    double GetEvalSplitRatio() const;

                    /**
                     * 设置<p>自动拆分比例（1-20，即 1%-20%），仅 split 生效</p>
                     * @param _evalSplitRatio <p>自动拆分比例（1-20，即 1%-20%），仅 split 生效</p>
                     * 
                     */
                    void SetEvalSplitRatio(const double& _evalSplitRatio);

                    /**
                     * 判断参数 EvalSplitRatio 是否已赋值
                     * @return EvalSplitRatio 是否已赋值
                     * 
                     */
                    bool EvalSplitRatioHasBeenSet() const;

                    /**
                     * 获取<p>独立验证数据集 ID（dataset 表），仅 separate 生效；与 Catalog 二选一</p>
                     * @return EvalDatasetId <p>独立验证数据集 ID（dataset 表），仅 separate 生效；与 Catalog 二选一</p>
                     * 
                     */
                    std::string GetEvalDatasetId() const;

                    /**
                     * 设置<p>独立验证数据集 ID（dataset 表），仅 separate 生效；与 Catalog 二选一</p>
                     * @param _evalDatasetId <p>独立验证数据集 ID（dataset 表），仅 separate 生效；与 Catalog 二选一</p>
                     * 
                     */
                    void SetEvalDatasetId(const std::string& _evalDatasetId);

                    /**
                     * 判断参数 EvalDatasetId 是否已赋值
                     * @return EvalDatasetId 是否已赋值
                     * 
                     */
                    bool EvalDatasetIdHasBeenSet() const;

                    /**
                     * 获取<p>验证数据集名称（dataset 表 name 字段，与 EvalDatasetId 配对）</p>
                     * @return EvalDatasetName <p>验证数据集名称（dataset 表 name 字段，与 EvalDatasetId 配对）</p>
                     * 
                     */
                    std::string GetEvalDatasetName() const;

                    /**
                     * 设置<p>验证数据集名称（dataset 表 name 字段，与 EvalDatasetId 配对）</p>
                     * @param _evalDatasetName <p>验证数据集名称（dataset 表 name 字段，与 EvalDatasetId 配对）</p>
                     * 
                     */
                    void SetEvalDatasetName(const std::string& _evalDatasetName);

                    /**
                     * 判断参数 EvalDatasetName 是否已赋值
                     * @return EvalDatasetName 是否已赋值
                     * 
                     */
                    bool EvalDatasetNameHasBeenSet() const;

                    /**
                     * 获取<p>原始 Catalog 卷定义 JSON（仅 separate 生效，无数据集 ID 时使用，直接并入顶层 Catalog；与 EvalDatasetId 二选一）</p>
                     * @return Catalog <p>原始 Catalog 卷定义 JSON（仅 separate 生效，无数据集 ID 时使用，直接并入顶层 Catalog；与 EvalDatasetId 二选一）</p>
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置<p>原始 Catalog 卷定义 JSON（仅 separate 生效，无数据集 ID 时使用，直接并入顶层 Catalog；与 EvalDatasetId 二选一）</p>
                     * @param _catalog <p>原始 Catalog 卷定义 JSON（仅 separate 生效，无数据集 ID 时使用，直接并入顶层 Catalog；与 EvalDatasetId 二选一）</p>
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
                     * 获取<p>验证用单文件名（可选，JSONL/parquet 文件名，位于挂载目录下；仅基于单个文件验证时指定）</p>
                     * @return FileName <p>验证用单文件名（可选，JSONL/parquet 文件名，位于挂载目录下；仅基于单个文件验证时指定）</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>验证用单文件名（可选，JSONL/parquet 文件名，位于挂载目录下；仅基于单个文件验证时指定）</p>
                     * @param _fileName <p>验证用单文件名（可选，JSONL/parquet 文件名，位于挂载目录下；仅基于单个文件验证时指定）</p>
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
                     * <p>验证集模式：none / split / separate</p>
                     */
                    std::string m_evalMode;
                    bool m_evalModeHasBeenSet;

                    /**
                     * <p>自动拆分比例（1-20，即 1%-20%），仅 split 生效</p>
                     */
                    double m_evalSplitRatio;
                    bool m_evalSplitRatioHasBeenSet;

                    /**
                     * <p>独立验证数据集 ID（dataset 表），仅 separate 生效；与 Catalog 二选一</p>
                     */
                    std::string m_evalDatasetId;
                    bool m_evalDatasetIdHasBeenSet;

                    /**
                     * <p>验证数据集名称（dataset 表 name 字段，与 EvalDatasetId 配对）</p>
                     */
                    std::string m_evalDatasetName;
                    bool m_evalDatasetNameHasBeenSet;

                    /**
                     * <p>原始 Catalog 卷定义 JSON（仅 separate 生效，无数据集 ID 时使用，直接并入顶层 Catalog；与 EvalDatasetId 二选一）</p>
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * <p>验证用单文件名（可选，JSONL/parquet 文件名，位于挂载目录下；仅基于单个文件验证时指定）</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_EVALDATASETCONFIG_H_
