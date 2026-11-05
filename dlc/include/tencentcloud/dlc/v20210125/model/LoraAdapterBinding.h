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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LORAADAPTERBINDING_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LORAADAPTERBINDING_H_

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
                * 创建 RayServe 推理服务时一并挂载的 LoRA 模型版本
                */
                class LoraAdapterBinding : public AbstractModel
                {
                public:
                    LoraAdapterBinding();
                    ~LoraAdapterBinding() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>LoRA 模型版本 UID（ListModelVersions 返回的 VersionUid；该模型须以部署基座为 BaseModelUid）</p>
                     * @return ModelVersionUid <p>LoRA 模型版本 UID（ListModelVersions 返回的 VersionUid；该模型须以部署基座为 BaseModelUid）</p>
                     * 
                     */
                    std::string GetModelVersionUid() const;

                    /**
                     * 设置<p>LoRA 模型版本 UID（ListModelVersions 返回的 VersionUid；该模型须以部署基座为 BaseModelUid）</p>
                     * @param _modelVersionUid <p>LoRA 模型版本 UID（ListModelVersions 返回的 VersionUid；该模型须以部署基座为 BaseModelUid）</p>
                     * 
                     */
                    void SetModelVersionUid(const std::string& _modelVersionUid);

                    /**
                     * 判断参数 ModelVersionUid 是否已赋值
                     * @return ModelVersionUid 是否已赋值
                     * 
                     */
                    bool ModelVersionUidHasBeenSet() const;

                private:

                    /**
                     * <p>LoRA 模型版本 UID（ListModelVersions 返回的 VersionUid；该模型须以部署基座为 BaseModelUid）</p>
                     */
                    std::string m_modelVersionUid;
                    bool m_modelVersionUidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LORAADAPTERBINDING_H_
