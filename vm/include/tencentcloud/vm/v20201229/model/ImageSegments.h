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

#ifndef TENCENTCLOUD_VM_V20201229_MODEL_IMAGESEGMENTS_H_
#define TENCENTCLOUD_VM_V20201229_MODEL_IMAGESEGMENTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20201229/model/ImageResult.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 图片段信息
                */
                class ImageSegments : public AbstractModel
                {
                public:
                    ImageSegments();
                    ~ImageSegments() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该字段用于返回视频片段的截帧时间，单位为秒。对于点播文件，该参数代表对应截取图片相对于视频的偏移时间，如0（代表不偏移），5（视频开始后5秒），10（视频开始后10秒）；对于直播文件，该参数则返回对应图片的Unix时间戳，如：1594650717。
                     * @return OffsetTime 该字段用于返回视频片段的截帧时间，单位为秒。对于点播文件，该参数代表对应截取图片相对于视频的偏移时间，如0（代表不偏移），5（视频开始后5秒），10（视频开始后10秒）；对于直播文件，该参数则返回对应图片的Unix时间戳，如：1594650717。
                     * 
                     */
                    std::string GetOffsetTime() const;

                    /**
                     * 设置该字段用于返回视频片段的截帧时间，单位为秒。对于点播文件，该参数代表对应截取图片相对于视频的偏移时间，如0（代表不偏移），5（视频开始后5秒），10（视频开始后10秒）；对于直播文件，该参数则返回对应图片的Unix时间戳，如：1594650717。
                     * @param _offsetTime 该字段用于返回视频片段的截帧时间，单位为秒。对于点播文件，该参数代表对应截取图片相对于视频的偏移时间，如0（代表不偏移），5（视频开始后5秒），10（视频开始后10秒）；对于直播文件，该参数则返回对应图片的Unix时间戳，如：1594650717。
                     * 
                     */
                    void SetOffsetTime(const std::string& _offsetTime);

                    /**
                     * 判断参数 OffsetTime 是否已赋值
                     * @return OffsetTime 是否已赋值
                     * 
                     */
                    bool OffsetTimeHasBeenSet() const;

                    /**
                     * 获取该字段用于返回视频片段的具体截帧审核结果，详细内容敬请参考ImageResult数据结构的描述。
                     * @return Result 该字段用于返回视频片段的具体截帧审核结果，详细内容敬请参考ImageResult数据结构的描述。
                     * 
                     */
                    ImageResult GetResult() const;

                    /**
                     * 设置该字段用于返回视频片段的具体截帧审核结果，详细内容敬请参考ImageResult数据结构的描述。
                     * @param _result 该字段用于返回视频片段的具体截帧审核结果，详细内容敬请参考ImageResult数据结构的描述。
                     * 
                     */
                    void SetResult(const ImageResult& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取该字段用于返回视频片段的具体截帧审核时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 该字段用于返回视频片段的具体截帧审核时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置该字段用于返回视频片段的具体截帧审核时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt 该字段用于返回视频片段的具体截帧审核时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取该字段用于返回视频片段的截帧时间，单位为豪秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OffsetusTime 该字段用于返回视频片段的截帧时间，单位为豪秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOffsetusTime() const;

                    /**
                     * 设置该字段用于返回视频片段的截帧时间，单位为豪秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offsetusTime 该字段用于返回视频片段的截帧时间，单位为豪秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOffsetusTime(const std::string& _offsetusTime);

                    /**
                     * 判断参数 OffsetusTime 是否已赋值
                     * @return OffsetusTime 是否已赋值
                     * 
                     */
                    bool OffsetusTimeHasBeenSet() const;

                private:

                    /**
                     * 该字段用于返回视频片段的截帧时间，单位为秒。对于点播文件，该参数代表对应截取图片相对于视频的偏移时间，如0（代表不偏移），5（视频开始后5秒），10（视频开始后10秒）；对于直播文件，该参数则返回对应图片的Unix时间戳，如：1594650717。
                     */
                    std::string m_offsetTime;
                    bool m_offsetTimeHasBeenSet;

                    /**
                     * 该字段用于返回视频片段的具体截帧审核结果，详细内容敬请参考ImageResult数据结构的描述。
                     */
                    ImageResult m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 该字段用于返回视频片段的具体截帧审核时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 该字段用于返回视频片段的截帧时间，单位为豪秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_offsetusTime;
                    bool m_offsetusTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20201229_MODEL_IMAGESEGMENTS_H_
