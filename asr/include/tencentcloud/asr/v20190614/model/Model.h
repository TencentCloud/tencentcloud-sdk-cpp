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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_MODEL_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_MODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * [自学习模型信息](https://cloud.tencent.com/document/product/1093/90813#3.-.E8.BE.93.E5.87.BA.E5.8F.82.E6.95.B0)
                */
                class Model : public AbstractModel
                {
                public:
                    Model();
                    ~Model() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取模型文件名称
                     * @return DictName 模型文件名称
                     * 
                     */
                    std::string GetDictName() const;

                    /**
                     * 设置模型文件名称
                     * @param _dictName 模型文件名称
                     * 
                     */
                    void SetDictName(const std::string& _dictName);

                    /**
                     * 判断参数 DictName 是否已赋值
                     * @return DictName 是否已赋值
                     * 
                     */
                    bool DictNameHasBeenSet() const;

                    /**
                     * 获取模型Id
                     * @return ModelId 模型Id
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模型Id
                     * @param _modelId 模型Id
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
                     * 获取模型类型，“8k”或者”16k“
                     * @return ModelType 模型类型，“8k”或者”16k“
                     * 
                     */
                    std::string GetModelType() const;

                    /**
                     * 设置模型类型，“8k”或者”16k“
                     * @param _modelType 模型类型，“8k”或者”16k“
                     * 
                     */
                    void SetModelType(const std::string& _modelType);

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     * 
                     */
                    bool ModelTypeHasBeenSet() const;

                    /**
                     * 获取服务类型
                     * @return ServiceType 服务类型
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置服务类型
                     * @param _serviceType 服务类型
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取模型状态：
-2：模型训练失败；
-1：已下线；
0：训练中；
1：已上线；
3：上线中；
4：下线中；
                     * @return ModelState 模型状态：
-2：模型训练失败；
-1：已下线；
0：训练中；
1：已上线；
3：上线中；
4：下线中；
                     * 
                     */
                    int64_t GetModelState() const;

                    /**
                     * 设置模型状态：
-2：模型训练失败；
-1：已下线；
0：训练中；
1：已上线；
3：上线中；
4：下线中；
                     * @param _modelState 模型状态：
-2：模型训练失败；
-1：已下线；
0：训练中；
1：已上线；
3：上线中；
4：下线中；
                     * 
                     */
                    void SetModelState(const int64_t& _modelState);

                    /**
                     * 判断参数 ModelState 是否已赋值
                     * @return ModelState 是否已赋值
                     * 
                     */
                    bool ModelStateHasBeenSet() const;

                    /**
                     * 获取最后更新时间
                     * @return AtUpdated 最后更新时间
                     * 
                     */
                    std::string GetAtUpdated() const;

                    /**
                     * 设置最后更新时间
                     * @param _atUpdated 最后更新时间
                     * 
                     */
                    void SetAtUpdated(const std::string& _atUpdated);

                    /**
                     * 判断参数 AtUpdated 是否已赋值
                     * @return AtUpdated 是否已赋值
                     * 
                     */
                    bool AtUpdatedHasBeenSet() const;

                    /**
                     * 获取标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagInfos 标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::vector<std::string> GetTagInfos() const;

                    /**
                     * 设置标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagInfos 标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetTagInfos(const std::vector<std::string>& _tagInfos);

                    /**
                     * 判断参数 TagInfos 是否已赋值
                     * @return TagInfos 是否已赋值
                     * @deprecated
                     */
                    bool TagInfosHasBeenSet() const;

                private:

                    /**
                     * 模型名称
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 模型文件名称
                     */
                    std::string m_dictName;
                    bool m_dictNameHasBeenSet;

                    /**
                     * 模型Id
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 模型类型，“8k”或者”16k“
                     */
                    std::string m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * 服务类型
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 模型状态：
-2：模型训练失败；
-1：已下线；
0：训练中；
1：已上线；
3：上线中；
4：下线中；
                     */
                    int64_t m_modelState;
                    bool m_modelStateHasBeenSet;

                    /**
                     * 最后更新时间
                     */
                    std::string m_atUpdated;
                    bool m_atUpdatedHasBeenSet;

                    /**
                     * 标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tagInfos;
                    bool m_tagInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_MODEL_H_
