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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEVULLAYERINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEVULLAYERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 漏洞列表中的层信息
                */
                class ImageVulLayerInfo : public AbstractModel
                {
                public:
                    ImageVulLayerInfo();
                    ~ImageVulLayerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取层id
                     * @return LayerId 层id
                     * 
                     */
                    std::string GetLayerId() const;

                    /**
                     * 设置层id
                     * @param _layerId 层id
                     * 
                     */
                    void SetLayerId(const std::string& _layerId);

                    /**
                     * 判断参数 LayerId 是否已赋值
                     * @return LayerId 是否已赋值
                     * 
                     */
                    bool LayerIdHasBeenSet() const;

                    /**
                     * 获取层cmd
                     * @return LayerCmd 层cmd
                     * 
                     */
                    std::string GetLayerCmd() const;

                    /**
                     * 设置层cmd
                     * @param _layerCmd 层cmd
                     * 
                     */
                    void SetLayerCmd(const std::string& _layerCmd);

                    /**
                     * 判断参数 LayerCmd 是否已赋值
                     * @return LayerCmd 是否已赋值
                     * 
                     */
                    bool LayerCmdHasBeenSet() const;

                private:

                    /**
                     * 层id
                     */
                    std::string m_layerId;
                    bool m_layerIdHasBeenSet;

                    /**
                     * 层cmd
                     */
                    std::string m_layerCmd;
                    bool m_layerCmdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEVULLAYERINFO_H_
