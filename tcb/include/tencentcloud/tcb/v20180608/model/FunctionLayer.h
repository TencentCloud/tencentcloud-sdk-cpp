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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_FUNCTIONLAYER_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_FUNCTIONLAYER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 云函数Layer版本
                */
                class FunctionLayer : public AbstractModel
                {
                public:
                    FunctionLayer();
                    ~FunctionLayer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>层名称</p>
                     * @return LayerName <p>层名称</p>
                     * 
                     */
                    std::string GetLayerName() const;

                    /**
                     * 设置<p>层名称</p>
                     * @param _layerName <p>层名称</p>
                     * 
                     */
                    void SetLayerName(const std::string& _layerName);

                    /**
                     * 判断参数 LayerName 是否已赋值
                     * @return LayerName 是否已赋值
                     * 
                     */
                    bool LayerNameHasBeenSet() const;

                    /**
                     * 获取<p>层版本号</p>
                     * @return LayerVersion <p>层版本号</p>
                     * 
                     */
                    int64_t GetLayerVersion() const;

                    /**
                     * 设置<p>层版本号</p>
                     * @param _layerVersion <p>层版本号</p>
                     * 
                     */
                    void SetLayerVersion(const int64_t& _layerVersion);

                    /**
                     * 判断参数 LayerVersion 是否已赋值
                     * @return LayerVersion 是否已赋值
                     * 
                     */
                    bool LayerVersionHasBeenSet() const;

                private:

                    /**
                     * <p>层名称</p>
                     */
                    std::string m_layerName;
                    bool m_layerNameHasBeenSet;

                    /**
                     * <p>层版本号</p>
                     */
                    int64_t m_layerVersion;
                    bool m_layerVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_FUNCTIONLAYER_H_
