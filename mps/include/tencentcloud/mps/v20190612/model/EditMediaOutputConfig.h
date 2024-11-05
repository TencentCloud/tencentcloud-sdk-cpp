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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIAOUTPUTCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIAOUTPUTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 编辑视频的结果文件输出配置。
                */
                class EditMediaOutputConfig : public AbstractModel
                {
                public:
                    EditMediaOutputConfig();
                    ~EditMediaOutputConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取封装格式，可选值：mp4、hls、mov、flv、avi。默认是 mp4。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Container 封装格式，可选值：mp4、hls、mov、flv、avi。默认是 mp4。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置封装格式，可选值：mp4、hls、mov、flv、avi。默认是 mp4。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _container 封装格式，可选值：mp4、hls、mov、flv、avi。默认是 mp4。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     * 
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取剪辑模式，可选值：
normal（默认）：精准编辑
fast：快速编辑，处理速度更快但精准度一定程度降低
注意：fast只支持单文件，normal默认输出转码格式是h264
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 剪辑模式，可选值：
normal（默认）：精准编辑
fast：快速编辑，处理速度更快但精准度一定程度降低
注意：fast只支持单文件，normal默认输出转码格式是h264
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置剪辑模式，可选值：
normal（默认）：精准编辑
fast：快速编辑，处理速度更快但精准度一定程度降低
注意：fast只支持单文件，normal默认输出转码格式是h264
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 剪辑模式，可选值：
normal（默认）：精准编辑
fast：快速编辑，处理速度更快但精准度一定程度降低
注意：fast只支持单文件，normal默认输出转码格式是h264
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 封装格式，可选值：mp4、hls、mov、flv、avi。默认是 mp4。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * 剪辑模式，可选值：
normal（默认）：精准编辑
fast：快速编辑，处理速度更快但精准度一定程度降低
注意：fast只支持单文件，normal默认输出转码格式是h264
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIAOUTPUTCONFIG_H_
