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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBETRAININGMODELVERSIONSREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBETRAININGMODELVERSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Filter.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeTrainingModelVersions请求参数结构体
                */
                class DescribeTrainingModelVersionsRequest : public AbstractModel
                {
                public:
                    DescribeTrainingModelVersionsRequest();
                    ~DescribeTrainingModelVersionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型ID</p>
                     * @return TrainingModelId <p>模型ID</p>
                     * 
                     */
                    std::string GetTrainingModelId() const;

                    /**
                     * 设置<p>模型ID</p>
                     * @param _trainingModelId <p>模型ID</p>
                     * 
                     */
                    void SetTrainingModelId(const std::string& _trainingModelId);

                    /**
                     * 判断参数 TrainingModelId 是否已赋值
                     * @return TrainingModelId 是否已赋值
                     * 
                     */
                    bool TrainingModelIdHasBeenSet() const;

                    /**
                     * 获取<p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * @return TiProjectId <p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * 
                     */
                    std::string GetTiProjectId() const;

                    /**
                     * 设置<p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * @param _tiProjectId <p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * 
                     */
                    void SetTiProjectId(const std::string& _tiProjectId);

                    /**
                     * 判断参数 TiProjectId 是否已赋值
                     * @return TiProjectId 是否已赋值
                     * 
                     */
                    bool TiProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件<br>Filter.Name: 枚举值:<br>    TrainingModelVersionId (模型版本ID)<br>    ModelVersionType (模型版本类型) 其值支持: NORMAL(通用) ACCELERATE (加速)<br>    ModelFormat（模型格式）其值Filter.Values支持：<br>TORCH_SCRIPT/PYTORCH/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/PMML<br>    AlgorithmFramework (算法框架) 其值Filter.Values支持：TENSORFLOW/PYTORCH/DETECTRON2<br>Filter.Values: 当长度为1时，支持模糊查询; 不为1时，精确查询<br>每次请求的Filters的上限为10，Filter.Values的上限为100</p>
                     * @return Filters <p>过滤条件<br>Filter.Name: 枚举值:<br>    TrainingModelVersionId (模型版本ID)<br>    ModelVersionType (模型版本类型) 其值支持: NORMAL(通用) ACCELERATE (加速)<br>    ModelFormat（模型格式）其值Filter.Values支持：<br>TORCH_SCRIPT/PYTORCH/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/PMML<br>    AlgorithmFramework (算法框架) 其值Filter.Values支持：TENSORFLOW/PYTORCH/DETECTRON2<br>Filter.Values: 当长度为1时，支持模糊查询; 不为1时，精确查询<br>每次请求的Filters的上限为10，Filter.Values的上限为100</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件<br>Filter.Name: 枚举值:<br>    TrainingModelVersionId (模型版本ID)<br>    ModelVersionType (模型版本类型) 其值支持: NORMAL(通用) ACCELERATE (加速)<br>    ModelFormat（模型格式）其值Filter.Values支持：<br>TORCH_SCRIPT/PYTORCH/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/PMML<br>    AlgorithmFramework (算法框架) 其值Filter.Values支持：TENSORFLOW/PYTORCH/DETECTRON2<br>Filter.Values: 当长度为1时，支持模糊查询; 不为1时，精确查询<br>每次请求的Filters的上限为10，Filter.Values的上限为100</p>
                     * @param _filters <p>过滤条件<br>Filter.Name: 枚举值:<br>    TrainingModelVersionId (模型版本ID)<br>    ModelVersionType (模型版本类型) 其值支持: NORMAL(通用) ACCELERATE (加速)<br>    ModelFormat（模型格式）其值Filter.Values支持：<br>TORCH_SCRIPT/PYTORCH/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/PMML<br>    AlgorithmFramework (算法框架) 其值Filter.Values支持：TENSORFLOW/PYTORCH/DETECTRON2<br>Filter.Values: 当长度为1时，支持模糊查询; 不为1时，精确查询<br>每次请求的Filters的上限为10，Filter.Values的上限为100</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>模型ID</p>
                     */
                    std::string m_trainingModelId;
                    bool m_trainingModelIdHasBeenSet;

                    /**
                     * <p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     */
                    std::string m_tiProjectId;
                    bool m_tiProjectIdHasBeenSet;

                    /**
                     * <p>过滤条件<br>Filter.Name: 枚举值:<br>    TrainingModelVersionId (模型版本ID)<br>    ModelVersionType (模型版本类型) 其值支持: NORMAL(通用) ACCELERATE (加速)<br>    ModelFormat（模型格式）其值Filter.Values支持：<br>TORCH_SCRIPT/PYTORCH/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/PMML<br>    AlgorithmFramework (算法框架) 其值Filter.Values支持：TENSORFLOW/PYTORCH/DETECTRON2<br>Filter.Values: 当长度为1时，支持模糊查询; 不为1时，精确查询<br>每次请求的Filters的上限为10，Filter.Values的上限为100</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBETRAININGMODELVERSIONSREQUEST_H_
