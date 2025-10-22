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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_VISIONOBJECTDETECTCONFIG_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_VISIONOBJECTDETECTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 目标检测配置
                */
                class VisionObjectDetectConfig : public AbstractModel
                {
                public:
                    VisionObjectDetectConfig();
                    ~VisionObjectDetectConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检测类别，可选值：
- `adult`：成年人
- `child`：儿童
                     * @return DetectTypes 检测类别，可选值：
- `adult`：成年人
- `child`：儿童
                     * 
                     */
                    std::vector<std::string> GetDetectTypes() const;

                    /**
                     * 设置检测类别，可选值：
- `adult`：成年人
- `child`：儿童
                     * @param _detectTypes 检测类别，可选值：
- `adult`：成年人
- `child`：儿童
                     * 
                     */
                    void SetDetectTypes(const std::vector<std::string>& _detectTypes);

                    /**
                     * 判断参数 DetectTypes 是否已赋值
                     * @return DetectTypes 是否已赋值
                     * 
                     */
                    bool DetectTypesHasBeenSet() const;

                private:

                    /**
                     * 检测类别，可选值：
- `adult`：成年人
- `child`：儿童
                     */
                    std::vector<std::string> m_detectTypes;
                    bool m_detectTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_VISIONOBJECTDETECTCONFIG_H_
