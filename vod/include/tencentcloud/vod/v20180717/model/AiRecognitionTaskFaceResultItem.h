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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKFACERESULTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKFACERESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskFaceSegmentItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 人脸识别结果
                */
                class AiRecognitionTaskFaceResultItem : public AbstractModel
                {
                public:
                    AiRecognitionTaskFaceResultItem();
                    ~AiRecognitionTaskFaceResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人物唯一标识 ID。
                     * @return Id 人物唯一标识 ID。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置人物唯一标识 ID。
                     * @param _id 人物唯一标识 ID。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取人物库类型，表示识别出的人物来自哪个人物库：
<li>Default：默认人物库；</li>
<li>UserDefine：用户自定义人物库。</li>
                     * @return Type 人物库类型，表示识别出的人物来自哪个人物库：
<li>Default：默认人物库；</li>
<li>UserDefine：用户自定义人物库。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置人物库类型，表示识别出的人物来自哪个人物库：
<li>Default：默认人物库；</li>
<li>UserDefine：用户自定义人物库。</li>
                     * @param _type 人物库类型，表示识别出的人物来自哪个人物库：
<li>Default：默认人物库；</li>
<li>UserDefine：用户自定义人物库。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取人物名称。
                     * @return Name 人物名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置人物名称。
                     * @param _name 人物名称。
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
                     * 获取人物出现的片段结果集。
                     * @return SegmentSet 人物出现的片段结果集。
                     * 
                     */
                    std::vector<AiRecognitionTaskFaceSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置人物出现的片段结果集。
                     * @param _segmentSet 人物出现的片段结果集。
                     * 
                     */
                    void SetSegmentSet(const std::vector<AiRecognitionTaskFaceSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                private:

                    /**
                     * 人物唯一标识 ID。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 人物库类型，表示识别出的人物来自哪个人物库：
<li>Default：默认人物库；</li>
<li>UserDefine：用户自定义人物库。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 人物名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 人物出现的片段结果集。
                     */
                    std::vector<AiRecognitionTaskFaceSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKFACERESULTITEM_H_
