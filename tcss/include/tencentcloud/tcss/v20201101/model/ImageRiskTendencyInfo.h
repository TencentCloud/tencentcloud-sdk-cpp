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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGERISKTENDENCYINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGERISKTENDENCYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RunTimeTendencyInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 运行时安全事件趋势信息
                */
                class ImageRiskTendencyInfo : public AbstractModel
                {
                public:
                    ImageRiskTendencyInfo();
                    ~ImageRiskTendencyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取趋势列表
                     * @return ImageRiskSet 趋势列表
                     * 
                     */
                    std::vector<RunTimeTendencyInfo> GetImageRiskSet() const;

                    /**
                     * 设置趋势列表
                     * @param _imageRiskSet 趋势列表
                     * 
                     */
                    void SetImageRiskSet(const std::vector<RunTimeTendencyInfo>& _imageRiskSet);

                    /**
                     * 判断参数 ImageRiskSet 是否已赋值
                     * @return ImageRiskSet 是否已赋值
                     * 
                     */
                    bool ImageRiskSetHasBeenSet() const;

                    /**
                     * 获取风险类型：
IRT_VULNERABILITY : 安全漏洞
IRT_MALWARE_VIRUS: 木马病毒
IRT_RISK:敏感信息
                     * @return ImageRiskType 风险类型：
IRT_VULNERABILITY : 安全漏洞
IRT_MALWARE_VIRUS: 木马病毒
IRT_RISK:敏感信息
                     * 
                     */
                    std::string GetImageRiskType() const;

                    /**
                     * 设置风险类型：
IRT_VULNERABILITY : 安全漏洞
IRT_MALWARE_VIRUS: 木马病毒
IRT_RISK:敏感信息
                     * @param _imageRiskType 风险类型：
IRT_VULNERABILITY : 安全漏洞
IRT_MALWARE_VIRUS: 木马病毒
IRT_RISK:敏感信息
                     * 
                     */
                    void SetImageRiskType(const std::string& _imageRiskType);

                    /**
                     * 判断参数 ImageRiskType 是否已赋值
                     * @return ImageRiskType 是否已赋值
                     * 
                     */
                    bool ImageRiskTypeHasBeenSet() const;

                private:

                    /**
                     * 趋势列表
                     */
                    std::vector<RunTimeTendencyInfo> m_imageRiskSet;
                    bool m_imageRiskSetHasBeenSet;

                    /**
                     * 风险类型：
IRT_VULNERABILITY : 安全漏洞
IRT_MALWARE_VIRUS: 木马病毒
IRT_RISK:敏感信息
                     */
                    std::string m_imageRiskType;
                    bool m_imageRiskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGERISKTENDENCYINFO_H_
