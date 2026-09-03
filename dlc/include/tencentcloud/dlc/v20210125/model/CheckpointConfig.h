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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CHECKPOINTCONFIG_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CHECKPOINTCONFIG_H_

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
                * 用于返回训练作业的checkpoint的配置信息
                */
                class CheckpointConfig : public AbstractModel
                {
                public:
                    CheckpointConfig();
                    ~CheckpointConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Checkpoint 产出存储的 Catalog 配置 JSON（结构同顶层 Catalog）</p>
                     * @return Catalog <p>Checkpoint 产出存储的 Catalog 配置 JSON（结构同顶层 Catalog）</p>
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置<p>Checkpoint 产出存储的 Catalog 配置 JSON（结构同顶层 Catalog）</p>
                     * @param _catalog <p>Checkpoint 产出存储的 Catalog 配置 JSON（结构同顶层 Catalog）</p>
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
                     * 获取<p>保存策略：steps / epoch / none，默认 steps；GRPO 仅支持 steps / none</p>
                     * @return SaveStrategy <p>保存策略：steps / epoch / none，默认 steps；GRPO 仅支持 steps / none</p>
                     * 
                     */
                    std::string GetSaveStrategy() const;

                    /**
                     * 设置<p>保存策略：steps / epoch / none，默认 steps；GRPO 仅支持 steps / none</p>
                     * @param _saveStrategy <p>保存策略：steps / epoch / none，默认 steps；GRPO 仅支持 steps / none</p>
                     * 
                     */
                    void SetSaveStrategy(const std::string& _saveStrategy);

                    /**
                     * 判断参数 SaveStrategy 是否已赋值
                     * @return SaveStrategy 是否已赋值
                     * 
                     */
                    bool SaveStrategyHasBeenSet() const;

                    /**
                     * 获取<p>保存频率（每 N 步或每 N epoch），默认 500</p>
                     * @return SaveFreq <p>保存频率（每 N 步或每 N epoch），默认 500</p>
                     * 
                     */
                    int64_t GetSaveFreq() const;

                    /**
                     * 设置<p>保存频率（每 N 步或每 N epoch），默认 500</p>
                     * @param _saveFreq <p>保存频率（每 N 步或每 N epoch），默认 500</p>
                     * 
                     */
                    void SetSaveFreq(const int64_t& _saveFreq);

                    /**
                     * 判断参数 SaveFreq 是否已赋值
                     * @return SaveFreq 是否已赋值
                     * 
                     */
                    bool SaveFreqHasBeenSet() const;

                    /**
                     * 获取<p>最大保留数量，0 表示不限制，默认 3</p>
                     * @return MaxKeep <p>最大保留数量，0 表示不限制，默认 3</p>
                     * 
                     */
                    int64_t GetMaxKeep() const;

                    /**
                     * 设置<p>最大保留数量，0 表示不限制，默认 3</p>
                     * @param _maxKeep <p>最大保留数量，0 表示不限制，默认 3</p>
                     * 
                     */
                    void SetMaxKeep(const int64_t& _maxKeep);

                    /**
                     * 判断参数 MaxKeep 是否已赋值
                     * @return MaxKeep 是否已赋值
                     * 
                     */
                    bool MaxKeepHasBeenSet() const;

                    /**
                     * 获取<p>容器内输出目录回退值（可选；正常场景由 Checkpoint 挂载路径决定，仅在挂载路径为空时生效，默认 /workspace/output/{mode}）</p>
                     * @return OutputDir <p>容器内输出目录回退值（可选；正常场景由 Checkpoint 挂载路径决定，仅在挂载路径为空时生效，默认 /workspace/output/{mode}）</p>
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置<p>容器内输出目录回退值（可选；正常场景由 Checkpoint 挂载路径决定，仅在挂载路径为空时生效，默认 /workspace/output/{mode}）</p>
                     * @param _outputDir <p>容器内输出目录回退值（可选；正常场景由 Checkpoint 挂载路径决定，仅在挂载路径为空时生效，默认 /workspace/output/{mode}）</p>
                     * 
                     */
                    void SetOutputDir(const std::string& _outputDir);

                    /**
                     * 判断参数 OutputDir 是否已赋值
                     * @return OutputDir 是否已赋值
                     * 
                     */
                    bool OutputDirHasBeenSet() const;

                private:

                    /**
                     * <p>Checkpoint 产出存储的 Catalog 配置 JSON（结构同顶层 Catalog）</p>
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * <p>保存策略：steps / epoch / none，默认 steps；GRPO 仅支持 steps / none</p>
                     */
                    std::string m_saveStrategy;
                    bool m_saveStrategyHasBeenSet;

                    /**
                     * <p>保存频率（每 N 步或每 N epoch），默认 500</p>
                     */
                    int64_t m_saveFreq;
                    bool m_saveFreqHasBeenSet;

                    /**
                     * <p>最大保留数量，0 表示不限制，默认 3</p>
                     */
                    int64_t m_maxKeep;
                    bool m_maxKeepHasBeenSet;

                    /**
                     * <p>容器内输出目录回退值（可选；正常场景由 Checkpoint 挂载路径决定，仅在挂载路径为空时生效，默认 /workspace/output/{mode}）</p>
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CHECKPOINTCONFIG_H_
