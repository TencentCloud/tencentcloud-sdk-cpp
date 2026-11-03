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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCMODELQUOTA_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCMODELQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AIGC 单配额模型。
                */
                class AigcModelQuota : public AbstractModel
                {
                public:
                    AigcModelQuota();
                    ~AigcModelQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型名称。</p>
                     * @return ModelName <p>模型名称。</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名称。</p>
                     * @param _modelName <p>模型名称。</p>
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
                     * 获取<p>任务的配额数。</p><p>单位：张/秒。</p><ul><li>当 QuotaType 为 Image 时，单位为张；</li><li>当 QuotaType 为 Video 时，单位为秒；</li></ul>
                     * @return QuotaLimit <p>任务的配额数。</p><p>单位：张/秒。</p><ul><li>当 QuotaType 为 Image 时，单位为张；</li><li>当 QuotaType 为 Video 时，单位为秒；</li></ul>
                     * 
                     */
                    uint64_t GetQuotaLimit() const;

                    /**
                     * 设置<p>任务的配额数。</p><p>单位：张/秒。</p><ul><li>当 QuotaType 为 Image 时，单位为张；</li><li>当 QuotaType 为 Video 时，单位为秒；</li></ul>
                     * @param _quotaLimit <p>任务的配额数。</p><p>单位：张/秒。</p><ul><li>当 QuotaType 为 Image 时，单位为张；</li><li>当 QuotaType 为 Video 时，单位为秒；</li></ul>
                     * 
                     */
                    void SetQuotaLimit(const uint64_t& _quotaLimit);

                    /**
                     * 判断参数 QuotaLimit 是否已赋值
                     * @return QuotaLimit 是否已赋值
                     * 
                     */
                    bool QuotaLimitHasBeenSet() const;

                    /**
                     * 获取<p>模型版本。</p>
                     * @return ModelVersion <p>模型版本。</p>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>模型版本。</p>
                     * @param _modelVersion <p>模型版本。</p>
                     * 
                     */
                    void SetModelVersion(const std::string& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

                private:

                    /**
                     * <p>模型名称。</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>任务的配额数。</p><p>单位：张/秒。</p><ul><li>当 QuotaType 为 Image 时，单位为张；</li><li>当 QuotaType 为 Video 时，单位为秒；</li></ul>
                     */
                    uint64_t m_quotaLimit;
                    bool m_quotaLimitHasBeenSet;

                    /**
                     * <p>模型版本。</p>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCMODELQUOTA_H_
