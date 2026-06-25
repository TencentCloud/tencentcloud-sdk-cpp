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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_FALLBACKITEM_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_FALLBACKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 路由FallBack配置
                */
                class FallBackItem : public AbstractModel
                {
                public:
                    FallBackItem();
                    ~FallBackItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>默认回退模型列表</p>
                     * @return DefaultFallBackModels <p>默认回退模型列表</p>
                     * 
                     */
                    std::vector<std::string> GetDefaultFallBackModels() const;

                    /**
                     * 设置<p>默认回退模型列表</p>
                     * @param _defaultFallBackModels <p>默认回退模型列表</p>
                     * 
                     */
                    void SetDefaultFallBackModels(const std::vector<std::string>& _defaultFallBackModels);

                    /**
                     * 判断参数 DefaultFallBackModels 是否已赋值
                     * @return DefaultFallBackModels 是否已赋值
                     * 
                     */
                    bool DefaultFallBackModelsHasBeenSet() const;

                private:

                    /**
                     * <p>默认回退模型列表</p>
                     */
                    std::vector<std::string> m_defaultFallBackModels;
                    bool m_defaultFallBackModelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_FALLBACKITEM_H_
