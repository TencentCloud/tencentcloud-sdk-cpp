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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_IMAGETAG_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_IMAGETAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * 图片标签。
                */
                class ImageTag : public AbstractModel
                {
                public:
                    ImageTag();
                    ~ImageTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签内容。
                     * @return Name 标签内容。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置标签内容。
                     * @param _name 标签内容。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取置信度范围在0-100之间。值越高，表示目标为相应结果的可能性越高。
                     * @return Confidence 置信度范围在0-100之间。值越高，表示目标为相应结果的可能性越高。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置置信度范围在0-100之间。值越高，表示目标为相应结果的可能性越高。
                     * @param _confidence 置信度范围在0-100之间。值越高，表示目标为相应结果的可能性越高。
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                private:

                    /**
                     * 标签内容。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 置信度范围在0-100之间。值越高，表示目标为相应结果的可能性越高。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_IMAGETAG_H_
