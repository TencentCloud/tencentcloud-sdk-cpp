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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVIRALREFERENCE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVIRALREFERENCE_H_

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
                * 动作级补充素材：服饰套装 / 背景
                */
                class CloneViralReference : public AbstractModel
                {
                public:
                    CloneViralReference();
                    ~CloneViralReference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>服饰套装参考图，多套按视频中的分段换装</p>
                     * @return Outfits <p>服饰套装参考图，多套按视频中的分段换装</p>
                     * 
                     */
                    std::vector<std::string> GetOutfits() const;

                    /**
                     * 设置<p>服饰套装参考图，多套按视频中的分段换装</p>
                     * @param _outfits <p>服饰套装参考图，多套按视频中的分段换装</p>
                     * 
                     */
                    void SetOutfits(const std::vector<std::string>& _outfits);

                    /**
                     * 判断参数 Outfits 是否已赋值
                     * @return Outfits 是否已赋值
                     * 
                     */
                    bool OutfitsHasBeenSet() const;

                    /**
                     * 获取<p>背景/场景参考图</p>
                     * @return Backgrounds <p>背景/场景参考图</p>
                     * 
                     */
                    std::vector<std::string> GetBackgrounds() const;

                    /**
                     * 设置<p>背景/场景参考图</p>
                     * @param _backgrounds <p>背景/场景参考图</p>
                     * 
                     */
                    void SetBackgrounds(const std::vector<std::string>& _backgrounds);

                    /**
                     * 判断参数 Backgrounds 是否已赋值
                     * @return Backgrounds 是否已赋值
                     * 
                     */
                    bool BackgroundsHasBeenSet() const;

                private:

                    /**
                     * <p>服饰套装参考图，多套按视频中的分段换装</p>
                     */
                    std::vector<std::string> m_outfits;
                    bool m_outfitsHasBeenSet;

                    /**
                     * <p>背景/场景参考图</p>
                     */
                    std::vector<std::string> m_backgrounds;
                    bool m_backgroundsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVIRALREFERENCE_H_
