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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_VIDEOEDITTEMPLATEMATERIAL_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_VIDEOEDITTEMPLATEMATERIAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/SlotInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 视频编辑模板素材信息。
                */
                class VideoEditTemplateMaterial : public AbstractModel
                {
                public:
                    VideoEditTemplateMaterial();
                    ~VideoEditTemplateMaterial() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频编辑模板宽高比。
                     * @return AspectRatio 视频编辑模板宽高比。
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置视频编辑模板宽高比。
                     * @param AspectRatio 视频编辑模板宽高比。
                     */
                    void SetAspectRatio(const std::string& _aspectRatio);

                    /**
                     * 判断参数 AspectRatio 是否已赋值
                     * @return AspectRatio 是否已赋值
                     */
                    bool AspectRatioHasBeenSet() const;

                    /**
                     * 获取卡槽信息。
                     * @return SlotSet 卡槽信息。
                     */
                    std::vector<SlotInfo> GetSlotSet() const;

                    /**
                     * 设置卡槽信息。
                     * @param SlotSet 卡槽信息。
                     */
                    void SetSlotSet(const std::vector<SlotInfo>& _slotSet);

                    /**
                     * 判断参数 SlotSet 是否已赋值
                     * @return SlotSet 是否已赋值
                     */
                    bool SlotSetHasBeenSet() const;

                private:

                    /**
                     * 视频编辑模板宽高比。
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * 卡槽信息。
                     */
                    std::vector<SlotInfo> m_slotSet;
                    bool m_slotSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_VIDEOEDITTEMPLATEMATERIAL_H_
