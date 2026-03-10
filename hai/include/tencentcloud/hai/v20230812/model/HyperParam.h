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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_HYPERPARAM_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_HYPERPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hai/v20230812/model/HiCacheInfo.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * 描述了服务的超参数配置
                */
                class HyperParam : public AbstractModel
                {
                public:
                    HyperParam();
                    ~HyperParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HiCache缓存
                     * @return HiCache HiCache缓存
                     * 
                     */
                    HiCacheInfo GetHiCache() const;

                    /**
                     * 设置HiCache缓存
                     * @param _hiCache HiCache缓存
                     * 
                     */
                    void SetHiCache(const HiCacheInfo& _hiCache);

                    /**
                     * 判断参数 HiCache 是否已赋值
                     * @return HiCache 是否已赋值
                     * 
                     */
                    bool HiCacheHasBeenSet() const;

                private:

                    /**
                     * HiCache缓存
                     */
                    HiCacheInfo m_hiCache;
                    bool m_hiCacheHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_HYPERPARAM_H_
