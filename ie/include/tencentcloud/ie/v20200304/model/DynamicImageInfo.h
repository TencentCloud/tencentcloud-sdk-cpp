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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_DYNAMICIMAGEINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_DYNAMICIMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 动图参数
                */
                class DynamicImageInfo : public AbstractModel
                {
                public:
                    DynamicImageInfo();
                    ~DynamicImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取画面质量，范围：1~100。
<li>对于webp格式，默认：75</li>
<li>对于gif格式，小于10为低质量，大于50为高质量，其它为普通。默认：低质量。</li>
                     * @return Quality 画面质量，范围：1~100。
<li>对于webp格式，默认：75</li>
<li>对于gif格式，小于10为低质量，大于50为高质量，其它为普通。默认：低质量。</li>
                     * 
                     */
                    uint64_t GetQuality() const;

                    /**
                     * 设置画面质量，范围：1~100。
<li>对于webp格式，默认：75</li>
<li>对于gif格式，小于10为低质量，大于50为高质量，其它为普通。默认：低质量。</li>
                     * @param _quality 画面质量，范围：1~100。
<li>对于webp格式，默认：75</li>
<li>对于gif格式，小于10为低质量，大于50为高质量，其它为普通。默认：低质量。</li>
                     * 
                     */
                    void SetQuality(const uint64_t& _quality);

                    /**
                     * 判断参数 Quality 是否已赋值
                     * @return Quality 是否已赋值
                     * 
                     */
                    bool QualityHasBeenSet() const;

                private:

                    /**
                     * 画面质量，范围：1~100。
<li>对于webp格式，默认：75</li>
<li>对于gif格式，小于10为低质量，大于50为高质量，其它为普通。默认：低质量。</li>
                     */
                    uint64_t m_quality;
                    bool m_qualityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_DYNAMICIMAGEINFO_H_
