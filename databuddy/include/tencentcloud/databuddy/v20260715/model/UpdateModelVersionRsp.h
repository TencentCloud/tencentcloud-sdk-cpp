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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEMODELVERSIONRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEMODELVERSIONRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/ModelVersionInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 修改模型版本信息响应
                */
                class UpdateModelVersionRsp : public AbstractModel
                {
                public:
                    UpdateModelVersionRsp();
                    ~UpdateModelVersionRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取更新后的模型版本信息
                     * @return ModelVersion 更新后的模型版本信息
                     * 
                     */
                    ModelVersionInfo GetModelVersion() const;

                    /**
                     * 设置更新后的模型版本信息
                     * @param _modelVersion 更新后的模型版本信息
                     * 
                     */
                    void SetModelVersion(const ModelVersionInfo& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

                private:

                    /**
                     * 更新后的模型版本信息
                     */
                    ModelVersionInfo m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEMODELVERSIONRSP_H_
