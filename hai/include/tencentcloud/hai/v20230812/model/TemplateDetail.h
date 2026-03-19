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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_TEMPLATEDETAIL_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_TEMPLATEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hai/v20230812/model/ComputeDetail.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * 模板详情
                */
                class TemplateDetail : public AbstractModel
                {
                public:
                    TemplateDetail();
                    ~TemplateDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板id
                     * @return TemplateId 模板id
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板id
                     * @param _templateId 模板id
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取部署方式
                     * @return DeployMode 部署方式
                     * 
                     */
                    std::string GetDeployMode() const;

                    /**
                     * 设置部署方式
                     * @param _deployMode 部署方式
                     * 
                     */
                    void SetDeployMode(const std::string& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     * 
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取推理引擎
                     * @return EngineType 推理引擎
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置推理引擎
                     * @param _engineType 推理引擎
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取算力详情
                     * @return ComputeSet 算力详情
                     * 
                     */
                    std::vector<ComputeDetail> GetComputeSet() const;

                    /**
                     * 设置算力详情
                     * @param _computeSet 算力详情
                     * 
                     */
                    void SetComputeSet(const std::vector<ComputeDetail>& _computeSet);

                    /**
                     * 判断参数 ComputeSet 是否已赋值
                     * @return ComputeSet 是否已赋值
                     * 
                     */
                    bool ComputeSetHasBeenSet() const;

                    /**
                     * 获取当前部署模板所支持的增强功能
                     * @return SupportFunc 当前部署模板所支持的增强功能
                     * 
                     */
                    std::vector<std::string> GetSupportFunc() const;

                    /**
                     * 设置当前部署模板所支持的增强功能
                     * @param _supportFunc 当前部署模板所支持的增强功能
                     * 
                     */
                    void SetSupportFunc(const std::vector<std::string>& _supportFunc);

                    /**
                     * 判断参数 SupportFunc 是否已赋值
                     * @return SupportFunc 是否已赋值
                     * 
                     */
                    bool SupportFuncHasBeenSet() const;

                private:

                    /**
                     * 模板id
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 部署方式
                     */
                    std::string m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * 推理引擎
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * 算力详情
                     */
                    std::vector<ComputeDetail> m_computeSet;
                    bool m_computeSetHasBeenSet;

                    /**
                     * 当前部署模板所支持的增强功能
                     */
                    std::vector<std::string> m_supportFunc;
                    bool m_supportFuncHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_TEMPLATEDETAIL_H_
