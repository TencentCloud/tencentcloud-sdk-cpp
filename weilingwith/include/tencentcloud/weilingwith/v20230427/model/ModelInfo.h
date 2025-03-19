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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_MODELINFO_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_MODELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/RelatedProduct.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 模型基础信息
                */
                class ModelInfo : public AbstractModel
                {
                public:
                    ModelInfo();
                    ~ModelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作空间id
                     * @return WorkspaceId 工作空间id
                     * 
                     */
                    int64_t GetWorkspaceId() const;

                    /**
                     * 设置工作空间id
                     * @param _workspaceId 工作空间id
                     * 
                     */
                    void SetWorkspaceId(const int64_t& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取模型名称
                     * @return ModelName 模型名称
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称
                     * @param _modelName 模型名称
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取物模型id
                     * @return ModelId 物模型id
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置物模型id
                     * @param _modelId 物模型id
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取关联产品信息
                     * @return RelatedProduct 关联产品信息
                     * 
                     */
                    std::vector<RelatedProduct> GetRelatedProduct() const;

                    /**
                     * 设置关联产品信息
                     * @param _relatedProduct 关联产品信息
                     * 
                     */
                    void SetRelatedProduct(const std::vector<RelatedProduct>& _relatedProduct);

                    /**
                     * 判断参数 RelatedProduct 是否已赋值
                     * @return RelatedProduct 是否已赋值
                     * 
                     */
                    bool RelatedProductHasBeenSet() const;

                    /**
                     * 获取设备类型名
                     * @return DeviceTypeName 设备类型名
                     * 
                     */
                    std::string GetDeviceTypeName() const;

                    /**
                     * 设置设备类型名
                     * @param _deviceTypeName 设备类型名
                     * 
                     */
                    void SetDeviceTypeName(const std::string& _deviceTypeName);

                    /**
                     * 判断参数 DeviceTypeName 是否已赋值
                     * @return DeviceTypeName 是否已赋值
                     * 
                     */
                    bool DeviceTypeNameHasBeenSet() const;

                    /**
                     * 获取设备类型id
                     * @return DeviceType 设备类型id
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型id
                     * @param _deviceType 设备类型id
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取物模型类型，产品模型/标准模型
                     * @return ModelType 物模型类型，产品模型/标准模型
                     * 
                     */
                    int64_t GetModelType() const;

                    /**
                     * 设置物模型类型，产品模型/标准模型
                     * @param _modelType 物模型类型，产品模型/标准模型
                     * 
                     */
                    void SetModelType(const int64_t& _modelType);

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     * 
                     */
                    bool ModelTypeHasBeenSet() const;

                    /**
                     * 获取模型参数内容,有效字段为"x-json:"后的字段
                     * @return ModelParams 模型参数内容,有效字段为"x-json:"后的字段
                     * 
                     */
                    std::string GetModelParams() const;

                    /**
                     * 设置模型参数内容,有效字段为"x-json:"后的字段
                     * @param _modelParams 模型参数内容,有效字段为"x-json:"后的字段
                     * 
                     */
                    void SetModelParams(const std::string& _modelParams);

                    /**
                     * 判断参数 ModelParams 是否已赋值
                     * @return ModelParams 是否已赋值
                     * 
                     */
                    bool ModelParamsHasBeenSet() const;

                private:

                    /**
                     * 工作空间id
                     */
                    int64_t m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 模型名称
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 物模型id
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 关联产品信息
                     */
                    std::vector<RelatedProduct> m_relatedProduct;
                    bool m_relatedProductHasBeenSet;

                    /**
                     * 设备类型名
                     */
                    std::string m_deviceTypeName;
                    bool m_deviceTypeNameHasBeenSet;

                    /**
                     * 设备类型id
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 物模型类型，产品模型/标准模型
                     */
                    int64_t m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * 模型参数内容,有效字段为"x-json:"后的字段
                     */
                    std::string m_modelParams;
                    bool m_modelParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_MODELINFO_H_
