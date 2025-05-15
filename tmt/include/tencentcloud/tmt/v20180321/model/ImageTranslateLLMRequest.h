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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_IMAGETRANSLATELLMREQUEST_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_IMAGETRANSLATELLMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * ImageTranslateLLM请求参数结构体
                */
                class ImageTranslateLLMRequest : public AbstractModel
                {
                public:
                    ImageTranslateLLMRequest();
                    ~ImageTranslateLLMRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片数据的Base64字符串，经Base64编码后不超过 9M，分辨率建议600*800以上，支持PNG、JPG、JPEG格式。
                     * @return Data 图片数据的Base64字符串，经Base64编码后不超过 9M，分辨率建议600*800以上，支持PNG、JPG、JPEG格式。
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置图片数据的Base64字符串，经Base64编码后不超过 9M，分辨率建议600*800以上，支持PNG、JPG、JPEG格式。
                     * @param _data 图片数据的Base64字符串，经Base64编码后不超过 9M，分辨率建议600*800以上，支持PNG、JPG、JPEG格式。
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取目标语言，支持语言列表：

- 中文：zh
- 繁体（台湾）：zh-TW
- 繁体（香港）：zh-HK
- 英文：en
- 日语：ja
- 韩语：ko
- 泰语：th
- 越南语：vi
- 俄语：ru
- 德语：de
- 法语：fr
- 阿拉伯语：ar
- 西班牙语：es
- 意大利语：it
- 印度尼西亚语：id
- 马来西亚语：ms
- 葡萄牙语：pt
- 土耳其语：tr
- 
                     * @return Target 目标语言，支持语言列表：

- 中文：zh
- 繁体（台湾）：zh-TW
- 繁体（香港）：zh-HK
- 英文：en
- 日语：ja
- 韩语：ko
- 泰语：th
- 越南语：vi
- 俄语：ru
- 德语：de
- 法语：fr
- 阿拉伯语：ar
- 西班牙语：es
- 意大利语：it
- 印度尼西亚语：id
- 马来西亚语：ms
- 葡萄牙语：pt
- 土耳其语：tr
- 
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置目标语言，支持语言列表：

- 中文：zh
- 繁体（台湾）：zh-TW
- 繁体（香港）：zh-HK
- 英文：en
- 日语：ja
- 韩语：ko
- 泰语：th
- 越南语：vi
- 俄语：ru
- 德语：de
- 法语：fr
- 阿拉伯语：ar
- 西班牙语：es
- 意大利语：it
- 印度尼西亚语：id
- 马来西亚语：ms
- 葡萄牙语：pt
- 土耳其语：tr
- 
                     * @param _target 目标语言，支持语言列表：

- 中文：zh
- 繁体（台湾）：zh-TW
- 繁体（香港）：zh-HK
- 英文：en
- 日语：ja
- 韩语：ko
- 泰语：th
- 越南语：vi
- 俄语：ru
- 德语：de
- 法语：fr
- 阿拉伯语：ar
- 西班牙语：es
- 意大利语：it
- 印度尼西亚语：id
- 马来西亚语：ms
- 葡萄牙语：pt
- 土耳其语：tr
- 
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取输入图 Url。 使用Url的时候，Data参数需要传入""。 图片限制：小于 10MB，分辨率建议600*800以上，格式支持 jpg、jpeg、png。

                     * @return Url 输入图 Url。 使用Url的时候，Data参数需要传入""。 图片限制：小于 10MB，分辨率建议600*800以上，格式支持 jpg、jpeg、png。

                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置输入图 Url。 使用Url的时候，Data参数需要传入""。 图片限制：小于 10MB，分辨率建议600*800以上，格式支持 jpg、jpeg、png。

                     * @param _url 输入图 Url。 使用Url的时候，Data参数需要传入""。 图片限制：小于 10MB，分辨率建议600*800以上，格式支持 jpg、jpeg、png。

                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 图片数据的Base64字符串，经Base64编码后不超过 9M，分辨率建议600*800以上，支持PNG、JPG、JPEG格式。
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 目标语言，支持语言列表：

- 中文：zh
- 繁体（台湾）：zh-TW
- 繁体（香港）：zh-HK
- 英文：en
- 日语：ja
- 韩语：ko
- 泰语：th
- 越南语：vi
- 俄语：ru
- 德语：de
- 法语：fr
- 阿拉伯语：ar
- 西班牙语：es
- 意大利语：it
- 印度尼西亚语：id
- 马来西亚语：ms
- 葡萄牙语：pt
- 土耳其语：tr
- 
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 输入图 Url。 使用Url的时候，Data参数需要传入""。 图片限制：小于 10MB，分辨率建议600*800以上，格式支持 jpg、jpeg、png。

                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_IMAGETRANSLATELLMREQUEST_H_
