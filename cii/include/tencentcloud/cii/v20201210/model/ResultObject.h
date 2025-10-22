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

#ifndef TENCENTCLOUD_CII_V20201210_MODEL_RESULTOBJECT_H_
#define TENCENTCLOUD_CII_V20201210_MODEL_RESULTOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20201210
        {
            namespace Model
            {
                /**
                * 用于返回结构化任务结果
                */
                class ResultObject : public AbstractModel
                {
                public:
                    ResultObject();
                    ~ResultObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片质量分
                     * @return Quality 图片质量分
                     * 
                     */
                    double GetQuality() const;

                    /**
                     * 设置图片质量分
                     * @param _quality 图片质量分
                     * 
                     */
                    void SetQuality(const double& _quality);

                    /**
                     * 判断参数 Quality 是否已赋值
                     * @return Quality 是否已赋值
                     * 
                     */
                    bool QualityHasBeenSet() const;

                    /**
                     * 获取由结构化算法结构化json转换的字符串，具体协议参见算法结构化结果协议
                     * @return StructureResult 由结构化算法结构化json转换的字符串，具体协议参见算法结构化结果协议
                     * 
                     */
                    std::string GetStructureResult() const;

                    /**
                     * 设置由结构化算法结构化json转换的字符串，具体协议参见算法结构化结果协议
                     * @param _structureResult 由结构化算法结构化json转换的字符串，具体协议参见算法结构化结果协议
                     * 
                     */
                    void SetStructureResult(const std::string& _structureResult);

                    /**
                     * 判断参数 StructureResult 是否已赋值
                     * @return StructureResult 是否已赋值
                     * 
                     */
                    bool StructureResultHasBeenSet() const;

                private:

                    /**
                     * 图片质量分
                     */
                    double m_quality;
                    bool m_qualityHasBeenSet;

                    /**
                     * 由结构化算法结构化json转换的字符串，具体协议参见算法结构化结果协议
                     */
                    std::string m_structureResult;
                    bool m_structureResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20201210_MODEL_RESULTOBJECT_H_
