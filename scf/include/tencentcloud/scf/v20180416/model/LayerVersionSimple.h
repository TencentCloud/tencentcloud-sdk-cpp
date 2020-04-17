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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LAYERVERSIONSIMPLE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LAYERVERSIONSIMPLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 指定某个Layer版本
                */
                class LayerVersionSimple : public AbstractModel
                {
                public:
                    LayerVersionSimple();
                    ~LayerVersionSimple() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取layer名称
                     * @return LayerName layer名称
                     */
                    std::string GetLayerName() const;

                    /**
                     * 设置layer名称
                     * @param LayerName layer名称
                     */
                    void SetLayerName(const std::string& _layerName);

                    /**
                     * 判断参数 LayerName 是否已赋值
                     * @return LayerName 是否已赋值
                     */
                    bool LayerNameHasBeenSet() const;

                    /**
                     * 获取版本号
                     * @return LayerVersion 版本号
                     */
                    int64_t GetLayerVersion() const;

                    /**
                     * 设置版本号
                     * @param LayerVersion 版本号
                     */
                    void SetLayerVersion(const int64_t& _layerVersion);

                    /**
                     * 判断参数 LayerVersion 是否已赋值
                     * @return LayerVersion 是否已赋值
                     */
                    bool LayerVersionHasBeenSet() const;

                private:

                    /**
                     * layer名称
                     */
                    std::string m_layerName;
                    bool m_layerNameHasBeenSet;

                    /**
                     * 版本号
                     */
                    int64_t m_layerVersion;
                    bool m_layerVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LAYERVERSIONSIMPLE_H_
