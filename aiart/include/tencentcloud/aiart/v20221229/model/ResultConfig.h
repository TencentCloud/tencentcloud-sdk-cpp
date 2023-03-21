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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_RESULTCONFIG_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_RESULTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aiart
    {
        namespace V20221229
        {
            namespace Model
            {
                /**
                * 返回结果配置
                */
                class ResultConfig : public AbstractModel
                {
                public:
                    ResultConfig();
                    ~ResultConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生成图分辨率
支持生成以下不同分辨率的图片，对应1:1方图、3:4竖图、4:3横图三种尺寸规格，不传默认为"768:768"
取值：
● 768:768
● 768:1024
● 1024:768
                     * @return Resolution 生成图分辨率
支持生成以下不同分辨率的图片，对应1:1方图、3:4竖图、4:3横图三种尺寸规格，不传默认为"768:768"
取值：
● 768:768
● 768:1024
● 1024:768
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置生成图分辨率
支持生成以下不同分辨率的图片，对应1:1方图、3:4竖图、4:3横图三种尺寸规格，不传默认为"768:768"
取值：
● 768:768
● 768:1024
● 1024:768
                     * @param Resolution 生成图分辨率
支持生成以下不同分辨率的图片，对应1:1方图、3:4竖图、4:3横图三种尺寸规格，不传默认为"768:768"
取值：
● 768:768
● 768:1024
● 1024:768
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     */
                    bool ResolutionHasBeenSet() const;

                private:

                    /**
                     * 生成图分辨率
支持生成以下不同分辨率的图片，对应1:1方图、3:4竖图、4:3横图三种尺寸规格，不传默认为"768:768"
取值：
● 768:768
● 768:1024
● 1024:768
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_RESULTCONFIG_H_
